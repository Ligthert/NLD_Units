//*********************************************
//Helo "fired" eventhandler
//*********************************************

private ["_shooter","_originASL","_originATL","_terrainAlt","_dir","_mode","_climbing","_descent","_acquired","_LaserGuided","_RadarGuided","_dualMode","_remote","_all","_radarCapable","_target","_targetLocationASL","_projectile","_projectileType","_Rocket","_HellfireBase","_speed","_clearance","_standoff","_pinnacle","_guessTarget"];

//Get vehicle which fired weapon
_shooter = _this select 0;
_originASL = getPosASL _shooter;
_originATL = getPos _shooter;
_terrainAlt = (_originASL select 2) - (_originATL select 2);
_dir= getdir _shooter;

_mode=_shooter getvariable ['Mode',0];

//Flags
_climbing=true;
_descent=false;
_acquired=false;

//Valid Ammotypes
_LaserGuided=["M_Hellfire_AT","M_PG_AT","M_PG_HE"];
_RadarGuided=["M_Hellfire_Longbow_AT"];
_dualMode=["M_Brimstone_AT"];
_remote= (_shooter getvariable ['TargetMode',0]) == 1;

_all= _LaserGuided + _RadarGuided + _dualMode;
_radarCapable= _RadarGuided + _dualMode;
//
_target=objnull;
_targetLocationASL=[0,0,0];

//Get projectile
_projectile = _this select 6;
_projectileType=typeof _projectile;

//set speed
_Rocket=[650,["M_PG_AT","M_PG_HE"]];
_HellfireBase=[425,["M_Hellfire_AT","M_Hellfire_Longbow_AT","M_Brimstone_AT"]];
if(_projectileType in (_Rocket select 1)) then {
	_speed=_rocket select 0;
}else{
	if(_projectileType in (_HellfireBase select 1)) then {
		_speed=_HellfireBase select 0;
	};
};

if(_projectileType in _all) then {

	//Trajectory Parameters

	//DIR
	_clearance=30;
	_standoff=300;
	if(_mode==0) then {
		_target=cursortarget;
		_targetLocationASL=getposasl _target;
		if( ! (isnull _target)) then {
			_theDist= _target distance _shooter;
			_standoff= 150 max (_theDist - 500);
			_clearance= _standoff / 15;
		};
	}else{
		if(_mode==2) then {
			//LO
			_clearance=250;
			_standoff=500;
		}else{
			if(_mode==3) then {
			//HI
			_clearance=400;
			_standoff=1200;
			};
		};
	};

	_pinnacle = [_shooter,_standoff,_dir] call BIS_fnc_relpos;
	_pinnacle = [_pinnacle select 0,_pinnacle select 1, (_originASL select 2) + _clearance];
	_pinnacle = asltoatl _pinnacle;
	
	_guessTarget = [_shooter,_standoff+500,_dir] call BIS_fnc_relpos;
	_guessTarget = [_guessTarget select 0,_guessTarget select 1, (_originASL select 2)];
	_guessTarget = asltoatl _guessTarget;

	_dist=_projectile distance _pinnacle;
	//hint Format["Pinnacle:%1, distance:%2",_pinnacle,_dist];
	//diag_log Format["Pinnacle:%1, distance:%2",_pinnacle,_dist];

	sleep 0.1;
	while {alive _projectile} do {

		sleep 0.00001;

		if(_climbing) then {
			//diag_log "climbing";
			//hint "descending";
			_dist=_projectile distance _originATL;
			//diag_log Format["Pinnacle:%1, distance:%2",_pinnacle,_dist];
			//hint Format["distance to from shooter: %1",_dist];
			[_projectile,_pinnacle,700,0.05,2,90] call RWCO_fnc_guidance;
			if (_dist > (_standoff - 200)) then {
				_climbing=false;
				_descent=true;
				diag_log "descending";
				//hint "descending";
			};
		} else {
			if (_descent) then {
				//diag_log "descending";
				//hint "descending";
				[_projectile,_guessTarget,700,0.05,2,90] call RWCO_fnc_guidance;
				if(_mode>0) then {
					if(_projectileType in _laserguided) then {
						_target=lasertarget _shooter;
						_targetLocationASL=getposasl _target;
						if(_remote) then {
							_targetLocationASL=atltoasl laserpos;
						};
					};
					if (_projectileType in _radarCapable) then {
						_target = cursortarget;
						_targetLocationASL=getposasl _target;
					};
				};
				if ( ! (isnull _target)) then {
					_posASL = getPosASL _projectile;
					//Get unit vector toward target				
					_vectorTo = [_posASL,_targetLocationASL] call BIS_fnc_vectorFromXToY;
					_vectorToX =_vectorTo select 0;
					_vectorToY =_vectorTo select 1;
					_vectorToZ =_vectorTo select 2;
			
					//Get unit vector from projectile
					_vectorDir= vectordir _projectile;
					_vectorDirX =_vectorDir select 0;
					_vectorDirY =_vectorDir select 1;
					_vectorDirZ =_vectorDir select 2;
							
					//Get dot product
					_dotProduct=[_vectorDir,_vectorTo] call BIS_fnc_dotproduct;
							
					//Get magnitude of vector to target
					_magnitudeVectorDir= sqrt((_vectorToX)^2 + (_vectorToY)^2 + (_vectorToZ)^2);
							
					//Get magnitude of vector from projectile
					_magnitudeProjectileDir= sqrt((_vectorDirX)^2 + (_vectorDirY)^2 + (_vectorDirZ)^2);
							
					//get cosine of angle
					_cosTheta= (_dotProduct)/(_magnitudeVectorDir*_magnitudeProjectileDir);
							
					//getangle
					_angle= acos _cosTheta;
					
					//Switch to target guidance if target acquired
					if(_angle<45) then {
						_acquired=true;
						_descent=false;
					};
				};
			}else{
				if(_mode>0) then {
					if(_projectileType in _laserguided) then {
						_target=lasertarget _shooter;
						_targetLocationASL=getposasl _target;
						if(_remote) then {
							_targetLocationASL=atltoasl laserpos;
						};
					};
					if (_projectileType in _radarCapable) then {
						_target = cursortarget;
						_targetLocationASL=getposasl _target;
					};
				};
				if ( ! (isnull _target)) then {
					//diag_log "guiding to target!";
					//hint "guiding to target!";
					_targetLocationATL = getPosATL _target;
					[_projectile,_targetLocationATL,700,0.05,2,50] call RWCO_fnc_guidance;
				}else{
					//diag_log "Target lost!";
					//hint "Target lost!";
				};
			};
		};
	};
};
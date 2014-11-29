//hellfire
//Args: (0) Shooter, (1) Weapon, (2) Muzzle, (3) Mode, (4) Ammo, (5) Magazine, (6) Projectile
//Actions: Guides hellfire to target
//Set scope
private ["_shooter","_ammo","_projectile","_originASL","_originATL","_mode","_remote","_loblTarget","_type","_params","_wps","_pinnacle","_guessTarget","_dist","_stage","_vel","_speed","_distToPeak","_ClearanceGained","_clearance","_targetPosATL","_targetPosASL","_posASL","_vectorTo","_vectorDir","_angle","_distToTar"];
//Get arguments
_shooter = _this select 0;
_ammo = _this select 4;
_projectile = _this select 6;
//Get Position of shooter
_originASL = getPosASL _shooter;
_originATL = getPos _shooter;
//Get variables from shooter
_mode=_shooter getvariable ["Mode",0];
_remote= _shooter getvariable ["TargetMode",0];
if(_mode==0) then {
	_loblTarget=cursortarget;
	//hint "target programmed";
}else{
	_loblTarget=objnull;
};
//Get missile type
_type = _ammo call RWCO_fnc_getMissileType;
//diag_log Format ["Type:%1",_type];
//Only procede if ammo is in list
if(_type >= 0) then {
	//Get hellfire parameters
	if(_mode==0 and (isnull _loblTarget)) then {
		_params= [-1,_shooter,_loblTarget] call RWCO_fnc_getHellfireParams;
	}else{
		_params= [_mode,_shooter,_loblTarget] call RWCO_fnc_getHellfireParams;
	};
	//Get hellfire waypoints
	_wps = [_shooter,_params] call RWCO_fnc_getHellfireWaypoints;
	//Get missile's first 'waypoint'
	_pinnacle = _wps select 0;
	//Get missile's second 'waypoint'
	_guessTarget = _wps select 1;
	_dist=_projectile distance _pinnacle;
	//diag_log Format ["Origin:%1,WP1:%2, WP2:%3, WP3:%4",_originATL,_pinnacle,_guessTarget,position _loblTarget];
	//Initial stage
	_stage=0;
	while {alive _projectile} do {
		sleep 0.01;
		//diag_log Format["Loop:%1",_projectile];
		_vel = velocity _projectile;
		_speed = sqrt ((_vel select 0)^2+(_vel select 1)^2+(_vel select 2)^2);
		//diag_log Format ["Speed:%1",_speed];
		//diag_log Format ["Stage:%1",_stage];
		//diag_log Format["Proj:%1,_projectile,stage:%2,peak:%3,guess:%4",_projectile,_stage,_pinnacle,_guessTarget];
		switch (_stage) do
		{
			//Climb
		    case 0: {
				_distToPeak= [_projectile, _pinnacle] call BIS_fnc_distance2D;
				_ClearanceGained= ((position _projectile) select 2)- (_originATL select 2);
				_clearance = _params select 0;
				//diag_log Format ["Distance to peak:%1,Peak:%2",_distToPeak,_pinnacle];
				_dist=_projectile distance _originATL;
				[_projectile,_pinnacle,_speed,1,0,180] spawn RWCO_fnc_guidance;
				if (_dist > (_params select 1)) then {
					_stage = 1;
					diag_log Format["Proj:%1,dist:%2",_projectile,_dist];
				};
		    };
		    //Search
		    case 1: {
				_distToTar= [_projectile, _guessTarget] call BIS_fnc_distance2D;
				//diag_log Format ["Distance to target:%1,Target Guess:%2",_distToTar,_guessTarget];
				[_projectile,_guessTarget,_speed,1,0,180] spawn RWCO_fnc_guidance;
				_targetPosATL = [_shooter,_mode,_type,_remote,_loblTarget] call RWCO_fnc_gethellfireTarget;
				if ((typename _targetPosATL) == "array") then {
					_targetPosASL = ATLtoASL _targetPosATL;
					_posASL = getPosASL _projectile;
					//Get vectors
					_vectorTo = [_posASL,_targetPosASL] call BIS_fnc_vectorFromXToY;
					_vectorDir= vectordir _projectile;
					//Get angle
					diag_log "seek check";
					_angle = [_vectorTo,_vectorDir] call RWCO_fnc_getAngleBetween;
					//diag_log Format ["Angle:%1,TargePos:%2",_angle,_targetPosASL];
					_los = !(terrainIntersectasl[_posASL,_targetPosASL]);
					if((_angle < 45) && _los) then {
						_stage=2;
						//hint format["LOS:%1",_los];
						diag_log Format["Proj:%1,stage:%2,peak:%3,guess:%4,projpos:%5",_projectile,_stage,_pinnacle,_guessTarget, position _projectile];
					};
				};
		    };
		    //Guide
		    case 2: {
				_targetPosATL = [_shooter,_mode,_type,_remote,_loblTarget] call RWCO_fnc_gethellfireTarget;
				_distToTar= [_projectile, _guessTarget] call BIS_fnc_distance2D;
				//diag_log Format ["Distance to target:%1,Target:%2",_distToTar,_targetPosATL];
				[_projectile,_targetPosATL,_speed,1,0,50] spawn RWCO_fnc_guidance;
		    };
		};
	};
};
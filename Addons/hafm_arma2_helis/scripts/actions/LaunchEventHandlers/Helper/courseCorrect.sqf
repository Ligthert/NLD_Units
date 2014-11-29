//************************************
//Guide missile towards target********
//************************************

//************************************
//Arguments***************************
//************************************
private ["_projectile","_posASL","_targetLocationATL","_targetLocationASL","_speed","_deltaAngle","_buffeting","_seekerAngle","_vectorTo","_vectorToX","_vectorToY","_vectorToZ","_vectorDir","_vectorDirX","_vectorDirY","_vectorDirZ","_dotProduct","_magnitudeVectorDir","_magnitudeProjectileDir","_cosTheta","_angle","_newDir","_turns","_weight1","_weight2","_vector1","_vector2","_vectorNewX","_vectorNewY","_vectorNewZ","_magnitudeVectorNew","_cosThetaNew","_angleNew","_anglenew","_vectorX","_vectorY","_vectorZ","_normal","_speedX","_speedY","_speedz","_randX","_randY","_randZ","_randomVector","_randomUnitVector","_randomVectorX","_randomVectorY","_randomVectorZ","_normal2"];
// Projectile to guide
_projectile=_this select 0;
if(alive _projectile) then {
	_posASL = getposASL _projectile;

	//Position ATL to guide towards
	_targetLocationATL=_this select 1;
	_targetLocationASL= ATLtoASL _targetLocationATL;

	//Speed (m/s)
	_speed=_this select 2;

	//Maximum angular change per tick
	_deltaAngle=_this select 3;

	//Buffeting (m/s) maxmium magnitude of random velcity vector added to simulate disturbances
	_buffeting = _this select 4;

	//Seeker tolarance (angle)
	_seekerAngle = _this select 5;

	//************************************
	//Execution***************************
	//************************************

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

	//getangle
	//diag_log Format["angle,vectordir:%1",_vectorDir];
	_angle = [_vectorTo,_vectorDir] call RWCO_fnc_getAngleBetween;

	//Check if target is in seeker cone
	if(_angle <= _seekerAngle) then {
		//Fast and lousy appromximation of 3d vector rotation
		_newDir=_vectorDir;
		if(_angle<_deltaAngle) then {
			_newDir=_vectorTo;
		}else{
			_turns=_angle/_deltaAngle;
			_weight1=1/(_turns + 1);
			_weight2=_turns/(_turns + 1);
			_vector1=[_vectorToX*_weight1,_vectorToY*_weight1,_vectorToZ*_weight1];
			_vector2=[_vectorDirX*_weight2,_vectorDirY*_weight2,_vectorDirZ*_weight2];
			_newDir = [_vector1,_vector2] call BIS_fnc_vectorAdd;
		};

		//Get unit vector from projectile
		_vectorNewX =_newDir select 0;
		_vectorNewY =_newDir select 1;
		_vectorNewZ =_newDir select 2;

		//diag_log "angleNew";
		_angleNew = [_vectorTo,_newDir] call RWCO_fnc_getAngleBetween;

		//guidance
		_vectorX =_newDir select 0;
		_vectorY =_newDir select 1;
		_vectorZ =_newDir select 2;
		_normal= [_vectorY,-_vectorX,0];
		_speedX= (_newDir select 0)*425;
		_speedY= (_newDir select 1)*425;
		_speedz= (_newDir select 2)*425;

		_randX=random 1;
		_randY=random 1;
		_randZ=random 1;

		_randomVector= [_randX,_randY,_randZ];
		_randomUnitVector=_randomVector call BIS_fnc_unitVector;
		_randomVectorX= (_randomVector select 0)*_buffeting;
		_randomVectorY= (_randomVector select 1)*_buffeting;
		_randomVectorZ= (_randomVector select 2)*_buffeting;
		_randomVector= [_randomVectorX,_randomVectorY,_randomVectorZ];

		_speed= [[_speedX,_speedY,_speedz],_randomVector] call BIS_fnc_vectorAdd;

		//diag_log format["Vector was %1, Vector is now %2, Vector should be %3",_vectorDir,_newDir,_vectorTo];

		_normal2 = [_newDir,_normal] call BIS_fnc_crossproduct;
		_projectile setVectorDirandup [_newDir,_normal2];
		_projectile setvelocity _speed;
	};
};
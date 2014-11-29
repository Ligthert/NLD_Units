//getHellfireParams
//Args: (0) Mode, (1) Shooter, (2) lobl target
//Return: (0) clearance (meters), (1) standoff (meters)

//Set scope
private ["_mode","_shooter","_lobltarget","_clearance","_standoff","_targetLocationASL","_theDist","_return"];

//Get Arguments
_mode = _this select 0;
_shooter = _this select 1;
_lobltarget = _this select 2;

//Default values
_clearance=50;
_standoff=300;

if(_mode==0) then {
	//LOBL
	_targetLocationASL=getposasl _lobltarget;
	_theDist= [_targetLocationASL, _shooter] call BIS_fnc_distance2D;
	_standoff= 300 max (_theDist - 800);
	_clearance= 50 max (_standoff / 15);
}else{
	if(_mode==-1) then {
		//LOBL, no target
		_clearance=300;
		_standoff=1400;
	}else{
		if(_mode==1) then {
			//LOAL DIR
			_clearance=50;
			_standoff=300;
		}else{
			if(_mode==2) then {
				//LOAL LO
				_clearance=120;
				_standoff=400;
			}else{
				if(_mode==3) then {
				//LOAL HI
				_clearance=330;
				_standoff=1200;
				};
			};
		};
	};
};

//hint Format["standoff:%1,Clearance:%2",_standoff,_clearance];
_return = [_clearance,_standoff];

_return
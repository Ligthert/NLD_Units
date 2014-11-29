
_projectile = nearestObject [_this select 0,_this select 4];

_helo= _this select 0;
_target = cursortarget;

_guidanceFailure=false;

if((typeof _projectile == "M_Scalpel_AT")) then {
	while {alive _projectile } do {
		sleep 0.01;	
		if (_target != cursortarget) then {
			//target must stay locked
			_guidanceFailure=true;
		};
		if (terrainIntersectasl [getposasl _helo,getposasl _target]) then {
			//terrain can't get in way
			_guidanceFailure=true;
		};
		if (lineintersects [getposasl _helo,getposasl _target,_helo,_target]) then {
			//objects can't get in way
			_guidanceFailure=true;
		};
		if(_guidanceFailure) then {
			_pb = _projectile call RWCO_fnc_getPitch;
			_pitch = _pb select 0;	
			_pitch = _pitch + (.2* (random 1));
			[_projectile, _pitch,0] call RWCO_fnc_setPitch;
			_hdg = getDir _projectile;
			_hdg = _hdg + (.2 * (random 1));
			_projectile setDir _hdg; 
		};	
	};
};	
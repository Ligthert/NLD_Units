//getMissileType
//Args: Type
//Return: Integer (1-Laser, 2-Radar, 3-Dual mode)
//Explanation: Takes ammo type and returns indicator of what it can lock onto

//Set scope
private ["_ammo","_laserguided","_radarGuided","_dualMode","_return"];

//Get argument
_ammo = _this;

//Define lists
_laserguided=["M_Hellfire_AT","M_Hellfire_K_AT", "M_Hellfire_N_AT", "M_PG_AT","M_PG_HE"]; //Can only target lasers
_radarGuided=["M_Hellfire_L_AT"]; //Can only target IR targets (stands in for radar)
_dualMode=["M_Brimstone_AT"]; //Can target either

//Return -1 if no match
_return=-1;

//Set type
if(_ammo in _laserguided) then {
	_return = 0;
}else{
	if(_ammo in _radarGuided) then {
		_return = 1;
	}else{
		if(_ammo in _dualMode) then {
		_return = 2;
		};
	};
};

//Return value
_return
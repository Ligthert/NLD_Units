_target = _this select 0;
_sensorPosASL = _this select 1;
_sensorPosATL = asltoatl _sensorPosASL;
_sensorResolution = _this select 2;
_spotter=_this select 3;
_targetPosASL = getposasl _target;

_distance=(_target distance _sensorPosASL)/1000;
_LoS= [_sensorPosASL,_targetPosASL,_spotter,_target] call RWCO_fnc_checkLOS;
_targetVolume= _target call RWCO_fnc_getVolume;
_stealthFactor= _target getvariable ["stealthfactor",1];
_speed= abs (speed _target);

_radarSignature= 99999 min (0 max ((_LoS * (1/(_distance ^ 2)) * (_targetVolume * _stealthFactor) * (_speed+1))-_sensorResolution));
diag_log Format["Distance:%1, LOS:%2, Volume:%3, stealth: %4, speed: %5, signature:%6",_distance,_LoS,_targetVolume,_stealthFactor,_speed,_radarSignature];

_radarSignature
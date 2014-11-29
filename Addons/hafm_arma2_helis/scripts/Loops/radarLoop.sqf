_source= _this;
_sensorResolution = _this getvariable["SensorResolution",0];
showHUD false;
while {alive _source} do {
	//sleep 1;
	_On = isEngineOn _source;
	if(_on) then {
		{
			_sensorPos=getposASL _source;
			_target=_x;
			_signature= [_target, _sensorPos, _sensorResolution,_source] call RWCO_fnc_getRadarSig;
			if(_signature>0) then {
				sleep 1;
				hint Format["Signature returned from: %1,strength: %2",typeof _target,_signature];
				diag_log Format["Signature returned from: %1,strength: %2",typeof _target,_signature];
				_knowledge= _source knowsabout _target;
				_source reveal [_target,4 min (_knowledge+_signature)];
			}else{
			
				sleep 1;
				hint Format["NO Signature from: %1",typeof _target];
				diag_log Format["NO Signature from: %1",typeof _target];
			};
		}foreach vehicles;
	};
};
//getHellfireTarget
//Args: (0) Shooter (1) Mode (2) Type (3) Remote (4) Projectile
//Return: target position

//Set scope
private ["_shooter","_mode","_type","_remote","_loblTarget","_targetLaser","_targetFCR","_return"];
//Get arguments
_shooter = _this select 0;
_mode = _this select 1;
_type = _this select 2;
_remote = _this select 3;
_loblTarget = _this select 4;

//Set targets to null initially
_targetLaser = objnull;
_targetFCR = objnull;
if(_mode==0) then {
		if(! (isnull _loblTarget)) then {
			_return = position _loblTarget;
			_return = [_return select 0,_return select 1,(_return select 2)+1];
			//diag_log "Return LOBL";
			//diag_log Format["LOBLTARGET:%1",_loblTarget];
		}else{
			_return = -1;
			//diag_log "nothing defined";
		};
}else{
	if ((_remote == 1) && !(_type == 1)) then {
		_return = laserPos;
		//diag_log "remote";
	}else{
		if((_type==0) || (_type==2)) then {
			_targetLaser = laserTarget _shooter;
			//diag_log "laser defined";
			if(cursorTarget iskindof "LaserTarget") then {
				_targetFCR = cursorTarget;
			};
		};
		if((_type==1) || (_type==2)) then {
			_targetFCR = cursorTarget;
			//diag_log "cursor defined";
		};
		if(! isnull _targetFCR) then {
			_return = position _targetFCR;
			_return = [_return select 0,_return select 1,(_return select 2)+1];
			//diag_log "Return cursor";
		}else{
			if(! isnull _targetLaser) then {
				_return = position _targetLaser;
				_return = [_return select 0,_return select 1,(_return select 2)+1];
				//diag_log "Return laser";
			}else{
				_return = -1;

				//diag_log "nothing defined";
			};
		};
	};
};
_return
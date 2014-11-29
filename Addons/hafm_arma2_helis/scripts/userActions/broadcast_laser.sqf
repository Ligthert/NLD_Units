private ["_helo","_Laser"];
_helo=_this;

broadcaster=owner _helo;
publicvariable "broadcaster";

_laser=lasertarget _helo;

while{((broadcaster == (owner _helo)) && (alive _laser))} do {
	sleep 0.1;
	laserPos=position _laser;
	publicvariable "laserPos";
};
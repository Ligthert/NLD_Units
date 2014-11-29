private ["_helo","_fcrTarget"];
_helo=_this;

broadcasterFCR=owner _helo;
publicvariable "broadcasterFCR";

_fcrTarget=cursorTarget;

while{(broadcaster == (owner _helo)} do {
	sleep 0.1;
	fcrPos=position _fcrTarget;
	publicvariable "fcrPos";
};
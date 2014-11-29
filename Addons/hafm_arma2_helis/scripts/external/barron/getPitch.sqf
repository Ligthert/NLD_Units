/************************************************** **********
Get Pitch and Bank
By General Barron &#40;&#91;EMAIL=aw_barron@hotmail.com&#93;aw_barro n@hotmail.com&#91;/EMAIL&#93;&#41; and vektorboson

Parameters&#58; object
Returns&#58; &#91;pitch, bank&#93;

Returns the pitch and bank of an object, in degrees.

Yaw can be found using the getdir command.

Pitch is 0 when the object is level; 90 when pointing straight
up; and -90 when pointing straight down.

Bank is 0 when level; 90 when the object is rolled to the right,
-90 when rolled to the left, and 180 when rolled upside down.
************************************************** **********/

private ["_obj","_pitch","_bank","_yaw","_vdir","_vup","_sign", "_rotate"];

_obj = _this;

_yaw = getdir _obj;

//----------------------------
//function to rotate a 2d vector around the origin
//----------------------------

_rotate =
{
private ["_v","_d","_x","_y"];


_v = +(_this select 0);
_d = _this select 1;

_x = _v select 0;
_y = _v select 1;

_v set [0, (cos _d)*_x - (sin _d)*_y];
_v set [1, (sin _d)*_x + (cos _d)*_y];


_v
};


_vdir = vectordir _obj;

_vdir = [_vdir, _yaw] call _rotate;

if ((_vdir select 1) != 0) then
{
_pitch = atan ((_vdir select 2) / (_vdir select 1));
}
else
{
if ((_vdir select 2) >= 0) then {_pitch = 90} else {_pitch = -90};
};

_vup = vectorup _obj;


_vup = [_vup, _yaw] call _rotate;

_vup = [_vup select 0] + ([[_vup select 1, _vup select 2], 360-_pitch] call _rotate);

if ((_vup select 2) != 0) then
{
_bank = atan ((_vup select 0) / (_vup select 2));
}
else
{
if ((_vdir select 2) >= 0) then {_bank = 90} else {_bank = -90};
};

if((_vup select 2) < 0) then
{
_sign = [1,-1] select (_bank < 0);
_bank = _bank - _sign*180;
};

[_pitch, _bank];
//getTerrainHeight
//Args: PositionASL
//Return: Height (meters)
//Explanation: Returns height ASL of terrain.

//Set scope
private ["_posASL","_posATL","_posasl","_posASLZ","_posATLZ","_height"];

//Get argument
_posASL=_this;

//Convert to ATL
_posATL=asltoatl _posasl;

//Get Z Component
_posASLZ = _posASL select 2;
_posATLZ = _posATL select 2;

//Calculate difference
_height = _posASLZ - _posATLZ;

//Return
_height
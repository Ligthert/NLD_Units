//getHellfireWPs
//Args: (0) Shooter (1) Params
//Return: (0) peak position, (1) target position
//Explanation: This function takes the object which fired a missile as well as an array containing the vertical clearance (in meters) that the missile must clear the standoff distance (in meters) from the obstacle.  It returns two positionsATL which are used for the purposes of guidance.  The first position represents the point towards which the missile guides while undergoing its initial climb (peak).  The second point represents the point on the ground toward which the missile will guide until target is acquired.

//Set scope
private ["_shooter","_params","_clearance","_standoff","_shooterPosASL","_dir","_peak","_guessTarget","_return"];

//Get arguments
_shooter = _this select 0;
_params = _this select 1;

//Get params
_clearance = _params select 0;
_standoff = _params select 1;

//Get information on shooter's positioning
_shooterPosASL = getPosASL _shooter;
_dir = getdir _shooter;

//Create missile's first 'waypoint'
_peak = [_shooter,_standoff,_dir] call BIS_fnc_relpos;
_peak = [_peak select 0,_peak select 1, (_shooterPosASL select 2) + _clearance];
_peak = asltoatl _peak;

//Create missile's second 'waypoint'
_guessTarget = [_shooter,_standoff+8000,_dir] call BIS_fnc_relpos;
//Create return array
_return = [_peak,_guessTarget];

//Return
_return
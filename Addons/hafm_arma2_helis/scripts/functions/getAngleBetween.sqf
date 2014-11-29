//getAngleBetween
//Args: (0) Vector (1) Vector
//Returns: angle between two vectors

private["_vector1","_vector2","_vector1X","_vector1Y","_vector1Z","_vector2X","_vector2Y","_vector2Z","_dotProduct","_magnitude1","_magnitude2","_cosTheta","_angle"];

//Get Arguments
_vector1 = _this select 0;
_vector2 = _this select 1;

//Get Vector 1 components
_vector1X =_vector1 select 0;
_vector1Y =_vector1 select 1;
_vector1Z =_vector1 select 2;

//Get Vector 2 components
_vector2X =_vector2 select 0;
_vector2Y =_vector2 select 1;
_vector2Z =_vector2 select 2;

//Get dot product
_dotProduct=[_vector1,_vector2] call BIS_fnc_dotproduct;

//Get magnitude of vector 1
_magnitude1= sqrt((_vector1X)^2 + (_vector1Y)^2 + (_vector1Z)^2);
//diag_log Format["X:%1,Y:%2,Z:%3,mag:%4",_vector1X,_vector1Y,_vector1Z,_magnitude1];
//Get magnitude of vector 2
_magnitude2= sqrt((_vector2X)^2 + (_vector2Y)^2 + (_vector2Z)^2);
//diag_log Format["X2:%1,Y2:%2,Z2:%3,mag:%4",_vector2X,_vector2Y,_vector2Z,_magnitude2];

//get cosine of angle
_cosTheta= (_dotProduct)/(_magnitude1*_magnitude2);

//getangle
_angle= acos _cosTheta;

//Return
_angle
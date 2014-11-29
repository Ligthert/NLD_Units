//checkLOStoObject
//Args: (0) Position (1) Position
//Returns: integer, 1 if Position (1) has LOS to Position (2), 0 otherwise

private ["_spotterPos","_targetPos","_spotter","_target","_objIntersect","_terrainIntersect","_los","_return"];

_spotterPos=_this select 0;
_targetPos=_this select 1;
_spotter= _this select 2;
_target= _this select 3;

_objIntersect= lineIntersects[_spotterPos,_targetPos,_spotter,_target];
_terrainIntersect= terrainIntersect[_spotterPos,_targetPos];

_los = (!(_objIntersect)) && (!(_terrainIntersect));

_return=0;
if(_los) then {_return=1;};

_return
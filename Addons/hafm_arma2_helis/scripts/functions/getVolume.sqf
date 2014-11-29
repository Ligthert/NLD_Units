//GetVolume
//Arg: Object
//Returns: Volume of object's bounding box

_obj = _this;
_boundingBox= boundingBoxReal _obj;
_point1= _boundingBox select 0;
_point2= _boundingBox select 1;
_width = abs ((_point2 select 0) - (_point1 select 0));
_length = abs ((_point2 select 1) - (_point1 select 1));
_height = abs ((_point2 select 2) - (_point1 select 2));
_volume=_width*_length*_height;

_volume
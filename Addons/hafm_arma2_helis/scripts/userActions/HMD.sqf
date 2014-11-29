_helo=_this;


_pnvs_cam = "camera" camCreate (getpos _helo);
_pnvs_cam attachto [_helo,[0,0,0],"PIP0_pos"];
_pnvs_cam camprepareFov 0.001;
_pnvs_cam camCommitprepared 0;
_pnvs_cam cameraEffect ["INTERNAL", "BACK", "fza_ah64_pnvsrtarg"];

0 cutRsc ["fza_ah64_hdu","PLAIN",2];

sleep 0.1;

((uiNameSpace getVariable "fza_ah64_hdu")displayCtrl 401) ctrlSetText "#(argb,512,512,1)r2t(fza_ah64_pnvsrtarg,1.0)";

"fza_ah64_pnvsrtarg" setPiPEffect [2];
KK_fnc_getZoom = { ( [0.5,0.5] distance worldToScreen positionCameraToWorld [0,1.05,1] ) * ( getResolution select 5 ) };

while{alive _helo} do {
	sleep 0.01;
	_gunner = gunner _helo;
	_from = _helo selectionPosition "PIP0_pos";
	_to = _helo selectionPosition "PIP0_dir";
	 //hintSilent format [ "CURRENT ZOOM: %1x", round (call KK_fnc_getZoom * 10) / 10 ];
	//_zoom = round (call KK_fnc_getZoom * 10) / 10;
	//_fov = 2 * atan(1 / _zoom);
	//_pnvs_cam camprepareFov _fov;
	//_pnvs_cam camCommitprepared 0;
	//from BIS_fnc_relativeDirT
	_dirTo= eyeDirection _gunner;
	_dir = [[0,0,0],_dirTo] call BIS_fnc_dirTo;     //get direction to target
	

	_dir = _dir - (getdir _helo); //subtract direction of unit

		//ensure return is between 0-360
	if (_dir < 0) then {_dir = _dir + 360};
	if (_dir > 360) then {_dir = _dir - 360};
	_dir = [_from,_to] call BIS_fnc_vectorFromXToY;
	
	_vectorX =_dir select 0;
	_vectorY =_dir select 1;
	_vectorZ =_dir select 2;
	_normal= [_vectorY,-(_vectorX),0];
	
	//diag_log format["Vector was %1, Vector is now %2, Vector should be %3",_vectorDir,_newDir,_vectorTo];
	
	_normal2 = [_dir,_normal] call BIS_fnc_crossproduct;

	_pnvs_cam setVectorDirandup [_dir,[-(_normal2 select 0),-(_normal2 select 1),-(_normal2 select 2)]];
	
	
	//hint Format["dirvector:%1",_dir];
	//_pb = [_pnvs_cam,-30,0]; call RWCO_fnc_setPitch;
	//[_pnvs_cam, _pitch,0] call RWCO_fnc_setPitch;
};
// Happy fun little nearly MP ready load script by Sacha Ligthert <sacha@lowtac.nl>

// Notes
// this addaction [""Load"", ""hemtt\load.sqf"", [0,-1.95,0.55]];
// '\NLD_Vehicle_Units\Wheeled\Daf_Truck\init.sqf'
// class eventHandlers { init="(_this select 0) execVM '\NLD_Vehicle_Units\Wheeled\Daf_Truck\init.sqf'"; };


NLD_fnc_load = { _this addAction ["Load container","\NLD_Vehicle_Units\Wheeled\Daf_Truck\load.sqf"]; };
NLD_fnc_drop = { (_this select 0) addAction ["Unload container","\NLD_Vehicle_Units\Wheeled\Daf_Truck\drop.sqf",(_this select 1)]; };
if (local _this) then { _this remoteExec ["NLD_fnc_load",0,true]; };
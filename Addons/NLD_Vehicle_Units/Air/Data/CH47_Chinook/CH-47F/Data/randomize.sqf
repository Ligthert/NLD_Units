if (local _this) then {
	private ["_camo"];
	_camo = ["\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47F\Data\ch47Ftxt890.paa","\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47F\Data\ch47Ftxt891.paa","\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47F\Data\ch47Ftxt892.paa","\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47F\Data\ch47Ftxt893.paa","\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47F\Data\ch47Ftxt894.paa","\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47F\Data\ch47Ftxt895.paa"];
	_this setObjectTextureGlobal[2,_camo call bis_fnc_selectRandom];
};
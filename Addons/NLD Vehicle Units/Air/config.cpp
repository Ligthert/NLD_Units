class CfgPatches {
	class NLD_Units {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
	};
};
class CfgFactionClasses
{
	class NLD_Units
	{
		displayName="NLD Armed Forces";
		icon="\NLD Infantry Units\Icon\Icon.jpg";
		priority=1;
		side=1;
	};
};
class cfgVehicleClasses 
{
	class NLD_Air
	{
		displayName = "Air";
	};

};

class WeaponFireGun ;

class WeaponCloudsGun ;

class WeaponFireMGun ;

class WeaponCloudsMGun ;

class RCWSOptics ;

class CfgVehicles 
{
	class O_Heli_Light_02_F;
	class O_Heli_Light_02_unarmed_F;
	class Heli_Transport_02_base_F;

	class NLD_MH65 : O_Heli_Light_02_unarmed_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "O_Heli_Light_02_unarmed_F";
		displayName = "MH-65 NL";
		side = 1;
		crew = "NLD_HeliPilot";
		faction = "NLD_Units";
		vehicleClass = "NLD_Air";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\NLD Vehicle Units\Air\Data\MH65.paa"};
	};

	class NLD_MH65_Armed : O_Heli_Light_02_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "O_Heli_Light_02_F";
		displayName = "MH-65 NL (Armed)";
		side = 1;
		crew = "NLD_HeliPilot";
		faction = "NLD_Units";
		vehicleClass = "NLD_Air";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\NLD Vehicle Units\Air\Data\MH65.paa"};
	};

    class NLD_NH90: Heli_Transport_02_base_F
    {
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "Heli_Transport_02_base_F";
		displayName = "NH-90 NL";
		side = 1;
		crew = "KL_Helipilot";
		faction = "NLD_Units";
		vehicleClass = "NLD_Air";
	    hiddenSelections[]= {"camo1","camo2","camo3"};
	    hiddenSelectionsTextures[]= {"\NLD Vehicle Units\Air\Data\NH90_1.paa","\NLD Vehicle Units\Air\Data\NH90_2.paa","\NLD Vehicle Units\Air\Data\NH90_3.paa"};
    };

};

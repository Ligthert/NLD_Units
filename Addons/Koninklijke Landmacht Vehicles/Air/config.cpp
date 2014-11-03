class CfgPatches 
{

	class Koninklijke_Landmacht 
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { };
	};
};

class CfgFactionClasses
{
	class Koninklijke_Landmacht
	{
		displayName="Koninklijke Landmacht";
		icon="\Koninklijke Landmacht Units\Icon\Icon.jpg";
		priority=100;
		side=1;
	};
};

class cfgVehicleClasses 
{
	class Koninklijke_Landmacht_air
	{
		displayName = "Koninklijke Landmacht air";
	};

};

class WeaponFireGun ;

class WeaponCloudsGun ;

class WeaponFireMGun ;

class WeaponCloudsMGun ;

class RCWSOptics ;

class CfgVehicles 
{

	class B_Heli_Light_01_F;

	class B_Heli_Light_01_armed_F;

	class B_Heli_Attack_01_F;

	class O_Heli_Light_02_F;

	class O_Heli_Light_02_unarmed_F;

	class I_Heli_Transport_02_F;

	class I_Heli_light_03_unarmed_F;

	class I_Heli_light_03_F;

	class Heli_Transport_02_base_F;
         
        class Heli_Attack_01_Base_F;

	class KL_Little_Bird_NL : B_Heli_Light_01_F
	{
		author = "Stafford";
		scope = 2;
		_generalMacro = "B_Heli_Light_01_F";
		displayName = "Little Bird";
		side = 1;
		crew = "KL_Helipilot";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Air";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Vehicles\Air\Data\littlebird.paa"};
	};
	class KL_Little_Bird_Armed_NL : B_Heli_Light_01_armed_F
	{
		author = "Stafford";
		scope = 2;
		_generalMacro = "B_Heli_Light_01_armed_F";
		displayName = "Little Bird (Armed)";
		side = 1;
		crew = "KL_Helipilot";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Air";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Vehicles\Air\Data\littlebird.paa"};
	};
	class KL_MH65_NL : O_Heli_Light_02_unarmed_F
	{
		author = "Stafford";
		scope = 2;
		_generalMacro = "O_Heli_Light_02_unarmed_F";
		displayName = "MH-65 NL";
		side = 1;
		crew = "KL_Helipilot";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Air";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Vehicles\Air\Data\MH65.paa"};
	};
	class KL_MH65_Armed_NL : O_Heli_Light_02_F
	{
		author = "Stafford";
		scope = 2;
		_generalMacro = "O_Heli_Light_02_F";
		displayName = "MH-65 NL (Armed)";
		side = 1;
		crew = "KL_Helipilot";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Air";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Vehicles\Air\Data\MH65.paa"};
	};
        class KL_NH90_NL: Heli_Transport_02_base_F
        {
		author = "Stafford";
		scope = 2;
		_generalMacro = "Heli_Transport_02_base_F";
		displayName = "NH-90 NL";
		side = 1;
		crew = "KL_Helipilot";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Air";
            	hiddenSelections[]= {"camo1","camo2","camo3"};
            	hiddenSelectionsTextures[]= {"\Koninklijke Landmacht Vehicles\Air\Data\NH90_1.paa","\Koninklijke Landmacht Vehicles\Air\Data\NH90_2.paa","\Koninklijke Landmacht Vehicles\Air\Data\NH90_3.paa"};
        };
};

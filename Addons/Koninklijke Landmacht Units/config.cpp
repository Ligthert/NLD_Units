class CfgPatches {
	class Koninklijke_Landmacht {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
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
class CfgVehicleClasses
{
	class Infantry_Desert
	{
		displayName="Infantry Desert";
	};
	class Infantry_Woodland
	{
		displayName="Infantry Woodland";
	};
	class Infantry_SF
	{
		displayName="Special Forces";
	};
	class Infantry_Support
	{
		displayName="Support Crew";
	};

};

class CfgVehicles {
	class B_Soldier_base_F;	
	class B_Carryall_Base;
	class B_Helipilot_F;
	class B_helicrew_F;
	class B_sniper_F;

	
	class KL_Helipilot: B_Helipilot_F
	{
		author = "Smootch";
		side = 1;
		scope = 2; 
		displayName = "Heli Pilot";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Infantry_Support";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		uniformAccessories[] = {};
		uniformClass = "KL_Helipilot_base";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Support\Data\pilotcoveralls_co.paa", "\Koninklijke Landmacht Units\Badges\LMB.paa"};
		faceType = "Man_A3";
		linkedItems[] = {"V_Chestrig_oli", "H_PilotHelmetHeli_O", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_oli", "H_PilotHelmetHeli_O", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MXC_Black_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MXC_Black_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		canHideBodies = 1;
	};
	class KL_Helicrew: B_helicrew_F
	{
		author = "Smootch";
		side = 1;
		scope = 2; 
		displayName = "Heli Crew";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Infantry_Support";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		uniformAccessories[] = {};
		uniformClass = "KL_Helicrew_base";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Support\Data\coveralls_co.paa", "\Koninklijke Landmacht Units\Badges\LMB.paa"};
		faceType = "Man_A3";
		linkedItems[] = {"V_Chestrig_oli", "H_PilotHelmetHeli_O", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_oli", "H_PilotHelmetHeli_O", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MXC_Black_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MXC_Black_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		canHideBodies = 1;
	};
	class KL_Desert_Basic1: B_Soldier_base_F
	{
		author = "Smootch";
		side = 1;
		scope = 2; 
		displayName = "Rifleman";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Infantry_Desert";
		backpack = "KL_Carryall_D_B";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "KL_D_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\Uniform.paa", "\Koninklijke Landmacht Units\Badges\LMB.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		canHideBodies = 1;
	};
	class KL_Desert_Medic: KL_Desert_Basic1
	{
		displayName = "Medic";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "KL_Carryall_D_Medic";
		icon = "iconManMedic";
	};
	class KL_Desert_JTAC: KL_Desert_Basic1
	{
		displayName = "JTAC";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"}; 
		backpack = "KL_Carryall_D_JTAC";
	};
	class KL_Desert_Eng: KL_Desert_Basic1
	{
		displayName = "Engineer";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "KL_Carryall_D_Eng";
		icon = "iconManEngineer";
	};
	class KL_Desert_EXPL: KL_Desert_Basic1
	{
		displayName = "Explosive Expert";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		backpack = "KL_Carryall_D_Expl";
		icon = "iconManExplosive";
	};
	class KL_Desert_UAV: KL_Desert_Basic1
	{
		displayName = "UAV Operator";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		linkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		backpack = "KL_Carryall_D_UAV";
	};
	class KL_Desert_Ammo: KL_Desert_Basic1
	{
		displayName = "Ammo Bearer";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "KL_Carryall_D_Ammo";
	};
	class KL_Desert_GL: B_Soldier_base_F
	{
		author = "Smootch";
		side = 1;
		scope = 2; 
		displayName = "Grenadier";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Infantry_Desert";
		backpack = "KL_Carryall_D_GL";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "KL_D_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\Uniform.paa", "\Koninklijke Landmacht Units\Badges\LMB.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		canHideBodies = 1;
	};
	class KL_Desert_PC: KL_Desert_GL
	{
		displayName = "PC";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"}; 
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"}; 
		backpack = "KL_Carryall_D_TL";
		icon = "iconManOfficer";
	};
	class KL_Desert_GC: KL_Desert_GL
	{
		displayName = "GC";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		backpack = "KL_Carryall_D_TL";
		icon = "iconManLeader";
	};
	class KL_Desert_2IC: KL_Desert_GL
	{
		displayName = "2IC";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "KL_Carryall_D_TL";
		icon = "iconManLeader";
	};
	class KL_Desert_Sharp: B_Soldier_base_F
	{
		author = "Smootch";
		side = 1;
		scope = 2; 
		displayName = "Sharpshooter";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Infantry_Desert";
		backpack = "KL_Carryall_D_B";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "KL_D_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\Uniform.paa", "\Koninklijke Landmacht Units\Badges\LMB.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MXM_SOS_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"arifle_MXM_SOS_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		canHideBodies = 1;
	};
	class KL_Desert_AR: B_Soldier_base_F
	{
		author = "Smootch";
		side = 1;
		scope = 2; 
		displayName = "Automatic Rifleman";
		icon = "iconManMG";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Infantry_Desert";
		backpack = "KL_Carryall_D_AR";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "KL_D_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\Uniform.paa", "\Koninklijke Landmacht Units\Badges\LMB.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		magazines[] = {"100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnMagazines[] = {"100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		canHideBodies = 1;
	};
	class KL_Desert_AT: B_Soldier_base_F
	{
		author = "Smootch";
		side = 1;
		scope = 2; 
		displayName = "Rifleman (AT)";
		icon = "iconManAT";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Infantry_Desert";
		backpack = "KL_Carryall_D_AT";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "KL_D_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\Uniform.paa", "\Koninklijke Landmacht Units\Badges\LMB.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_D_Helmet", "shemagh_neckD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "launch_NLAW_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "launch_NLAW_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		canHideBodies = 1;
	};	
	class KL_WLD_Basic1: B_Soldier_base_F
	{
		author = "Smootch";
		side = 1;
		scope = 2; 
		displayName = "Rifleman";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Infantry_Woodland";
		backpack = "KL_Carryall_WLD_B";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "KL_WLD_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\Uniform.paa", "\Koninklijke Landmacht Units\Badges\LMB.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		canHideBodies = 1;
	};
	class KL_WLD_Medic: KL_WLD_Basic1
	{
		displayName = "Medic";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "KL_Carryall_WLD_Medic";
		icon = "iconManMedic";
	};
	class KL_WLD_JTAC: KL_WLD_Basic1
	{
		displayName = "JTAC";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"}; 
		backpack = "KL_Carryall_WLD_JTAC";
	};
	class KL_WLD_Eng: KL_WLD_Basic1
	{
		displayName = "Engineer";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "KL_Carryall_WLD_Eng";
		icon = "iconManEngineer";
	};
	class KL_WLD_EXPL: KL_WLD_Basic1
	{
		displayName = "Explosive Expert";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		backpack = "KL_Carryall_WLD_Expl";
		icon = "iconManExplosive";
	};
	class KL_WLD_UAV: KL_WLD_Basic1
	{
		displayName = "UAV Operator";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		linkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		backpack = "KL_Carryall_WLD_UAV";
	};
	class KL_WLD_Ammo: KL_WLD_Basic1
	{
		displayName = "Ammo Bearer";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "KL_Carryall_WLD_Ammo";
	};
	class KL_WLD_GL: B_Soldier_base_F
	{
		author = "Smootch";
		side = 1;
		scope = 2; 
		displayName = "Grenadier";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Infantry_Woodland";
		backpack = "KL_Carryall_WLD_B";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "KL_WLD_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\Uniform.paa", "\Koninklijke Landmacht Units\Badges\LMB.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		canHideBodies = 1;
	};
	class KL_WLD_PC: KL_WLD_GL
	{
		displayName = "PC";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"}; 
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"}; 
		backpack = "KL_Carryall_WLD_TL";
		icon = "iconManOfficer";
	};
	class KL_WLD_GC: KL_WLD_GL
	{
		displayName = "GC";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		backpack = "KL_Carryall_WLD_TL";
		icon = "iconManLeader";
	};
	class KL_WLD_2IC: KL_WLD_GL
	{
		displayName = "2IC";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "KL_Carryall_WLD_TL";
		icon = "iconManLeader";
	};
	class KL_WLD_Sharp: B_Soldier_base_F
	{
		author = "Smootch";
		side = 1;
		scope = 2; 
		displayName = "Sharpshooter";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Infantry_Woodland";
		backpack = "KL_Carryall_WLD_B";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "KL_WLD_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\Uniform.paa", "\Koninklijke Landmacht Units\Badges\LMB.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MXM_SOS_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"arifle_MXM_SOS_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		canHideBodies = 1;
	};
	class KL_WLD_AR: B_Soldier_base_F
	{
		author = "Smootch";
		side = 1;
		scope = 2; 
		displayName = "Automatic Rifleman";
		icon = "iconManMG";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Infantry_Woodland";
		backpack = "KL_Carryall_WLD_AR";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "KL_WLD_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\Uniform.paa", "\Koninklijke Landmacht Units\Badges\LMB.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		magazines[] = {"100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnMagazines[] = {"100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		canHideBodies = 1;
	};
	class KL_WLD_AT: B_Soldier_base_F
	{
		author = "Smootch";
		side = 1;
		scope = 2; 
		displayName = "Rifleman (AT)";
		icon = "iconManAT";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Infantry_Woodland";
		backpack = "KL_Carryall_WLD_AT";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "KL_WLD_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\Uniform.paa", "\Koninklijke Landmacht Units\Badges\LMB.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_WLD_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "launch_NLAW_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "launch_NLAW_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		canHideBodies = 1;
	};
	class KL_SF_Basic1: B_Soldier_base_F
	{
		author = "Smootch";
		side = 1;
		scope = 2; 
		displayName = "Rifleman";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Infantry_SF";
		backpack = "KL_Carryall_WLD_B";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "KL_SF_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\SF\Data\Green.paa", "\Koninklijke Landmacht Units\Badges\LMB.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"KL_SF_Black_Vest", "KL_WLD_BoonieHat", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_SF_Black_Vest", "KL_WLD_BoonieHat", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		canHideBodies = 1;
	};
	class KL_SF_Medic: KL_SF_Basic1
	{
		displayName = "Medic";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "KL_Carryall_WLD_Medic";
		icon = "iconManMedic";
	};
	class KL_SF_JTAC: KL_SF_Basic1
	{
		displayName = "JTAC";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"}; 
		backpack = "KL_Carryall_WLD_JTAC";
	};
	class KL_SF_Eng: KL_SF_Basic1
	{
		displayName = "Engineer";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "KL_Carryall_WLD_Eng";
		icon = "iconManEngineer";
	};
	class KL_SF_EXPL: KL_SF_Basic1
	{
		displayName = "Explosive Expert";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		backpack = "KL_Carryall_WLD_Expl";
		icon = "iconManExplosive";
	};
	class KL_SF_UAV: KL_SF_Basic1
	{
		displayName = "UAV Operator";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		linkedItems[] = {"KL_SF_Black_Vest", "KL_WLD_BoonieHat", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		respawnLinkedItems[] = {"KL_SF_Black_Vest", "KL_WLD_BoonieHat", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		backpack = "KL_Carryall_WLD_UAV";
	};
	class KL_SF_Ammo: KL_SF_Basic1
	{
		displayName = "Ammo Bearer";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "KL_Carryall_WLD_Ammo";
	};
	class KL_SF_GL: B_Soldier_base_F
	{
		author = "Smootch";
		side = 1;
		scope = 2; 
		displayName = "Grenadier";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Infantry_SF";
		backpack = "KL_Carryall_WLD_GL";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "KL_SF1_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\SF\Data\Grey.paa", "\Koninklijke Landmacht Units\Badges\LMB.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"KL_SF_Black_Vest", "KL_WLD_BaseballCap", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_SF_Black_Vest", "KL_WLD_BaseballCap", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		canHideBodies = 1;
	};
	class KL_SF_PC: KL_SF_GL
	{
		displayName = "PC";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"}; 
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"}; 
		backpack = "KL_Carryall_WLD_TL";
		icon = "iconManOfficer";
	};
	class KL_SF_GC: KL_SF_GL
	{
		displayName = "GC";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		backpack = "KL_Carryall_WLD_TL";
		icon = "iconManLeader";
	};
	class KL_SF_2IC: KL_SF_GL
	{
		displayName = "2IC";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "KL_Carryall_WLD_TL";
		icon = "iconManLeader";
	};
	class KL_SF_Sharp: B_Soldier_base_F
	{
		author = "Smootch";
		side = 1;
		scope = 2; 
		displayName = "Sharpshooter";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Infantry_SF";
		backpack = "KL_Carryall_WLD_B";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "KL_SF2_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\SF\Data\Black.paa", "\Koninklijke Landmacht Units\Badges\LMB.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"KL_SF_Black_Vest", "H_Watchcap_blk", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_SF_Black_Vest", "H_Watchcap_blk", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MXM_SOS_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"arifle_MXM_SOS_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		canHideBodies = 1;
	};
	class KL_SF_AR: B_Soldier_base_F
	{
		author = "Smootch";
		side = 1;
		scope = 2; 
		displayName = "Automatic Rifleman";
		icon = "iconManMG";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Infantry_SF";
		backpack = "KL_Carryall_WLD_AR";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "KL_SF2_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\SF\Data\Black.paa", "\Koninklijke Landmacht Units\Badges\LMB.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"KL_SF_Black_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_SF_Black_Vest", "KL_WLD_Helmet", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		magazines[] = {"100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnMagazines[] = {"100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		canHideBodies = 1;
	};
	class KL_SF_AT: B_Soldier_base_F
	{
		author = "Smootch";
		side = 1;
		scope = 2; 
		displayName = "Rifleman (AT)";
		icon = "iconManAT";
		faction = "Koninklijke_Landmacht";
		vehicleClass = "Infantry_SF";
		backpack = "KL_Carryall_WLD_AT";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "KL_SF2_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\SF\Data\Black.paa", "\Koninklijke Landmacht Units\Badges\LMB.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"KL_SF_Black_Vest", "H_Watchcap_blk", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"KL_SF_Black_Vest", "H_Watchcap_blk", "shemagh_neckOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "launch_NLAW_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "launch_NLAW_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		canHideBodies = 1;
	};		
	
	class B_Carryall_oli;	// External class reference
	
	class KL_Carryall_D_B : B_Carryall_oli {
		displayName = "Carryall base Desert";
		picture = "\Koninklijke Landmacht Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_B : KL_Carryall_D_B {
		displayName = "Carryall Base Woodland";
		picture = "\Koninklijke Landmacht Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\Backpack.paa"};
	};

	class KL_Carryall_D_GL : B_Carryall_oli {
		displayName = "Carryall GL Desert";
		picture = "\Koninklijke Landmacht Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=2;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=3;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_GL : KL_Carryall_D_GL {
		displayName = "Carryall GL Woodland";
		picture = "\Koninklijke Landmacht Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\Backpack.paa"};
	};


	class KL_Carryall_D_TL : B_Carryall_oli {
		displayName = "Carryall GL Desert";
		picture = "\Koninklijke Landmacht Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_TL : KL_Carryall_D_TL {
		displayName = "Carryall GL Woodland";
		picture = "\Koninklijke Landmacht Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\Backpack.paa"};
	};

	class KL_Carryall_D_Medic : B_Carryall_oli {
		displayName = "Carryall Medic Desert";
		picture = "\Koninklijke Landmacht Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_Medic : KL_Carryall_D_Medic {
		displayName = "Carryall Medic Woodland";
		picture = "\Koninklijke Landmacht Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\Backpack.paa"};
	};

	class KL_Carryall_D_AT : B_Carryall_oli {
		displayName = "Carryall AT Desert";
		picture = "\Koninklijke Landmacht Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=3;
			};

			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_AT : KL_Carryall_D_AT {
		displayName = "Carryall AT Woodland";
		picture = "\Koninklijke Landmacht Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\Backpack.paa"};
	};

	class KL_Carryall_D_AR : B_Carryall_oli {
		displayName = "Carryall AR Desert";
		picture = "\Koninklijke Landmacht Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=6;
			};

			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_AR : KL_Carryall_D_AR {
		displayName = "Carryall AR Woodland";
		picture = "\Koninklijke Landmacht Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\Backpack.paa"};
	};

	class KL_Carryall_D_Eng : B_Carryall_oli {
		displayName = "Carryall Eng Desert";
		picture = "\Koninklijke Landmacht Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=2;
			};
			class _xx_ATMine_Range_Mag
			{
				magazine="ATMine_Range_Mag";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_Eng : KL_Carryall_D_Eng {
		displayName = "Carryall Eng Woodland";
		picture = "\Koninklijke Landmacht Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\Backpack.paa"};
	};

	class KL_Carryall_D_Ammo : B_Carryall_oli {
		displayName = "Carryall Ammo Desert";
		picture = "\Koninklijke Landmacht Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=10;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=15;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=10;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_Ammo : KL_Carryall_D_Ammo {
		displayName = "Carryall Ammo Woodland";
		picture = "\Koninklijke Landmacht Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\Backpack.paa"};
	};

	class KL_Carryall_D_Expl : B_Carryall_oli {
		displayName = "Carryall Expl Desert";
		picture = "\Koninklijke Landmacht Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=2;
			};
			class _xx_ATMine_Range_Mag
			{
				magazine="ATMine_Range_Mag";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_Expl : KL_Carryall_D_Expl {
		displayName = "Carryall Expl Woodland";
		picture = "\Koninklijke Landmacht Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\Backpack.paa"};
	};
	
	class B_UAV_01_backpack_F;	// External class reference
	
	class KL_Carryall_D_UAV : B_UAV_01_backpack_F {
		displayName = "Carryall UAV Desert";
		picture = "\Koninklijke Landmacht Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\Camo.paa"};

		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_UAV : KL_Carryall_D_UAV {
		displayName = "Carryall UAV Woodland";
		picture = "\Koninklijke Landmacht Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\Camo.paa"};
	};
	class KL_Carryall_D_JTAC : B_Carryall_oli {
		displayName = "Carryall JTAC Desert";
		picture = "\Koninklijke Landmacht Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\Black.paa"};

		class TransportMagazines
		{
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=5;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=5;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NVGoggles_OPFOR {
				name = "NVGoggles_OPFOR";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class KL_Carryall_WLD_JTAC : KL_Carryall_D_JTAC {
		displayName = "Carryall JTAC Woodland";
		picture = "\Koninklijke Landmacht Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\Backpack.paa"};
	};
};

class cfgWeapons {
	class Uniform_Base;	// External class reference
	class UniformItem;	// External class reference
	
	class KL_D_Camo : Uniform_Base {
		scope = 2;
		displayName = "Desert Camo";
		picture = "\Koninklijke Landmacht Units\Units\Desert\Data\uim\Uniform.jpg";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "KL_Desert_Basic1";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	class ItemCore;		// External class reference
	class HeadgearItem;	// External class reference
	class H_HelmetIA;	// External class reference
	
	class KL_D_Helmet : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Desert Helmet";
		picture = "\Koninklijke Landmacht Units\Units\Desert\Data\uim\Helmet.jpg";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\Helmet.paa"};
		
		class ItemInfo : HeadgearItem {
			mass = 1;
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			modelSides[] = {3, 1};
			armor = 3*0.5;
			passThrough = 0.7;
			hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\Helmet.paa"};
			hiddenSelections[] = {"camo"};
		};
	};
	class KL_D_BaseballCap: ItemCore{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Desert Baseball Cap";
		picture = "\Koninklijke Landmacht Units\Units\Desert\Data\uim\BaseballCap.jpg";
		model = "\A3\Characters_F\common\capb";
                hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\BaseballCap.paa"};
                hiddenSelections[] = {"Camo"};
                
                  

		class ItemInfo: HeadgearItem{
			mass = 1;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
                        hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\BaseballCap.paa"};
                        hiddenSelections[] = {"Camo"};
		};
	};
	class KL_D_BoonieHat: ItemCore{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Desert Boonie Hat";
		picture = "\Koninklijke Landmacht Units\Units\Desert\Data\uim\BoonieHat.jpg";
		model = "\A3\Characters_F\Common\booniehat";
                hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\BoonieHat.paa"};
                hiddenSelections[] = {"Camo"};
                
                  

		class ItemInfo: HeadgearItem{
			mass = 1;
			uniformmodel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
                        hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\BoonieHat.paa"};
                        hiddenSelections[] = {"Camo"};
		};
	};
	class KL_WLD_Camo : Uniform_Base {
		scope = 2;
		displayName = "Woodland Camo";
		picture = "\Koninklijke Landmacht Units\Units\Woodland\Data\uim\Uniform.jpg";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "KL_WLD_Basic1";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	
	class KL_WLD_Helmet : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Woodland Helmet";
		picture = "\Koninklijke Landmacht Units\Units\Woodland\Data\uim\Helmet.jpg";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\Helmet.paa"};
		
		class ItemInfo : HeadgearItem {
			mass = 1;
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			modelSides[] = {3, 1};
			armor = 3*0.5;
			passThrough = 0.7;
                        hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\BaseballCap.paa"};
			hiddenSelections[] = {"camo"};
		};
	};
	class KL_WLD_BaseballCap: ItemCore{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Woodland Baseball Cap";
		picture = "\Koninklijke Landmacht Units\Units\Woodland\Data\uim\BaseballCap.jpg";
		model = "\A3\Characters_F\common\capb";
                hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\BaseballCap.paa"};
                hiddenSelections[] = {"Camo"};
                
                  

		class ItemInfo: HeadgearItem{
			mass = 1;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
                        hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\BaseballCap.paa"};
                        hiddenSelections[] = {"Camo"};
		};
	};
	class KL_WLD_BoonieHat: ItemCore{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Woodland Boonie Hat";
		picture = "\Koninklijke Landmacht Units\Units\Woodland\Data\uim\BoonieHat.jpg";
		model = "\A3\Characters_F\Common\booniehat";
                hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\BoonieHat.paa"};
                hiddenSelections[] = {"Camo"};
                
                  

		class ItemInfo: HeadgearItem{
			mass = 1;
			uniformmodel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
                        hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Woodland\Data\BoonieHat.paa"};
                        hiddenSelections[] = {"Camo"};
		};
	};
	class Vest_Camo_Base;	// External class reference
	class VestItem;	// External class reference
	
	class KL_WLD_Vest : Vest_Camo_Base {
		scope = 2;
		displayName = "Woodland Vest";
		picture = "\Koninklijke Landmacht Units\Units\Desert\Data\uim\Vest.jpg";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\Desert\Data\Vest.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			containerClass = "Supply120";
			mass = 1;
			armor = 5*0.5;
			passThrough = 0.7;
			hiddenSelections[] = {"camo"};
		};
	};
	class KL_SF_Camo : Uniform_Base {
		scope = 2;
		displayName = "SF Green Camo";
		picture = "\Koninklijke Landmacht Units\Units\SF\Data\uim\Black.jpg";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "KL_SF_Basic1";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	class KL_SF1_Camo : Uniform_Base {
		scope = 2;
		displayName = "SF Grey Camo";
		picture = "\Koninklijke Landmacht Units\Units\SF\Data\uim\Black.jpg";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "KL_SF_GL";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	class KL_SF2_Camo : Uniform_Base {
		scope = 2;
		displayName = "SF Black Camo";
		picture = "\Koninklijke Landmacht Units\Units\SF\Data\uim\Black.jpg";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "KL_SF_AR";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	
	class KL_SF_Black_Vest : Vest_Camo_Base {
		scope = 2;
		displayName = "Black Vest";
		picture = "\Koninklijke Landmacht Units\Units\SF\Data\uim\VestBlack.jpg";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Koninklijke Landmacht Units\Units\SF\Data\VestBlack.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			containerClass = "Supply120";
			mass = 1;
			armor = 5*0.5;
			passThrough = 0.7;
			hiddenSelections[] = {"camo"};
		};
	};

	class U_I_CombatUniform;	// External class reference
	class U_B_HeliPilotCoveralls;	// External class reference
	
	class KL_Helipilot_base : U_B_HeliPilotCoveralls {
		scope = 2;
		displayName = "HeliPilot Coveralls (NLD)";
		picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "KL_Helipilot";
			containerClass = "Supply90";
			mass = 40;
		};
	};
	
	class KL_Helicrew_base : U_B_HeliPilotCoveralls {
		scope = 2;
		displayName = "HeliCrew Coveralls (NLD)";
		picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "KL_Helicrew";
			containerClass = "Supply90";
			mass = 40;
		};
	};

	class U_B_GhillieSuit;	// External class reference
	
	class KL_Sniper_base : U_B_GhillieSuit {
		scope = 2;
		displayName = "Sniper Ghilliesuit Woodland";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "KL_Sniper_base";
			containerClass = "Supply90";
			mass = 40;
		};
	};
};
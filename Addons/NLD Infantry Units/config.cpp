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
class CfgVehicleClasses
{
	class Infantry_Desert
	{
		displayName="Men (Desert)";
	};
	class Infantry_Woodland
	{
		displayName="Men (Woodland)";
	};
	class Infantry_Support
	{
		displayName="Men (Support)";
	};
	class Infantry_NFPTAN
	{
		displayName="Men (NFP-TAN)";
	};
	class Infantry_NFPGREEN
	{
		displayName="Men (NFP-Green)";
	};
	class Infantry_WINTER
	{
		displayName="Men (Winter)";
	};
	class Infantry_JUNGLE
	{
		displayName="Men (Jungle)";
	};
	class Infantry_SF
	{
		displayName="Men (SF Black)";
	};
	class Infantry_SFMTP
	{
		displayName="Men (SF MTP)";
	};
};
class CfgVehicles {
	class B_Soldier_base_F;	
	class B_Carryall_Base;
	class B_Helipilot_F;
	class B_helicrew_F;
	class B_sniper_F;
	class B_pilot_F;


// Woodland Units
	
	class NLD_WLD_rifleman: B_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 1;
		scope = 2; 
		displayName = "Rifleman";
		faction = "NLD_Units";
		vehicleClass = "Infantry_Woodland";
		backpack = "NLD_Carryall_WLD_B";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "NLD_WLD_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Woodland\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put"}; 
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen"};
	};

	class NLD_WLD_AR: NLD_WLD_rifleman
	{
		displayName = "Automatic Rifleman";
		icon = "iconManMG";
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put"};
		respawnWeapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag", "100Rnd_65x39_caseless_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen"};
	};

	class NLD_WLD_LAT: NLD_WLD_rifleman
	{
		displayName = "Rifleman (LAT)";
		icon = "iconManAT";
		backpack = "NLD_Carryall_WLD_AT";
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "launch_NLAW_F", "hgun_P07_F", "Throw", "Put"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "launch_NLAW_F", "hgun_P07_F", "Throw", "Put"}; 
	};

	class NLD_WLD_CLS: NLD_WLD_rifleman
	{
		displayName = "Combat Life Saver";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_Carryall_WLD_Medic";
		icon = "iconManMedic";
	};

	class NLD_WLD_GL: NLD_WLD_rifleman
	{
		displayName = "Grenadier";
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag","SmokeShellGreen","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag","SmokeShellGreen","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell"};
	};

	class NLD_WLD_ENGI: NLD_WLD_rifleman
	{
		displayName = "Engineer";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_Carryall_WLD_Eng";
		icon = "iconManEngineer";
	};

	class NLD_WLD_EXPL: NLD_WLD_rifleman
	{
		displayName = "Explosives Expert";
		backpack = "NLD_Carryall_WLD_Expl";
		icon = "iconManExplosive";
	};

	class NLD_WLD_UAV: NLD_WLD_rifleman
	{
		displayName = "UAV Operator";
		linkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "ItemRadio"};
		backpack = "NLD_Carryall_WLD_UAV";
	};

	class NLD_WLD_JTAC: NLD_WLD_rifleman
	{
		displayName = "JTAC";
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		backpack = "NLD_Carryall_WLD_JTAC";
	};

	class NLD_WLD_OFF: NLD_WLD_rifleman
	{
		displayName = "Officer";
		linkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		backpack = "NLD_Carryall_WLD_TL";
		icon = "iconManOfficer";
	};

	class NLD_WLD_SL: NLD_WLD_rifleman
	{
		displayName = "Squad Leader";
		linkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		backpack = "NLD_Carryall_WLD_TL";
		icon = "iconManLeader";
	};

	class NLD_WLD_TL: NLD_WLD_rifleman
	{
		displayName = "Team Leader";
		linkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_Carryall_WLD_TL";
		icon = "iconManLeader";
	};

	class NLD_WLD_SLA: NLD_WLD_rifleman
	{
		displayName = "Designated Marksman";
		linkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MXM_SOS_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"arifle_MXM_SOS_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
	};

	class NLD_WLD_Ammo: NLD_WLD_rifleman
	{
		displayName = "Ammo Bearer";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_Carryall_WLD_Ammo";
	};

	class NLD_WLD_AAR: NLD_WLD_rifleman
	{
		displayName = "Assistant Automatic Rifleman";
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		backpack = "NLD_Carryall_WLD_AAR";
	};

	class NLD_WLD_MMG: NLD_WLD_rifleman
	{
		displayName = "Medium Machine Gunner";
		backpack = "NLD_Carryall_WLD_MMG";
		weapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box_Tracer","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box_Tracer","HandGrenade","SmokeShell","SmokeShellGreen"};
	};

	class NLD_WLD_AMMG: NLD_WLD_rifleman
	{
		displayName = "Assistant Medium Machine Gunner";
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"arifle_MXM_SOS_pointer_F", "hgun_P07_F", "Throw", "Put", "Rangefinder"};
		backpack = "NLD_Carryall_WLD_MMG";
	};

	class NLD_WLD_MAT: NLD_WLD_rifleman
	{
		displayName = "Medium Anti-Tank";
		backpack = "NLD_Carryall_WLD_MAT";
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put","launch_B_Titan_short_F"};
		respawnWeapons[] = {"arifle_MXM_SOS_pointer_F", "hgun_P07_F", "Throw", "Put","launch_B_Titan_short_F"};
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen", "Titan_AT"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen", "Titan_AT"};
	};

	class NLD_WLD_AMAT: NLD_WLD_rifleman
	{
		displayName = "Assistant Medium Anti-Tank";
		backpack = "NLD_Carryall_WLD_MAT";
	};

	class NLD_WLD_AA: NLD_WLD_rifleman
	{
		displayName = "Anti-Air";
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put","launch_B_Titan_F"};
		respawnWeapons[] = {"arifle_MXM_SOS_pointer_F", "hgun_P07_F", "Throw", "Put","launch_B_Titan_F"};
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen", "Titan_AA"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen", "Titan_AA"};
		backpack = "NLD_Carryall_WLD_AA";
	};

	class NLD_WLD_AAA: NLD_WLD_rifleman
	{
		displayName = "Assistant Anti-Air";
		backpack = "NLD_Carryall_WLD_AA";
	}

// Desert Units
	class NLD_DST_rifleman: NLD_WLD_rifleman
	{
		vehicleClass = "Infantry_Desert";
		backpack = "NLD_Carryall_DST_B";
		uniformClass = "NLD_DST_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_DST_AR: NLD_WLD_AR
	{
		vehicleClass = "Infantry_Desert";
		backpack = "NLD_Carryall_DST_B";
		uniformClass = "NLD_DST_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_DST_LAT: NLD_WLD_LAT
	{
		vehicleClass = "Infantry_Desert";
		backpack = "NLD_Carryall_DST_AT";
		uniformClass = "NLD_DST_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_DST_CLS: NLD_WLD_CLS
	{
		vehicleClass = "Infantry_Desert";
		backpack = "NLD_Carryall_DST_Medic";
		uniformClass = "NLD_DST_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_DST_GL: NLD_WLD_GL
	{
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "NLD_Carryall_DST_TL";
	};

	class NLD_DST_ENGI: NLD_WLD_ENGI
	{
		vehicleClass = "Infantry_Desert";
		backpack = "NLD_Carryall_DST_Eng";
		uniformClass = "NLD_DST_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_DST_EXPL: NLD_WLD_EXPL
	{
		vehicleClass = "Infantry_Desert";
		backpack = "NLD_Carryall_DST_Expl";
		uniformClass = "NLD_DST_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_DST_UAV: NLD_WLD_UAV
	{
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		backpack = "NLD_Carryall_DST_UAV";
	};

	class NLD_DST_JTAC: NLD_WLD_JTAC
	{
 		vehicleClass = "Infantry_Desert";
		backpack = "NLD_Carryall_DST_JTAC";
		uniformClass = "NLD_DST_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
	};

	class NLD_DST_OFF: NLD_WLD_OFF
	{
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		backpack = "NLD_Carryall_DST_TL";
	};

	class NLD_DST_SL: NLD_WLD_SL
	{
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		backpack = "NLD_Carryall_DST_TL";
	};

	class NLD_DST_TL: NLD_WLD_TL
	{
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		linkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_Carryall_DST_TL";
	};

	class NLD_DST_SLA: NLD_WLD_SLA
	{
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		linkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		backpack = "NLD_Carryall_DST_B";
	};

	class NLD_DST_Ammo: NLD_WLD_Ammo
	{
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_Carryall_DST_Ammo";
		linkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_DST_AAR: NLD_WLD_rifleman
	{
		displayName = "Assistant Automatic Rifleman";
		vehicleClass = "Infantry_Desert";
		backpack = "NLD_Carryall_DST_AAR";
		uniformClass = "NLD_DST_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_DST_MMG: NLD_WLD_MMG
	{
		displayName = "Medium Machine Gunner";
		backpack = "NLD_Carryall_DST_MMG";
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_DST_AMMG: NLD_WLD_AMMG
	{
		displayName = "Assistant Medium Machine Gunner";
		vehicleClass = "Infantry_Desert";
		backpack = "NLD_Carryall_DST_MMG";
		uniformClass = "NLD_DST_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_DST_MAT: NLD_WLD_MAT
	{
		displayName = "Medium Anti-Tank";
		backpack = "NLD_Carryall_DST_MAT";
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_DST_AMAT: NLD_WLD_AMAT
	{
		displayName = "Assistant Medium Anti-Tank";
		backpack = "NLD_Carryall_DST_MAT";
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_DST_AA: NLD_WLD_AA
	{
		displayName = "Anti-Air";
		vehicleClass = "Infantry_Desert";
		backpack = "NLD_Carryall_DST_AA";
		uniformClass = "NLD_DST_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_DST_AAA: NLD_WLD_AAA
	{
		displayName = "Assistant Anti-Air";
		backpack = "NLD_Carryall_DST_AA";
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_DST_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	}

// NFP-TAN

	class NLD_NFPT_rifleman: NLD_WLD_rifleman
		{
			vehicleClass = "Infantry_NFPTAN";
			backpack = "NLD_Carryall_NFPT_B";
			uniformClass = "NLD_NFPT_Camo";
			hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
			linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
			respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		};

	class NLD_NFPT_AR: NLD_WLD_AR
	{
		vehicleClass = "Infantry_NFPTAN";
		backpack = "NLD_Carryall_NFPT_B";
		uniformClass = "NLD_NFPT_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPT_LAT: NLD_WLD_LAT
	{
		vehicleClass = "Infantry_NFPTAN";
		backpack = "NLD_Carryall_NFPT_AT";
		uniformClass = "NLD_NFPT_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPT_CLS: NLD_WLD_CLS
	{
		vehicleClass = "Infantry_NFPTAN";
		backpack = "NLD_Carryall_NFPT_Medic";
		uniformClass = "NLD_NFPT_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPT_GL: NLD_WLD_GL
	{
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "NLD_Carryall_NFPT_TL";
	};

	class NLD_NFPT_ENGI: NLD_WLD_ENGI
	{
		vehicleClass = "Infantry_NFPTAN";
		backpack = "NLD_Carryall_NFPT_Eng";
		uniformClass = "NLD_NFPT_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPT_EXPL: NLD_WLD_EXPL
	{
		vehicleClass = "Infantry_NFPTAN";
		backpack = "NLD_Carryall_NFPT_Expl";
		uniformClass = "NLD_NFPT_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPT_UAV: NLD_WLD_UAV
	{
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		backpack = "NLD_Carryall_NFPT_UAV";
	};

	class NLD_NFPT_JTAC: NLD_WLD_JTAC
	{
 		vehicleClass = "Infantry_NFPTAN";
		backpack = "NLD_Carryall_NFPT_JTAC";
		uniformClass = "NLD_NFPT_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
	};

	class NLD_NFPT_OFF: NLD_WLD_OFF
	{
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		backpack = "NLD_Carryall_NFPT_TL";
	};

	class NLD_NFPT_SL: NLD_WLD_SL
	{
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		backpack = "NLD_Carryall_NFPT_TL";
	};

	class NLD_NFPT_TL: NLD_WLD_TL
	{
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_Carryall_NFPT_TL";
	};

	class NLD_NFPT_SLA: NLD_WLD_SLA
	{
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		backpack = "NLD_Carryall_NFPT_B";
	};

	class NLD_NFPT_Ammo: NLD_WLD_Ammo
	{
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_Carryall_NFPT_Ammo";
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPT_AAR: NLD_WLD_rifleman
	{
		displayName = "Assistant Automatic Rifleman";
		vehicleClass = "Infantry_NFPTAN";
		backpack = "NLD_Carryall_NFPT_AAR";
		uniformClass = "NLD_NFPT_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPT_MMG: NLD_WLD_MMG
	{
		displayName = "Medium Machine Gunner";
		backpack = "NLD_Carryall_NFPT_MMG";
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPT_AMMG: NLD_WLD_AMMG
	{
		displayName = "Assistant Medium Machine Gunner";
		vehicleClass = "Infantry_NFPTAN";
		backpack = "NLD_Carryall_NFPT_MMG";
		uniformClass = "NLD_NFPT_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPT_MAT: NLD_WLD_MAT
	{
		displayName = "Medium Anti-Tank";
		backpack = "NLD_Carryall_NFPT_MAT";
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPT_AMAT: NLD_WLD_AMAT
	{
		displayName = "Assistant Medium Anti-Tank";
		backpack = "NLD_Carryall_NFPT_MAT";
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPT_AA: NLD_WLD_AA
	{
		displayName = "Anti-Air";
		vehicleClass = "Infantry_NFPTAN";
		backpack = "NLD_Carryall_NFPT_AA";
		uniformClass = "NLD_NFPT_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPT_AAA: NLD_WLD_AAA
	{
		displayName = "Assistant Anti-Air";
		backpack = "NLD_Carryall_NFPT_AA";
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	}

// NFP-Green
	class NLD_NFPG_rifleman: NLD_WLD_rifleman
	{
		vehicleClass = "Infantry_NFPGREEN";
		backpack = "NLD_Carryall_NFPG_B";
		uniformClass = "NLD_NFPG_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPG_AR: NLD_WLD_AR
	{
		vehicleClass = "Infantry_NFPGREEN";
		backpack = "NLD_Carryall_NFPG_B";
		uniformClass = "NLD_NFPG_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPG_LAT: NLD_WLD_LAT
	{
		vehicleClass = "Infantry_NFPGREEN";
		backpack = "NLD_Carryall_NFPG_AT";
		uniformClass = "NLD_NFPG_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPG_CLS: NLD_WLD_CLS
	{
		vehicleClass = "Infantry_NFPGREEN";
		backpack = "NLD_Carryall_NFPG_Medic";
		uniformClass = "NLD_NFPG_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPG_GL: NLD_WLD_GL
	{
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "NLD_Carryall_NFPG_TL";
	};

	class NLD_NFPG_ENGI: NLD_WLD_ENGI
	{
		vehicleClass = "Infantry_NFPGREEN";
		backpack = "NLD_Carryall_NFPG_Eng";
		uniformClass = "NLD_NFPG_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPG_EXPL: NLD_WLD_EXPL
	{
		vehicleClass = "Infantry_NFPGREEN";
		backpack = "NLD_Carryall_NFPG_Expl";
		uniformClass = "NLD_NFPG_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPG_UAV: NLD_WLD_UAV
	{
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		backpack = "NLD_Carryall_NFPG_UAV";
	};

	class NLD_NFPG_JTAC: NLD_WLD_JTAC
	{
 		vehicleClass = "Infantry_NFPGREEN";
		backpack = "NLD_Carryall_NFPG_JTAC";
		uniformClass = "NLD_NFPG_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
	};

	class NLD_NFPG_OFF: NLD_WLD_OFF
	{
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		backpack = "NLD_Carryall_NFPG_TL";
	};

	class NLD_NFPG_SL: NLD_WLD_SL
	{
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		backpack = "NLD_Carryall_NFPG_TL";
	};

	class NLD_NFPG_TL: NLD_WLD_TL
	{
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_Carryall_NFPG_TL";
	};

	class NLD_NFPG_SLA: NLD_WLD_SLA
	{
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		backpack = "NLD_Carryall_NFPG_B";
	};

	class NLD_NFPG_Ammo: NLD_WLD_Ammo
	{
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_Carryall_NFPG_Ammo";
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPG_AAR: NLD_WLD_rifleman
	{
		displayName = "Assistant Automatic Rifleman";
		vehicleClass = "Infantry_NFPGREEN";
		backpack = "NLD_Carryall_NFPG_AAR";
		uniformClass = "NLD_NFPG_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPG_MMG: NLD_WLD_MMG
	{
		displayName = "Medium Machine Gunner";
		backpack = "NLD_Carryall_NFPG_MMG";
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPG_AMMG: NLD_WLD_AMMG
	{
		displayName = "Assistant Medium Machine Gunner";
		vehicleClass = "Infantry_NFPGREEN";
		backpack = "NLD_Carryall_NFPG_MMG";
		uniformClass = "NLD_NFPG_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPG_MAT: NLD_WLD_MAT
	{
		displayName = "Medium Anti-Tank";
		backpack = "NLD_Carryall_NFPG_MAT";
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPG_AMAT: NLD_WLD_AMAT
	{
		displayName = "Assistant Medium Anti-Tank";
		backpack = "NLD_Carryall_NFPG_MAT";
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPG_AA: NLD_WLD_AA
	{
		displayName = "Anti-Air";
		vehicleClass = "Infantry_NFPGREEN";
		backpack = "NLD_Carryall_NFPG_AA";
		uniformClass = "NLD_NFPG_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_NFPG_AAA: NLD_WLD_AAA
	{
		displayName = "Assistant Anti-Air";
		backpack = "NLD_Carryall_NFPG_AA";
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	}

// Winter

	class NLD_WTR_rifleman: NLD_WLD_rifleman
	{
		vehicleClass = "Infantry_Winter";
		backpack = "NLD_Carryall_WTR_B";
		uniformClass = "NLD_WTR_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Winter\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_WTR_AR: NLD_WLD_AR
	{
		vehicleClass = "Infantry_Winter";
		backpack = "NLD_Carryall_WTR_B";
		uniformClass = "NLD_WTR_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Winter\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_WTR_LAT: NLD_WLD_LAT
	{
		vehicleClass = "Infantry_WINTER";
		backpack = "NLD_Carryall_WTR_AT";
		uniformClass = "NLD_WTR_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_WTR_CLS: NLD_WLD_CLS
	{
		vehicleClass = "Infantry_WINTER";
		backpack = "NLD_Carryall_WTR_Medic";
		uniformClass = "NLD_WTR_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_WTR_GL: NLD_WLD_GL
	{
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "NLD_Carryall_WTR_TL";
	};

	class NLD_WTR_ENGI: NLD_WLD_ENGI
	{
		vehicleClass = "Infantry_WINTER";
		backpack = "NLD_Carryall_WTR_Eng";
		uniformClass = "NLD_WTR_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_WTR_EXPL: NLD_WLD_EXPL
	{
		vehicleClass = "Infantry_WINTER";
		backpack = "NLD_Carryall_WTR_Expl";
		uniformClass = "NLD_WTR_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_WTR_UAV: NLD_WLD_UAV
	{
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		backpack = "NLD_Carryall_WTR_UAV";
	};

	class NLD_WTR_JTAC: NLD_WLD_JTAC
	{
 		vehicleClass = "Infantry_WINTER";
		backpack = "NLD_Carryall_WTR_JTAC";
		uniformClass = "NLD_WTR_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
	};

	class NLD_WTR_OFF: NLD_WLD_OFF
	{
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		backpack = "NLD_Carryall_WTR_TL";
	};

	class NLD_WTR_SL: NLD_WLD_SL
	{
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		backpack = "NLD_Carryall_WTR_TL";
	};

	class NLD_WTR_TL: NLD_WLD_TL
	{
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_Carryall_WTR_TL";
	};

	class NLD_WTR_SLA: NLD_WLD_SLA
	{
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		backpack = "NLD_Carryall_WTR_B";
	};

	class NLD_WTR_Ammo: NLD_WLD_Ammo
	{
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_Carryall_WTR_Ammo";
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_WTR_AAR: NLD_WLD_rifleman
	{
		displayName = "Assistant Automatic Rifleman";
		vehicleClass = "Infantry_WINTER";
		backpack = "NLD_Carryall_WTR_AAR";
		uniformClass = "NLD_WTR_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_WTR_MMG: NLD_WLD_MMG
	{
		displayName = "Medium Machine Gunner";
		backpack = "NLD_Carryall_WTR_MMG";
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_WTR_AMMG: NLD_WLD_AMMG
	{
		displayName = "Assistant Medium Machine Gunner";
		vehicleClass = "Infantry_WINTER";
		backpack = "NLD_Carryall_WTR_MMG";
		uniformClass = "NLD_WTR_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_WTR_MAT: NLD_WLD_MAT
	{
		displayName = "Medium Anti-Tank";
		backpack = "NLD_Carryall_WTR_MAT";
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_WTR_AMAT: NLD_WLD_AMAT
	{
		displayName = "Assistant Medium Anti-Tank";
		backpack = "NLD_Carryall_WTR_MAT";
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_WTR_AA: NLD_WLD_AA
	{
		displayName = "Anti-Air";
		vehicleClass = "Infantry_WINTER";
		backpack = "NLD_Carryall_WTR_AA";
		uniformClass = "NLD_WTR_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_WTR_AAA: NLD_WLD_AAA
	{
		displayName = "Assistant Anti-Air";
		backpack = "NLD_Carryall_WTR_AA";
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Uniform.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	}

// "Special" forces (black)

	class NLD_SF_Operator: NLD_WLD_rifleman
	{
		displayName = "Operator";
		vehicleClass = "Infantry_SF";
		backpack = "NLD_Carryall_SF_B";
		uniformClass = "NLD_SF_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\SF\Data\Uniform.paa", "\NLD Infantry Units\Badges\KCT.paa"};
		hasDriver = 1;
		linkedItems[] = {"NLD_SF_PlateCarrier", "NLD_SF_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_SF_PlateCarrier", "NLD_SF_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_snds_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_snds_F", "Throw", "Put", "Rangefinder"}; 
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
	};

	class NLD_SF_MEDIC: NLD_SF_Operator
	{
		displayName = "Medic";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_Carryall_SF_Medic";
		icon = "iconManMedic";
	};

	class NLD_SF_COMSPEC: NLD_SF_Operator
	{
		displayName = "ComSpec";
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_snds_F", "Throw", "Put", "Laserdesignator"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_snds_F", "Throw", "Put", "Laserdesignator"};
		backpack = "NLD_Carryall_SF_ComSpec";
	};

	class NLD_SF_DEMSPEC: NLD_SF_Operator
	{
		displayName = "DemSpec";
		icon = "iconManExplosive";
		backpack = "NLD_Carryall_SF_Expl";
	};

	class NLD_SF_TL: NLD_SF_Operator
	{
		displayName = "Team Leader";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		icon = "iconManLeader";
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_snds_F", "Throw", "Put", "Laserdesignator"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_snds_F", "Throw", "Put", "Laserdesignator"};
		backpack = "NLD_Carryall_SF_ComSpec";
	};

	class NLD_SF_SLA: NLD_SF_Operator
	{
		displayName = "Sharpshooter";
		backpack = "NLD_Carryall_SF_SLA"
		linkedItems[] = {"NLD_SF_PlateCarrier", "NLD_SF_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio" };
		respawnLinkedItems[] = {"NLD_SF_PlateCarrier", "NLD_SF_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"srifle_EBR_ARCO_pointer_F", "hgun_P07_snds_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"srifle_EBR_ARCO_pointer_F", "hgun_P07_snds_F", "Throw", "Put", "Rangefinder"}; 
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag","20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag","20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
	};

	class NLD_SF_AT: NLD_SF_Operator
	{
		displayName = "Operator (AT)";
		icon = "iconManAT";
		backpack = "NLD_Carryall_SF_AT";
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_snds_F", "Throw", "Put", "launch_B_Titan_short_F"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_snds_F", "Throw", "Put", "launch_B_Titan_short_F"};
	};

	class NLD_SF_AA: NLD_SF_Operator
	{
		displayName = "Operator (AA)";
		icon = "iconManAT";
		backpack = "NLD_Carryall_SF_AA";
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_snds_F", "Throw", "Put", "launch_B_Titan_F"}; 
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F", "hgun_P07_snds_F", "Throw", "Put", "launch_B_Titan_F"};
	};

	class NLD_SF_AR: NLD_SF_Operator
	{
		displayName = "Machinegunner";
		icon = "iconManMG";
		backpack = "NLD_Carryall_SF_AR"
		linkedItems[] = {"NLD_SF_PlateCarrier", "NLD_SF_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_SF_PlateCarrier", "NLD_SF_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_snds_F", "Throw", "Put", "Rangefinder"}; 
		respawnWeapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_snds_F", "Throw", "Put", "Rangefinder"}; 
		magazines[] = {"200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
	};

// SF MTP

	class NLD_MTP_Operator: NLD_SF_Operator
	{
		vehicleClass = "Infantry_SFMTP";
		backpack = "NLD_Carryall_MTP_B";
		uniformClass = "NLD_MTP_Camo";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\MTP\Data\Uniform.paa", "\NLD Infantry Units\Badges\KCT.paa"};
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class NLD_MTP_MEDIC: NLD_SF_MEDIC
	{
		vehicleClass = "Infantry_SFMTP";
		backpack = "NLD_Carryall_MTP_Medic";
		uniformClass = "NLD_MTP_Camo";
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
	};

	class NLD_MTP_COMSPEC: NLD_SF_COMSPEC
	{
		vehicleClass = "Infantry_SFMTP";
		backpack = "NLD_Carryall_MTP_ComSpec";
		uniformClass = "NLD_MTP_Camo";
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
	};

	class NLD_MTP_DEMSPEC: NLD_SF_DEMSPEC
	{
		vehicleClass = "Infantry_SFMTP";
		backpack = "NLD_Carryall_MTP_Expl";
		uniformClass = "NLD_MTP_Camo";
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
	};

	class NLD_MTP_TL: NLD_SF_TL
	{
		vehicleClass = "Infantry_SFMTP";
		backpack = "NLD_Carryall_MTP_ComSpec";
		uniformClass = "NLD_MTP_Camo";
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
	};

	class NLD_MTP_SLA: NLD_SF_SLA
	{
		vehicleClass = "Infantry_SFMTP";
		backpack = "NLD_Carryall_MTP_SLA";
		uniformClass = "NLD_MTP_Camo";
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio" };
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
	};

	class NLD_MTP_AT: NLD_SF_AT
	{
		vehicleClass = "Infantry_SFMTP";
		backpack = "NLD_Carryall_MTP_AT";
		uniformClass = "NLD_MTP_Camo";
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
	};

	class NLD_MTP_AA: NLD_SF_AA
	{
		vehicleClass = "Infantry_SFMTP";
		backpack = "NLD_Carryall_MTP_AA";
		uniformClass = "NLD_MTP_Camo";
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
	};

	class NLD_MTP_AR: NLD_SF_AR
	{
		vehicleClass = "Infantry_SFMTP";
		backpack = "NLD_Carryall_MTP_AR";
		uniformClass = "NLD_MTP_Camo";
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
	};

// Support
	class NLD_Helipilot: B_Helipilot_F
	{
		author = "Lowlands Tactical";
		side = 1;
		scope = 2; 
		displayName = "Heli Pilot";
		faction = "NLD_Units";
		vehicleClass = "Infantry_Support";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLD_Helipilot_base";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Support\Data\pilotcoveralls_co.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		faceType = "Man_A3";
	};

	class NLD_Helicrew: B_Helipilot_F
	{
		author = "Lowlands Tactical";
		side = 1;
		scope = 2; 
		displayName = "Heli Crew";
		faction = "NLD_Units";
		vehicleClass = "Infantry_Support";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLD_Helipilot_base";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Support\Data\coveralls_co.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		faceType = "Man_A3";
	};

	class NLD_Crew: B_Helipilot_F
	{
		author = "Lowlands Tactical";
		side = 1;
		scope = 2; 
		displayName = "Crew";
		faction = "NLD_Units";
		vehicleClass = "Infantry_Support";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLD_Helicrew_base";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Support\Data\coveralls_co.paa", "\NLD Infantry Units\Badges\11LMB.paa"};
		faceType = "Man_A3";
		linkedItems[] = {"V_Chestrig_oli", "H_HelmetCrew_I", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS" };
		respawnLinkedItems[] = {"V_Chestrig_oli", "H_HelmetCrew_I", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS" };
	};


// Backpacks
	class B_Carryall_oli;	// External class reference
	class B_UAV_01_backpack_F;	// External class reference

	
	class NLD_Carryall_DST_B : B_Carryall_oli {
		displayName = "NLD Desert Carryall";
		picture = "\NLD Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_Carryall_WLD_B : NLD_Carryall_DST_B {
		displayName = "NLD Woodland Carryall";
		picture = "\NLD Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPT_B : NLD_Carryall_DST_B {
		displayName = "NLD NFP-Tan Carryall";
		picture = "\NLD Infantry Units\Units\NFP-Tan\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPG_B : NLD_Carryall_DST_B {
		displayName = "NLD NFP-Green Carryall";
		picture = "\NLD Infantry Units\Units\NFP-Green\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_Carryall_WTR_B : NLD_Carryall_DST_B {
		displayName = "NLD Winter Carryall";
		picture = "\NLD Infantry Units\Units\Winter\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Winter\Data\Backpack.paa"};
	};	

	class NLD_Carryall_DST_GL : B_Carryall_oli {
		displayName = "NLD Carryall GL Desert";
		picture = "\NLD Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=12;
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
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=2;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_Carryall_WLD_GL : NLD_Carryall_DST_GL {
		displayName = "NLD Carryall GL Woodland";
		picture = "\NLD Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPT_GL : NLD_Carryall_DST_GL {
		displayName = "NLD Carryall GL NFP-Tan";
		picture = "\NLD Infantry Units\Units\NFP-Tan\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPG_GL : NLD_Carryall_DST_GL {
		displayName = "NLD Carryall GL NFP-Green";
		picture = "\NLD Infantry Units\Units\NFP-Green\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_Carryall_WTR_GL : NLD_Carryall_DST_GL {
		displayName = "NLD Carryall GL Winter";
		picture = "\NLD Infantry Units\Units\Winter\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_Carryall_DST_TL : B_Carryall_oli {
		displayName = "NLD Carryall GL Desert";
		picture = "\NLD Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
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
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_Carryall_WLD_TL : NLD_Carryall_DST_TL {
		displayName = "NLD Carryall TL Woodland";
		picture = "\NLD Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPT_TL : NLD_Carryall_DST_TL {
		displayName = "NLD Carryall TL NFP-Tan";
		picture = "\NLD Infantry Units\Units\NFP-Tan\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPG_TL : NLD_Carryall_DST_TL {
		displayName = "NLD Carryall TL NFP-Green";
		picture = "\NLD Infantry Units\Units\NFP-Green\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_Carryall_WTR_TL : NLD_Carryall_DST_TL {
		displayName = "NLD Carryall TL Winter";
		picture = "\NLD Infantry Units\Units\Winter\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_Carryall_DST_Medic : B_Carryall_oli {
		displayName = "NLD Carryall Medic Desert";
		picture = "\NLD Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Backpack.paa"};

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
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_Carryall_WLD_Medic : NLD_Carryall_DST_Medic {
		displayName = "NLD Carryall Medic Woodland";
		picture = "\NLD Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPT_Medic : NLD_Carryall_DST_Medic {
		displayName = "NLD Carryall Medic NFP-Tan";
		picture = "\NLD Infantry Units\Units\NFP-Tan\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPG_Medic : NLD_Carryall_DST_Medic {
		displayName = "NLD Carryall Medic NFP-Green";
		picture = "\NLD Infantry Units\Units\NFP-Green\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_Carryall_WTR_Medic : NLD_Carryall_DST_Medic {
		displayName = "NLD Carryall Medic Winter";
		picture = "\NLD Infantry Units\Units\Winter\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_Carryall_DST_AT : B_Carryall_oli {
		displayName = "NLD Carryall AT Desert";
		picture = "\NLD Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Backpack.paa"};

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
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_Carryall_WLD_AT : NLD_Carryall_DST_AT {
		displayName = "NLD Carryall AT Woodland";
		picture = "\NLD Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPT_AT : NLD_Carryall_DST_AT {
		displayName = "NLD Carryall AT NFP-Tan";
		picture = "\NLD Infantry Units\Units\NFP-Tan\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPG_AT : NLD_Carryall_DST_AT {
		displayName = "NLD Carryall AT NFP-Green";
		picture = "\NLD Infantry Units\Units\NFP-Green\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_Carryall_WTR_AT : NLD_Carryall_DST_AT {
		displayName = "NLD Carryall AT Winter";
		picture = "\NLD Infantry Units\Units\Winter\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_Carryall_DST_AR : B_Carryall_oli {
		displayName = "NLD Carryall AR Desert";
		picture = "\NLD Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Backpack.paa"};

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
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};

	class NLD_Carryall_NFPT_AR : NLD_Carryall_DST_AR {
		displayName = "NLD Carryall AR NFP-Tan";
		picture = "\NLD Infantry Units\Units\NFP-Tan\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPG_AR : NLD_Carryall_DST_AR {
		displayName = "NLD Carryall AR NFP-Green";
		picture = "\NLD Infantry Units\Units\NFP-Green\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_Carryall_WTR_AR : NLD_Carryall_DST_AR {
		displayName = "NLD Carryall AR Winter";
		picture = "\NLD Infantry Units\Units\Winter\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_Carryall_DST_Eng : B_Carryall_oli {
		displayName = "NLD Carryall Eng Desert";
		picture = "\NLD Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Backpack.paa"};

		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
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
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_Carryall_WLD_Eng : NLD_Carryall_DST_Eng {
		displayName = "NLD Carryall Eng Woodland";
		picture = "\NLD Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPT_Eng : NLD_Carryall_DST_Eng {
		displayName = "NLD Carryall Eng NFP-Tan";
		picture = "\NLD Infantry Units\Units\NFP-Tan\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPG_Eng : NLD_Carryall_DST_Eng {
		displayName = "NLD Carryall Eng NFP-Green";
		picture = "\NLD Infantry Units\Units\NFP-Green\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_Carryall_WTR_Eng : NLD_Carryall_DST_Eng {
		displayName = "NLD Carryall Eng Winter";
		picture = "\NLD Infantry Units\Units\Winter\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_Carryall_DST_Ammo : B_Carryall_oli {
		displayName = "NLD Carryall Ammo Desert";
		picture = "\NLD Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=5;
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
				count=10;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_Carryall_WLD_Ammo : NLD_Carryall_DST_Ammo {
		displayName = "NLD Carryall Ammo Woodland";
		picture = "\NLD Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPT_Ammo : NLD_Carryall_DST_Ammo {
		displayName = "NLD Carryall Ammo NFP-Tan";
		picture = "\NLD Infantry Units\Units\NFP-Tan\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPG_Ammo : NLD_Carryall_DST_Ammo {
		displayName = "NLD Carryall Ammo NFP-Green";
		picture = "\NLD Infantry Units\Units\NFP-Green\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_Carryall_WTR_Ammo : NLD_Carryall_DST_Ammo {
		displayName = "NLD Carryall Ammo Winter";
		picture = "\NLD Infantry Units\Units\Winter\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_Carryall_DST_Expl : B_Carryall_oli {
		displayName = "NLD Carryall Expl Desert";
		picture = "\NLD Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=3;
			};
			class _xx_SatchelCharge_Remote_Mag 
			{
				magazine="SatchelCharge_Remote_Mag";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
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
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_Carryall_WLD_Expl : NLD_Carryall_DST_Expl {
		displayName = "NLD Carryall Expl Woodland";
		picture = "\NLD Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPT_Expl : NLD_Carryall_DST_Expl {
		displayName = "NLD Carryall Expl NFP-Tan";
		picture = "\NLD Infantry Units\Units\NFP-Tan\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPG_Expl : NLD_Carryall_DST_Expl {
		displayName = "NLD Carryall Expl NFP-Green";
		picture = "\NLD Infantry Units\Units\NFP-Green\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_Carryall_WTR_Expl : NLD_Carryall_DST_Expl {
		displayName = "NLD Carryall Expl Winter";
		picture = "\NLD Infantry Units\Units\Winter\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Winter\Data\Backpack.paa"};
	};
	
	class NLD_Carryall_DST_UAV : B_UAV_01_backpack_F {
		displayName = "NLD Carryall UAV Desert";
		picture = "\NLD Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Camo.paa"};

		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_Carryall_WLD_UAV : NLD_Carryall_DST_UAV {
		displayName = "NLD Carryall UAV Woodland";
		picture = "\NLD Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPT_UAV : NLD_Carryall_DST_UAV {
		displayName = "NLD Carryall UAV NFP-Tan";
		picture = "\NLD Infantry Units\Units\NFP-Tan\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPG_UAV : NLD_Carryall_DST_UAV {
		displayName = "NLD Carryall UAV NFP-Green";
		picture = "\NLD Infantry Units\Units\NFP-Green\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_Carryall_WTR_UAV : NLD_Carryall_DST_UAV {
		displayName = "NLD Carryall UAV Winter";
		picture = "\NLD Infantry Units\Units\Winter\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_Carryall_DST_JTAC : B_Carryall_oli {
		displayName = "NLD Carryall JTAC Desert";
		picture = "\NLD Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Backpack.paa"};

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
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
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
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_Carryall_WLD_JTAC : NLD_Carryall_DST_JTAC {
		displayName = "NLD Carryall JTAC Woodland";
		picture = "\NLD Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPT_JTAC : NLD_Carryall_DST_JTAC {
		displayName = "NLD Carryall JTAC NFP-Tan";
		picture = "\NLD Infantry Units\Units\NFP-Tan\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPG_JTAC : NLD_Carryall_DST_JTAC {
		displayName = "NLD Carryall JTAC NFP-Green";
		picture = "\NLD Infantry Units\Units\NFP-Green\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_Carryall_WTR_JTAC : NLD_Carryall_DST_JTAC {
		displayName = "NLD Carryall JTAC Winter";
		picture = "\NLD Infantry Units\Units\Winter\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_Carryall_DST_AAR : B_Carryall_oli {
		displayName = "NLD Carryall AAR Desert";
		picture = "\NLD Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=7;
			};
			class _xx_100Rnd_65x39_caseless_mag_Tracer
			{
				magazine="100Rnd_65x39_caseless_mag_Tracer";
				count=5;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_Carryall_WLD_AAR : NLD_Carryall_DST_AAR {
		displayName = "NLD Carryall AAR Woodland";
		picture = "\NLD Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPT_AAR : NLD_Carryall_DST_AAR {
		displayName = "NLD Carryall AAR NFP-Tan";
		picture = "\NLD Infantry Units\Units\NFP-Tan\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPG_AAR : NLD_Carryall_DST_AAR {
		displayName = "NLD Carryall AAR NFP-Green";
		picture = "\NLD Infantry Units\Units\NFP-Green\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_Carryall_WTR_AAR : NLD_Carryall_DST_AAR {
		displayName = "NLD Carryall AAR Winter";
		picture = "\NLD Infantry Units\Units\Winter\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_Carryall_DST_MMG : B_Carryall_oli {
		displayName = "NLD Carryall MMG Desert";
		picture = "\NLD Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=4;
			};
			class _xx_200Rnd_65x39_cased_Box_Tracer
			{
				magazine="200Rnd_65x39_cased_Box_Tracer";
				count=2;
			};
			
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_Carryall_WLD_MMG : NLD_Carryall_DST_MMG {
		displayName = "NLD Carryall MMG Woodland";
		picture = "\NLD Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPT_MMG : NLD_Carryall_DST_MMG {
		displayName = "NLD Carryall MMG NFP-Tan";
		picture = "\NLD Infantry Units\Units\NFP-Tan\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPG_MMG : NLD_Carryall_DST_MMG {
		displayName = "NLD Carryall MMG NFP-Green";
		picture = "\NLD Infantry Units\Units\NFP-Green\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_Carryall_WTR_MMG : NLD_Carryall_DST_MMG {
		displayName = "NLD Carryall MMG Winter";
		picture = "\NLD Infantry Units\Units\Winter\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_Carryall_DST_MAT : B_Carryall_oli {
		displayName = "NLD Carryall MAT Desert";
		picture = "\NLD Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_Carryall_WLD_MAT : NLD_Carryall_DST_MAT {
		displayName = "NLD Carryall MAT Woodland";
		picture = "\NLD Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPT_MAT : NLD_Carryall_DST_MAT {
		displayName = "NLD Carryall MAT NFP-Tan";
		picture = "\NLD Infantry Units\Units\NFP-Tan\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPG_MAT : NLD_Carryall_DST_MAT {
		displayName = "NLD Carryall MAT NFP-Green";
		picture = "\NLD Infantry Units\Units\NFP-Green\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_Carryall_WTR_MAT : NLD_Carryall_DST_MAT {
		displayName = "NLD Carryall MAT Winter";
		picture = "\NLD Infantry Units\Units\Winter\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_Carryall_DST_AA : B_Carryall_oli {
		displayName = "NLD Carryall AA Desert";
		picture = "\NLD Infantry Units\Units\Desert\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_Carryall_WLD_AA : NLD_Carryall_DST_AA {
		displayName = "NLD Carryall AA Woodland";
		picture = "\NLD Infantry Units\Units\Woodland\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPT_AA : NLD_Carryall_DST_AA {
		displayName = "NLD Carryall AA NFP-Tan";
		picture = "\NLD Infantry Units\Units\NFP-Tan\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_Carryall_NFPG_AA : NLD_Carryall_DST_AA {
		displayName = "NLD Carryall AA NFP-Green";
		picture = "\NLD Infantry Units\Units\NFP-Green\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_Carryall_WTR_AA : NLD_Carryall_DST_AA {
		displayName = "NLD Carryall AA Winter";
		picture = "\NLD Infantry Units\Units\Winter\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Winter\Data\Backpack.paa"};
	};


// SF Backpacks

	class NLD_Carryall_SF_B : B_Carryall_oli {
		displayName = "NLD Black Carryall";
		picture = "\NLD Infantry Units\Units\SF\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\SF\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_muzzle_snds_H 
			{
				name="muzzle_snds_H";
				count = 1;
			};
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Commandos
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
		};
	};

	class NLD_Carryall_MTP_B : NLD_Carryall_SF_B
	{
		displayName = "NLD MTP Carryall";
		picture = "\NLD Infantry Units\Units\MTP\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_Carryall_SF_Medic : B_Carryall_oli {
		displayName = "NLD Black Carryall Medic";
		picture = "\NLD Infantry Units\Units\SF\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\SF\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
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
			class _xx_muzzle_snds_H 
			{
				name="muzzle_snds_H";
				count = 1;
			};
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Dutch_Beret_Commandos
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
		};
	};

	class NLD_Carryall_MTP_Medic : NLD_Carryall_SF_Medic
	{
		displayName = "NLD MTP Carryall Medic";
		picture = "\NLD Infantry Units\Units\MTP\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_Carryall_SF_ComSpec : B_Carryall_oli {
		displayName = "NLD Black Carryall ComSpec";
		picture = "\NLD Infantry Units\Units\SF\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\SF\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=1;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_muzzle_snds_H 
			{
				name="muzzle_snds_H";
				count = 1;
			};
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Commandos
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
		};
	};

	class NLD_Carryall_MTP_ComSpec : NLD_Carryall_SF_ComSpec {
		displayName = "NLD MTP Carryall ComSpec";
		picture = "\NLD Infantry Units\Units\MTP\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_Carryall_SF_Expl : B_Carryall_oli {
		displayName = "NLD Black Carryall Expl";
		picture = "\NLD Infantry Units\Units\SF\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\SF\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=3;
			};
			class _xx_SatchelCharge_Remote_Mag 
			{
				magazine="SatchelCharge_Remote_Mag";
				count=1;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_muzzle_snds_H 
			{
				name="muzzle_snds_H";
				count = 1;
			};
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
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
			class _xx_Dutch_Beret_Commandos
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
		};
	};	

	class NLD_Carryall_MTP_Expl : NLD_Carryall_SF_Expl {
		displayName = "NLD MTP Carryall Expl";
		picture = "\NLD Infantry Units\Units\MTP\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_Carryall_SF_AT : B_Carryall_oli {
		displayName = "NLD Black Carryall AT";
		picture = "\NLD Infantry Units\Units\SF\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\SF\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=3;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_muzzle_snds_H 
			{
				name="muzzle_snds_H";
				count = 1;
			};
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Commandos
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
		};
	};

	class NLD_Carryall_MTP_AT : NLD_Carryall_SF_AT {
		displayName = "NLD MTP Carryall AT";
		picture = "\NLD Infantry Units\Units\MTP\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_Carryall_SF_AA : B_Carryall_oli {
		displayName = "NLD Black Carryall AA";
		picture = "\NLD Infantry Units\Units\SF\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\SF\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_muzzle_snds_H 
			{
				name="muzzle_snds_H";
				count = 1;
			};
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Commandos
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
		};
	};

	class NLD_Carryall_MTP_AA : NLD_Carryall_SF_AA {
		displayName = "NLD MTP Carryall AA";
		picture = "\NLD Infantry Units\Units\MTP\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_Carryall_SF_SLA : B_Carryall_oli {
		displayName = "NLD Black Carryall Sharpshooter";
		picture = "\NLD Infantry Units\Units\SF\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\SF\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Commandos
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
			class _xx_muzzle_snds_B
			{
				name="muzzle_snds_B";
				count=1;
			};
		};
	};

	class NLD_Carryall_MTP_SLA : NLD_Carryall_SF_SLA {
		displayName = "NLD MTP Carryall Sharpshooter";
		picture = "\NLD Infantry Units\Units\MTP\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_Carryall_SF_AR : B_Carryall_oli {
		displayName = "NLD Black Carryall AR";
		picture = "\NLD Infantry Units\Units\SF\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\SF\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Commandos
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
			class _xx_muzzle_snds_H_MG
			{
				name="muzzle_snds_H_MG";
				count=1;
			};
		};
	};

	class NLD_Carryall_MTP_AR : NLD_Carryall_SF_AR {
		displayName = "NLD MTP Carryall AR";
		picture = "\NLD Infantry Units\Units\MTP\Data\uim\Backpack.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\MTP\Data\Backpack.paa"};
	};

};

class cfgWeapons {
	class Uniform_Base;	// External class reference
	class UniformItem;	// External class reference
	class U_B_GhillieSuit;	// External class reference
	class ItemCore;		// External class reference
	class HeadgearItem;	// External class reference
	class H_HelmetIA;	// External class reference
	class NVGoggles_OPFOR;	// External class reference
	class ItemInfo;	// External class reference
	class Vest_Camo_Base;	// External class reference
	class VestItem;	// External class reference
	class U_I_CombatUniform;	// External class reference
	class U_B_HeliPilotCoveralls;	// External class reference
	class V_PlateCarrier1_blk;
	class H_HelmetB;
	
	class NLD_DST_Camo : Uniform_Base {
		scope = 2;
		displayName = "NLD Desert Camo";
		picture = "\NLD Infantry Units\Units\Desert\Data\uim\Uniform.jpg";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_DST_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	
	class NLD_DST_Helmet : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "NLD Desert Helmet";
		picture = "\NLD Infantry Units\Units\Desert\Data\uim\Helmet.jpg";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Helmet.paa"};
		
		class ItemInfo : HeadgearItem {
			mass = 1;
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			modelSides[] = {3, 1};
			armor = 3*0.5;
			passThrough = 0.7;
			hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Helmet.paa"};
			hiddenSelections[] = {"camo"};
		};
	};

	class NLD_DST_BaseballCap: ItemCore{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "NLD Desert Baseball Cap";
		picture = "\NLD Infantry Units\Units\Desert\Data\uim\BaseballCap.jpg";
		model = "\A3\Characters_F\common\capb";
        hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\BaseballCap.paa"};
        hiddenSelections[] = {"Camo"};
                
		class ItemInfo: HeadgearItem{
			mass = 1;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
            hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\BaseballCap.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};

	class NLD_DST_BoonieHat: ItemCore{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "NLD Desert Boonie Hat";
		picture = "\NLD Infantry Units\Units\Desert\Data\uim\BoonieHat.jpg";
		model = "\A3\Characters_F\Common\booniehat";
        hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\BoonieHat.paa"};
        hiddenSelections[] = {"Camo"};      

		class ItemInfo: HeadgearItem{
			mass = 1;
			uniformmodel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
            hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\BoonieHat.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	
	 class NLD_NVGoggles : NVGoggles_OPFOR {
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\A3\Weapons_f\binocular\nvg_proxy";
		displayName = "NV Goggles (NLD)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f\common\data\nvg_opfor_co.paa"};
  
		class ItemInfo : ItemInfo {
			uniformModel = "A3\weapons_f\binocular\nvg_proxy.p3d";
			modelOff = "A3\weapons_f\binocular\NVG_proxy_off.p3d";
			hiddenSelections[] = {"camo"};
		};
	};

	class NLD_WLD_Camo : Uniform_Base {
		scope = 2;
		displayName = "NLD Woodland Camo";
		picture = "\NLD Infantry Units\Units\Woodland\Data\uim\Uniform.jpg";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_WLD_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	
	class NLD_NFPT_Camo : NLD_WLD_Camo {
		scope = 2;
		displayName = "NLD NFP-Tan Camo";
		picture = "\NLD Infantry Units\Units\NFP-Tan\Data\uim\Uniform.jpg";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_NFPT_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	};

	class NLD_NFPG_Camo : NLD_WLD_Camo {
		scope = 2;
		displayName = "NLD NFP-Green Camo";
		picture = "\NLD Infantry Units\Units\NFP-Green\Data\uim\Uniform.jpg";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_NFPG_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	};

	class NLD_WTR_Camo : NLD_WLD_Camo {
		scope = 2;
		displayName = "NLD Winter Camo";
		picture = "\NLD Infantry Units\Units\Winter\Data\uim\Uniform.jpg";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_WTR_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	};

	class NLD_SF_CAMO : NLD_WLD_Camo {
		scope = 2;
		displayName = "NLD Black Camo";
		picture = "\NLD Infantry Units\Units\SF\Data\uim\Uniform.jpg";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_SF_Operator";
			containerClass = "Supply60";
			mass = 1;
		};
	};

	class NLD_MTP_CAMO : NLD_WLD_Camo {
		scope = 2;
		displayName = "NLD MTP Camo";
		picture = "\NLD Infantry Units\Units\MTP\Data\uim\Uniform.jpg";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_MTP_Operator";
			containerClass = "Supply60";
			mass = 1;
		};
	};

	class NLD_WLD_Helmet : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "NLD Woodland Helmet";
		picture = "\NLD Infantry Units\Units\Woodland\Data\uim\Helmet.jpg";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Woodland\Data\Helmet.paa"};
		
		class ItemInfo : HeadgearItem {
			mass = 1;
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			modelSides[] = {3, 1};
			armor = 3*0.5;
			passThrough = 0.7;
                        hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Woodland\Data\BaseballCap.paa"};
			hiddenSelections[] = {"camo"};
		};
	};

	class NLD_NFPT_Helmet : NLD_WLD_Helmet {
		displayName = "NLD NFP-Tan Helmet";
		picture = "\NLD Infantry Units\Units\NFP-Tan\Data\uim\Helmet.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Helmet.paa"};		
	};

	class NLD_NFPG_Helmet : NLD_WLD_Helmet {
		displayName = "NLD NFP-Green Helmet";
		picture = "\NLD Infantry Units\Units\NFP-Green\Data\uim\Helmet.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Helmet.paa"};		
	};

	class NLD_WTR_Helmet : NLD_WLD_Helmet {
		displayName = "NLD Winter Helmet";
		picture = "\NLD Infantry Units\Units\Winter\Data\uim\Helmet.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Winter\Data\Helmet.paa"};		
	};

	class NLD_WLD_BaseballCap: ItemCore{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "NLD Woodland Baseball Cap";
		picture = "\NLD Infantry Units\Units\Woodland\Data\uim\BaseballCap.jpg";
		model = "\A3\Characters_F\common\capb";
        hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Woodland\Data\BaseballCap.paa"};
        hiddenSelections[] = {"Camo"};
                
		class ItemInfo: HeadgearItem{
			mass = 1;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
            hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Woodland\Data\BaseballCap.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};

	class NLD_NFPT_BaseballCap : NLD_WLD_BaseballCap {
		displayName = "NLD NFP-Tan Baseball Cap";
		picture = "\NLD Infantry Units\Units\NFP-Tan\Data\uim\BaseballCap.jpg";
        hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\BaseballCap.paa"};
	};

	class NLD_NFPG_BaseballCap : NLD_WLD_BaseballCap {
		displayName = "NLD NFP-Green Baseball Cap";
		picture = "\NLD Infantry Units\Units\NFP-Green\Data\uim\BaseballCap.jpg";
        hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\BaseballCap.paa"};
	};

	class NLD_SF_BaseballCap : NLD_WLD_BaseballCap {
		displayName = "NLD Black Baseball Cap";
		picture = "\NLD Infantry Units\Units\SF\Data\uim\BaseballCap.jpg";
        hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\SF\Data\BaseballCap.paa"};
	};	

	class NLD_WLD_BoonieHat: ItemCore{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "NLD Woodland Boonie Hat";
		picture = "\NLD Infantry Units\Units\Woodland\Data\uim\BoonieHat.jpg";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Woodland\Data\BoonieHat.paa"};
		hiddenSelections[] = {"Camo"};

		class ItemInfo: HeadgearItem{
			mass = 1;
			uniformmodel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
            hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Woodland\Data\BoonieHat.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	
	class NLD_NFPT_BoonieHat : NLD_WLD_BoonieHat {
		displayName = "NLD NFP-Tan Boonie Hat";
		picture = "\NLD Infantry Units\Units\NFP-Tan\Data\uim\BoonieHat.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\BoonieHat.paa"};
	};

	class NLD_NFPG_BoonieHat : NLD_WLD_BoonieHat {
		displayName = "NLD NFP-Green Boonie Hat";
		picture = "\NLD Infantry Units\Units\NFP-Green\Data\uim\BoonieHat.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\BoonieHat.paa"};
	};

	class NLD_SF_BoonieHat : NLD_WLD_BoonieHat {
		displayName = "NLD Black Boonie Hat";
		picture = "\NLD Infantry Units\Units\SF\Data\uim\BoonieHat.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\SF\Data\BoonieHat.paa"};
	};

	class NLD_WLD_Vest : Vest_Camo_Base {
		scope = 2;
		displayName = "NLD Woodland Vest";
		picture = "\NLD Infantry Units\Units\Desert\Data\uim\Vest.jpg";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Vest.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			containerClass = "Supply120";
			mass = 1;
			armor = 5*0.5;
			passThrough = 0.7;
			hiddenSelections[] = {"camo"};
		};
	};

	class NLD_NFPT_Vest : NLD_WLD_Vest {
		displayName = "NLD NFP-Tan Vest";
		picture = "\NLD Infantry Units\Units\NFP-Tan\Data\uim\Vest.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Tan\Data\Vest.paa"};
	};

	class NLD_NFPG_Vest : NLD_WLD_Vest {
		displayName = "NLD NFP-Green Vest";
		picture = "\NLD Infantry Units\Units\NFP-Green\Data\uim\Vest.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\NFP-Green\Data\Vest.paa"};
	};

	class NLD_DST_Vest : NLD_WLD_Vest {
		displayName = "NLD Desert Vest";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Desert\Data\Vest.paa"};
	};

	class NLD_WTR_Vest : NLD_WLD_Vest {
		displayName = "NLD Winter Vest";
		picture = "\NLD Infantry Units\Units\Winter\Data\uim\Vest.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Winter\Data\Vest.paa"};
	};

	class NLD_SF_Vest : NLD_WLD_Vest {
		displayName = "NLD Black Vest";
		picture = "\NLD Infantry Units\Units\SF\Data\uim\Vest.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\SF\Data\Vest.paa"};
	};

	class NLD_SF_PlateCarrier : V_PlateCarrier1_blk
	{
		displayName = "NLD Black Plate Carrier";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		picture = "\NLD Infantry Units\Units\SF\Data\uim\PlateCarrier.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\SF\Data\PlateCarrier.paa"};
		scope = 2;
		class ItemInfo: ItemInfo {
			armor = 20;
			containerclass = "Supply120";
			mass = 60;
			passthrough = 0.5;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		};
	};

	class NLD_MTP_PlateCarrier : NLD_SF_PlateCarrier
	{
		displayName = "NLD MTP Plate Carrier";
		picture = "\NLD Infantry Units\Units\MTP\Data\uim\PlateCarrier.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\MTP\Data\PlateCarrier.paa"};
	};

	class NLD_SF_ECH: H_HelmetB {
		displayname = "NLD Black ECH";
		hiddenselections[] = {"camo"};
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		picture = "\NLD Infantry Units\Units\SF\Data\uim\ECH.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\SF\Data\ECH.paa"};
		scope = 2;
		weaponpoolavailable = 1;
		class ItemInfo: HeadgearItem {
			armor = 4;
			hiddenselections[] = {"camo"};
			mass = 40;
			modelsides[] = {3, 1};
			passthrough = 0.5;
			uniformmodel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		};
	};

	class NLD_MTP_ECH : NLD_SF_ECH
	{
		displayName = "NLD MTP ECH";
		picture = "\NLD Infantry Units\Units\MTP\Data\uim\ECH.jpg";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\MTP\Data\ECH.paa"};
	};

	class NLD_Helipilot_base : U_B_HeliPilotCoveralls {
		scope = 2;
		displayName = "HeliPilot Coveralls (NLD)";
		picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_Helipilot";
			containerClass = "Supply90";
			mass = 40;
		};
	};
	
	class NLD_Helicrew_base : U_B_HeliPilotCoveralls {
		scope = 2;
		displayName = "HeliCrew Coveralls (NLD)";
		picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_Helicrew";
			containerClass = "Supply90";
			mass = 40;
		};
	};
	
	class NLD_Sniper_base : U_B_GhillieSuit {
		scope = 2;
		displayName = "NLD Sniper Ghilliesuit Woodland";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_Sniper_base";
			containerClass = "Supply90";
			mass = 40;
		};
	};
};
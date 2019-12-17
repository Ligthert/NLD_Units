class CfgPatches {
	class NLD_Units_Infantry {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR","NLD_Units_Gear","NLD_Units_Backpacks","NLD_Units_Insignia"};
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
	class Infantry_UN_Woodland
	{
		displayName="Men (UN Woodland)";
	};
	class Infantry_UN_Desert
	{
		displayName="Men (UN Desert)";
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
	class Infantry_SF
	{
		displayName="Men (Marsof Divers)";
	};
	class Infantry_SFMTP
	{
		displayName="Men (KCT)";
	};
	class Infantry_KM
	{
		displayName="Men (MARSOF)";
	};
	class Infantry_KMI
	{
		displayName="Korps Mariniers";
	};
	class Infantry_DSI
	{
	displayname="Men (DSI)";
	};
	class Infantry_Diver
	{
		displayName="Men (Diver)";
	};
};
class CfgVehicles {
	class B_Soldier_base_F;
	class B_Carryall_Base;
	class B_Helipilot_F;
	class B_helicrew_F;
	class B_sniper_F;
	class B_pilot_F;
	class B_Spotter_F;
	class C_man_pilot_F;
	class B_diver_F;
	class B_Fighter_Pilot_F;
	class O_Soldier_base_F;


// Woodland Units
	class NLD_WLD_rifleman: B_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 1;
		scope = 2;
		displayName = "Rifleman";
		genericNames = "NLD_Units";
		faction = "NLD_Units_WLD";
		vehicleClass = "Infantry_Woodland";
		backpack = "NLD_WLD_Carryall_B";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "NLD_WLD_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_rifleman.jpg";
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"NLD_C7", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_C7", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
        class Wounds
		{
		tex[] = {};
		mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};

	class NLD_WLD_AR: NLD_WLD_rifleman
	{
		displayName = "Automatic Rifleman";
		icon = "iconManMG";
		backpack = "NLD_WLD_Carryall_AR";
		faction = "NLD_Units_WLD";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_AR.jpg";
		weapons[] = {"NLD_Minimi", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_Minimi", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch", "CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch", "CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
	};

	class NLD_WLD_LAT: NLD_WLD_rifleman
	{
		displayName = "Rifleman (Pzf3)";
		icon = "iconManAT";
		backpack = "NLD_WLD_Carryall_AT";
		faction = "NLD_Units_WLD";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_LAT.jpg";
		weapons[] = {"NLD_C7", "NLD_Pzf3", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_C7", "NLD_Pzf3", "NLD_Glock17", "Throw", "Put"};
	};
	
	class NLD_WLD_LAT4: NLD_WLD_rifleman
	{
		displayName = "Rifleman (AT4)";
		icon = "iconManAT";
		backpack = "NLD_WLD_Carryall_AT4";
		faction = "NLD_Units_WLD";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_LAT.jpg";
		weapons[] = {"NLD_C7", "NLD_AT4", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_C7", "NLD_AT4", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_M136_M", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_M136_M", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
	};

	class NLD_WLD_CLS: NLD_WLD_rifleman
	{
		displayName = "Combat Life Saver";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_WLD_Carryall_Medic";
		icon = "iconManMedic";
		attendant = 1;
		faction = "NLD_Units_WLD";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_CLS.jpg";
	};

	class NLD_WLD_GL: NLD_WLD_rifleman
	{
		displayName = "Grenadier";
		faction = "NLD_Units_WLD";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_GL.jpg";
		weapons[] = {"NLD_C7_GL", "NLD_Glock17", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_C7_GL", "NLD_Glock17", "Throw", "Put", "Rangefinder"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","SmokeShellGreen","SmokeShell","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","HandGrenade","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","SmokeShellGreen","SmokeShell","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","HandGrenade","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell"};
	};

	class NLD_WLD_ENGI: NLD_WLD_rifleman
	{
		displayName = "Engineer";
		faction = "NLD_Units_WLD";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_WLD_Carryall_Eng";
		icon = "iconManEngineer";
		engineer = 1;
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_ENGI.jpg";
	weapons[] = {"NLD_C8", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_C8", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
	};

	class NLD_WLD_EXPL: NLD_WLD_rifleman
	{
		displayName = "Explosives Expert";
		backpack = "NLD_WLD_Carryall_Expl";
		icon = "iconManExplosive";
		canDeactivateMines = 1;
		faction = "NLD_Units_WLD";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_EXPL.jpg";
	weapons[] = {"NLD_C8", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_C8", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
	};

	class NLD_WLD_UAV: NLD_WLD_rifleman
	{
		displayName = "UAV Operator";
		linkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UavTerminal", "ItemRadio"};
		backpack = "B_MAV_B_BACKPACK";
		faction = "NLD_Units_WLD";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_UAV.jpg";
	weapons[] = {"NLD_C8", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_C8", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
	};

	class NLD_WLD_JTAC: NLD_WLD_rifleman
	{
		displayName = "JTAC";
		weapons[] = {"NLD_C8", "NLD_Glock17", "Throw", "Put", "Laserdesignator"};
		respawnWeapons[] = {"NLD_C8", "NLD_Glock17", "Throw", "Put", "Laserdesignator"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		backpack = "NLD_WLD_Carryall_JTAC";
		faction = "NLD_Units_WLD";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_JTAC.jpg";
	};

	class NLD_WLD_OFF: NLD_WLD_rifleman
	{
		displayName = "Officer";
		linkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"NLD_C8", "NLD_Glock17", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_C8", "NLD_Glock17", "Throw", "Put", "Rangefinder"};
		backpack = "NLD_WLD_Carryall_B";
		icon = "iconManOfficer";
		faction = "NLD_Units_WLD";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_OFF.jpg";
	};

	class NLD_WLD_SL: NLD_WLD_rifleman
	{
		displayName = "Squad Leader";
		linkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		weapons[] = {"NLD_C8_GL", "NLD_Glock17", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_C8_GL", "NLD_Glock17", "Throw", "Put", "Rangefinder"};
		backpack = "NLD_WLD_Carryall_TL";
		icon = "iconManLeader";
		faction = "NLD_Units_WLD";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_SL.jpg";
	};

	class NLD_WLD_TL: NLD_WLD_rifleman
	{
		displayName = "Team Leader";
		linkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		weapons[] = {"NLD_C7_GL", "NLD_Glock17", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_C7_GL", "NLD_Glock17", "Throw", "Put", "Rangefinder"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_WLD_Carryall_TL";
		icon = "iconManLeader";
		faction = "NLD_Units_WLD";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_TL.jpg";
	};

	class NLD_WLD_SLA: NLD_WLD_rifleman
	{
		displayName = "SLA (Sniper)";
		linkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_WLD_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"NLD_AWM", "NLD_Glock17", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_AWM", "NLD_Glock17", "Throw", "Put", "Rangefinder"};
		magazines[] = {"CUP_5Rnd_86x70_L115A1", "CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1", "CUP_5Rnd_86x70_L115A1", "CUP_5Rnd_86x70_L115A1", "CUP_5Rnd_86x70_L115A1", "CUP_5Rnd_86x70_L115A1", "CUP_5Rnd_86x70_L115A1", "CUP_5Rnd_86x70_L115A1", "CUP_5Rnd_86x70_L115A1", "CUP_5Rnd_86x70_L115A1", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_5Rnd_86x70_L115A1", "CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1", "CUP_5Rnd_86x70_L115A1", "CUP_5Rnd_86x70_L115A1", "CUP_5Rnd_86x70_L115A1", "CUP_5Rnd_86x70_L115A1", "CUP_5Rnd_86x70_L115A1", "CUP_5Rnd_86x70_L115A1", "CUP_5Rnd_86x70_L115A1", "CUP_5Rnd_86x70_L115A1", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17"};
		faction = "NLD_Units_WLD";
		backpack = "NLD_WLD_Carryall_SLA";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_SLA.jpg";
	};

	class NLD_WLD_Ammo: NLD_WLD_rifleman
	{
		displayName = "Ammo Bearer";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_WLD_Carryall_Ammo";
		faction = "NLD_Units_WLD";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_Ammo.jpg";
	};

	class NLD_WLD_AAR: NLD_WLD_rifleman
	{
		displayName = "Assistant Automatic Rifleman";
		weapons[] = {"NLD_C8", "NLD_Glock17", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_C8", "NLD_Glock17", "Throw", "Put", "Rangefinder"};
		backpack = "NLD_WLD_Carryall_AAR";
		faction = "NLD_Units_WLD";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_AAR.jpg";
	};

	class NLD_WLD_MMG: NLD_WLD_rifleman
	{
		displayName = "Medium Machine Gunner";
		backpack = "NLD_WLD_Carryall_MMG";
		icon = "iconManMG";
		faction = "NLD_Units_WLD";
		weapons[] = {"NLD_MAG", "NLD_Glock17", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_MAG", "NLD_Glock17", "Throw", "Put", "Rangefinder"};
		magazines[] = {"CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","HandGrenade","SmokeShell","SmokeShellGreen"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_MMG.jpg";
	};

	class NLD_WLD_AMMG: NLD_WLD_rifleman
	{
		displayName = "Assistant Medium Machine Gunner";
		faction = "NLD_Units_WLD";
		weapons[] = {"NLD_C8", "NLD_Glock17", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_C8", "NLD_Glock17", "Throw", "Put", "Rangefinder"};
		backpack = "NLD_WLD_Carryall_MMG";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_AMMG.jpg";
	};

	class NLD_WLD_MAT: NLD_WLD_rifleman
	{
		displayName = "Medium Anti-Tank";
		backpack = "NLD_WLD_Carryall_MAT";
		icon = "iconManAT";
		faction = "NLD_Units_WLD";
		weapons[] = {"NLD_C8", "NLD_Glock17", "Throw", "Put","NLD_Spike"};
		respawnWeapons[] = {"NLD_C8", "NLD_Glock17", "Throw", "Put","NLD_Spike"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen", "Titan_AT"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen", "Titan_AT"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_MAT.jpg";
	};

	class NLD_WLD_AMAT: NLD_WLD_rifleman
	{
		displayName = "Assistant Medium Anti-Tank";
		backpack = "NLD_WLD_Carryall_MAT";
		faction = "NLD_Units_WLD";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_AMAT.jpg";
	weapons[] = {"NLD_C8", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_C8", "NLD_Glock17", "Throw", "Put"};
	};

	class NLD_WLD_AA: NLD_WLD_rifleman
	{
		displayName = "Anti-Air";
		icon = "iconManAT";
		faction = "NLD_Units_WLD";
		weapons[] = {"NLD_C8", "NLD_Glock17", "Throw", "Put","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"NLD_C8", "NLD_Glock17", "Throw", "Put","CUP_launch_FIM92Stinger"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen", "CUP_Stinger_M"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen", "CUP_Stinger_M"};
		backpack = "NLD_WLD_Carryall_AA";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_AA.jpg";
	};

	class NLD_WLD_AAA: NLD_WLD_AMAT
	{
		displayName = "Assistant Anti-Air";
		backpack = "NLD_WLD_Carryall_AA";
		faction = "NLD_Units_WLD";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WLD_AAA.jpg";
	};

// Desert Units

	class NLD_DST_rifleman: NLD_WLD_rifleman
	{
		displayName = "Rifleman";
		vehicleClass = "Infantry_Desert";
		backpack = "NLD_DST_Carryall_B";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_rifleman.jpg";
	};

	class NLD_DST_AR: NLD_WLD_AR
	{
		vehicleClass = "Infantry_Desert";
		backpack = "NLD_DST_Carryall_AR";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_AR.jpg";
	};

	class NLD_DST_LAT: NLD_WLD_LAT
	{
		vehicleClass = "Infantry_Desert";
		backpack = "NLD_DST_Carryall_AT";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_LAT.jpg";
	};
	
	class NLD_DST_LAT4: NLD_WLD_LAT4
	{
		vehicleClass = "Infantry_Desert";
		backpack = "NLD_DST_Carryall_AT4";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_M136_M", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_M136_M", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_LAT.jpg";
	};

	class NLD_DST_CLS: NLD_WLD_CLS
	{
		vehicleClass = "Infantry_Desert";
		backpack = "NLD_DST_Carryall_Medic";
		uniformClass = "NLD_DST_Camo";
		attendant = 1;
		faction = "NLD_Units_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_CLS.jpg";
	};

	class NLD_DST_GL: NLD_WLD_GL
	{
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "NLD_DST_Carryall_TL";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_GL.jpg";
	};

	class NLD_DST_ENGI: NLD_WLD_ENGI
	{
		vehicleClass = "Infantry_Desert";
		backpack = "NLD_DST_Carryall_Eng";
		uniformClass = "NLD_DST_Camo";
		engineer = 1;
		faction = "NLD_Units_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_ENGI.jpg";
	};

	class NLD_DST_EXPL: NLD_WLD_EXPL
	{
		vehicleClass = "Infantry_Desert";
		backpack = "NLD_DST_Carryall_Expl";
		uniformClass = "NLD_DST_Camo";
		canDeactivateMines = 1;
		faction = "NLD_Units_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_EXPL.jpg";
	};

	class NLD_DST_UAV: NLD_WLD_UAV
	{
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		backpack = "B_MAV_B_BACKPACK";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_UAV.jpg";
	};

	class NLD_DST_JTAC: NLD_WLD_JTAC
	{
 		vehicleClass = "Infantry_Desert";
		backpack = "NLD_DST_Carryall_JTAC";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_JTAC.jpg";
	};

	class NLD_DST_OFF: NLD_WLD_OFF
	{
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_DST";
		backpack = "NLD_DST_Carryall_B";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_OFF.jpg";
	};

	class NLD_DST_SL: NLD_WLD_SL
	{
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		backpack = "NLD_DST_Carryall_TL";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_SL.jpg";
	};

	class NLD_DST_TL: NLD_WLD_TL
	{
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_DST";
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_DST_Carryall_TL";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_TL.jpg";
	};

	class NLD_DST_SLA: NLD_WLD_SLA
	{
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_DST";
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		backpack = "NLD_DST_Carryall_SLA";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_SLA.jpg";
	};

	class NLD_DST_Ammo: NLD_WLD_Ammo
	{
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_DST_Carryall_Ammo";
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_Ammo.jpg";
	};

	class NLD_DST_AAR: NLD_WLD_rifleman
	{
		displayName = "Assistant Automatic Rifleman";
		vehicleClass = "Infantry_Desert";
		backpack = "NLD_DST_Carryall_AAR";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_AAR.jpg";
	};

	class NLD_DST_MMG: NLD_WLD_MMG
	{
		displayName = "Medium Machine Gunner";
		backpack = "NLD_DST_Carryall_MMG";
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_MMG.jpg";
	};

	class NLD_DST_AMMG: NLD_WLD_AMMG
	{
		displayName = "Assistant Medium Machine Gunner";
		vehicleClass = "Infantry_Desert";
		backpack = "NLD_DST_Carryall_MMG";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_AMMG.jpg";
	};

	class NLD_DST_MAT: NLD_WLD_MAT
	{
		displayName = "Medium Anti-Tank";
		backpack = "NLD_DST_Carryall_MAT";
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_MAT.jpg";
	};

	class NLD_DST_AMAT: NLD_WLD_AMAT
	{
		displayName = "Assistant Medium Anti-Tank";
		backpack = "NLD_DST_Carryall_MAT";
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_AMAT.jpg";
	};

	class NLD_DST_AA: NLD_WLD_AA
	{
		displayName = "Anti-Air";
		vehicleClass = "Infantry_Desert";
		backpack = "NLD_DST_Carryall_AA";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_AA.jpg";
	};

	class NLD_DST_AAA: NLD_WLD_AAA
	{
		displayName = "Assistant Anti-Air";
		backpack = "NLD_DST_Carryall_AA";
		vehicleClass = "Infantry_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_DST_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_DST_AAA.jpg";
	};

// NFP-TAN

	class NLD_NFPT_rifleman: NLD_WLD_rifleman
		{
			vehicleClass = "Infantry_NFPTAN";
			displayName = "Rifleman";
			backpack = "NLD_NFPT_Carryall_B";
			uniformClass = "NLD_NFPT_Camo";
			faction = "NLD_Units_NFPT";
			hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
			linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
			respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
      editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_rifleman.jpg";
		};

	class NLD_NFPT_AR: NLD_WLD_AR
	{
		vehicleClass = "Infantry_NFPTAN";
		backpack = "NLD_NFPT_Carryall_AR";
		uniformClass = "NLD_NFPT_Camo";
		faction = "NLD_Units_NFPT";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_AR.jpg";
	};

	class NLD_NFPT_LAT: NLD_WLD_LAT
	{
		vehicleClass = "Infantry_NFPTAN";
		backpack = "NLD_NFPT_Carryall_AT";
		uniformClass = "NLD_NFPT_Camo";
		faction = "NLD_Units_NFPT";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_LAT.jpg";
	};
	
	class NLD_NFPT_LAT4: NLD_WLD_LAT4
	{
		vehicleClass = "Infantry_NFPTAN";
		backpack = "NLD_NFPT_Carryall_AT4";
		uniformClass = "NLD_NFPT_Camo";
		faction = "NLD_Units_NFPT";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_M136_M", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_M136_M", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_LAT.jpg";
	};

	class NLD_NFPT_CLS: NLD_WLD_CLS
	{
		vehicleClass = "Infantry_NFPTAN";
		backpack = "NLD_NFPT_Carryall_Medic";
		uniformClass = "NLD_NFPT_Camo";
		attendant = 1;
		faction = "NLD_Units_NFPT";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_CLS.jpg";
	};

	class NLD_NFPT_GL: NLD_WLD_GL
	{
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		faction = "NLD_Units_NFPT";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "NLD_NFPT_Carryall_TL";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_GL.jpg";
	};

	class NLD_NFPT_ENGI: NLD_WLD_ENGI
	{
		vehicleClass = "Infantry_NFPTAN";
		backpack = "NLD_NFPT_Carryall_Eng";
		uniformClass = "NLD_NFPT_Camo";
		engineer = 1;
		faction = "NLD_Units_NFPT";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_ENGI.jpg";
	};

	class NLD_NFPT_EXPL: NLD_WLD_EXPL
	{
		vehicleClass = "Infantry_NFPTAN";
		backpack = "NLD_NFPT_Carryall_Expl";
		uniformClass = "NLD_NFPT_Camo";
		canDeactivateMines = 1;
		faction = "NLD_Units_NFPT";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_EXPL.jpg";
	};

	class NLD_NFPT_UAV: NLD_WLD_UAV
	{
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		faction = "NLD_Units_NFPT";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		backpack = "B_MAV_B_BACKPACK";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_UAV.jpg";
	};

	class NLD_NFPT_JTAC: NLD_WLD_JTAC
	{
 		vehicleClass = "Infantry_NFPTAN";
		backpack = "NLD_NFPT_Carryall_JTAC";
		uniformClass = "NLD_NFPT_Camo";
		faction = "NLD_Units_NFPT";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_JTAC.jpg";
	};

	class NLD_NFPT_OFF: NLD_WLD_OFF
	{
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		faction = "NLD_Units_NFPT";
		backpack = "NLD_NFPT_Carryall_B";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_OFF.jpg";
	};

	class NLD_NFPT_SL: NLD_WLD_SL
	{
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		faction = "NLD_Units_NFPT";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		backpack = "NLD_NFPT_Carryall_TL";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_SL.jpg";
	};

	class NLD_NFPT_TL: NLD_WLD_TL
	{
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		faction = "NLD_Units_NFPT";
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_NFPT_Carryall_TL";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_TL.jpg";
	};

	class NLD_NFPT_SLA: NLD_WLD_SLA
	{
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		faction = "NLD_Units_NFPT";
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		backpack = "NLD_NFPT_Carryall_SLA";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_SLA.jpg";
	};

	class NLD_NFPT_Ammo: NLD_WLD_Ammo
	{
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		faction = "NLD_Units_NFPT";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_NFPT_Carryall_Ammo";
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_Ammo.jpg";
	};

	class NLD_NFPT_AAR: NLD_WLD_rifleman
	{
		displayName = "Assistant Automatic Rifleman";
		vehicleClass = "Infantry_NFPTAN";
		backpack = "NLD_NFPT_Carryall_AAR";
		uniformClass = "NLD_NFPT_Camo";
		faction = "NLD_Units_NFPT";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_AAR.jpg";
	};

	class NLD_NFPT_MMG: NLD_WLD_MMG
	{
		displayName = "Medium Machine Gunner";
		backpack = "NLD_NFPT_Carryall_MMG";
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		faction = "NLD_Units_NFPT";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_MMG.jpg";
	};

	class NLD_NFPT_AMMG: NLD_WLD_AMMG
	{
		displayName = "Assistant Medium Machine Gunner";
		vehicleClass = "Infantry_NFPTAN";
		backpack = "NLD_NFPT_Carryall_MMG";
		uniformClass = "NLD_NFPT_Camo";
		faction = "NLD_Units_NFPT";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_AMMG.jpg";
	};

	class NLD_NFPT_MAT: NLD_WLD_MAT
	{
		displayName = "Medium Anti-Tank";
		backpack = "NLD_NFPT_Carryall_MAT";
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		faction = "NLD_Units_NFPT";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_MAT.jpg";
	};

	class NLD_NFPT_AMAT: NLD_WLD_AMAT
	{
		displayName = "Assistant Medium Anti-Tank";
		backpack = "NLD_NFPT_Carryall_MAT";
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		faction = "NLD_Units_NFPT";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_AMAT.jpg";
	};

	class NLD_NFPT_AA: NLD_WLD_AA
	{
		displayName = "Anti-Air";
		vehicleClass = "Infantry_NFPTAN";
		backpack = "NLD_NFPT_Carryall_AA";
		uniformClass = "NLD_NFPT_Camo";
		faction = "NLD_Units_NFPT";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_AA.jpg";
	};

	class NLD_NFPT_AAA: NLD_WLD_AAA
	{
		displayName = "Assistant Anti-Air";
		backpack = "NLD_NFPT_Carryall_AA";
		vehicleClass = "Infantry_NFPTAN";
		uniformClass = "NLD_NFPT_Camo";
		faction = "NLD_Units_NFPT";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest", "NLD_NFPT_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPT_AAA.jpg";
	};

// NFP-Green
	class NLD_NFPG_rifleman: NLD_WLD_rifleman
	{
		vehicleClass = "Infantry_NFPGREEN";
		displayName = "Rifleman";
		backpack = "NLD_NFPG_Carryall_B";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_rifleman.jpg";
	};

	class NLD_NFPG_AR: NLD_WLD_AR
	{
		vehicleClass = "Infantry_NFPGREEN";
		backpack = "NLD_NFPG_Carryall_AR";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_AR.jpg";
	};

	class NLD_NFPG_LAT: NLD_WLD_LAT
	{
		vehicleClass = "Infantry_NFPGREEN";
		backpack = "NLD_NFPG_Carryall_AT";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_LAT.jpg";
	};
	
	class NLD_NFPG_LAT4: NLD_WLD_LAT4
	{
		vehicleClass = "Infantry_NFPGREEN";
		backpack = "NLD_NFPG_Carryall_AT4";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_M136_M", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_M136_M", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_LAT.jpg";
	};

	class NLD_NFPG_CLS: NLD_WLD_CLS
	{
		vehicleClass = "Infantry_NFPGREEN";
		backpack = "NLD_NFPG_Carryall_Medic";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		attendant = 1;
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_CLS.jpg";
	};

	class NLD_NFPG_GL: NLD_WLD_GL
	{
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "NLD_NFPG_Carryall_TL";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_GL.jpg";
	};

	class NLD_NFPG_ENGI: NLD_WLD_ENGI
	{
		vehicleClass = "Infantry_NFPGREEN";
		backpack = "NLD_NFPG_Carryall_Eng";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		engineer = 1;
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_ENGI.jpg";
	};

	class NLD_NFPG_EXPL: NLD_WLD_EXPL
	{
		vehicleClass = "Infantry_NFPGREEN";
		backpack = "NLD_NFPG_Carryall_Expl";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		canDeactivateMines = 1;
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_EXPL.jpg";
	};

	class NLD_NFPG_UAV: NLD_WLD_UAV
	{
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		backpack = "B_MAV_B_BACKPACK";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_UAV.jpg";
	};

	class NLD_NFPG_JTAC: NLD_WLD_JTAC
	{
 		vehicleClass = "Infantry_NFPGREEN";
		backpack = "NLD_NFPG_Carryall_JTAC";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_JTAC.jpg";
	};

	class NLD_NFPG_OFF: NLD_WLD_OFF
	{
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		backpack = "NLD_NFPG_Carryall_B";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_OFF.jpg";
	};

	class NLD_NFPG_SL: NLD_WLD_SL
	{
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		backpack = "NLD_NFPG_Carryall_TL";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_SL.jpg";
	};

	class NLD_NFPG_TL: NLD_WLD_TL
	{
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_NFPG_Carryall_TL";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_TL.jpg";
	};

	class NLD_NFPG_SLA: NLD_WLD_SLA
	{
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		backpack = "NLD_NFPG_Carryall_SLA";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_SLA.jpg";
	};

	class NLD_NFPG_Ammo: NLD_WLD_Ammo
	{
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_NFPG_Carryall_Ammo";
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_Ammo.jpg";
	};

	class NLD_NFPG_AAR: NLD_WLD_rifleman
	{
		displayName = "Assistant Automatic Rifleman";
		vehicleClass = "Infantry_NFPGREEN";
		backpack = "NLD_NFPG_Carryall_AAR";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_AAR.jpg";
	};

	class NLD_NFPG_MMG: NLD_WLD_MMG
	{
		displayName = "Medium Machine Gunner";
		backpack = "NLD_NFPG_Carryall_MMG";
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_MMG.jpg";
	};

	class NLD_NFPG_AMMG: NLD_WLD_AMMG
	{
		displayName = "Assistant Medium Machine Gunner";
		vehicleClass = "Infantry_NFPGREEN";
		backpack = "NLD_NFPG_Carryall_MMG";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_AMMG.jpg";
	};

	class NLD_NFPG_MAT: NLD_WLD_MAT
	{
		displayName = "Medium Anti-Tank";
		backpack = "NLD_NFPG_Carryall_MAT";
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_MAT.jpg";
	};

	class NLD_NFPG_AMAT: NLD_WLD_AMAT
	{
		displayName = "Assistant Medium Anti-Tank";
		backpack = "NLD_NFPG_Carryall_MAT";
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_AMAT.jpg";
	};

	class NLD_NFPG_AA: NLD_WLD_AA
	{
		displayName = "Anti-Air";
		vehicleClass = "Infantry_NFPGREEN";
		backpack = "NLD_NFPG_Carryall_AA";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_AA.jpg";
	};

	class NLD_NFPG_AAA: NLD_WLD_AAA
	{
		displayName = "Assistant Anti-Air";
		backpack = "NLD_NFPG_Carryall_AA";
		vehicleClass = "Infantry_NFPGREEN";
		uniformClass = "NLD_NFPG_Camo";
		faction = "NLD_Units_NFPG";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest", "NLD_NFPG_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_NFPG_AAA.jpg";
	};

// Winter

	class NLD_WTR_rifleman: NLD_WLD_rifleman
	{
		vehicleClass = "Infantry_Winter";
		displayName = "Rifleman";
		backpack = "NLD_WTR_Carryall_B";
		uniformClass = "NLD_WTR_Camo";
		faction = "NLD_Units_WTR";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		    editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_rifleman.jpg";
	};

	class NLD_WTR_AR: NLD_WLD_AR
	{
		vehicleClass = "Infantry_Winter";
		backpack = "NLD_WTR_Carryall_AR";
		uniformClass = "NLD_WTR_Camo";
		faction = "NLD_Units_WTR";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_AR.jpg";
	};

	class NLD_WTR_LAT: NLD_WLD_LAT
	{
		vehicleClass = "Infantry_WINTER";
		backpack = "NLD_WTR_Carryall_AT";
		uniformClass = "NLD_WTR_Camo";
		faction = "NLD_Units_WTR";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		    editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_LAT.jpg";
	};
	
	class NLD_WTR_LAT4: NLD_WLD_LAT4
	{
		vehicleClass = "Infantry_WINTER";
		backpack = "NLD_WTR_Carryall_AT4";
		uniformClass = "NLD_WTR_Camo";
		faction = "NLD_Units_WTR";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_M136_M", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_M136_M", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
		    editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_LAT.jpg";
	};

	class NLD_WTR_CLS: NLD_WLD_CLS
	{
		vehicleClass = "Infantry_WINTER";
		backpack = "NLD_WTR_Carryall_Medic";
		uniformClass = "NLD_WTR_Camo";
		attendant = 1;
		faction = "NLD_Units_WTR";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_CLS.jpg";
	};

	class NLD_WTR_GL: NLD_WLD_GL
	{
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		faction = "NLD_Units_WTR";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "NLD_WTR_Carryall_TL";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_GL.jpg";
	};

	class NLD_WTR_ENGI: NLD_WLD_ENGI
	{
		vehicleClass = "Infantry_WINTER";
		backpack = "NLD_WTR_Carryall_Eng";
		uniformClass = "NLD_WTR_Camo";
		engineer = 1;
		faction = "NLD_Units_WTR";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_ENGI.jpg";
	};

	class NLD_WTR_EXPL: NLD_WLD_EXPL
	{
		vehicleClass = "Infantry_WINTER";
		backpack = "NLD_WTR_Carryall_Expl";
		uniformClass = "NLD_WTR_Camo";
		canDeactivateMines = 1;
		faction = "NLD_Units_WTR";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_EXPL.jpg";
	};

	class NLD_WTR_UAV: NLD_WLD_UAV
	{
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		faction = "NLD_Units_WTR";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		backpack = "B_MAV_B_BACKPACK";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_UAV.jpg";
	};

	class NLD_WTR_JTAC: NLD_WLD_JTAC
	{
 		vehicleClass = "Infantry_WINTER";
		backpack = "NLD_WTR_Carryall_JTAC";
		uniformClass = "NLD_WTR_Camo";
		faction = "NLD_Units_WTR";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		    editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_JTAC.jpg";
	};

	class NLD_WTR_OFF: NLD_WLD_OFF
	{
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		faction = "NLD_Units_WTR";
		backpack = "NLD_WTR_Carryall_B";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_OFF.jpg";
	};

	class NLD_WTR_SL: NLD_WLD_SL
	{
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		faction = "NLD_Units_WTR";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		backpack = "NLD_WTR_Carryall_TL";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_SL.jpg";
	};

	class NLD_WTR_TL: NLD_WLD_TL
	{
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		faction = "NLD_Units_WTR";
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_WTR_Carryall_TL";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_TL.jpg";
	};

	class NLD_WTR_SLA: NLD_WLD_SLA
	{
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		faction = "NLD_Units_WTR";
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		backpack = "NLD_WTR_Carryall_SLA";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_SLA.jpg";
	};

	class NLD_WTR_Ammo: NLD_WLD_Ammo
	{
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		faction = "NLD_Units_WTR";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_WTR_Carryall_Ammo";
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_Ammo.jpg";
	};

	class NLD_WTR_AAR: NLD_WLD_rifleman
	{
		displayName = "Assistant Automatic Rifleman";
		vehicleClass = "Infantry_WINTER";
		backpack = "NLD_WTR_Carryall_AAR";
		uniformClass = "NLD_WTR_Camo";
		faction = "NLD_Units_WTR";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_AAR.jpg";
	};

	class NLD_WTR_MMG: NLD_WLD_MMG
	{
		displayName = "Medium Machine Gunner";
		backpack = "NLD_WTR_Carryall_MMG";
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		faction = "NLD_Units_WTR";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_MMG.jpg";
	};

	class NLD_WTR_AMMG: NLD_WLD_AMMG
	{
		displayName = "Assistant Medium Machine Gunner";
		vehicleClass = "Infantry_WINTER";
		backpack = "NLD_WTR_Carryall_MMG";
		uniformClass = "NLD_WTR_Camo";
		faction = "NLD_Units_WTR";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_AMMG.jpg";
	};

	class NLD_WTR_MAT: NLD_WLD_MAT
	{
		displayName = "Medium Anti-Tank";
		backpack = "NLD_WTR_Carryall_MAT";
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		faction = "NLD_Units_WTR";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_MAT.jpg";
	};

	class NLD_WTR_AMAT: NLD_WLD_AMAT
	{
		displayName = "Assistant Medium Anti-Tank";
		backpack = "NLD_WTR_Carryall_MAT";
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		faction = "NLD_Units_WTR";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_AMAT.jpg";
	};

	class NLD_WTR_AA: NLD_WLD_AA
	{
		displayName = "Anti-Air";
		vehicleClass = "Infantry_WINTER";
		backpack = "NLD_WTR_Carryall_AA";
		uniformClass = "NLD_WTR_Camo";
		faction = "NLD_Units_WTR";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_AA.jpg";
	};

	class NLD_WTR_AAA: NLD_WLD_AAA
	{
		displayName = "Assistant Anti-Air";
		backpack = "NLD_WTR_Carryall_AA";
		vehicleClass = "Infantry_WINTER";
		uniformClass = "NLD_WTR_Camo";
		faction = "NLD_Units_WTR";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest", "NLD_WTR_Helmet", "CUP_G_ESS_KHK_Facewrap_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_WTR_AAA.jpg";
	};

//	Korps Mariniers Infantry

	class NLD_KMI_rifleman: NLD_WLD_rifleman
	{
		vehicleClass = "Infantry_KMI";
		backpack = "NLD_KMI_Carryall_B";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
	};
	
	class NLD_KMI_AR: NLD_WLD_AR
	{
		vehicleClass = "Infantry_KMI";
		backpack = "NLD_KMI_Carryall_AR";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
	};
	
	class NLD_KMI_LAR: NLD_WLD_AR
	{
		vehicleClass = "Infantry_KMI";
		displayname = "Rifleman LSW";
		backpack = "NLD_KMI_Carryall_LAR";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"NLD_Colt_LSW", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_Colt_LSW", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire","CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire","CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
	};

	class NLD_KMI_LAT: NLD_WLD_LAT
	{
		vehicleClass = "Infantry_KMI";
		backpack = "NLD_KMI_Carryall_AT";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
	};
	
	class NLD_KMI_LAT4: NLD_WLD_LAT4
	{
		vehicleClass = "Infantry_KMI";
		backpack = "NLD_KMI_Carryall_AT4";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_M136_M", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_M136_M", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShellGreen"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
	};

	class NLD_KMI_CLS: NLD_WLD_CLS
	{
		vehicleClass = "Infantry_KMI";
		backpack = "NLD_KMI_Carryall_Medic";
		attendant = 1;
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
	};

	class NLD_KMI_GL: NLD_WLD_GL
	{
		vehicleClass = "Infantry_KMI";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
		backpack = "NLD_KMI_Carryall_TL";
	};

	class NLD_KMI_ENGI: NLD_WLD_ENGI
	{
		vehicleClass = "Infantry_KMI";
		backpack = "NLD_KMI_Carryall_Eng";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
	};

	class NLD_KMI_EXPL: NLD_WLD_EXPL
	{
		vehicleClass = "Infantry_KMI";
		backpack = "NLD_KMI_Carryall_Expl";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
		canDeactivateMines = 1;
	};

	class NLD_KMI_UAV: NLD_WLD_UAV
	{
		vehicleClass = "Infantry_KMI";
		backpack = "B_MAV_B_BACKPACK";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
	};

	class NLD_KMI_JTAC: NLD_WLD_JTAC
	{
 		vehicleClass = "Infantry_KMI";
		backpack = "NLD_KMI_Carryall_JTAC";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
	};

	class NLD_KMI_OFF: NLD_WLD_OFF
	{
		vehicleClass = "Infantry_KMI";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		backpack = "NLD_KMI_Carryall_B";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
	};

	class NLD_KMI_SL: NLD_WLD_SL
	{
		vehicleClass = "Infantry_KMI";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
		backpack = "NLD_KMI_Carryall_TL";
	};

	class NLD_KMI_TL: NLD_WLD_TL
	{
		vehicleClass = "Infantry_KMI";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
		backpack = "NLD_KMI_Carryall_TL";
	};

	class NLD_KMI_SLA: NLD_WLD_SLA
	{
		vehicleClass = "Infantry_KMI";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
		backpack = "NLD_KMI_Carryall_SLA";
	};

	class NLD_KMI_Ammo: NLD_WLD_Ammo
	{
		vehicleClass = "Infantry_KMI";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
		backpack = "NLD_KMI_Carryall_Ammo";
	};

	class NLD_KMI_AAR: NLD_WLD_rifleman
	{
		displayName = "Assistant Automatic Rifleman";
		vehicleClass = "Infantry_KMI";
		backpack = "NLD_KMI_Carryall_AAR";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
	};

	class NLD_KMI_MMG: NLD_WLD_MMG
	{
		displayName = "Medium Machine Gunner";
		vehicleClass = "Infantry_KMI";
		backpack = "NLD_KMI_Carryall_MMG";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
	};

	class NLD_KMI_AMMG: NLD_WLD_AMMG
	{
		displayName = "Assistant Medium Machine Gunner";
		vehicleClass = "Infantry_KMI";
		backpack = "NLD_KMI_Carryall_MMG";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
	};

	class NLD_KMI_MAT: NLD_WLD_MAT
	{
		displayName = "Medium Anti-Tank";
		backpack = "NLD_KMI_Carryall_MAT";
		vehicleClass = "Infantry_KMI";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
	};

	class NLD_KMI_AMAT: NLD_WLD_AMAT
	{
		displayName = "Assistant Medium Anti-Tank";
		backpack = "NLD_KMI_Carryall_MAT";
		vehicleClass = "Infantry_KMI";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
	};

	class NLD_KMI_AA: NLD_WLD_AA
	{
		displayName = "Anti-Air";
		vehicleClass = "Infantry_KMI";
		backpack = "NLD_KMI_Carryall_AA";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
	};

	class NLD_KMI_AAA: NLD_WLD_AAA
	{
		displayName = "Assistant Anti-Air";
		backpack = "NLD_KMI_Carryall_AA";
		vehicleClass = "Infantry_KMI";
		uniformClass = "NLD_KMI_Camo";
		faction = "NLD_Units_KMI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\KM-Badge.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_KMI_Vest", "NLD_KMI_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
	};

// "Special" forces (black)

	class NLD_SF_Operator: NLD_WLD_rifleman
	{
		displayName = "Operator";
		vehicleClass = "Infantry_SF";
		genericNames = "NLD_Units";
		backpack = "NLD_SF_Carryall_B";
		uniformClass = "NLD_SF_CAMO";
		faction = "NLD_Units_SF";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\SF\Data\Uniform.paa", "\NLD_Insignia\Badges\rsz_frogman.paa"};
		hasDriver = 1;
		linkedItems[] = {"V_RebreatherB", "NLD_SF_ECH", "G_B_Diving", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"V_RebreatherB", "NLD_SF_ECH", "G_B_Diving", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_SF_Operator.jpg";
	};

    class NLD_SF_Operator_MP5: NLD_SF_Operator
    {
    	displayName="Operator (MP5)";
    	backpack = "NLD_SF_Carryall_MP5";
    	weapons[] = {"NLD_MP5", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_MP5", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		magazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_SF_Operator_MP5.jpg";
    };

	class NLD_SF_MEDIC: NLD_SF_Operator
	{
		displayName = "Medic";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_SF_Carryall_Medic";
		icon = "iconManMedic";
		attendant = 1;
		weapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_SF_MEDIC.jpg";
	};

	class NLD_SF_COMSPEC: NLD_SF_Operator
	{
		displayName = "ComSpec";
		linkedItems[] = {"V_RebreatherB", "NLD_SF_ECH", "G_B_Diving", "ItemMap", "ItemCompass", "ItemWatch","B_UavTerminal", "ItemRadio"};
		respawnLinkedItems[] = {"V_RebreatherB", "NLD_SF_ECH", "G_B_Diving", "ItemMap", "ItemCompass", "ItemWatch","B_UavTerminal", "ItemRadio"};
		weapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "Laserdesignator"};
		respawnWeapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "Laserdesignator"};
		backpack = "NLD_SF_Carryall_ComSpec";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_SF_COMSPEC.jpg";
	};

	class NLD_SF_DEMSPEC: NLD_SF_Operator
	{
		displayName = "DemSpec";
		icon = "iconManExplosive";
		backpack = "NLD_SF_Carryall_Expl";
		canDeactivateMines = 1;
		engineer = 1;
    editorPreview = "\NLD_Infantry_Units\previews\NLD_SF_DEMSPEC.jpg";
	};

	class NLD_SF_TL: NLD_SF_Operator
	{
		displayName = "Team Leader";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		icon = "iconManLeader";
		weapons[] = {"NLD_HK416_GL", "NLD_Glock17S", "Throw", "Put", "Laserdesignator"};
		respawnWeapons[] = {"NLD_HK416_GL", "NLD_Glock17S", "Throw", "Put", "Laserdesignator"};
		backpack = "NLD_SF_Carryall_TL";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_SF_TL.jpg";
	};

	class NLD_SF_SLA: NLD_SF_Operator
	{
		displayName = "Marksman";
		backpack = "NLD_SF_Carryall_SLA";
		linkedItems[] = {"V_RebreatherB", "NLD_SF_ECH", "G_B_Diving", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio" };
		respawnLinkedItems[] = {"V_RebreatherB", "NLD_SF_ECH", "G_B_Diving", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"NLD_HK417", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_HK417", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		magazines[] = {"CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_SF_SLA.jpg";
	};

	class NLD_SF_AT: NLD_SF_Operator
	{
		displayName = "Operator (Spike MR)";
		icon = "iconManAT";
		backpack = "NLD_SF_Carryall_AT";
		weapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "NLD_Spike", "Rangefinder"};
		respawnWeapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "NLD_Spike", "Rangefinder"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_SF_AT.jpg";
	};
	
	class NLD_SF_LAT: NLD_SF_Operator
	{
		displayName = "Operator (AT4)";
		icon = "iconManAT";
		backpack = "NLD_SF_Carryall_LAT";
		weapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "NLD_AT4", "Rangefinder"};
		respawnWeapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "NLD_AT4", "Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "CUP_M136_M", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "CUP_M136_M", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_SF_AT.jpg";
	};

	class NLD_SF_AA: NLD_SF_Operator
	{
		displayName = "Operator (AA)";
		scope = 1;
		icon = "iconManAT";
		backpack = "NLD_SF_Carryall_AA";
		weapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "CUP_launch_FIM92Stinger", "Rangefinder"};
		respawnWeapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "CUP_launch_FIM92Stinger", "Rangefinder"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_SF_AA.jpg";
	};

	class NLD_SF_AR: NLD_SF_Operator
	{
		displayName = "Autorifleman";
		icon = "iconManMG";
		backpack = "NLD_SF_Carryall_AR";
		linkedItems[] = {"V_RebreatherB", "NLD_SF_ECH", "G_B_Diving", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"V_RebreatherB", "NLD_SF_ECH", "G_B_Diving", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		weapons[] = {"NLD_Minimi", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_Minimi", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		magazines[] = {"CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch", "CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch","CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch", "CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_SF_AR.jpg";
	};

// SF MTP

	class NLD_MTP_Operator: NLD_SF_Operator
	{
		vehicleClass = "Infantry_SFMTP";
		displayName = "Operator";
		backpack = "NLD_MTP_Carryall_B";
		uniformClass = "NLD_MTP_Camo";
		faction = "NLD_Units_MTP";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\MTP\Data\Uniform.paa", "\NLD_Insignia\Badges\kctscorps.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		weapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGogglesB_blk_F"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_MTP_Operator.jpg";
	};

    class NLD_MTP_Operator_MP5: NLD_SF_Operator
    {
    	vehicleClass = "Infantry_SFMTP";
    	displayName="Operator (MP5)";
    	uniformClass = "NLD_MTP_Camo2";
		faction = "NLD_Units_MTP";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\MTP\Data\Uniform.paa", "\NLD_Insignia\Badges\kctscorps.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
    	backpack = "NLD_MTP_Carryall_MP5";
    	weapons[] = {"NLD_MP5", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_MP5", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		magazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Aliende", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "NVGogglesB_blk_F"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_MTP_Operator_MP5.jpg";
    };

	class NLD_MTP_MEDIC: NLD_SF_MEDIC
	{
		vehicleClass = "Infantry_SFMTP";
		displayName="Medic";
		backpack = "NLD_MTP_Carryall_Medic";
		uniformClass = "NLD_MTP_Camo";
		attendant = 1;
		faction = "NLD_Units_MTP";
		hiddenSelectionsTextures[] = {"\NLD_Gear\MTP\Data\Uniform.paa", "\NLD_Insignia\Badges\kctscorps.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		weapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_MTP_MEDIC.jpg";
	};

	class NLD_MTP_COMSPEC: NLD_SF_COMSPEC
	{
		vehicleClass = "Infantry_SFMTP";
		displayName="ComSpec";
		backpack = "NLD_MTP_Carryall_ComSpec";
		uniformClass = "NLD_MTP_Camo";
		faction = "NLD_Units_MTP";
		hiddenSelectionsTextures[] = {"\NLD_Gear\MTP\Data\Uniform.paa", "\NLD_Insignia\Badges\kctscorps.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		weapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "Laserdesignator"};
		respawnWeapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "Laserdesignator"};
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","B_UavTerminal", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","B_UavTerminal", "NVGogglesB_blk_F"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_MTP_COMSPEC.jpg";
	};

	class NLD_MTP_DEMSPEC: NLD_SF_DEMSPEC
	{
		vehicleClass = "Infantry_SFMTP";
		displayName="DemSpec";
		backpack = "NLD_MTP_Carryall_Expl";
		uniformClass = "NLD_MTP_Camo";
		faction = "NLD_Units_MTP";
		hiddenSelectionsTextures[] = {"\NLD_Gear\MTP\Data\Uniform.paa", "\NLD_Insignia\Badges\kctscorps.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		weapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "Laserdesignator"};
		respawnWeapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "Laserdesignator"};
		canDeactivateMines = 1;
		engineer = 1;
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_MTP_DEMSPEC.jpg";
	};

	class NLD_MTP_TL: NLD_SF_TL
	{
		vehicleClass = "Infantry_SFMTP";
		displayName="Team Leader";
		backpack = "NLD_MTP_Carryall_TL";
		uniformClass = "NLD_MTP_Camo";
		faction = "NLD_Units_MTP";
		hiddenSelectionsTextures[] = {"\NLD_Gear\MTP\Data\Uniform.paa", "\NLD_Insignia\Badges\kctscorps.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		weapons[] = {"NLD_HK416_GL", "NLD_Glock17S", "Throw", "Put", "Laserdesignator"};
		respawnWeapons[] = {"NLD_HK416_GL", "NLD_Glock17S", "Throw", "Put", "Laserdesignator"};
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_MTP_TL.jpg";
	};

	class NLD_MTP_SLA: NLD_SF_SLA
	{
		vehicleClass = "Infantry_SFMTP";
		backpack = "NLD_MTP_Carryall_SLA";
		uniformClass = "NLD_MTP_Camo";
		faction = "NLD_Units_MTP";
		hiddenSelectionsTextures[] = {"\NLD_Gear\MTP\Data\Uniform.paa", "\NLD_Insignia\Badges\kctscorps.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		weapons[] = {"NLD_HK417", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_HK417", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		magazines[] = {"CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_MTP_SLA.jpg";
	};
	
	class NLD_MTP_AT: NLD_SF_AT
	{
		vehicleClass = "Infantry_SFMTP";
		displayName="Operator (Spike MR)";
		backpack = "NLD_MTP_Carryall_AT";
		uniformClass = "NLD_MTP_Camo";
		faction = "NLD_Units_MTP";
		hiddenSelectionsTextures[] = {"\NLD_Gear\MTP\Data\Uniform.paa", "\NLD_Insignia\Badges\kctscorps.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		weapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "NLD_Spike", "Rangefinder"};
		respawnWeapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "NLD_Spike", "Rangefinder"};
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_MTP_AT.jpg";
	};
	
	class NLD_MTP_LAT: NLD_SF_LAT
	{
		vehicleClass = "Infantry_SFMTP";
		displayName="Operator (AT4)";
		backpack = "NLD_MTP_Carryall_LAT";
		uniformClass = "NLD_MTP_Camo";
		faction = "NLD_Units_MTP";
		hiddenSelectionsTextures[] = {"\NLD_Gear\MTP\Data\Uniform.paa", "\NLD_Insignia\Badges\kctscorps.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		weapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "NLD_AT4", "Rangefinder"};
		respawnWeapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "NLD_AT4", "Rangefinder"};
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "CUP_M136_M", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "CUP_M136_M", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_MTP_AT.jpg";
	};
	
	class NLD_MTP_AA: NLD_SF_AA
	{
		vehicleClass = "Infantry_SFMTP";
		scope = 1;
		displayName="Operator AA";
		backpack = "NLD_MTP_Carryall_AA";
		uniformClass = "NLD_MTP_Camo";
		faction = "NLD_Units_MTP";
		hiddenSelectionsTextures[] = {"\NLD_Gear\MTP\Data\Uniform.paa", "\NLD_Insignia\Badges\kctscorps.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		weapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "CUP_launch_FIM92Stinger", "Rangefinder"};
		respawnWeapons[] = {"NLD_HK416", "NLD_Glock17S", "Throw", "Put", "CUP_launch_FIM92Stinger", "Rangefinder"};
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_MTP_AA.jpg";
	};

	class NLD_MTP_AR: NLD_SF_AR
	{
		vehicleClass = "Infantry_SFMTP";
		displayName="Autorifleman";
		backpack = "NLD_MTP_Carryall_AR";
		uniformClass = "NLD_MTP_Camo";
		faction = "NLD_Units_MTP";
		hiddenSelectionsTextures[] = {"\NLD_Gear\MTP\Data\Uniform.paa", "\NLD_Insignia\Badges\kctscorps.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		weapons[] = {"NLD_Minimi", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_Minimi", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		magazines[] = {"CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch", "CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch","CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch", "CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_MTP_AR.jpg";
	};
	
	class NLD_MTP_MMG: NLD_SF_AR
	{
		vehicleClass = "Infantry_SFMTP";
		displayName="Medium MachineGunner";
		backpack = "NLD_MTP_Carryall_MMG";
		uniformClass = "NLD_MTP_Camo";
		faction = "NLD_Units_MTP";
		hiddenSelectionsTextures[] = {"\NLD_Gear\MTP\Data\Uniform.paa", "\NLD_Insignia\Badges\kctscorps.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		weapons[] = {"NLD_MAG", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_MAG", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_MTP_AR.jpg";
	};
		
	class NLD_MTP_HSLA: NLD_SF_SLA
	{
		vehicleClass = "Infantry_SFMTP";
		displayName="Heavy Sniper";
		backpack = "NLD_MTP_Carryall_HSLA";
		uniformClass = "NLD_MTP_Camo";
		faction = "NLD_Units_MTP";
		hiddenSelectionsTextures[] = {"\NLD_Gear\MTP\Data\Uniform.paa", "\NLD_Insignia\Badges\kctscorps.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		weapons[] = {"NLD_M107", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_M107", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		magazines[] = {"CUP_10Rnd_127x99_M107", "CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107", "CUP_10Rnd_127x99_M107", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_10Rnd_127x99_M107", "CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107", "CUP_10Rnd_127x99_M107", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		linkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier", "NLD_MTP_ECH", "NLD_Facewrap_Multicam", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_MTP_SLA.jpg";
	};
	
// SF Marsof

	class NLD_KM_Operator: NLD_SF_Operator
	{
		vehicleClass = "Infantry_KM";
		displayName = "Operator";
		backpack = "NLD_KM_Carryall_B";
		uniformClass = "NLD_KM_Camo";
		faction = "NLD_Units_KM";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\csquad.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator.jpg";
	};

    class NLD_KM_Operator_MP5: NLD_SF_Operator
    {
    	vehicleClass = "Infantry_KM";
    	displayName="Operator (MP5)";
    	uniformClass = "NLD_KM_Camo";
		faction = "NLD_Units_KM";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Uniform.paa", "\NLD_Gear\Korps_Mariniers\Data\csquad.paa"};
		hiddenSelectionsMaterials[] = {"\NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		backpack = "NLD_KM_Carryall_MP5";
		weapons[] = {"NLD_MP5", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_MP5", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		magazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGogglesB_blk_F"};
      editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_Operator_MP5.jpg";
    };

	class NLD_KM_MEDIC: NLD_SF_MEDIC
	{
		vehicleClass = "Infantry_KM";
		backpack = "NLD_KM_Carryall_Medic";
		uniformClass = "NLD_KM_Camo";
		faction = "NLD_Units_KM";
		attendant = 1;
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_MEDIC.jpg";
	};

	class NLD_KM_COMSPEC: NLD_SF_COMSPEC
	{
		vehicleClass = "Infantry_KM";
		backpack = "NLD_KM_Carryall_ComSpec";
		uniformClass = "NLD_KM_Camo";
		faction = "NLD_Units_KM";
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","B_UavTerminal", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","B_UavTerminal", "NVGogglesB_blk_F"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_COMSPEC.jpg";
	};

	class NLD_KM_DEMSPEC: NLD_SF_DEMSPEC
	{
		vehicleClass = "Infantry_KM";
		backpack = "NLD_KM_Carryall_Expl";
		uniformClass = "NLD_KM_Camo";
		faction = "NLD_Units_KM";
		canDeactivateMines = 1;
		engineer = 1;
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_DEMSPEC.jpg";
	};

	class NLD_KM_TL: NLD_SF_TL
	{
		vehicleClass = "Infantry_KM";
		backpack = "NLD_KM_Carryall_TL";
		uniformClass = "NLD_KM_Camo";
		faction = "NLD_Units_KM";
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_TL.jpg";
	};

	class NLD_KM_SLA: NLD_SF_SLA
	{
		vehicleClass = "Infantry_KM";
		backpack = "NLD_KM_Carryall_SLA";
		uniformClass = "NLD_KM_Camo";
		faction = "NLD_Units_KM";
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_SLA.jpg";
	};
	
	class NLD_KM_HSLA: NLD_SF_SLA
	{
		displayName = "Heavy sniper";
		vehicleClass = "Infantry_KM";
		backpack = "NLD_KM_Carryall_HSLA";
		uniformClass = "NLD_KM_Camo";
		faction = "NLD_Units_KM";
		weapons[] = {"NLD_M107", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_M107", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		magazines[] = {"CUP_10Rnd_127x99_M107", "CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107", "CUP_10Rnd_127x99_M107", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_10Rnd_127x99_M107", "CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107", "CUP_10Rnd_127x99_M107", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_SLA.jpg";
	};

	class NLD_KM_AT: NLD_SF_AT
	{
		vehicleClass = "Infantry_KM";
		backpack = "NLD_KM_Carryall_AT";
		uniformClass = "NLD_KM_Camo";
		faction = "NLD_Units_KM";
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_AT.jpg";
	};
	
	class NLD_KM_LAT: NLD_SF_LAT
	{
		vehicleClass = "Infantry_KM";
		backpack = "NLD_KM_Carryall_LAT";
		uniformClass = "NLD_KM_Camo";
		faction = "NLD_Units_KM";
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "CUP_M136_M", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "CUP_M136_M", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_AT.jpg";
	};

	class NLD_KM_AA: NLD_SF_AA
	{
		vehicleClass = "Infantry_KM";
		scope = 1;
		backpack = "NLD_KM_Carryall_AA";
		uniformClass = "NLD_KM_Camo";
		faction = "NLD_Units_KM";
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_AA.jpg";
	};

	class NLD_KM_AR: NLD_MTP_AR
	{
		vehicleClass = "Infantry_KM";
		displayName = "Autorifleman";
		backpack = "NLD_KM_Carryall_AR";
		uniformClass = "NLD_KM_Camo";
		faction = "NLD_Units_KM";
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_AR.jpg";
	};
	
	class NLD_KM_MMG: NLD_MTP_MMG
	{
		vehicleClass = "Infantry_KM";
		displayName = "Medium MachineGunner";
		backpack = "NLD_KM_Carryall_MMG";
		uniformClass = "NLD_KM_Camo";
		faction = "NLD_Units_KM";
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_AR.jpg";
	};

	class NLD_KM_LAR: NLD_SF_AR
	{
		displayName = "Light Automatic Rifleman";
		vehicleClass = "Infantry_KM";
		genericNames = "NLD_Units";
		backpack = "NLD_KM_Carryall_LAR";
		uniformClass = "NLD_KM_Camo";
		hasDriver = 1;
		faction = "NLD_Units_KM";
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F", "NLD_KM_Helmet", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		weapons[] = {"NLD_HK_LSW", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_HK_LSW", "NLD_Glock17S", "Throw", "Put", "Rangefinder"};
		magazines[] = {"CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire","CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire","CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_KM_LAR.jpg";
	};




// UN Woodland Units

	class NLD_UN_WLD_rifleman: NLD_WLD_rifleman
	{
		vehicleClass = "Infantry_UN_Woodland";
		backpack = "NLD_WLD_Carryall_B";
		uniformClass = "NLD_WLD_Camo";
		faction = "NLD_Units_UN_WLD";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_rifleman.jpg";
	};

	class NLD_UN_WLD_AR: NLD_WLD_AR
	{
		vehicleClass = "Infantry_UN_Woodland";
		backpack = "NLD_WLD_Carryall_AR";
		uniformClass = "NLD_WLD_Camo";
		faction = "NLD_Units_UN_WLD";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_AR.jpg";
	};

	class NLD_UN_WLD_LAT: NLD_WLD_LAT
	{
		vehicleClass = "Infantry_UN_Woodland";
		backpack = "NLD_WLD_Carryall_AT";
		uniformClass = "NLD_WLD_Camo";
		faction = "NLD_Units_UN_WLD";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_LAT.jpg";
	};
	
	class NLD_UN_WLD_LAT4: NLD_WLD_LAT4
	{
		vehicleClass = "Infantry_UN_Woodland";
		backpack = "NLD_WLD_Carryall_AT4";
		uniformClass = "NLD_WLD_Camo";
		faction = "NLD_Units_UN_WLD";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_LAT.jpg";
	};

	class NLD_UN_WLD_CLS: NLD_WLD_CLS
	{
		vehicleClass = "Infantry_UN_Woodland";
		backpack = "NLD_WLD_Carryall_Medic";
		uniformClass = "NLD_WLD_Camo";
		attendant = 1;
		faction = "NLD_Units_UN_WLD";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_CLS.jpg";
	};

	class NLD_UN_WLD_GL: NLD_WLD_GL
	{
		vehicleClass = "Infantry_UN_Woodland";
		uniformClass = "NLD_WLD_Camo";
		faction = "NLD_Units_UN_WLD";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_GL.jpg";
		backpack = "NLD_WLD_Carryall_TL";
	};

	class NLD_UN_WLD_ENGI: NLD_WLD_ENGI
	{
		vehicleClass = "Infantry_UN_Woodland";
		backpack = "NLD_WLD_Carryall_Eng";
		uniformClass = "NLD_WLD_Camo";
		engineer = 1;
		faction = "NLD_Units_UN_WLD";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_ENGI.jpg";
	};

	class NLD_UN_WLD_EXPL: NLD_WLD_EXPL
	{
		vehicleClass = "Infantry_UN_Woodland";
		backpack = "NLD_WLD_Carryall_Expl";
		uniformClass = "NLD_WLD_Camo";
		canDeactivateMines = 1;
		faction = "NLD_Units_UN_WLD";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_EXPL.jpg";
	};

	class NLD_UN_WLD_UAV: NLD_WLD_UAV
	{
		vehicleClass = "Infantry_UN_Woodland";
		uniformClass = "NLD_WLD_Camo";
		faction = "NLD_Units_UN_WLD";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		backpack = "B_MAV_B_BACKPACK";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_UAV.jpg";
	};

	class NLD_UN_WLD_JTAC: NLD_WLD_JTAC
	{
 		vehicleClass = "Infantry_UN_Woodland";
		backpack = "NLD_WLD_Carryall_JTAC";
		uniformClass = "NLD_WLD_Camo";
		faction = "NLD_Units_UN_WLD";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_JTAC.jpg";
	};

	class NLD_UN_WLD_OFF: NLD_WLD_OFF
	{
		vehicleClass = "Infantry_UN_Woodland";
		uniformClass = "NLD_WLD_Camo";
		faction = "NLD_Units_UN_WLD";
		backpack = "NLD_WLD_Carryall_B";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_OFF.jpg";
	};

	class NLD_UN_WLD_SL: NLD_WLD_SL
	{
		vehicleClass = "Infantry_UN_Woodland";
		uniformClass = "NLD_WLD_Camo";
		faction = "NLD_Units_UN_WLD";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		backpack = "NLD_WLD_Carryall_TL";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_SL.jpg";
	};

	class NLD_UN_WLD_TL: NLD_WLD_TL
	{
		vehicleClass = "Infantry_UN_Woodland";
		uniformClass = "NLD_WLD_Camo";
		faction = "NLD_Units_UN_WLD";
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_WLD_Carryall_TL";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_TL.jpg";
	};

	class NLD_UN_WLD_SLA: NLD_WLD_SLA
	{
		vehicleClass = "Infantry_UN_Woodland";
		uniformClass = "NLD_WLD_Camo";
		faction = "NLD_Units_UN_WLD";
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		backpack = "NLD_WLD_Carryall_B";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_SLA.jpg";
	};

	class NLD_UN_WLD_Ammo: NLD_WLD_Ammo
	{
		vehicleClass = "Infantry_UN_Woodland";
		uniformClass = "NLD_WLD_Camo";
		faction = "NLD_Units_UN_WLD";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_WLD_Carryall_Ammo";
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_Ammo.jpg";
	};

	class NLD_UN_WLD_AAR: NLD_WLD_rifleman
	{
		displayName = "Assistant Automatic Rifleman";
		vehicleClass = "Infantry_UN_Woodland";
		backpack = "NLD_WLD_Carryall_AAR";
		uniformClass = "NLD_WLD_Camo";
		faction = "NLD_Units_UN_WLD";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_AAR.jpg";
	};

	class NLD_UN_WLD_MMG: NLD_WLD_MMG
	{
		displayName = "Medium Machine Gunner";
		backpack = "NLD_WLD_Carryall_MMG";
		vehicleClass = "Infantry_UN_Woodland";
		uniformClass = "NLD_WLD_Camo";
		faction = "NLD_Units_UN_WLD";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_MMG.jpg";
	};

	class NLD_UN_WLD_AMMG: NLD_WLD_AMMG
	{
		displayName = "Assistant Medium Machine Gunner";
		vehicleClass = "Infantry_UN_Woodland";
		backpack = "NLD_WLD_Carryall_MMG";
		uniformClass = "NLD_WLD_Camo";
		faction = "NLD_Units_UN_WLD";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_AMMG.jpg";
	};

	class NLD_UN_WLD_MAT: NLD_WLD_MAT
	{
		displayName = "Medium Anti-Tank";
		backpack = "NLD_WLD_Carryall_MAT";
		vehicleClass = "Infantry_UN_Woodland";
		uniformClass = "NLD_WLD_Camo";
		faction = "NLD_Units_UN_WLD";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_MAT.jpg";
	};

	class NLD_UN_WLD_AMAT: NLD_WLD_AMAT
	{
		displayName = "Assistant Medium Anti-Tank";
		backpack = "NLD_WLD_Carryall_MAT";
		vehicleClass = "Infantry_UN_Woodland";
		uniformClass = "NLD_WLD_Camo";
		faction = "NLD_Units_UN_WLD";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_AMAT.jpg";
	};

	class NLD_UN_WLD_AA: NLD_WLD_AA
	{
		displayName = "Anti-Air";
		vehicleClass = "Infantry_UN_Woodland";
		backpack = "NLD_WLD_Carryall_AA";
		uniformClass = "NLD_WLD_Camo";
		faction = "NLD_Units_UN_WLD";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_AA.jpg";
	};

	class NLD_UN_WLD_AAA: NLD_WLD_AAA
	{
		displayName = "Assistant Anti-Air";
		backpack = "NLD_WLD_Carryall_AA";
		vehicleClass = "Infantry_UN_Woodland";
		uniformClass = "NLD_WLD_Camo";
		faction = "NLD_Units_UN_WLD";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_WLD_AAA.jpg";
	};

// UN Desert Units

	class NLD_UN_DST_rifleman: NLD_WLD_rifleman
	{
		vehicleClass = "Infantry_UN_Desert";
		backpack = "NLD_DST_Carryall_B";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_UN_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_rifleman.jpg";
	};

	class NLD_UN_DST_AR: NLD_WLD_AR
	{
		vehicleClass = "Infantry_UN_Desert";
		backpack = "NLD_DST_Carryall_AR";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_UN_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_AR.jpg";
	};

	class NLD_UN_DST_LAT: NLD_WLD_LAT
	{
		vehicleClass = "Infantry_UN_Desert";
		backpack = "NLD_DST_Carryall_AT";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_UN_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_LAT.jpg";
	};
	
	class NLD_UN_DST_LAT4: NLD_WLD_LAT4
	{
		vehicleClass = "Infantry_UN_Desert";
		backpack = "NLD_DST_Carryall_AT4";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_UN_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_LAT.jpg";
	};

	class NLD_UN_DST_CLS: NLD_WLD_CLS
	{
		vehicleClass = "Infantry_UN_Desert";
		backpack = "NLD_DST_Carryall_Medic";
		uniformClass = "NLD_DST_Camo";
		attendant = 1;
		faction = "NLD_Units_UN_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_CLS.jpg";
	};

	class NLD_UN_DST_GL: NLD_WLD_GL
	{
		vehicleClass = "Infantry_UN_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_UN_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_GL.jpg";
		backpack = "NLD_DST_Carryall_TL";
	};

	class NLD_UN_DST_ENGI: NLD_WLD_ENGI
	{
		vehicleClass = "Infantry_UN_Desert";
		backpack = "NLD_DST_Carryall_Eng";
		uniformClass = "NLD_DST_Camo";
		engineer = 1;
		faction = "NLD_Units_UN_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_ENGI.jpg";
	};

	class NLD_UN_DST_EXPL: NLD_WLD_EXPL
	{
		vehicleClass = "Infantry_UN_Desert";
		backpack = "NLD_DST_Carryall_Expl";
		uniformClass = "NLD_DST_Camo";
		canDeactivateMines = 1;
		faction = "NLD_Units_UN_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_EXPL.jpg";
	};

	class NLD_UN_DST_UAV: NLD_WLD_UAV
	{
		vehicleClass = "Infantry_UN_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_UN_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "B_UAVTerminal", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_UAV.jpg";
		backpack = "B_MAV_B_BACKPACK";
	};

	class NLD_UN_DST_JTAC: NLD_WLD_JTAC
	{
 		vehicleClass = "Infantry_UN_Desert";
		backpack = "NLD_DST_Carryall_JTAC";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_UN_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_JTAC.jpg";
	};

	class NLD_UN_DST_OFF: NLD_WLD_OFF
	{
		vehicleClass = "Infantry_UN_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_UN_DST";
		backpack = "NLD_DST_Carryall_B";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_OFF.jpg";
	};

	class NLD_UN_DST_SL: NLD_WLD_SL
	{
		vehicleClass = "Infantry_UN_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_UN_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		backpack = "NLD_DST_Carryall_TL";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_SL.jpg";
	};

	class NLD_UN_DST_TL: NLD_WLD_TL
	{
		vehicleClass = "Infantry_UN_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_UN_DST";
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio","Rangefinder"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_DST_Carryall_TL";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_TL.jpg";
	};

	class NLD_UN_DST_SLA: NLD_WLD_SLA
	{
		vehicleClass = "Infantry_UN_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_UN_DST";
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		backpack = "NLD_DST_Carryall_B";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_SLA.jpg";
	};

	class NLD_UN_DST_Ammo: NLD_WLD_Ammo
	{
		vehicleClass = "Infantry_UN_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_UN_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02";
		backpack = "NLD_DST_Carryall_Ammo";
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_Ammo.jpg";
	};

	class NLD_UN_DST_AAR: NLD_WLD_rifleman
	{
		displayName = "Assistant Automatic Rifleman";
		vehicleClass = "Infantry_UN_Desert";
		backpack = "NLD_DST_Carryall_AAR";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_UN_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_AAR.jpg";
	};

	class NLD_UN_DST_MMG: NLD_WLD_MMG
	{
		displayName = "Medium Machine Gunner";
		backpack = "NLD_DST_Carryall_MMG";
		vehicleClass = "Infantry_UN_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_UN_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_MMG.jpg";
	};

	class NLD_UN_DST_AMMG: NLD_WLD_AMMG
	{
		displayName = "Assistant Medium Machine Gunner";
		vehicleClass = "Infantry_UN_Desert";
		backpack = "NLD_DST_Carryall_MMG";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_UN_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_AMMG.jpg";
	};

	class NLD_UN_DST_MAT: NLD_WLD_MAT
	{
		displayName = "Medium Anti-Tank";
		backpack = "NLD_DST_Carryall_MAT";
		vehicleClass = "Infantry_UN_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_UN_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_MAT.jpg";
	};

	class NLD_UN_DST_AMAT: NLD_WLD_AMAT
	{
		displayName = "Assistant Medium Anti-Tank";
		backpack = "NLD_DST_Carryall_MAT";
		vehicleClass = "Infantry_UN_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_UN_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_AMAT.jpg";
	};

	class NLD_UN_DST_AA: NLD_WLD_AA
	{
		displayName = "Anti-Air";
		vehicleClass = "Infantry_UN_Desert";
		backpack = "NLD_DST_Carryall_AA";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_UN_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_AA.jpg";
	};

	class NLD_UN_DST_AAA: NLD_WLD_AAA
	{
		displayName = "Assistant Anti-Air";
		backpack = "NLD_DST_Carryall_AA";
		vehicleClass = "Infantry_UN_Desert";
		uniformClass = "NLD_DST_Camo";
		faction = "NLD_Units_UN_DST";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest", "NLD_UN_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_UN_DST_AAA.jpg";
	};
	
//DSI
	class NLD_DSI_assault: B_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 1;
		scope = 2;
		displayName = "DSI Assault (HK416)";
		genericNames = "NLD_Units";
		faction = "NLD_Units_DSI";
		vehicleClass = "Infantry_DSI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLD_DSI_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Uniform_DSI.paa", "\NLD_Insignia\Badges\DSI.paa"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_DSI_assault.jpg";
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"NLD_DSI_PlateCarrier", "NLD_DSI_Helmet","CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_DSI_PlateCarrier", "NLD_DSI_Helmet","CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGogglesB_blk_F"};
		weapons[] = {"NLD_HK416_DSI", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_HK416_DSI", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShell"};
    };
	
	class NLD_DSI_SLA: NLD_DSI_assault
	{
		vehicleClass = "Infantry_DSI";
		uniformClass = "NLD_DSI_Camo";
		displayName = "DSI SLA";
		faction = "NLD_Units_DSI";
		linkedItems[] = {"NLD_DSI_PlateCarrier", "NLD_DSI_Helmet", "CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_DSI_PlateCarrier", "NLD_DSI_Helmet", "CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Uniform_DSI.paa", "\NLD_Insignia\Badges\DSI.paa"};
		weapons[] = {"NLD_HK417_DSI", "NLD_Glock17", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_HK417_DSI", "NLD_Glock17", "Throw", "Put", "Rangefinder"};
		magazines[] = {"CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417","CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_20Rnd_762x51_HK417", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShell"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_DSI_SLA.jpg";
	};
	
	class NLD_DSI_HSLA: NLD_DSI_assault
	{
		vehicleClass = "Infantry_DSI";
		uniformClass = "NLD_DSI_Camo";
		displayName = "DSI Heavy SLA";
		faction = "NLD_Units_DSI";
		linkedItems[] = {"NLD_DSI_PlateCarrier", "NLD_DSI_Helmet", "CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_DSI_PlateCarrier", "NLD_DSI_Helmet", "CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Uniform_DSI.paa", "\NLD_Insignia\Badges\DSI.paa"};
		weapons[] = {"NLD_SIG_DSI", "NLD_Glock17", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"NLD_SIG_DSI", "NLD_Glock17", "Throw", "Put", "Rangefinder"};
		magazines[] = {"10Rnd_338_Mag", "10Rnd_338_Mag","10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"10Rnd_338_Mag", "10Rnd_338_Mag","10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShell"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_DSI_HSLA.jpg";
	};
	
	class NLD_DSI_EOD: NLD_DSI_assault
	{
		vehicleClass = "Infantry_DSI";
		uniformClass = "NLD_DSI_Camo";
		displayName = "DSI Explosive Expert";
		backpack = "B_UGV_02_Demining_backpack_F";
		faction = "NLD_Units_DSI";
		canDeactivateMines = 1;
		engineer = 1;
		linkedItems[] = {"NLD_Vest_DSI_EOD", "NLD_DSI_Helmet", "CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "B_UavTerminal", "ItemWatch", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_Vest_DSI_EOD", "NLD_DSI_Helmet", "CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass","B_UavTerminal", "ItemWatch", "ItemRadio", "NVGogglesB_blk_F"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Uniform_DSI.paa", "\NLD_Insignia\Badges\DSI.paa"};
		weapons[] = {"NLD_MP5K", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_MP5K", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17", "SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17", "SmokeShell","SmokeShell"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_DSI_EOD.jpg";
	};
	
	class NLD_DSI_Breach: NLD_DSI_assault
	{
		vehicleClass = "Infantry_DSI";
		uniformClass = "NLD_DSI_Camo";
		displayName = "DSI Breacher";
		faction = "NLD_Units_DSI";
		canDeactivateMines = 1;
		engineer = 1;
		linkedItems[] = {"NLD_Vest_DSI_EOD", "NLD_DSI_Helmet", "CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_Vest_DSI_EOD", "NLD_DSI_Helmet", "CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGogglesB_blk_F"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Uniform_DSI.paa", "\NLD_Insignia\Badges\DSI.paa"};
		weapons[] = {"NLD_Beneli", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_Beneli", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_8Rnd_B_Beneli_74Slug", "CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug", "CUP_8Rnd_B_Beneli_74Slug", "CUP_8Rnd_B_Beneli_74Slug", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_8Rnd_B_Beneli_74Slug", "CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug", "CUP_8Rnd_B_Beneli_74Slug", "CUP_8Rnd_B_Beneli_74Slug", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","SmokeShell","SmokeShell"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_DSI_Breach.jpg";
	};
	
	class NLD_DSI_assault_mp5: NLD_DSI_assault
	{
		vehicleClass = "Infantry_DSI";
		uniformClass = "NLD_DSI_Camo";
		displayName = "DSI Assault (MP5A5)";
		faction = "NLD_Units_DSI";
		linkedItems[] = {"NLD_DSI_PlateCarrier", "NLD_DSI_Helmet", "CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_DSI_PlateCarrier", "NLD_DSI_Helmet", "CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGogglesB_blk_F"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Uniform_DSI.paa", "\NLD_Insignia\Badges\DSI.paa"};
		weapons[] = {"NLD_MP5", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_MP5", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShell"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_DSI_assault_mp5.jpg";
	};
	
	class NLD_DSI_Diver: NLD_DSI_assault
	{
		vehicleClass = "Infantry_DSI";
		uniformClass = "U_B_Wetsuit";
		displayName = "DSI Diver";
		faction = "NLD_Units_DSI";
		linkedItems[] = {"V_RebreatherB", "G_Diving", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_RebreatherB", "G_Diving", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Uniform_DSI.paa", "\NLD_Insignia\Badges\DSI.paa"};
		weapons[] = {"NLD_MP5", "Throw", "Put"};
		respawnWeapons[] = {"NLD_MP5", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "SmokeShell","SmokeShell"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_DSI_Diver.jpg";
	};
	
	class NLD_DSI_GL: NLD_DSI_assault
	{
		vehicleClass = "Infantry_DSI";
		uniformClass = "NLD_DSI_Camo";
		displayName = "DSI Grenadier";
		faction = "NLD_Units_DSI";
		linkedItems[] = {"NLD_Vest_DSI_EOD", "NLD_DSI_Helmet", "CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_Vest_DSI_EOD", "NLD_DSI_Helmet", "CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGogglesB_blk_F"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Uniform_DSI.paa", "\NLD_Insignia\Badges\DSI.paa"};
		weapons[] = {"NLD_M32_GL", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_M32_GL", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_6Rnd_Smoke_M203", "CUP_6Rnd_Smoke_M203","CUP_6Rnd_Smoke_M203", "CUP_6Rnd_Smoke_M203", "CUP_6Rnd_Smoke_M203", "CUP_6Rnd_HE_M203", "CUP_6Rnd_HE_M203", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_6Rnd_Smoke_M203", "CUP_6Rnd_Smoke_M203","CUP_6Rnd_Smoke_M203", "CUP_6Rnd_Smoke_M203", "CUP_6Rnd_Smoke_M203", "CUP_6Rnd_HE_M203", "CUP_6Rnd_HE_M203", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","SmokeShell","SmokeShell"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_DSI_GL.jpg";
	};
	
	class NLD_DSI_TL: NLD_DSI_assault
	{
		vehicleClass = "Infantry_DSI";
		uniformClass = "NLD_DSI_Camo";
		displayName = "DSI Team Leader";
		faction = "NLD_Units_DSI";
		linkedItems[] = {"NLD_DSI_PlateCarrier", "NLD_DSI_Helmet","CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_DSI_PlateCarrier", "NLD_DSI_Helmet","CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "ItemRadio", "NVGogglesB_blk_F"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Uniform_DSI.paa", "\NLD_Insignia\Badges\DSI.paa"};
		weapons[] = {"NLD_HK416_DSI", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_HK416_DSI", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShell"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_DSI_TL.jpg";
	};
	
	class NLD_DSI_Medic: NLD_DSI_assault
	{
		vehicleClass = "Infantry_DSI";
		uniformClass = "NLD_DSI_Camo";
		displayName = "DSI Medic";
		faction = "NLD_Units_DSI";
		attendant = 1;
		backpack = "NLD_DSI_Backpack_Medic";
		linkedItems[] = {"NLD_DSI_PlateCarrier", "NLD_DSI_Helmet","CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_DSI_PlateCarrier", "NLD_DSI_Helmet","CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGogglesB_blk_F"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Uniform_DSI.paa", "\NLD_Insignia\Badges\DSI.paa"};
		weapons[] = {"NLD_HK416_DSI", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_HK416_DSI", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShell"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_DSI_Medic.jpg";
	};
	
	class NLD_DSI_AT: NLD_DSI_assault
	{
		vehicleClass = "Infantry_DSI";
		uniformClass = "NLD_DSI_Camo";
		displayName = "DSI AT";
		faction = "NLD_Units_DSI";
		linkedItems[] = {"NLD_DSI_PlateCarrier", "NLD_DSI_Helmet","CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_DSI_PlateCarrier", "NLD_DSI_Helmet","CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGogglesB_blk_F"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Uniform_DSI.paa", "\NLD_Insignia\Badges\DSI.paa"};
		weapons[] = {"NLD_HK416_DSI", "NLD_AT4", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_HK416_DSI", "NLD_AT4", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_M136_M", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_M136_M", "CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShell"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_DSI_AT.jpg";
	};
	
	class NLD_DSI_MG: NLD_DSI_assault
	{
		vehicleClass = "Infantry_DSI";
		uniformClass = "NLD_DSI_Camo";
		displayName = "DSI Assault MG";
		faction = "NLD_Units_DSI";
		linkedItems[] = {"NLD_Vest_DSI_EOD", "NLD_DSI_Helmet","CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"NLD_DSI_PlateCarrier", "NLD_DSI_Helmet","CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGogglesB_blk_F"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Uniform_DSI.paa", "\NLD_Insignia\Badges\DSI.paa"};
		weapons[] = {"NLD_Minimi", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_Minimi", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_100Rnd_TE4_red_Tracer_556x45_M249", "CUP_100Rnd_TE4_red_Tracer_556x45_M249","CUP_100Rnd_TE4_red_Tracer_556x45_M249", "CUP_100Rnd_TE4_red_Tracer_556x45_M249", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_red_Tracer_556x45_M249", "CUP_100Rnd_TE4_red_Tracer_556x45_M249","CUP_100Rnd_TE4_red_Tracer_556x45_M249", "CUP_100Rnd_TE4_red_Tracer_556x45_M249", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","SmokeShell","SmokeShell"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_DSI_MG.jpg";
	};
	
	//AT
	class NLD_AT_assault: B_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 1;
		scope = 2;
		displayName = "AT Assault (MP5)";
		genericNames = "NLD_Units";
		faction = "NLD_Units_DSI";
		vehicleClass = "Infantry_DSI";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLD_AT_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Uniform_AT.paa", "\NLD_Insignia\Badges\AT.paa"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_AT_assault.jpg";
		hasDriver = 1;
		faceType = "Man_A3";
		linkedItems[] = {"NLD_AT_Vest", "NLD_SF_ECH","CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_AT_Vest", "NLD_SF_ECH","CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"NLD_MP5", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_MP5", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","SmokeShell","SmokeShell"};
    };
	
	class NLD_AT_EOD: NLD_AT_assault
	{
		vehicleClass = "Infantry_DSI";
		uniformClass = "NLD_AT_Camo";
		displayName = "AT Explosive Expert";
		backpack = "B_UGV_02_Demining_backpack_F";
		faction = "NLD_Units_DSI";
		canDeactivateMines = 1;
		engineer = 1;
		linkedItems[] = {"NLD_Vest_AT_EOD", "NLD_SF_ECH", "CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "B_UavTerminal", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_Vest_AT_EOD", "NLD_SF_ECH", "CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass","B_UavTerminal", "ItemWatch", "ItemRadio"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Uniform_AT.paa", "\NLD_Insignia\Badges\AT.paa"};
		weapons[] = {"NLD_MP5K", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_MP5K", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17", "SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17", "SmokeShell","SmokeShell"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_AT_EOD.jpg";
	};
	
	class NLD_AT_Breach: NLD_AT_assault
	{
		vehicleClass = "Infantry_DSI";
		uniformClass = "NLD_AT_Camo";
		displayName = "AT Breacher";
		faction = "NLD_Units_DSI";
		canDeactivateMines = 1;
		engineer = 1;
		linkedItems[] = {"NLD_Vest_AT_EOD", "NLD_SF_ECH", "CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_Vest_AT_EOD", "NLD_SF_ECH", "CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Uniform_AT.paa", "\NLD_Insignia\Badges\AT.paa"};
		weapons[] = {"NLD_Beneli", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_Beneli", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_8Rnd_B_Beneli_74Slug", "CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug", "CUP_8Rnd_B_Beneli_74Slug", "CUP_8Rnd_B_Beneli_74Slug", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_8Rnd_B_Beneli_74Slug", "CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug", "CUP_8Rnd_B_Beneli_74Slug", "CUP_8Rnd_B_Beneli_74Slug", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","SmokeShell","SmokeShell"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_AT_Breach.jpg";
	};
	
	class NLD_AT_assault_p90: NLD_AT_assault
	{
		vehicleClass = "Infantry_DSI";
		uniformClass = "NLD_AT_Camo";
		displayName = "AT Assault (FN P90)";
		faction = "NLD_Units_DSI";
		linkedItems[] = {"NLD_AT_Vest", "NLD_SF_ECH", "CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "muzzle_snds_570"};
		respawnLinkedItems[] = {"NLD_AT_Vest", "NLD_SF_ECH", "CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "muzzle_snds_570"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Uniform_AT.paa", "\NLD_Insignia\Badges\AT.paa"};
		weapons[] = {"NLD_P90", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_P90", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","SmokeShell","SmokeShell"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_AT_assault_p90.jpg";
	};
	
	class NLD_AT_TL: NLD_AT_assault
	{
		vehicleClass = "Infantry_DSI";
		uniformClass = "NLD_AT_Camo";
		displayName = "AT Team Leader";
		faction = "NLD_Units_DSI";
		linkedItems[] = {"NLD_AT_Vest", "NLD_SF_ECH","CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_AT_Vest", "NLD_SF_ECH","CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Uniform_AT.paa", "\NLD_Insignia\Badges\AT.paa"};
		weapons[] = {"NLD_MP5", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_MP5", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","SmokeShell","SmokeShell"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_AT_TL.jpg";
	};
	
	class NLD_AT_CBRN: NLD_AT_assault
	{
		vehicleClass = "Infantry_DSI";
		uniformClass = "U_C_CBRN_Suit_01_Blue_F";
		displayName = "AT CBRN";
		backpack = "B_CombinationUnitRespirator_01_F";
		faction = "NLD_Units_DSI";
		linkedItems[] = {"NLD_AT_Vest", "G_AirPurifyingRespirator_01_F", "ItemMap", "ItemCompass", "B_UavTerminal", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_AT_Vest", "G_AirPurifyingRespirator_01_F", "ItemMap", "ItemCompass","B_UavTerminal", "ItemWatch", "ItemRadio"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Uniform_AT.paa", "\NLD_Insignia\Badges\AT.paa"};
		weapons[] = {"NLD_MP5K", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_MP5K", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17", "SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17", "SmokeShell","SmokeShell"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_AT_CBRN.jpg";
	};
	
	class NLD_AT_Medic: NLD_AT_assault
	{
		vehicleClass = "Infantry_DSI";
		uniformClass = "NLD_AT_Camo";
		displayName = "AT Medic";
		faction = "NLD_Units_DSI";
		attendant = 1;
		backpack = "NLD_DSI_Backpack_Medic";
		linkedItems[] = {"NLD_AT_Vest", "NLD_SF_ECH","CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NLD_AT_Vest", "NLD_SF_ECH","CUP_RUS_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Uniform_AT.paa", "\NLD_Insignia\Badges\AT.paa"};
		weapons[] = {"NLD_MP5K", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_MP5K", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","SmokeShell","SmokeShell"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_AT_Medic.jpg";
	};

// Support
	class NLD_Helipilot: B_Helipilot_F
	{
		author = "Lowlands Tactical";
		side = 1;
		scope = 2;
		displayName = "Heli Pilot";
		faction = "NLD_Units";
		genericNames = "NLD_Units";
		vehicleClass = "Infantry_Support";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLD_Helipilot_base";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\Support\Data\pilotcoveralls_co.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		faceType = "Man_A3";
		weapons[] = {"CUP_smg_MP5A5", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"CUP_smg_MP5A5", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_Helipilot.jpg";
	};
	
	class NLD_Pilot_F16: B_Fighter_Pilot_F
	{
		author = "Lowlands Tactical";
		side = 1;
		scope = 2;
		displayName = "Pilot F16 312 SQN";
		faction = "NLD_Units";
		genericNames = "NLD_Units";
		vehicleClass = "Infantry_Support";
		model = "\A3\Characters_F\Common\pilot_f.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLD_pilot_base";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\Support\Data\pilot_suit_rus_co.paa", "\NLD_Insignia\Badges\312SQN.paa"};
		faceType = "Man_A3";
		weapons[] = {"NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen"};
		respawnMagazines[] = {"CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen"};
		editorPreview = "\NLD_Infantry_Units\previews\NLD_Helipilot.jpg";
	};

	class NLD_Helicrew: B_Helipilot_F
	{
		author = "Lowlands Tactical";
		side = 1;
		scope = 2;
		displayName = "Heli Crew";
		faction = "NLD_Units";
		genericNames = "NLD_Units";
		vehicleClass = "Infantry_Support";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLD_Helipilot_base";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\Support\Data\coveralls_co.paa", "\NLD_Insignia\Badges\11LMB.paa"};
		faceType = "Man_A3";
		weapons[] = {"CUP_smg_MP5A5", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"CUP_smg_MP5A5", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen"};
    editorPreview = "\NLD_Infantry_Units\previews\NLD_Helicrew.jpg";
	};

	class NLD_Crew: B_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 1;
		scope = 2;
		displayName = "Crew";
		faction = "NLD_Units";
		genericNames = "NLD_Units";
		vehicleClass = "Infantry_Support";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "NLD_Crew_base";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", ""};
		faceType = "Man_A3";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_Crew.jpg";
		linkedItems[] = {"V_Chestrig_oli", "H_HelmetCrew_I", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS" };
		respawnLinkedItems[] = {"V_Chestrig_oli", "H_HelmetCrew_I", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS" };
		weapons[] = {"CUP_smg_MP5A5", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"CUP_smg_MP5A5", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen"};
        class Wounds
		{
		tex[] = {};
		mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	
	class NLD_Crew_Navy: B_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 1;
		scope = 2;
		displayName = "Navy Crew";
		faction = "NLD_Units";
		genericNames = "NLD_Units";
		vehicleClass = "Infantry_Support";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "NLD_NFPN_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\Support\Data\UniformNavy.paa", ""};
		faceType = "Man_A3";
		editorPreview = "\NLD_Infantry_Units\previews\NLD_Crew.jpg";
		linkedItems[] = {"V_Pocketed_black_F", "H_PASGT_basic_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS" };
		respawnLinkedItems[] = {"V_Pocketed_black_F", "H_PASGT_basic_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS" };
		weapons[] = {"CUP_smg_MP5A5", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"CUP_smg_MP5A5", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen"};
        class Wounds
		{
		tex[] = {};
		mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};

	class NLD_Crew_MLRS: B_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 1;
		scope = 2;
		displayName = "Crew MLRS";
		faction = "NLD_Units";
		genericNames = "NLD_Units";
		vehicleClass = "Infantry_Support";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "NLD_Crew_MLRS_base";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa", "\NLD_Insignia\Badges\109MLRS.paa"};
		faceType = "Man_A3";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_Crew_MLRS.jpg";
		linkedItems[] = {"V_Chestrig_oli", "H_HelmetCrew_I", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS" };
		respawnLinkedItems[] = {"V_Chestrig_oli", "H_HelmetCrew_I", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS" };
		weapons[] = {"CUP_smg_MP5A5", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"CUP_smg_MP5A5", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen"};
        class Wounds
		{
		tex[] = {};
		mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};

	class NLD_KMAR_Crew: B_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 1;
		scope = 2;
		displayName = "Kmar Crew";
		faction = "NLD_Units";
		genericNames = "NLD_Units";
		vehicleClass = "Infantry_Support";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLD_KMAR_Crew_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\Support\Data\kmar_coveralls.paa", ""};
		faceType = "Man_A3";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_KMAR_Crew.jpg";
		linkedItems[] = {"NLD_Police_belt", "NLD_KMAR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS" };
		respawnLinkedItems[] = {"NLD_Police_belt", "NLD_KMAR_Helmet", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS" };
		weapons[] = {"CUP_smg_MP5A5", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"CUP_smg_MP5A5", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen"};
        class Wounds
		{
		tex[] = {};
		mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};

	class NLD_KMAR_Police: B_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 1;
		scope = 2;
		displayName = "Kmar Police";
		faction = "NLD_Units";
		genericNames = "NLD_Units";
		vehicleClass = "Infantry_Support";
		model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLD_KMAR_Camo";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\Support\Data\kmar.paa", ""};
		faceType = "Man_A3";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_KMAR_Police.jpg";
		linkedItems[] = {"NLDO_KMAR_Vest", "Dutch_Beret_KMAR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS" };
		respawnLinkedItems[] = {"NLDO_KMAR_Vest", "Dutch_Beret_KMAR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS" };
		weapons[] = {"NLD_MP5", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_MP5", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen"};
        class Wounds
		{
		tex[] = {};
		mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};

	class NLD_KMAR_Police2: B_Soldier_base_F
	{
		author = "Lowlands Tactical";
		side = 1;
		scope = 2;
		displayName = "Kmar Police 2";
		faction = "NLD_Units";
		genericNames = "NLD_Units";
		vehicleClass = "Infantry_Support";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformAccessories[] = {};
		uniformClass = "NLD_KMAR_Camo2";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\Support\Data\KMAR_Uniform.paa", ""};
		faceType = "Man_A3";
    editorPreview = "\NLD_Infantry_Units\previews\NLD_KMAR_Police2.jpg";
		linkedItems[] = {"NLDO_KMAR_Vest", "Dutch_Beret_KMAR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS" };
		respawnLinkedItems[] = {"NLDO_KMAR_Vest", "Dutch_Beret_KMAR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS" };
		weapons[] = {"NLD_MP5", "NLD_Glock17", "Throw", "Put"};
		respawnWeapons[] = {"NLD_MP5", "NLD_Glock17", "Throw", "Put"};
		magazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_30Rnd_9x19_MP5", "CUP_17Rnd_9x19_glock17", "CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen"};
        class Wounds
		{
		tex[] = {};
		mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};

	class NLD_Police_F: C_man_pilot_F
	{
		author = "Lowlands Tactical";
		side = 3;
		scope = 2;
		faction = "NLD_Units";
		displayName = "Police Pilot";
		backpack = "";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLD_Police_Uniform";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\police\pilots\police_pilot.paa","\NLD_Vehicle_Units\Air\Data\police\pilots\Embleem EC-135_klpd.paa"};
		hasDriver = 1;
    editorPreview = "\NLD_Infantry_Units\previews\NLD_Police_F.jpg";
		linkedItems[] = {"NLD_Police_Helmet","NLD_Police_belt","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"NLD_Police_Helmet","NLD_Police_belt","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		weapons[] = {"hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"hgun_P07_F","Throw","Put"};
		magazines[] = {"Chemlight_Red","Chemlight_Red","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"Chemlight_Red","Chemlight_Red","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
        class Wounds
		{
		tex[] = {};
		mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class NLD_Lifeliner_F: C_man_pilot_F
	{
		author = "Lowlands Tactical";
		side = 3;
		scope = 2;
		faction = "NLD_Units";
		displayName = "Lifeliner Pilot";
		backpack = "";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		uniformAccessories[] = {};
		uniformClass = "NLD_Lifeliner_Uniform";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\lifeliner\pilots\lifeliner_pilot.paa","\NLD_Vehicle_Units\Air\Data\lifeliner\pilots\Lifeliner 2 badge.paa"};
		hasDriver = 1;
    editorPreview = "\NLD_Infantry_Units\previews\NLD_Lifeliner_F.jpg";
		linkedItems[] = {"NLD_Lifeliner_Helmet","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"NLD_Lifeliner_Helmet_Helmet","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"Chemlight_red","Chemlight_red"};
        class Wounds
		{
		tex[] = {};
		mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
};

class CfgWorlds
{
	class GenericNames
	{
		class NLD_Units
		{
			class FirstNames
			{
				NLD_Name001="Sem";
				NLD_Name002="Levi";
				NLD_Name003="Bram";
				NLD_Name004="Daan";
				NLD_Name005="Finn";
				NLD_Name006="Milan";
				NLD_Name007="Lucas";
				NLD_Name008="Luuk";
				NLD_Name009="Jesse";
				NLD_Name010="Tim";
				NLD_Name011="Thomas";
				NLD_Name012="Thijs";
				NLD_Name013="Noah";
				NLD_Name014="Julian";
				NLD_Name015="Ruben";
				NLD_Name016="Liam";
				NLD_Name017="Lars";
				NLD_Name018="Stijn";
				NLD_Name019="Sam";
				NLD_Name020="Max";
				NLD_Name021="Mees";
				NLD_Name022="Sven";
				NLD_Name023="Siem";
				NLD_Name024="Benjamin";
				NLD_Name025="Adam";
				NLD_Name026="Gijs";
				NLD_Name027="Teun";
				NLD_Name028="Jan";
				NLD_Name029="Tijn";
				NLD_Name030="Mats";
				NLD_Name031="Jens";
				NLD_Name032="Luca";
				NLD_Name033="Dex";
				NLD_Name034="Tygo";
				NLD_Name035="Ryan";
				NLD_Name036="Hugo";
				NLD_Name037="David";
				NLD_Name038="Noud";
				NLD_Name039="Floris";
				NLD_Name040="Jurre";
				NLD_Name041="Joep";
				NLD_Name042="Olivier";
				NLD_Name043="Guus";
				NLD_Name044="Boaz";
				NLD_Name045="Cas";
				NLD_Name046="Daniël";
				NLD_Name047="Pepijn";
				NLD_Name048="Ties";
				NLD_Name049="Dani";
				NLD_Name050="Dylan";
				NLD_Name051="Willem";
				NLD_Name052="Roan";
				NLD_Name053="Tom";
				NLD_Name054="Koen";
				NLD_Name055="Nick";
				NLD_Name056="Thijmen";
				NLD_Name057="Stan";
				NLD_Name058="Dean";
				NLD_Name059="Pim";
				NLD_Name060="Jack";
				NLD_Name061="Pieter";
				NLD_Name062="Hidde";
				NLD_Name063="Vince";
				NLD_Name064="Jason";
				NLD_Name065="Johannes";
				NLD_Name066="Damian";
				NLD_Name067="Xavi";
				NLD_Name068="Nathan";
				NLD_Name069="Jasper";
				NLD_Name070="Jelle";
				NLD_Name071="Niels";
				NLD_Name072="Bas";
				NLD_Name073="Samuel";
				NLD_Name074="Niek";
				NLD_Name075="Rayan";
				NLD_Name076="Fedde";
				NLD_Name077="Mick";
				NLD_Name078="Alexander";
				NLD_Name079="Kyan";
				NLD_Name080="Quinn";
				NLD_Name081="Robin";
				NLD_Name082="Joshua";
				NLD_Name083="Simon";
				NLD_Name084="Tobias";
				NLD_Name085="Joey";
				NLD_Name086="Mason";
				NLD_Name087="Casper";
				NLD_Name088="Abel";
				NLD_Name089="Rens";
				NLD_Name090="Joris";
				NLD_Name091="Senn";
				NLD_Name092="Sepp";
				NLD_Name093="Jip";
				NLD_Name094="Mike";
				NLD_Name095="Cornelis";
				NLD_Name096="Owen";
				NLD_Name097="Fabian";
				NLD_Name098="Jelte";
				NLD_Name099="Jonathan";
				NLD_Name100="Aiden";
				NLD_Name101="Timo";
				NLD_Name102="Keano";
				NLD_Name103="Quinten";
				NLD_Name104="Florian";
				NLD_Name105="Jacob";
				NLD_Name106="Hendrik";
				NLD_Name107="Twan";
				NLD_Name108="Jim";
				NLD_Name109="Justin";
				NLD_Name110="Stef";
				NLD_Name111="Job";
				NLD_Name112="Morris";
				NLD_Name113="James";
				NLD_Name114="Lenn";
				NLD_Name115="Boris";
				NLD_Name116="Mika";
				NLD_Name117="Jesper";
				NLD_Name118="Ravi";
				NLD_Name119="Sep";
				NLD_Name120="Melle";
				NLD_Name121="Amir";
				NLD_Name122="Emir";
				NLD_Name123="Matthijs";
				NLD_Name124="Brent";
				NLD_Name125="Lukas";
				NLD_Name126="Wessel";
				NLD_Name127="Dirk";
				NLD_Name128="Dylano";
				NLD_Name129="Julius";
				NLD_Name130="Loek";
				NLD_Name131="Daniel";
				NLD_Name132="Laurens";
				NLD_Name133="Alex";
				NLD_Name134="Gerrit";
				NLD_Name135="Kevin";
				NLD_Name136="Marijn";
				NLD_Name137="Wout";
				NLD_Name138="Imran";
				NLD_Name139="Seth";
				NLD_Name140="Aaron";
				NLD_Name141="Duuk";
				NLD_Name142="Jake";
				NLD_Name143="Joël";
				NLD_Name144="Sil";
				NLD_Name145="Jort";
				NLD_Name146="Bart";
				NLD_Name147="Kay";
				NLD_Name148="Jonas";
				NLD_Name149="Kai";
				NLD_Name150="Leon";
				NLD_Name151="Oscar";
				NLD_Name152="Rick";
				NLD_Name153="Lorenzo";
				NLD_Name154="Milo";
				NLD_Name155="Raf";
				NLD_Name156="Sebastiaan";
				NLD_Name157="Chris";
				NLD_Name158="Tijs";
				NLD_Name159="Valentijn";
				NLD_Name160="Jayson";
				NLD_Name161="Luc";
				NLD_Name162="Thijn";
				NLD_Name163="Aron";
				NLD_Name164="Jamie";
				NLD_Name165="Maarten";
				NLD_Name166="Yusuf";
				NLD_Name167="Ben";
				NLD_Name168="Kyano";
				NLD_Name169="Micha";
				NLD_Name170="Naud";
				NLD_Name171="Felix";
				NLD_Name172="Collin";
				NLD_Name173="Jay";
				NLD_Name174="Sander";
				NLD_Name175="Amin";
				NLD_Name176="Tijmen";
				NLD_Name177="Nout";
				NLD_Name178="Colin";
				NLD_Name179="Ian";
				NLD_Name180="Ibrahim";
				NLD_Name181="Beau";
				NLD_Name182="Kian";
				NLD_Name183="Mathijs";
				NLD_Name184="Joost";
				NLD_Name185="Jordy";
				NLD_Name186="Mark";
				NLD_Name187="Jace";
				NLD_Name188="Evan";
				NLD_Name189="Fynn";
				NLD_Name190="Kick";
				NLD_Name191="Bryan";
				NLD_Name192="Filip";
				NLD_Name193="Sami";
				NLD_Name194="Maurits";
				NLD_Name195="Rafael";
				NLD_Name196="Riley";
				NLD_Name197="Rowan";
				NLD_Name198="Christian";
				NLD_Name199="Lex";
				NLD_Name200="Sten";
				NLD_Name201="Thom";
				NLD_Name202="Victor";
				NLD_Name203="Hamza";
				NLD_Name204="Jari";
				NLD_Name205="Jules";
				NLD_Name206="Vigo";
				NLD_Name207="Matthias";
				NLD_Name208="Sjoerd";
				NLD_Name209="Christiaan";
				NLD_Name210="Elias";
				NLD_Name211="Joas";
				NLD_Name212="Mustafa";
				NLD_Name213="Tristan";
				NLD_Name214="Wouter";
				NLD_Name215="Ilyas";
				NLD_Name216="Ivan";
				NLD_Name217="Jordan";
				NLD_Name218="Stefan";
				NLD_Name219="Ali";
				NLD_Name220="Bilal";
				NLD_Name221="Otis";
				NLD_Name222="Vincent";
				NLD_Name223="Ayoub";
				NLD_Name224="Oliver";
				NLD_Name225="Omar";
				NLD_Name226="Bastiaan";
				NLD_Name227="Berend";
				NLD_Name228="Bradley";
				NLD_Name229="Merijn";
				NLD_Name230="Wesley";
				NLD_Name231="Ayden";
				NLD_Name232="Dion";
				NLD_Name233="Jop";
				NLD_Name234="Michael";
				NLD_Name235="Pelle";
				NLD_Name236="Brandon";
				NLD_Name237="Maxim";
				NLD_Name238="Philip";
				NLD_Name239="Youssef";
				NLD_Name240="Elijah";
				NLD_Name241="Ezra";
				NLD_Name242="Kees";
				NLD_Name243="Luke";
				NLD_Name244="Giovanni";
				NLD_Name245="Ömer";
				NLD_Name246="Zakaria";
				NLD_Name247="Kasper";
				NLD_Name248="Dave";
				NLD_Name249="Kaj";
				NLD_Name250="Bentley";
				NLD_Name251="Brian";
				NLD_Name252="Faas";
				NLD_Name253="Levy";
				NLD_Name254="Marinus";
				NLD_Name255="Mart";
				NLD_Name256="Tycho";
				NLD_Name257="Daley";
				NLD_Name258="Ivar";
				NLD_Name259="Jonah";
				NLD_Name260="Luciano";
				NLD_Name261="Mehmet";
				NLD_Name262="Yassin";
				NLD_Name263="Bruce";
				NLD_Name264="Jakub";
				NLD_Name265="Jax";
				NLD_Name266="Jelmer";
				NLD_Name267="Johan";
				NLD_Name268="Jorn";
				NLD_Name269="Manuel";
				NLD_Name270="Arthur";
				NLD_Name271="Bjorn";
				NLD_Name272="Klaas";
				NLD_Name273="Luka";
				NLD_Name274="Moos";
				NLD_Name275="Younes";
				NLD_Name276="Arie";
				NLD_Name277="Douwe";
				NLD_Name278="Nolan";
				NLD_Name279="Viggo";
				NLD_Name280="Sverre";
				NLD_Name281="Yannick";
				NLD_Name282="Berat";
				NLD_Name283="Lasse";
				NLD_Name284="Olaf";
				NLD_Name285="Peter";
				NLD_Name286="Dorian";
				NLD_Name287="Jacobus";
				NLD_Name288="Jaylen";
				NLD_Name289="Mels";
				NLD_Name290="Siebe";
				NLD_Name291="Joah";
				NLD_Name292="Krijn";
				NLD_Name293="Robert";
				NLD_Name294="Davey";
				NLD_Name295="Jaimy";
				NLD_Name296="Storm";
				NLD_Name297="Tyler";
				NLD_Name298="Alan";
				NLD_Name299="Albert";
				NLD_Name300="Boet";
				NLD_Name301="Denzel";
				NLD_Name302="Devin";
				NLD_Name303="Huub";
				NLD_Name304="Tibbe";
				NLD_Name305="Coen";
				NLD_Name306="Jimmy";
				NLD_Name307="Leendert";
				NLD_Name308="Nils";
				NLD_Name309="Armin";
				NLD_Name310="Ole";
				NLD_Name311="Silvijn";
				NLD_Name312="Sjors";
				NLD_Name313="William";
				NLD_Name314="Ahmet";
				NLD_Name315="Arda";
				NLD_Name316="Ayman";
				NLD_Name317="Bob";
				NLD_Name318="Dante";
				NLD_Name319="Flynn";
				NLD_Name320="Gabriël";
				NLD_Name321="Jarno";
				NLD_Name322="Jochem";
				NLD_Name323="Samuël";
				NLD_Name324="Scott";
				NLD_Name325="Tieme";
				NLD_Name326="Anouar";
				NLD_Name327="Danny";
				NLD_Name328="Giel";
				NLD_Name329="Ilias";
				NLD_Name330="Kacper";
				NLD_Name331="Lennon";
				NLD_Name332="Mert";
				NLD_Name333="Seb";
				NLD_Name334="Teije";
				NLD_Name335="Charlie";
				NLD_Name336="Davy";
				NLD_Name337="Erik";
				NLD_Name338="Gino";
				NLD_Name339="Leroy";
				NLD_Name340="Mads";
				NLD_Name341="Matteo";
				NLD_Name342="Rik";
				NLD_Name343="Roel";
				NLD_Name344="Sebas";
				NLD_Name345="Wes";
				NLD_Name346="Delano";
				NLD_Name347="Len";
				NLD_Name348="Mik";
				NLD_Name349="Nino";
				NLD_Name350="Sebastian";
				NLD_Name351="Björn";
				NLD_Name352="Ethan";
				NLD_Name353="Gideon";
				NLD_Name354="Jur";
				NLD_Name355="Maas";
				NLD_Name356="Maher";
				NLD_Name357="Marcus";
				NLD_Name358="Matthew";
				NLD_Name359="Roy";
				NLD_Name360="Semih";
				NLD_Name361="Teunis";
				NLD_Name362="Adriaan";
				NLD_Name363="Duncan";
				NLD_Name364="Kenji";
				NLD_Name365="Lev";
				NLD_Name366="Rein";
				NLD_Name367="Valentino";
				NLD_Name368="Damin";
				NLD_Name369="Fender";
				NLD_Name370="Gabriel";
				NLD_Name371="Jeremy";
				NLD_Name372="Marcel";
				NLD_Name373="Yassir";
				NLD_Name374="Bodhi";
				NLD_Name375="Mohammad";
				NLD_Name376="Mylan";
				NLD_Name377="Rijk";
				NLD_Name378="Tijl";
				NLD_Name379="Dyon";
				NLD_Name380="Jorrit";
				NLD_Name381="Lewis";
				NLD_Name382="Lyam";
				NLD_Name383="Maximilian";
				NLD_Name384="Miraç";
				NLD_Name385="Quint";
				NLD_Name386="Safouan";
				NLD_Name387="Thiago";
				NLD_Name388="Vinz";
				NLD_Name389="Anthony";
				NLD_Name390="Deniz";
				NLD_Name391="Enzo";
				NLD_Name392="Ferre";
				NLD_Name393="Martijn";
				NLD_Name394="Renzo";
				NLD_Name395="Shane";
				NLD_Name396="Steven";
				NLD_Name397="Anas";
				NLD_Name398="Kaan";
				NLD_Name399="Marius";
				NLD_Name400="Raff";
				NLD_Name401="Xavier";
				NLD_Name402="Christopher";
				NLD_Name403="Ivo";
				NLD_Name404="Matz";
				NLD_Name405="Merlijn";
				NLD_Name406="Naoufal";
				NLD_Name407="Oskar";
				NLD_Name408="Ralph";
				NLD_Name409="Rayen";
				NLD_Name410="Senna";
				NLD_Name411="Xander";
				NLD_Name412="Abdullah";
				NLD_Name413="Arend";
				NLD_Name414="Bo";
				NLD_Name415="Ismail";
				NLD_Name416="Logan";
				NLD_Name417="Mahir";
				NLD_Name418="Menno";
				NLD_Name419="Yassine";
				NLD_Name420="Yves";
				NLD_Name421="Abe";
				NLD_Name422="Bent";
				NLD_Name423="Diego";
				NLD_Name424="Enes";
				NLD_Name425="Ensar";
				NLD_Name426="Eymen";
				NLD_Name427="Harm";
				NLD_Name428="Jaylano";
				NLD_Name429="Juul";
				NLD_Name430="Miguel";
				NLD_Name431="Nigel";
				NLD_Name432="Noël";
				NLD_Name433="Youri";
				NLD_Name434="Aidan";
				NLD_Name435="Lieuwe";
				NLD_Name436="Mayson";
				NLD_Name437="Rutger";
				NLD_Name438="Silvan";
				NLD_Name439="Abraham";
				NLD_Name440="Evert";
				NLD_Name441="Gerard";
				NLD_Name442="Glenn";
				NLD_Name443="Imraan";
				NLD_Name444="Isaac";
				NLD_Name445="Jeroen";
				NLD_Name446="Lennox";
				NLD_Name447="Michiel";
				NLD_Name448="Mikail";
				NLD_Name449="Muhammad";
				NLD_Name450="Otto";
				NLD_Name451="Sef";
				NLD_Name452="Tomas";
				NLD_Name453="Yasin";
				NLD_Name454="Alec";
				NLD_Name455="Bruno";
				NLD_Name456="Emre";
				NLD_Name457="Finley";
				NLD_Name458="Freek";
				NLD_Name459="Jayce";
				NLD_Name460="Rafaël";
				NLD_Name461="Toby";
				NLD_Name462="Toon";
				NLD_Name463="Damon";
				NLD_Name464="Dax";
				NLD_Name465="Devon";
				NLD_Name466="Gijsbert";
				NLD_Name467="Joe";
				NLD_Name468="Kerem";
				NLD_Name469="Marco";
				NLD_Name470="Rohan";
				NLD_Name471="Sky";
				NLD_Name472="Steijn";
				NLD_Name473="Ted";
				NLD_Name474="Tigo";
				NLD_Name475="Aras";
				NLD_Name476="Arne";
				NLD_Name477="Boas";
				NLD_Name478="Eli";
				NLD_Name479="Joppe";
				NLD_Name480="Louis";
				NLD_Name481="Marc";
				NLD_Name482="Marley";
				NLD_Name483="Mink";
				NLD_Name484="Nicolaas";
				NLD_Name485="Ramon";
				NLD_Name486="Silas";
				NLD_Name487="Soufian";
				NLD_Name488="Timme";
				NLD_Name489="Vinn";
				NLD_Name490="Dennis";
				NLD_Name491="Duco";
				NLD_Name492="Frank";
				NLD_Name493="Frederik";
				NLD_Name494="Hessel";
			};
			class LastNames
			{
				NLD_Name0001="A Campo";
				NLD_Name0002="Aarts";
				NLD_Name0003="Aberson";
				NLD_Name0004="Achenbach";
				NLD_Name0005="Adeling";
				NLD_Name0006="Admiraal";
				NLD_Name0007="Aerts";
				NLD_Name0008="Akersloot";
				NLD_Name0009="Akkerman";
				NLD_Name0010="Al";
				NLD_Name0011="Albada Jelgersma";
				NLD_Name0012="Alberding";
				NLD_Name0013="Alders";
				NLD_Name0014="Alles";
				NLD_Name0015="Allison";
				NLD_Name0016="Andela";
				NLD_Name0017="Andringa";
				NLD_Name0018="Ansems";
				NLD_Name0019="Anssems";
				NLD_Name0020="Appel";
				NLD_Name0021="Appelman";
				NLD_Name0022="Arendsen";
				NLD_Name0023="Ariaens";
				NLD_Name0024="Arke";
				NLD_Name0025="Arsiers";
				NLD_Name0026="Aukes";
				NLD_Name0027="Austermann";
				NLD_Name0028="Ayadin";
				NLD_Name0029="Baak";
				NLD_Name0030="Baar";
				NLD_Name0031="Baars";
				NLD_Name0032="Backs";
				NLD_Name0033="Baeken";
				NLD_Name0034="Baeten";
				NLD_Name0035="Baken";
				NLD_Name0036="Bakker";
				NLD_Name0037="Bakkum";
				NLD_Name0038="Baljeu";
				NLD_Name0039="Ballarini";
				NLD_Name0040="Balm";
				NLD_Name0041="Baltus";
				NLD_Name0042="Bancras";
				NLD_Name0043="Banen";
				NLD_Name0044="Bär";
				NLD_Name0045="Barbier";
				NLD_Name0046="Barentsen";
				NLD_Name0047="Bartels";
				NLD_Name0048="Bastiaense";
				NLD_Name0049="Baumann";
				NLD_Name0050="Bax";
				NLD_Name0051="Beccari";
				NLD_Name0052="Beeckman";
				NLD_Name0053="Beek";
				NLD_Name0054="Beekman";
				NLD_Name0055="Beelen";
				NLD_Name0056="Beeltman";
				NLD_Name0057="Beemster";
				NLD_Name0058="Beerepoot";
				NLD_Name0059="Beermann";
				NLD_Name0060="Beers";
				NLD_Name0061="Beerse";
				NLD_Name0062="Beest";
				NLD_Name0063="Begeri";
				NLD_Name0064="Beiffits";
				NLD_Name0065="Beijle";
				NLD_Name0066="Beijvoet";
				NLD_Name0067="Beijvoets";
				NLD_Name0068="Beintema";
				NLD_Name0069="Bekker";
				NLD_Name0070="Bekkers";
				NLD_Name0071="Benders";
				NLD_Name0072="Bennis";
				NLD_Name0073="Berendina";
				NLD_Name0074="Bergen";
				NLD_Name0075="Bergmans";
				NLD_Name0076="Bergsma";
				NLD_Name0077="Bergveld";
				NLD_Name0078="Berkelaar";
				NLD_Name0079="Berkhout";
				NLD_Name0080="Bernhardt";
				NLD_Name0081="Bertho";
				NLD_Name0082="Beschoor";
				NLD_Name0083="Besseling";
				NLD_Name0084="Betses";
				NLD_Name0085="Betting";
				NLD_Name0086="Beugel";
				NLD_Name0087="Beukers";
				NLD_Name0088="Beumer";
				NLD_Name0089="Beunderman";
				NLD_Name0090="Beunks";
				NLD_Name0091="Beusman";
				NLD_Name0092="Beuvoets";
				NLD_Name0093="Beuyvoets";
				NLD_Name0094="Beyens";
				NLD_Name0095="Beyevous";
				NLD_Name0096="Beyffits";
				NLD_Name0097="Beyvoedts";
				NLD_Name0098="Beyvoets";
				NLD_Name0100="Bezemer";
				NLD_Name0101="Bienhoff";
				NLD_Name0102="Bierman";
				NLD_Name0103="Biersteker";
				NLD_Name0104="Bies";
				NLD_Name0105="Biesenbroek";
				NLD_Name0106="Biezenaar";
				NLD_Name0107="Bijl";
				NLD_Name0108="Bijleveld";
				NLD_Name0109="Bijlevelt";
				NLD_Name0110="Bijlsma";
				NLD_Name0111="Bijnens";
				NLD_Name0112="Bijnsdorp";
				NLD_Name0113="Bijstermans";
				NLD_Name0114="Bijvodts";
				NLD_Name0115="Bijvoet";
				NLD_Name0118="Bijvoet Hellberg";
				NLD_Name0119="Bijvoet S.J.";
				NLD_Name0120="Bijvoets";
				NLD_Name0121="Billermans";
				NLD_Name0122="Bilock";
				NLD_Name0123="Binnekade";
				NLD_Name0124="Binnerts";
				NLD_Name0125="Biot";
				NLD_Name0126="Bischerou";
				NLD_Name0127="Bischeroux";
				NLD_Name0128="Bispinck";
				NLD_Name0129="Bisschop";
				NLD_Name0130="Bisschp";
				NLD_Name0131="Blaauboer";
				NLD_Name0132="Blaauwboer";
				NLD_Name0133="Blank";
				NLD_Name0134="Blankert";
				NLD_Name0135="Bleeker";
				NLD_Name0137="Blenke";
				NLD_Name0138="Blockeel";
				NLD_Name0139="Blockers";
				NLD_Name0140="Bloem";
				NLD_Name0141="Bloemberg";
				NLD_Name0142="Bloemen";
				NLD_Name0143="Blokker";
				NLD_Name0145="Blom";
				NLD_Name0146="Bloothoofd";
				NLD_Name0147="Blutel";
				NLD_Name0148="Boatman";
				NLD_Name0149="Bodt";
				NLD_Name0150="Boeijvoets";
				NLD_Name0151="Boekloon";
				NLD_Name0152="Boelens";
				NLD_Name0153="Boeljon";
				NLD_Name0154="Boermans";
				NLD_Name0155="Boers";
				NLD_Name0156="Boersen";
				NLD_Name0157="Boersma";
				NLD_Name0158="Boeschoten";
				NLD_Name0159="Boex";
				NLD_Name0160="Boeyvoets";
				NLD_Name0161="Bögermann";
				NLD_Name0162="Böggemann";
				NLD_Name0163="Bogt";
				NLD_Name0164="Bökkerink";
				NLD_Name0165="Bokkers";
				NLD_Name0166="Bokma";
				NLD_Name0167="Bollen";
				NLD_Name0168="Bollinger";
				NLD_Name0169="Bolsius";
				NLD_Name0170="Bömer";
				NLD_Name0171="Bon";
				NLD_Name0172="Bonsema";
				NLD_Name0173="Bont";
				NLD_Name0174="Boom";
				NLD_Name0175="Boon";
				NLD_Name0176="Boone";
				NLD_Name0177="Boonekamp";
				NLD_Name0178="Boonen";
				NLD_Name0179="Boons";
				NLD_Name0180="Boot";
				NLD_Name0181="Boots";
				NLD_Name0182="Borgdorffer";
				NLD_Name0183="Bori";
				NLD_Name0184="Bornwater";
				NLD_Name0185="Borrewater";
				NLD_Name0186="Borst";
				NLD_Name0187="Bos";
				NLD_Name0188="Bosch";
				NLD_Name0189="Bosma";
				NLD_Name0190="Bosman";
				NLD_Name0191="Bosmans";
				NLD_Name0192="Bosselaar";
				NLD_Name0193="Bot";
				NLD_Name0194="Boterhuis";
				NLD_Name0195="Bouchet";
				NLD_Name0196="Boukje";
				NLD_Name0197="Bouma";
				NLD_Name0198="Bouman";
				NLD_Name0199="Bout";
				NLD_Name0200="Boutkan";
				NLD_Name0202="Bouvij";
				NLD_Name0203="Bouvy";
				NLD_Name0204="Bouwens";
				NLD_Name0205="Bouwensdr.";
				NLD_Name0206="Bouwers";
				NLD_Name0207="Bouwhuis";
				NLD_Name0208="Bouwman";
				NLD_Name0209="Boven";
				NLD_Name0210="Boyvoets";
				NLD_Name0211="Bra";
				NLD_Name0212="Bra van Walree";
				NLD_Name0213="Braam";
				NLD_Name0214="Braas";
				NLD_Name0215="Braems";
				NLD_Name0216="Brak";
				NLD_Name0217="Brakeboer";
				NLD_Name0218="Brammer";
				NLD_Name0219="Brand";
				NLD_Name0220="Brandehof";
				NLD_Name0221="Brandon";
				NLD_Name0222="Brandsen";
				NLD_Name0223="Brandsma";
				NLD_Name0224="Brandt";
				NLD_Name0225="Brans";
				NLD_Name0226="Brant";
				NLD_Name0227="Braun";
				NLD_Name0228="Bregelmans";
				NLD_Name0229="Bregman";
				NLD_Name0230="Breidenbach";
				NLD_Name0231="Breijers";
				NLD_Name0232="Brekveld";
				NLD_Name0233="Bremond";
				NLD_Name0234="Brennan";
				NLD_Name0235="Bresseler";
				NLD_Name0236="Bresser";
				NLD_Name0237="Brester";
				NLD_Name0238="Breugelaers";
				NLD_Name0239="Brevink";
				NLD_Name0240="Briks";
				NLD_Name0241="Brinkmann";
				NLD_Name0243="Brodde";
				NLD_Name0244="Broeckmans";
				NLD_Name0245="Broeckx";
				NLD_Name0246="Broeders";
				NLD_Name0247="Broekhuis";
				NLD_Name0248="Broekmans";
				NLD_Name0249="Broekroelofs";
				NLD_Name0250="Broere";
				NLD_Name0251="Broers";
				NLD_Name0252="Broerse";
				NLD_Name0253="Broersen";
				NLD_Name0254="Brommer";
				NLD_Name0255="Brons";
				NLD_Name0256="Brosis";
				NLD_Name0257="Brouns";
				NLD_Name0258="Brouwer";
				NLD_Name0259="Brouwers";
				NLD_Name0260="Broux";
				NLD_Name0261="Brugman";
				NLD_Name0262="Bruijn";
				NLD_Name0263="Bruin";
				NLD_Name0264="Bruinink";
				NLD_Name0265="Budding'h";
				NLD_Name0266="Buenk";
				NLD_Name0267="Bueskens";
				NLD_Name0268="Bugter";
				NLD_Name0269="Buijs";
				NLD_Name0270="Buijsman";
				NLD_Name0271="Buijvoets";
				NLD_Name0272="Buijyvoets";
				NLD_Name0273="Buis";
				NLD_Name0274="Buiter";
				NLD_Name0275="Bullinga";
				NLD_Name0276="Burg";
				NLD_Name0277="Burgdorffer";
				NLD_Name0278="Burger";
				NLD_Name0279="Busscher";
				NLD_Name0280="Buurman";
				NLD_Name0281="Buyvoets";
				NLD_Name0282="Byrne";
				NLD_Name0283="Byvoet";
				NLD_Name0284="Byvoet de Freitas Cabral";
				NLD_Name0285="Byvoets";
				NLD_Name0286="Caenen";
				NLD_Name0287="Callemein";
				NLD_Name0288="Calsuis";
				NLD_Name0289="Caminada";
				NLD_Name0290="Canten";
				NLD_Name0292="Cap";
				NLD_Name0293="Cappelhof";
				NLD_Name0294="Captijn";
				NLD_Name0295="Carey";
				NLD_Name0296="Castledine";
				NLD_Name0297="Castricum";
				NLD_Name0298="Ceelen";
				NLD_Name0299="Celen";
				NLD_Name0300="Charlot";
				NLD_Name0301="Chimps";
				NLD_Name0302="Cinjee";
				NLD_Name0303="Civolani";
				NLD_Name0304="Claes";
				NLD_Name0305="Claessen";
				NLD_Name0306="Claessens";
				NLD_Name0307="Claimans";
				NLD_Name0308="Clavasser";
				NLD_Name0309="Cleene";
				NLD_Name0310="Cleeskens";
				NLD_Name0311="Clemens";
				NLD_Name0312="Clerckx";
				NLD_Name0313="Clercx";
				NLD_Name0314="Clerxs";
				NLD_Name0315="Cleskens";
				NLD_Name0316="Clevers";
				NLD_Name0318="Cocx";
				NLD_Name0319="Coelen";
				NLD_Name0320="Coeur";
				NLD_Name0321="Collecteur";
				NLD_Name0322="Collenteur";
				NLD_Name0323="Colles";
				NLD_Name0324="Comein";
				NLD_Name0325="Commandeur";
				NLD_Name0326="Coninckxs";
				NLD_Name0327="Coning";
				NLD_Name0328="Conlan";
				NLD_Name0329="Conner";
				NLD_Name0330="Constant";
				NLD_Name0331="Coolen";
				NLD_Name0332="Cools";
				NLD_Name0333="Coopmans";
				NLD_Name0334="Coordes";
				NLD_Name0335="Coppens";
				NLD_Name0336="Cornelis";
				NLD_Name0337="Cornelisdr";
				NLD_Name0338="Cornelissen";
				NLD_Name0339="Cornet";
				NLD_Name0340="Corstens";
				NLD_Name0341="Coster";
				NLD_Name0342="Couvreur";
				NLD_Name0343="Cramers";
				NLD_Name0344="Cramm";
				NLD_Name0345="Crasburg";
				NLD_Name0346="Crelis";
				NLD_Name0347="Cremeren";
				NLD_Name0348="Cremers";
				NLD_Name0349="Crenckens";
				NLD_Name0350="Croone";
				NLD_Name0351="Crousaz";
				NLD_Name0352="Crul";
				NLD_Name0353="Cuenen";
				NLD_Name0354="Cuijlenburg";
				NLD_Name0355="Custers";
				NLD_Name0356="Cuypers";
				NLD_Name0357="d'Amman";
				NLD_Name0358="Daalderop";
				NLD_Name0359="Daam";
				NLD_Name0360="Daans";
				NLD_Name0361="Dablon";
				NLD_Name0362="Daems";
				NLD_Name0363="Daldrop";
				NLD_Name0364="Damsté";
				NLD_Name0365="Danenberg";
				NLD_Name0366="Daris";
				NLD_Name0367="Dassen";
				NLD_Name0368="Day";
				NLD_Name0369="de Bie";
				NLD_Name0370="de Boer";
				NLD_Name0371="De Brouwers";
				NLD_Name0372="de Browne de Tiège";
				NLD_Name0373="de Bruijn";
				NLD_Name0374="de Bruin";
				NLD_Name0375="de Bruycker";
				NLD_Name0376="de Bruyn";
				NLD_Name0377="de Corswarem";
				NLD_Name0378="de Freitas Cabral";
				NLD_Name0379="de Gooijer";
				NLD_Name0380="de Graaf";
				NLD_Name0381="de Graaff";
				NLD_Name0382="de Greef";
				NLD_Name0383="de Groof";
				NLD_Name0384="de Groot";
				NLD_Name0385="de Gussem";
				NLD_Name0386="De Haan";
				NLD_Name0387="de Haas";
				NLD_Name0388="de Hoo";
				NLD_Name0389="de Horden";
				NLD_Name0390="De Jaegher";
				NLD_Name0391="de Jong";
				NLD_Name0392="de Jonge";
				NLD_Name0393="de Jongh";
				NLD_Name0394="de Jongste";
				NLD_Name0395="de Keijser";
				NLD_Name0396="de Keizer";
				NLD_Name0397="de Keyzer";
				NLD_Name0398="De Kleermaker";
				NLD_Name0399="de Klerk";
				NLD_Name0400="de Kok";
				NLD_Name0401="de Koker";
				NLD_Name0402="de Koning";
				NLD_Name0403="de Korte";
				NLD_Name0404="de Kreij";
				NLD_Name0405="de Krossé";
				NLD_Name0406="de Lang Evertsen";
				NLD_Name0407="de Lange";
				NLD_Name0408="de Leeuw";
				NLD_Name0409="De Lens";
				NLD_Name0410="de Liège";
				NLD_Name0411="de Ligt";
				NLD_Name0412="de Maes Janssens";
				NLD_Name0413="de Man";
				NLD_Name0414="de Mars";
				NLD_Name0415="de Moor";
				NLD_Name0416="de Munck";
				NLD_Name0417="de Munnick";
				NLD_Name0418="de Munnik";
				NLD_Name0419="de Nigtere";
				NLD_Name0420="de Nijs";
				NLD_Name0421="de Pauw";
				NLD_Name0422="de Regt";
				NLD_Name0423="de Ridder";
				NLD_Name0424="de Rijdt";
				NLD_Name0425="De Rooij";
				NLD_Name0426="de Rooy";
				NLD_Name0427="de Ruijter";
				NLD_Name0428="de Smedt";
				NLD_Name0429="de Smet";
				NLD_Name0430="de Swart";
				NLD_Name0431="de Ven";
				NLD_Name0432="de Vet";
				NLD_Name0433="de Visser";
				NLD_Name0434="de Vos";
				NLD_Name0435="de Vries";
				NLD_Name0436="de Waard";
				NLD_Name0437="de Wagenaar";
				NLD_Name0438="de Wakker";
				NLD_Name0439="de Wijs";
				NLD_Name0440="de Wilde";
				NLD_Name0441="de Wit";
				NLD_Name0442="de Wolf";
				NLD_Name0443="de Zeeuw";
				NLD_Name0444="Debets";
				NLD_Name0445="Deckers";
				NLD_Name0447="Decrop";
				NLD_Name0448="Deden";
				NLD_Name0449="Deen";
				NLD_Name0450="Defonseca";
				NLD_Name0451="Defossez";
				NLD_Name0452="Dekker";
				NLD_Name0453="Delemarre";
				NLD_Name0454="Delen";
				NLD_Name0455="Delhaye";
				NLD_Name0456="Delmoitié";
				NLD_Name0457="Delvaux";
				NLD_Name0458="Demeyer";
				NLD_Name0459="den Brinker";
				NLD_Name0460="den Engelsman";
				NLD_Name0461="den Hartog";
				NLD_Name0462="den Hertog";
				NLD_Name0463="den Hoff";
				NLD_Name0464="den Otter";
				NLD_Name0465="den Smedt";
				NLD_Name0466="Denijn";
				NLD_Name0467="Dependeuer";
				NLD_Name0468="Desertine";
				NLD_Name0469="Dessain";
				NLD_Name0470="Detert";
				NLD_Name0471="Dewin";
				NLD_Name0472="Dey";
				NLD_Name0473="Diergaarde";
				NLD_Name0474="Dignum";
				NLD_Name0475="Dijkers";
				NLD_Name0476="Dijkhuizen";
				NLD_Name0480="Dijkshoorn";
				NLD_Name0481="Dijkstra";
				NLD_Name0482="Dikhoff";
				NLD_Name0483="Dilissen";
				NLD_Name0484="Dingenis";
				NLD_Name0485="Dinger";
				NLD_Name0486="Dircks";
				NLD_Name0487="Dirks";
				NLD_Name0488="Dobbelaer";
				NLD_Name0489="Dobbelaere";
				NLD_Name0490="Doeschate";
				NLD_Name0491="Dolkemade";
				NLD_Name0492="Dols";
				NLD_Name0493="Donckers";
				NLD_Name0494="Dontje";
				NLD_Name0495="Doornbos";
				NLD_Name0496="Dorresteijn";
				NLD_Name0497="Dotremont";
				NLD_Name0498="Douqué";
				NLD_Name0499="Douwes";
				NLD_Name0500="Draaisma";
				NLD_Name0501="Drachter";
				NLD_Name0502="Dreesen";
				NLD_Name0504="Dreessen";
				NLD_Name0505="Drehmanns";
				NLD_Name0506="Dresen";
				NLD_Name0507="Dries";
				NLD_Name0508="Driesen";
				NLD_Name0509="Driessen";
				NLD_Name0510="Droog";
				NLD_Name0511="Drooglever";
				NLD_Name0512="Drop";
				NLD_Name0513="Druckers";
				NLD_Name0514="Druyven";
				NLD_Name0515="Du Rieu";
				NLD_Name0516="Dubbelt";
				NLD_Name0517="Duijn";
				NLD_Name0518="Duin";
				NLD_Name0519="Duinveld";
				NLD_Name0520="Duivenvoorden";
				NLD_Name0521="Dulman";
				NLD_Name0522="Dupont";
				NLD_Name0523="Durville";
				NLD_Name0524="Duyn";
				NLD_Name0525="Dyckx";
				NLD_Name0526="Dyserinck";
				NLD_Name0527="dÝve";
				NLD_Name0528="Effting";
				NLD_Name0529="Eg";
				NLD_Name0530="Egthuijsen";
				NLD_Name0531="Eijsink";
				NLD_Name0532="Eilrinck";
				NLD_Name0533="Einarsson";
				NLD_Name0534="Eiting";
				NLD_Name0535="Eiting van Liempt";
				NLD_Name0536="Elbers";
				NLD_Name0537="Elberts";
				NLD_Name0538="Eldering";
				NLD_Name0539="Elders";
				NLD_Name0540="Elens";
				NLD_Name0541="Ellebroek";
				NLD_Name0542="Ellens";
				NLD_Name0543="Ellewaut";
				NLD_Name0544="Emanuel";
				NLD_Name0545="Engelberts";
				NLD_Name0546="Engelbregt";
				NLD_Name0547="Engelen";
				NLD_Name0548="Engels";
				NLD_Name0549="Engelsman";
				NLD_Name0550="Engering";
				NLD_Name0551="Engler";
				NLD_Name0552="Enker";
				NLD_Name0553="Ensius";
				NLD_Name0554="Eppink";
				NLD_Name0555="Ercken";
				NLD_Name0556="Erecinska";
				NLD_Name0557="Erich";
				NLD_Name0558="Eriksen";
				NLD_Name0559="Erken";
				NLD_Name0560="Erven";
				NLD_Name0561="Esselink";
				NLD_Name0562="Ettes";
				NLD_Name0563="Evans";
				NLD_Name0564="Even";
				NLD_Name0565="Evéquoz";
				NLD_Name0566="Exelmans";
				NLD_Name0567="Eykes";
				NLD_Name0568="Eyssen";
				NLD_Name0569="Ezerman";
				NLD_Name0570="Fabritius";
				NLD_Name0571="Faes";
				NLD_Name0572="Favier";
				NLD_Name0573="Fennema";
				NLD_Name0574="Fenneman";
				NLD_Name0575="Fernandez";
				NLD_Name0576="Fiesler";
				NLD_Name0577="Fijen";
				NLD_Name0578="Fiolet";
				NLD_Name0579="Flapper";
				NLD_Name0580="Floor";
				NLD_Name0581="Floris";
				NLD_Name0582="Fluitman";
				NLD_Name0583="Focquin de Grave";
				NLD_Name0584="Foeken";
				NLD_Name0585="Fontaine";
				NLD_Name0586="Fonteijn";
				NLD_Name0587="Fontellier";
				NLD_Name0588="Foreman";
				NLD_Name0589="Fraaiman";
				NLD_Name0590="Francis";
				NLD_Name0591="Franck";
				NLD_Name0592="François";
				NLD_Name0593="Franken";
				NLD_Name0594="Frans";
				NLD_Name0595="Fredriks";
				NLD_Name0596="Fredrikx";
				NLD_Name0597="Freeks";
				NLD_Name0598="Frintrop";
				NLD_Name0599="Fuijk";
				NLD_Name0600="Gaalman";
				NLD_Name0601="Gans";
				NLD_Name0602="Garrels";
				NLD_Name0603="Gasper";
				NLD_Name0604="Gatjiga";
				NLD_Name0605="Geels";
				NLD_Name0606="Geenen";
				NLD_Name0607="Geerets";
				NLD_Name0608="Geerts";
				NLD_Name0609="Geertzema";
				NLD_Name0610="Gelink";
				NLD_Name0611="Gelis";
				NLD_Name0612="Genee";
				NLD_Name0613="Genemans";
				NLD_Name0614="Genis";
				NLD_Name0615="Geraerdts";
				NLD_Name0616="Gerits";
				NLD_Name0617="Germain";
				NLD_Name0618="Geron";
				NLD_Name0619="Gerrits";
				NLD_Name0620="Gerritsdr";
				NLD_Name0621="Gerritsen";
				NLD_Name0622="Gerritsma";
				NLD_Name0623="Gerritsz";
				NLD_Name0624="Gersom";
				NLD_Name0625="Geubel";
				NLD_Name0626="Geuns";
				NLD_Name0627="Geunus";
				NLD_Name0628="Geurts";
				NLD_Name0629="Gevens";
				NLD_Name0630="Geysels";
				NLD_Name0631="Ghelis";
				NLD_Name0632="Ghybels";
				NLD_Name0633="Gies";
				NLD_Name0634="Giese";
				NLD_Name0635="Gijbels";
				NLD_Name0636="Gijbert";
				NLD_Name0637="Gijsen";
				NLD_Name0638="Gillard";
				NLD_Name0639="Gillis";
				NLD_Name0640="Gilson";
				NLD_Name0641="Glas";
				NLD_Name0642="Glaser";
				NLD_Name0643="Glasman";
				NLD_Name0644="Gobbels";
				NLD_Name0645="Godzen";
				NLD_Name0646="Goedhart";
				NLD_Name0647="Goeiens";
				NLD_Name0648="Goeman";
				NLD_Name0649="Goemans";
				NLD_Name0650="Goetzee";
				NLD_Name0651="Gollenbeek";
				NLD_Name0652="Gommers";
				NLD_Name0653="Gompertz";
				NLD_Name0654="Goor";
				NLD_Name0655="Goossens";
				NLD_Name0656="Goozen";
				NLD_Name0657="Görtz";
				NLD_Name0658="Goudsblom";
				NLD_Name0659="Goutrok";
				NLD_Name0660="Gouwenberg";
				NLD_Name0661="Goverts";
				NLD_Name0662="Govertsz";
				NLD_Name0663="Graaf";
				NLD_Name0664="Graafsma";
				NLD_Name0665="Granaetappel";
				NLD_Name0666="Grashuis";
				NLD_Name0667="Gravelaar";
				NLD_Name0668="Graver";
				NLD_Name0669="Greenfelder";
				NLD_Name0670="Greiner";
				NLD_Name0671="Gresnigt";
				NLD_Name0672="Greve";
				NLD_Name0673="Grimmelt";
				NLD_Name0674="Grin";
				NLD_Name0675="Grippeling";
				NLD_Name0676="Grisar";
				NLD_Name0677="Grob";
				NLD_Name0678="Grobben";
				NLD_Name0679="Groed";
				NLD_Name0680="Groen";
				NLD_Name0681="Groenendaal";
				NLD_Name0682="Groenendal";
				NLD_Name0683="Groenendijk";
				NLD_Name0684="Groeneveld";
				NLD_Name0685="Groeneweg";
				NLD_Name0686="Groenland";
				NLD_Name0687="Groenveld";
				NLD_Name0688="Grondman";
				NLD_Name0689="Groot";
				NLD_Name0690="Grooteboer";
				NLD_Name0691="Grooteman";
				NLD_Name0692="Grootens";
				NLD_Name0693="Grootes";
				NLD_Name0694="Grundeler";
				NLD_Name0695="Grutman";
				NLD_Name0696="Gude";
				NLD_Name0697="Gustin";
				NLD_Name0698="Guyonnet";
				NLD_Name0699="Gysbrechts";
				NLD_Name0700="Gysels";
				NLD_Name0701="Haakman van den Bergh";
				NLD_Name0702="Haaks";
				NLD_Name0703="Haan";
				NLD_Name0704="Haar";
				NLD_Name0705="Haas";
				NLD_Name0706="Haasbroek";
				NLD_Name0707="Haasman";
				NLD_Name0708="Habraken";
				NLD_Name0709="Hagedoorn";
				NLD_Name0710="Halfweg";
				NLD_Name0711="Hall";
				NLD_Name0712="Halleen";
				NLD_Name0713="Halsema";
				NLD_Name0714="Ham";
				NLD_Name0715="Hamer";
				NLD_Name0716="Hamers";
				NLD_Name0717="Hamersma";
				NLD_Name0718="Hammersma";
				NLD_Name0719="Hamoir";
				NLD_Name0720="Hand";
				NLD_Name0721="Hanecop";
				NLD_Name0722="Hanses";
				NLD_Name0723="Hardenberg";
				NLD_Name0724="Haring";
				NLD_Name0725="Harm";
				NLD_Name0726="Hart";
				NLD_Name0727="Hauff";
				NLD_Name0728="Haversbeke";
				NLD_Name0729="Hazewinkel";
				NLD_Name0730="Hebrans";
				NLD_Name0731="Heddes";
				NLD_Name0732="Heemskerk";
				NLD_Name0733="Heere";
				NLD_Name0734="Heeren";
				NLD_Name0735="Heerschop";
				NLD_Name0736="Heerts";
				NLD_Name0737="Heestermans";
				NLD_Name0738="Heggelaar";
				NLD_Name0739="Hegger";
				NLD_Name0740="Heijnis";
				NLD_Name0741="Heine";
				NLD_Name0742="Heinen";
				NLD_Name0743="Heinhuis";
				NLD_Name0744="Heitemers";
				NLD_Name0745="Heiting";
				NLD_Name0746="Heitmann";
				NLD_Name0747="Heitz";
				NLD_Name0748="Hellberg";
				NLD_Name0749="Hemme";
				NLD_Name0750="Hendriks";
				NLD_Name0751="Hendriksen";
				NLD_Name0752="Hendrix";
				NLD_Name0753="Henneman";
				NLD_Name0754="Heringa";
				NLD_Name0755="Hermans";
				NLD_Name0756="Hersmis";
				NLD_Name0757="Hertel";
				NLD_Name0758="Hes";
				NLD_Name0759="Hesselink";
				NLD_Name0760="Hetterscheid";
				NLD_Name0761="Hettinga";
				NLD_Name0762="Heutgens";
				NLD_Name0763="Hewitt";
				NLD_Name0764="Heydemans";
				NLD_Name0765="Heymans";
				NLD_Name0766="Hezemans";
				NLD_Name0767="Hijlkema";
				NLD_Name0768="Hilhorst";
				NLD_Name0769="Hill";
				NLD_Name0770="Hille";
				NLD_Name0771="Hilleboer";
				NLD_Name0772="Hillekens";
				NLD_Name0773="Hillen";
				NLD_Name0774="Hinken";
				NLD_Name0775="Hobben";
				NLD_Name0776="Hoebe";
				NLD_Name0777="Hoeben";
				NLD_Name0778="Hoeboer";
				NLD_Name0779="Hoeck";
				NLD_Name0780="Hoek";
				NLD_Name0781="Hoekstra";
				NLD_Name0782="Hoetmans van Antwerpen";
				NLD_Name0783="Hoffer";
				NLD_Name0784="Hofland";
				NLD_Name0785="Hofmeyer";
				NLD_Name0786="Hofstee";
				NLD_Name0787="Hogeweg";
				NLD_Name0788="Hóhner";
				NLD_Name0789="Hol";
				NLD_Name0790="Hollander";
				NLD_Name0791="Hollanders";
				NLD_Name0792="Hollen";
				NLD_Name0793="Hollenberg";
				NLD_Name0794="Hollenbergh";
				NLD_Name0795="Holsappel";
				NLD_Name0796="Holshuijsen";
				NLD_Name0797="Holts";
				NLD_Name0798="Holzappel";
				NLD_Name0799="Homan";
				NLD_Name0800="Hommes";
				NLD_Name0802="Hontelez";
				NLD_Name0803="Hontes";
				NLD_Name0804="Hoogeboom";
				NLD_Name0805="Hoogeland";
				NLD_Name0806="Hoogenstraaten";
				NLD_Name0807="Hoogeveen";
				NLD_Name0808="Hoogeweg";
				NLD_Name0809="Hooghiemstra";
				NLD_Name0810="Hoogland";
				NLD_Name0812="Hoogmartens";
				NLD_Name0813="Hoogvorst";
				NLD_Name0814="Hopman";
				NLD_Name0815="Hopmans";
				NLD_Name0816="Hoppenbrouwer";
				NLD_Name0817="Horn";
				NLD_Name0818="Hos";
				NLD_Name0819="Houben";
				NLD_Name0820="Houthuijsen";
				NLD_Name0821="Houtkamp";
				NLD_Name0822="Houtmann";
				NLD_Name0823="Houweling";
				NLD_Name0824="Houwink";
				NLD_Name0825="Huibers";
				NLD_Name0826="Huiberts";
				NLD_Name0827="Huijberts";
				NLD_Name0828="Huijbrechts";
				NLD_Name0829="Huijsser";
				NLD_Name0830="Huisman";
				NLD_Name0831="Huismans";
				NLD_Name0832="Huitema";
				NLD_Name0833="Hulleman";
				NLD_Name0834="Hulsebosch";
				NLD_Name0835="Hulshof";
				NLD_Name0836="Hülshoff";
				NLD_Name0837="Hunink";
				NLD_Name0838="Hunt";
				NLD_Name0839="Hurcks";
				NLD_Name0840="Hurks";
				NLD_Name0841="Husslage";
				NLD_Name0842="Huybens";
				NLD_Name0843="Huybrechts";
				NLD_Name0844="Huylenbroeck";
				NLD_Name0845="Huysman";
				NLD_Name0846="Hvidt";
				NLD_Name0847="Idema";
				NLD_Name0848="Igel";
				NLD_Name0849="IJedema";
				NLD_Name0850="IJff";
				NLD_Name0851="Ijsselmuiden";
				NLD_Name0852="In de Sraet";
				NLD_Name0853="In de Straet";
				NLD_Name0854="in den Hoeck";
				NLD_Name0855="Ipenburg";
				NLD_Name0856="Iven";
				NLD_Name0857="Jaarsma";
				NLD_Name0858="Jacobi";
				NLD_Name0859="Jacobs";
				NLD_Name0860="Jacobsen";
				NLD_Name0861="Jaenen";
				NLD_Name0862="Jagram";
				NLD_Name0863="Jagtman";
				NLD_Name0864="Janen";
				NLD_Name0865="Jannen";
				NLD_Name0866="Jannes";
				NLD_Name0867="Jannis";
				NLD_Name0868="Jans";
				NLD_Name0869="Janse";
				NLD_Name0870="Jansen";
				NLD_Name0871="Jansjen";
				NLD_Name0872="Janson";
				NLD_Name0873="Janss";
				NLD_Name0874="Janssen";
				NLD_Name0875="Janssens";
				NLD_Name0876="Jansz";
				NLD_Name0877="Jansz.";
				NLD_Name0878="Janus";
				NLD_Name0879="Janze";
				NLD_Name0880="Japiks";
				NLD_Name0881="Jaring";
				NLD_Name0882="Jas";
				NLD_Name0883="Jaspers";
				NLD_Name0884="Jellema";
				NLD_Name0885="Jenneret";
				NLD_Name0886="Jeuckens";
				NLD_Name0887="Joannes";
				NLD_Name0888="Johannes";
				NLD_Name0889="Jol";
				NLD_Name0890="Jong";
				NLD_Name0891="Jongerius";
				NLD_Name0892="Jongkind";
				NLD_Name0893="Jonk";
				NLD_Name0894="Jonker";
				NLD_Name0895="Jonkheer";
				NLD_Name0896="Jooner";
				NLD_Name0897="Joordens";
				NLD_Name0898="Joosten";
				NLD_Name0899="Jordan";
				NLD_Name0900="Jorissen";
				NLD_Name0901="Jorritsma";
				NLD_Name0902="Joukema";
				NLD_Name0903="Joukerna";
				NLD_Name0904="Jukkers";
				NLD_Name0905="Jung";
				NLD_Name0906="Jurgens";
				NLD_Name0907="Juten";
				NLD_Name0908="Kaag";
				NLD_Name0909="Kaaij";
				NLD_Name0910="Kaaijmolen";
				NLD_Name0911="Kaal";
				NLD_Name0912="Kabbes";
				NLD_Name0913="Kager";
				NLD_Name0914="Kalsbeek";
				NLD_Name0915="Kalsvel";
				NLD_Name0916="Kamphuis";
				NLD_Name0917="Kannemans";
				NLD_Name0918="Kant";
				NLD_Name0919="Kap";
				NLD_Name0920="Karbet";
				NLD_Name0921="Karels";
				NLD_Name0922="Karsten";
				NLD_Name0923="Karwasse";
				NLD_Name0924="Kas";
				NLD_Name0925="Kasbergen";
				NLD_Name0926="Kaulbach";
				NLD_Name0927="Kea";
				NLD_Name0928="Keegan";
				NLD_Name0929="Keijsers";
				NLD_Name0930="Keijzer";
				NLD_Name0931="Kelders";
				NLD_Name0932="Kemme";
				NLD_Name0933="Kemps";
				NLD_Name0934="Kendrick";
				NLD_Name0935="Kenens";
				NLD_Name0936="Kerker";
				NLD_Name0937="Kern";
				NLD_Name0938="Kesting";
				NLD_Name0939="Keuning";
				NLD_Name0940="Kiebert";
				NLD_Name0941="Kisfelt";
				NLD_Name0942="Kist";
				NLD_Name0943="Kistemaker";
				NLD_Name0944="Klaasen";
				NLD_Name0945="Klabans";
				NLD_Name0946="Klaes";
				NLD_Name0947="Klaver";
				NLD_Name0948="Klaverwijden";
				NLD_Name0949="Kleef";
				NLD_Name0950="Kleenman";
				NLD_Name0951="Klein";
				NLD_Name0952="Klerk";
				NLD_Name0953="Kleymans";
				NLD_Name0954="Klijn";
				NLD_Name0955="Klinkenberg";
				NLD_Name0959="Klok";
				NLD_Name0960="Klooster";
				NLD_Name0961="Kloppenburg";
				NLD_Name0962="Kloppers";
				NLD_Name0963="Klos";
				NLD_Name0964="Kluijskens";
				NLD_Name0965="Knight";
				NLD_Name0966="Knuijsen";
				NLD_Name0967="Knusen";
				NLD_Name0968="Knuysen";
				NLD_Name0969="Koch";
				NLD_Name0970="Kodde";
				NLD_Name0971="Koeckhoven";
				NLD_Name0972="Koek";
				NLD_Name0973="Koekebakker";
				NLD_Name0974="Koekkoek";
				NLD_Name0975="Koelmans";
				NLD_Name0976="Koeman";
				NLD_Name0977="Koen";
				NLD_Name0978="Koene";
				NLD_Name0979="Koenis";
				NLD_Name0980="Koersen";
				NLD_Name0981="Kok";
				NLD_Name0982="Kolfschoten";
				NLD_Name0983="Kolk";
				NLD_Name0984="Kolken";
				NLD_Name0985="Kollen";
				NLD_Name0986="Komen";
				NLD_Name0987="Konijn";
				NLD_Name0988="Koning";
				NLD_Name0989="Konings";
				NLD_Name0990="Konjn";
				NLD_Name0991="Kooij";
				NLD_Name0992="Kool";
				NLD_Name0993="Koolaard";
				NLD_Name0994="Koome";
				NLD_Name0995="Koomen";
				NLD_Name0996="Koopman";
				NLD_Name0997="Koopmans";
				NLD_Name0998="Koorn";
				NLD_Name0999="Kooten";
				NLD_Name1000="Kop";
				NLD_Name1001="Koppedrajer";
				NLD_Name1002="Koppes";
				NLD_Name1003="Korff";
				NLD_Name1004="Kortrijk";
				NLD_Name1005="Kos";
				NLD_Name1006="Kossen";
				NLD_Name1007="Koster";
				NLD_Name1008="Kotter";
				NLD_Name1009="Kouwenberg";
				NLD_Name1010="Kralt";
				NLD_Name1011="Kramer";
				NLD_Name1012="Kras";
				NLD_Name1013="Krawaet";
				NLD_Name1014="Kremer";
				NLD_Name1015="Kremers";
				NLD_Name1016="Krens";
				NLD_Name1017="Kretzmer";
				NLD_Name1018="Krijne";
				NLD_Name1019="Kroes";
				NLD_Name1020="Kroesen";
				NLD_Name1021="Krol";
				NLD_Name1022="Kronselaar";
				NLD_Name1023="Kroon";
				NLD_Name1024="Kroonen";
				NLD_Name1025="Krüger";
				NLD_Name1026="Kruijsen";
				NLD_Name1027="Kruis";
				NLD_Name1028="Kruishaar";
				NLD_Name1029="Krul";
				NLD_Name1030="Kruythoff";
				NLD_Name1031="Kuijten";
				NLD_Name1032="Kuiken";
				NLD_Name1033="Kuilboer";
				NLD_Name1034="Kuin";
				NLD_Name1035="Kuiper";
				NLD_Name1036="Kuipers";
				NLD_Name1037="Kuppens";
				NLD_Name1038="Kurvers";
				NLD_Name1039="Kwant";
				NLD_Name1040="La Verge";
				NLD_Name1041="Laagland";
				NLD_Name1042="Laan";
				NLD_Name1043="Laar";
				NLD_Name1044="Labuijrie";
				NLD_Name1045="Laenen";
				NLD_Name1046="Lammerick";
				NLD_Name1047="Lammerik";
				NLD_Name1048="Lammers";
				NLD_Name1049="Landman";
				NLD_Name1050="Lange";
				NLD_Name1051="Langedijk";
				NLD_Name1052="Langendijk";
				NLD_Name1053="Langens";
				NLD_Name1054="Langerak";
				NLD_Name1055="Langereis";
				NLD_Name1056="Lans";
				NLD_Name1057="Lanting";
				NLD_Name1058="Lantmeeters";
				NLD_Name1059="Larsen";
				NLD_Name1060="Lasoie";
				NLD_Name1061="Lauckens";
				NLD_Name1062="Laukens";
				NLD_Name1063="Lauryssens";
				NLD_Name1064="Lauwers";
				NLD_Name1065="Lavarre";
				NLD_Name1066="Lavery";
				NLD_Name1067="Lay";
				NLD_Name1068="Le Geu";
				NLD_Name1070="Ledderoos";
				NLD_Name1071="Ledecq";
				NLD_Name1072="Leeckens";
				NLD_Name1073="Leeflang";
				NLD_Name1074="Leek";
				NLD_Name1075="Leen";
				NLD_Name1076="Leeuwenkamp";
				NLD_Name1077="Leeyen";
				NLD_Name1078="Lefeber";
				NLD_Name1079="Lefèbre";
				NLD_Name1080="Legrand";
				NLD_Name1081="Leijdesdorff";
				NLD_Name1082="Leijendeckers";
				NLD_Name1083="Leijser";
				NLD_Name1084="Lejeune";
				NLD_Name1085="Lekens";
				NLD_Name1086="Lelyvelt";
				NLD_Name1087="Lem";
				NLD_Name1088="Lemmen";
				NLD_Name1089="Lemmens";
				NLD_Name1090="Lenaerts";
				NLD_Name1091="Lens";
				NLD_Name1092="Lense";
				NLD_Name1093="Lepelman";
				NLD_Name1094="Lesscher";
				NLD_Name1095="Leusink";
				NLD_Name1096="Lewis";
				NLD_Name1097="Leykens";
				NLD_Name1098="Leysen";
				NLD_Name1099="Lichthart";
				NLD_Name1100="Liefhebber";
				NLD_Name1101="Ligthart";
				NLD_Name1102="Limet";
				NLD_Name1103="Lindeboom";
				NLD_Name1104="Linden";
				NLD_Name1105="Lindenkamp";
				NLD_Name1106="Lindhout";
				NLD_Name1107="Linskens";
				NLD_Name1108="Linssen";
				NLD_Name1109="Lippmann";
				NLD_Name1110="Lockhorn";
				NLD_Name1111="Loeb";
				NLD_Name1112="Loenders";
				NLD_Name1113="Logger";
				NLD_Name1114="Loomans";
				NLD_Name1115="Loos";
				NLD_Name1116="Looymans";
				NLD_Name1117="Lorjé";
				NLD_Name1118="Louckens";
				NLD_Name1119="Loukens";
				NLD_Name1121="Lous";
				NLD_Name1122="Lousberg";
				NLD_Name1123="Löwenthal";
				NLD_Name1124="Loys";
				NLD_Name1125="Lubbers";
				NLD_Name1126="Lucardie";
				NLD_Name1127="Luchtenborg";
				NLD_Name1128="Ludwig";
				NLD_Name1129="Lueeckens";
				NLD_Name1130="Luijcx";
				NLD_Name1131="Luijten";
				NLD_Name1132="Lumloh";
				NLD_Name1133="Luyckx";
				NLD_Name1134="Luyten";
				NLD_Name1135="Maal";
				NLD_Name1136="Maartens";
				NLD_Name1137="Maarthuis";
				NLD_Name1138="Maartyn";
				NLD_Name1139="Maas";
				NLD_Name1140="Maassen";
				NLD_Name1141="Maes";
				NLD_Name1143="Maesen";
				NLD_Name1144="Magnin";
				NLD_Name1145="Magnusson";
				NLD_Name1146="Mak";
				NLD_Name1147="Makkelijk";
				NLD_Name1148="Mallieu";
				NLD_Name1149="Mangé";
				NLD_Name1150="Mangione";
				NLD_Name1151="Manhout";
				NLD_Name1152="Manshande";
				NLD_Name1153="Manshanden";
				NLD_Name1154="Mantel";
				NLD_Name1155="Manteleers";
				NLD_Name1156="Maquet";
				NLD_Name1157="Marie";
				NLD_Name1158="Martel";
				NLD_Name1159="Martens";
				NLD_Name1160="Martineau";
				NLD_Name1161="Martins";
				NLD_Name1162="Mason";
				NLD_Name1163="Masselink";
				NLD_Name1164="Mastboom";
				NLD_Name1165="Mater";
				NLD_Name1166="Mathei";
				NLD_Name1167="Mathijs";
				NLD_Name1168="Matkovich";
				NLD_Name1169="Matthies";
				NLD_Name1170="McIlroy";
				NLD_Name1171="Meekers";
				NLD_Name1172="Meer";
				NLD_Name1173="Meerman";
				NLD_Name1174="Meester";
				NLD_Name1175="Mehrings";
				NLD_Name1176="Meijer";
				NLD_Name1177="Meilink";
				NLD_Name1178="Melchers";
				NLD_Name1179="Melotte";
				NLD_Name1180="Mendels";
				NLD_Name1181="Menke";
				NLD_Name1182="Mensink";
				NLD_Name1183="Mentink";
				NLD_Name1184="Merkman";
				NLD_Name1185="Mertens";
				NLD_Name1186="Mes";
				NLD_Name1187="Mesger";
				NLD_Name1188="Meunier";
				NLD_Name1189="Meuter";
				NLD_Name1190="Meuwis";
				NLD_Name1191="Meyer";
				NLD_Name1192="Michiels";
				NLD_Name1193="Michielsen";
				NLD_Name1194="Michils";
				NLD_Name1195="Mikkers";
				NLD_Name1196="Minderop";
				NLD_Name1197="Mink";
				NLD_Name1198="Minnema";
				NLD_Name1199="Minses";
				NLD_Name1200="Missoten";
				NLD_Name1201="Misteli";
				NLD_Name1202="Mitropoulos";
				NLD_Name1203="Moderscheim";
				NLD_Name1204="Moeratti";
				NLD_Name1205="Moerenhout";
				NLD_Name1206="Moermans";
				NLD_Name1207="Moerthorst";
				NLD_Name1208="Moeselijn";
				NLD_Name1209="Mohr";
				NLD_Name1210="Moitier";
				NLD_Name1211="Mol";
				NLD_Name1212="Molenaar";
				NLD_Name1213="Molmans";
				NLD_Name1214="Mommers";
				NLD_Name1215="Monbaliu";
				NLD_Name1216="Mondelaers";
				NLD_Name1217="Monten";
				NLD_Name1218="Moolenaar";
				NLD_Name1219="Moolenburgh";
				NLD_Name1220="Moonen";
				NLD_Name1221="Moons";
				NLD_Name1222="Moran";
				NLD_Name1223="Mors";
				NLD_Name1224="Morsch";
				NLD_Name1225="Morselt";
				NLD_Name1226="Morsink";
				NLD_Name1227="Mortal";
				NLD_Name1228="Motte";
				NLD_Name1229="Mous";
				NLD_Name1230="Mouton";
				NLD_Name1231="Muis";
				NLD_Name1232="Mul";
				NLD_Name1233="Mulder";
				NLD_Name1234="Mulders";
				NLD_Name1235="Mullins";
				NLD_Name1236="Munck";
				NLD_Name1237="Munster";
				NLD_Name1238="Muntsteeg";
				NLD_Name1239="Muris";
				NLD_Name1240="Murré";
				NLD_Name1241="Mutsaers";
				NLD_Name1242="Mutsaerts";
				NLD_Name1243="N";
				NLD_Name1244="N.";
				NLD_Name1245="N.N.";
				NLD_Name1246="Naber";
				NLD_Name1247="Nagelhout";
				NLD_Name1248="Nan";
				NLD_Name1249="Nankman";
				NLD_Name1250="Nanne";
				NLD_Name1251="Nannen";
				NLD_Name1252="Nanninga";
				NLD_Name1253="Nanon";
				NLD_Name1254="Nauta";
				NLD_Name1255="Nederkoorn";
				NLD_Name1256="Nederlof";
				NLD_Name1257="Neeckx";
				NLD_Name1258="Needham";
				NLD_Name1259="Neefjes";
				NLD_Name1260="Neezen";
				NLD_Name1261="Neijzing";
				NLD_Name1263="Nelis";
				NLD_Name1264="Nelissen";
				NLD_Name1265="Neyens";
				NLD_Name1266="Nicolaï";
				NLD_Name1267="Nicolaij";
				NLD_Name1268="Nicolay";
				NLD_Name1269="Niebusch";
				NLD_Name1270="Niele";
				NLD_Name1271="Nienhuis";
				NLD_Name1272="Niesing";
				NLD_Name1273="Niesz";
				NLD_Name1274="Nieuweboer";
				NLD_Name1275="Nieuwenhuis";
				NLD_Name1276="Nieuwenrooij";
				NLD_Name1277="Nieuwland";
				NLD_Name1278="Nijhuis";
				NLD_Name1279="NN";
				NLD_Name1280="Noits";
				NLD_Name1281="Nolet";
				NLD_Name1282="Nollens";
				NLD_Name1283="Noom";
				NLD_Name1284="Noordoven";
				NLD_Name1285="Noorman";
				NLD_Name1286="Noot";
				NLD_Name1287="Noots";
				NLD_Name1288="Nooy";
				NLD_Name1289="Nueboer";
				NLD_Name1290="Nuijs";
				NLD_Name1291="Nutters";
				NLD_Name1292="Nuyens";
				NLD_Name1293="Obdam";
				NLD_Name1294="Obert";
				NLD_Name1295="Offerijns";
				NLD_Name1296="Oijaar";
				NLD_Name1297="Oink";
				NLD_Name1298="Okhuijsen";
				NLD_Name1299="Okkema";
				NLD_Name1300="Oldenhof";
				NLD_Name1301="Olijhoek";
				NLD_Name1302="Olijkan";
				NLD_Name1303="Oomen";
				NLD_Name1304="Oomsen";
				NLD_Name1305="Oortjens";
				NLD_Name1306="Oosterbaan";
				NLD_Name1307="Oosterdorp";
				NLD_Name1308="Oosterhuis";
				NLD_Name1309="Oostindië";
				NLD_Name1310="Ootes";
				NLD_Name1311="op 't Veld";
				NLD_Name1312="Opdam";
				NLD_Name1313="Opdehoeve";
				NLD_Name1314="Oranje";
				NLD_Name1315="Ossenvoort";
				NLD_Name1316="Ott";
				NLD_Name1317="Otte";
				NLD_Name1318="Otten";
				NLD_Name1319="Oude Frerink";
				NLD_Name1320="Oude Schutte";
				NLD_Name1321="Oude Smienk";
				NLD_Name1322="Oudejans";
				NLD_Name1323="Oudeman";
				NLD_Name1324="Oudendam";
				NLD_Name1325="Oudes";
				NLD_Name1326="Oudijk";
				NLD_Name1327="Out";
				NLD_Name1328="Overbeek";
				NLD_Name1329="Overberg";
				NLD_Name1330="Overduijn";
				NLD_Name1331="Overmars";
				NLD_Name1332="Paaij";
				NLD_Name1333="Paardekooper";
				NLD_Name1334="Paats";
				NLD_Name1335="Paauw";
				NLD_Name1336="Padberg";
				NLD_Name1337="Paesen";
				NLD_Name1338="Pakkoo";
				NLD_Name1339="Palmans";
				NLD_Name1340="Pals";
				NLD_Name1341="Palsma";
				NLD_Name1342="Pandelaar";
				NLD_Name1343="Pander";
				NLD_Name1344="Papadalzi";
				NLD_Name1345="Parkins";
				NLD_Name1346="Pater";
				NLD_Name1347="Pattiwael";
				NLD_Name1348="Patty";
				NLD_Name1349="Paulen";
				NLD_Name1350="Paulus";
				NLD_Name1351="Paus";
				NLD_Name1352="Peerdeman";
				NLD_Name1353="Peerden";
				NLD_Name1354="Peereboom";
				NLD_Name1355="Peeten";
				NLD_Name1356="Peeters";
				NLD_Name1357="Pelgrims";
				NLD_Name1358="Pellens";
				NLD_Name1360="Pels";
				NLD_Name1361="Pelt";
				NLD_Name1362="Pennekamp";
				NLD_Name1363="Penning";
				NLD_Name1364="Peper";
				NLD_Name1365="Perin";
				NLD_Name1366="Peten";
				NLD_Name1367="Peters";
				NLD_Name1368="Petersen";
				NLD_Name1369="Petteboorder";
				NLD_Name1370="Pharo";
				NLD_Name1371="Philippe";
				NLD_Name1372="Philipsen";
				NLD_Name1373="Picard";
				NLD_Name1374="Piepers";
				NLD_Name1375="Piers";
				NLD_Name1376="Pieters";
				NLD_Name1377="Pietersdr";
				NLD_Name1378="Pietersma";
				NLD_Name1379="Pietersz";
				NLD_Name1380="Pijnappels";
				NLD_Name1381="Pilon";
				NLD_Name1382="Pincxten";
				NLD_Name1383="Plak";
				NLD_Name1384="Plas";
				NLD_Name1385="Ploegaert";
				NLD_Name1386="Pluijm";
				NLD_Name1387="Pluim";
				NLD_Name1388="Poelmans";
				NLD_Name1389="Poll";
				NLD_Name1390="Pollé";
				NLD_Name1391="Pollee";
				NLD_Name1392="Ponsen";
				NLD_Name1393="Poortinga";
				NLD_Name1394="Popma";
				NLD_Name1395="Porre";
				NLD_Name1396="Post";
				NLD_Name1397="Posthumus";
				NLD_Name1398="Postma";
				NLD_Name1399="Potse";
				NLD_Name1400="Potter";
				NLD_Name1401="Praets";
				NLD_Name1402="Pragt";
				NLD_Name1403="Prakken";
				NLD_Name1404="Preller";
				NLD_Name1405="Prenger";
				NLD_Name1406="Prevo";
				NLD_Name1407="Prinzen";
				NLD_Name1408="Proch";
				NLD_Name1409="Pronk";
				NLD_Name1410="Prous";
				NLD_Name1411="Pruimboom";
				NLD_Name1412="Prust";
				NLD_Name1413="Punt";
				NLD_Name1414="Pus";
				NLD_Name1415="Putzeys";
				NLD_Name1416="Quant";
				NLD_Name1417="Quanten";
				NLD_Name1418="Querreveld";
				NLD_Name1419="Raab";
				NLD_Name1420="Rabelink";
				NLD_Name1421="Rademaker";
				NLD_Name1422="Rademakers";
				NLD_Name1423="Rahder";
				NLD_Name1424="Ramael";
				NLD_Name1425="Ramakers";
				NLD_Name1427="Ramondt";
				NLD_Name1428="Rampen";
				NLD_Name1429="Ranson";
				NLD_Name1430="Rauwers";
				NLD_Name1431="Reael";
				NLD_Name1432="Rebbers";
				NLD_Name1433="Rebel";
				NLD_Name1434="Reckers";
				NLD_Name1438="Reen";
				NLD_Name1439="Reinders";
				NLD_Name1440="Rem";
				NLD_Name1441="Remmelts";
				NLD_Name1442="Renckens";
				NLD_Name1443="Reniers";
				NLD_Name1444="Renkens";
				NLD_Name1445="Rentenier";
				NLD_Name1446="Reuling";
				NLD_Name1447="Reuzenaar";
				NLD_Name1448="Reymen";
				NLD_Name1449="Reynaerts";
				NLD_Name1450="Reyners";
				NLD_Name1451="Reynkens";
				NLD_Name1452="Reyters";
				NLD_Name1453="Riberghs";
				NLD_Name1454="Richt";
				NLD_Name1455="Richter";
				NLD_Name1456="Riedijk";
				NLD_Name1457="Riemersma";
				NLD_Name1458="Riesenbeek";
				NLD_Name1459="Rietfoort";
				NLD_Name1460="Rietvoort";
				NLD_Name1461="Rijnbende";
				NLD_Name1462="Rijnierse";
				NLD_Name1463="Rijpkema";
				NLD_Name1464="Rijswijk";
				NLD_Name1465="Rikkerts";
				NLD_Name1466="Ringenberg";
				NLD_Name1467="Ringk";
				NLD_Name1468="Rippen";
				NLD_Name1469="Robol";
				NLD_Name1470="Rodenberg";
				NLD_Name1471="Roelen";
				NLD_Name1472="Roelofs";
				NLD_Name1473="Roelofsz";
				NLD_Name1474="Roels";
				NLD_Name1475="Roelvink";
				NLD_Name1476="Roemer";
				NLD_Name1477="Roeper";
				NLD_Name1478="Roes";
				NLD_Name1479="Roling";
				NLD_Name1480="Rolsma";
				NLD_Name1481="Rombach";
				NLD_Name1482="Rombouts";
				NLD_Name1483="Rondo";
				NLD_Name1484="Ronse";
				NLD_Name1485="Rood";
				NLD_Name1486="Rooké";
				NLD_Name1487="Roos";
				NLD_Name1488="Roosen";
				NLD_Name1489="Rooyakkers";
				NLD_Name1490="Roozen";
				NLD_Name1491="Rose";
				NLD_Name1492="Rosloot";
				NLD_Name1493="Rotgans";
				NLD_Name1494="Roth";
				NLD_Name1495="Rothuis";
				NLD_Name1496="Rotteveel";
				NLD_Name1497="Roubos";
				NLD_Name1498="Roufholts";
				NLD_Name1499="Roulans";
				NLD_Name1500="Rouppe van der Voort";
				NLD_Name1501="Rubenkamp";
				NLD_Name1502="Rubens";
				NLD_Name1503="Rüfer";
				NLD_Name1504="Ruijter";
				NLD_Name1505="Ruitenberg";
				NLD_Name1506="Ruiter";
				NLD_Name1507="Rulofs";
				NLD_Name1508="Rumbach";
				NLD_Name1509="Rus";
				NLD_Name1510="Rusticus";
				NLD_Name1511="Rutjes";
				NLD_Name1512="Rutten";
				NLD_Name1513="Rütze";
				NLD_Name1514="Ryke";
				NLD_Name1515="Sabes";
				NLD_Name1516="Saenen";
				NLD_Name1517="Sala";
				NLD_Name1518="Salomons";
				NLD_Name1519="Sanberg";
				NLD_Name1520="Sandbergen";
				NLD_Name1521="Sanders";
				NLD_Name1522="Sartogen";
				NLD_Name1523="Sartoghen";
				NLD_Name1524="Satge";
				NLD_Name1525="Savage";
				NLD_Name1526="Schagen";
				NLD_Name1527="Schalkwijk";
				NLD_Name1528="Schartman";
				NLD_Name1529="Schee";
				NLD_Name1530="Scheele";
				NLD_Name1531="Scheening";
				NLD_Name1532="Scheerbekke";
				NLD_Name1533="Scheffer";
				NLD_Name1534="Scheib";
				NLD_Name1535="Scheningh";
				NLD_Name1536="Scheper";
				NLD_Name1537="Schepers";
				NLD_Name1538="Schermer";
				NLD_Name1539="Schermerhorn";
				NLD_Name1540="Schiemans";
				NLD_Name1541="Schierhout";
				NLD_Name1542="Schilder";
				NLD_Name1543="Schim";
				NLD_Name1544="Schimmer";
				NLD_Name1545="Schinx";
				NLD_Name1546="Schipper";
				NLD_Name1547="Schippers";
				NLD_Name1548="Schmidt-Voss";
				NLD_Name1549="Schoemaker";
				NLD_Name1550="Schoen";
				NLD_Name1551="Schoenmaker";
				NLD_Name1552="Schoenmakers";
				NLD_Name1553="Scholten";
				NLD_Name1554="Scholvinck";
				NLD_Name1555="Schön";
				NLD_Name1556="Schoondergang";
				NLD_Name1557="Schoor";
				NLD_Name1558="Schotel";
				NLD_Name1559="Schotte";
				NLD_Name1560="Schotten";
				NLD_Name1561="Schoufour";
				NLD_Name1562="Schouten";
				NLD_Name1563="Schrama";
				NLD_Name1564="Schramp";
				NLD_Name1565="Schreiber";
				NLD_Name1566="Schuermans";
				NLD_Name1567="Schuit";
				NLD_Name1568="Schulte";
				NLD_Name1569="Schultze";
				NLD_Name1570="Schuringa";
				NLD_Name1571="Schute";
				NLD_Name1572="Schutjes";
				NLD_Name1573="Schutte";
				NLD_Name1574="Schwennen";
				NLD_Name1575="Seelie";
				NLD_Name1576="Segrave";
				NLD_Name1577="Sehraoui";
				NLD_Name1578="Seijts";
				NLD_Name1580="Seiz";
				NLD_Name1581="Sengers";
				NLD_Name1582="Sennema";
				NLD_Name1583="Sensse";
				NLD_Name1584="Sepp";
				NLD_Name1585="Sereen";
				NLD_Name1586="Serlijn";
				NLD_Name1587="Serroyen";
				NLD_Name1588="Seuters";
				NLD_Name1589="Seyen";
				NLD_Name1590="Sibering";
				NLD_Name1591="Sichtermann";
				NLD_Name1592="Sieburgh";
				NLD_Name1593="Siegersma";
				NLD_Name1594="Siekman";
				NLD_Name1595="Siemensma";
				NLD_Name1597="Siemerink";
				NLD_Name1598="Siemons";
				NLD_Name1599="Sieswerda";
				NLD_Name1600="Sijm";
				NLD_Name1601="Sijmens";
				NLD_Name1602="Sijmons";
				NLD_Name1603="Sijts";
				NLD_Name1604="Sikkes";
				NLD_Name1605="Silderhuis";
				NLD_Name1606="Silver";
				NLD_Name1607="Simon";
				NLD_Name1608="Simons";
				NLD_Name1609="Simonsma";
				NLD_Name1610="Sinjee";
				NLD_Name1611="Sinke";
				NLD_Name1612="Sinnige";
				NLD_Name1613="Six";
				NLD_Name1614="Sjoukes";
				NLD_Name1615="Skiczuk";
				NLD_Name1616="Slabbaert";
				NLD_Name1617="Slaet";
				NLD_Name1618="Slaetsdr";
				NLD_Name1619="Slaghekke";
				NLD_Name1620="Slagmolen";
				NLD_Name1621="Slechten";
				NLD_Name1622="Slee";
				NLD_Name1623="Slooten";
				NLD_Name1624="Slot";
				NLD_Name1625="Sloten";
				NLD_Name1626="Slothouwer";
				NLD_Name1627="Sluis";
				NLD_Name1628="Sluys";
				NLD_Name1629="Sman";
				NLD_Name1630="Smeekink";
				NLD_Name1631="Smeets";
				NLD_Name1632="Smekens";
				NLD_Name1633="Smets";
				NLD_Name1635="Smidts";
				NLD_Name1636="Smit";
				NLD_Name1637="Smithuysen";
				NLD_Name1638="Smits";
				NLD_Name1639="Smolders";
				NLD_Name1640="Smollers";
				NLD_Name1641="Smombers";
				NLD_Name1642="Smudde";
				NLD_Name1643="Smulders";
				NLD_Name1644="Sneeboer";
				NLD_Name1645="Snijders";
				NLD_Name1646="Snikkers";
				NLD_Name1647="Snoek";
				NLD_Name1648="Snoerwang";
				NLD_Name1649="Soet";
				NLD_Name1650="Soetens";
				NLD_Name1651="Sol";
				NLD_Name1652="Som";
				NLD_Name1654="Sonderman";
				NLD_Name1655="Sourdanus";
				NLD_Name1656="Soutman";
				NLD_Name1657="Spaas";
				NLD_Name1658="Specht";
				NLD_Name1659="Spekken";
				NLD_Name1660="Speltincx";
				NLD_Name1661="Spenkelink";
				NLD_Name1662="Spierenburg";
				NLD_Name1663="Spijdel";
				NLD_Name1664="Spijker";
				NLD_Name1665="Spijkerman";
				NLD_Name1666="Spijkstra";
				NLD_Name1667="Spoel";
				NLD_Name1668="Spoolder";
				NLD_Name1669="Spooren";
				NLD_Name1670="Spree";
				NLD_Name1671="Sprengers";
				NLD_Name1672="Spronck";
				NLD_Name1673="Sprong";
				NLD_Name1674="Spruijt";
				NLD_Name1675="Spruijtenberg";
				NLD_Name1676="Spruijtenburg";
				NLD_Name1677="Spruitenburg";
				NLD_Name1678="Staessen";
				NLD_Name1679="Stalman";
				NLD_Name1680="Stalmans";
				NLD_Name1681="Stam";
				NLD_Name1682="Standaert";
				NLD_Name1683="Stap";
				NLD_Name1684="Star";
				NLD_Name1685="Starreveld";
				NLD_Name1686="Starrevelt";
				NLD_Name1687="Startz";
				NLD_Name1688="Stassen";
				NLD_Name1689="Stavering";
				NLD_Name1690="Stcker";
				NLD_Name1691="Steekelenburg";
				NLD_Name1692="Steenbergen";
				NLD_Name1693="Steencel";
				NLD_Name1694="Steenmans";
				NLD_Name1696="Steenselmans";
				NLD_Name1697="Steenvoorden";
				NLD_Name1698="Steggerda";
				NLD_Name1699="Steijnen";
				NLD_Name1700="Steinmeijer";
				NLD_Name1701="Steinmetz";
				NLD_Name1702="Steinringer";
				NLD_Name1703="Sterenborg";
				NLD_Name1704="Sterker";
				NLD_Name1705="Stet";
				NLD_Name1706="Steur";
				NLD_Name1707="Stevaar";
				NLD_Name1708="Stevenaart";
				NLD_Name1709="Stevens";
				NLD_Name1710="Stierop";
				NLD_Name1711="Stippelmans";
				NLD_Name1712="Stoelinga";
				NLD_Name1713="Stolk";
				NLD_Name1714="Stommel";
				NLD_Name1715="Stook";
				NLD_Name1716="Stoop";
				NLD_Name1717="Stort";
				NLD_Name1718="Straathof";
				NLD_Name1719="Straatman";
				NLD_Name1720="Straven";
				NLD_Name1721="Streefland";
				NLD_Name1722="Streuper";
				NLD_Name1723="Strodeckers";
				NLD_Name1724="Stroet";
				NLD_Name1725="Stuijfzand";
				NLD_Name1726="Stuijt";
				NLD_Name1727="Stuit";
				NLD_Name1728="Stumpenhausen";
				NLD_Name1729="Stuyven";
				NLD_Name1730="Suijlen";
				NLD_Name1731="Sukel";
				NLD_Name1732="Suts";
				NLD_Name1733="Swaerts";
				NLD_Name1734="Swardt";
				NLD_Name1735="Swart";
				NLD_Name1736="Sweep";
				NLD_Name1737="Sweerts";
				NLD_Name1738="Sweirdts";
				NLD_Name1739="Swennen";
				NLD_Name1740="Swijgman";
				NLD_Name1741="Swolfs";
				NLD_Name1742="Swusten";
				NLD_Name1743="Symisse";
				NLD_Name1744="Taman";
				NLD_Name1745="Tan";
				NLD_Name1746="Taziaux";
				NLD_Name1747="te Marvelde";
				NLD_Name1748="Tebben";
				NLD_Name1749="Teel";
				NLD_Name1750="Teensma";
				NLD_Name1751="Teeukens";
				NLD_Name1752="Tellegen";
				NLD_Name1753="Temboom";
				NLD_Name1754="ten Doesschate";
				NLD_Name1755="ten Oever";
				NLD_Name1756="ten Thij";
				NLD_Name1757="ter Braak";
				NLD_Name1758="ter Haar";
				NLD_Name1759="ter Hennepe";
				NLD_Name1760="ter Hoeve";
				NLD_Name1761="ter Horst";
				NLD_Name1762="Terrin";
				NLD_Name1763="Terschlicht";
				NLD_Name1764="Tertogen";
				NLD_Name1765="Teukens";
				NLD_Name1766="Teunen";
				NLD_Name1767="The";
				NLD_Name1768="Theisling";
				NLD_Name1769="Theunis";
				NLD_Name1770="Theunisse";
				NLD_Name1771="Theunissen";
				NLD_Name1772="Theuwis";
				NLD_Name1774="Thielmans";
				NLD_Name1775="Thijs";
				NLD_Name1777="Thijssen";
				NLD_Name1778="Tholen";
				NLD_Name1779="Thomas";
				NLD_Name1780="Thomassen";
				NLD_Name1781="Thome";
				NLD_Name1782="Thomessen";
				NLD_Name1783="Thöne";
				NLD_Name1784="Thonis";
				NLD_Name1785="Thoulzididez";
				NLD_Name1786="Thuenen";
				NLD_Name1787="Tieleman";
				NLD_Name1788="Tieleman van Streefkerk";
				NLD_Name1789="Tielemans";
				NLD_Name1790="Tielens";
				NLD_Name1791="Tiet";
				NLD_Name1792="Tiggeler";
				NLD_Name1793="Tijlen";
				NLD_Name1794="Tilkin";
				NLD_Name1795="Timmer";
				NLD_Name1796="Timmerman";
				NLD_Name1797="Timmermans";
				NLD_Name1798="Tinke";
				NLD_Name1799="Tinselboer";
				NLD_Name1800="Toenen";
				NLD_Name1801="Tolboom";
				NLD_Name1802="Tollenaere";
				NLD_Name1803="Tool";
				NLD_Name1804="Toppe";
				NLD_Name1805="Tordoir";
				NLD_Name1806="Touloumtzoglou";
				NLD_Name1807="Trenning";
				NLD_Name1808="Tromp";
				NLD_Name1809="Tronchet";
				NLD_Name1810="Tsartogen";
				NLD_Name1811="Tucker Crang";
				NLD_Name1812="Tuers";
				NLD_Name1813="Tuijnders";
				NLD_Name1814="Tuijp";
				NLD_Name1815="Tuin";
				NLD_Name1816="Tuinman";
				NLD_Name1817="Twint";
				NLD_Name1818="Tyssen";
				NLD_Name1819="Ubink";
				NLD_Name1820="Unknown";
				NLD_Name1821="Unknown 1";
				NLD_Name1822="Unknown 2";
				NLD_Name1823="Urcem";
				NLD_Name1824="Ursem";
				NLD_Name1825="Uyterwijk";
				NLD_Name1826="v.d. Leeden";
				NLD_Name1827="v.d. Teems";
				NLD_Name1828="v.d. Werf";
				NLD_Name1829="Vaalman";
				NLD_Name1830="Vaarthuijsen";
				NLD_Name1831="Vader";
				NLD_Name1832="Vaes";
				NLD_Name1833="Vaesen";
				NLD_Name1834="Valentijn";
				NLD_Name1835="Valentijns";
				NLD_Name1836="Valentins";
				NLD_Name1837="Valken";
				NLD_Name1838="Valkenburg";
				NLD_Name1839="van 't Groenvolt";
				NLD_Name1840="van 't Sand";
				NLD_Name1841="van Aelst";
				NLD_Name1842="van Agt";
				NLD_Name1843="van Agthoven";
				NLD_Name1844="van Aken";
				NLD_Name1845="van Alst";
				NLD_Name1846="van Andringa";
				NLD_Name1847="van Andringa Bijvoet";
				NLD_Name1848="van Antwerpen";
				NLD_Name1849="van Arendonk";
				NLD_Name1850="van Asten";
				NLD_Name1851="van Audenhaege";
				NLD_Name1852="van Baar";
				NLD_Name1853="Van Baarlen";
				NLD_Name1854="van Baars";
				NLD_Name1855="van Bakel";
				NLD_Name1856="van Balen";
				NLD_Name1857="van Barneveld";
				NLD_Name1858="Van Bastelaere";
				NLD_Name1859="van Beckhoven";
				NLD_Name1860="van Beeck";
				NLD_Name1861="van Beek";
				NLD_Name1862="van Beers";
				NLD_Name1863="van Bemmel";
				NLD_Name1864="van Beneden";
				NLD_Name1865="van Bennekom";
				NLD_Name1866="van Benthem";
				NLD_Name1867="van Bergen";
				NLD_Name1868="van Berkum";
				NLD_Name1869="van Bettenbosch";
				NLD_Name1870="van Beusekom";
				NLD_Name1871="van Bijnen";
				NLD_Name1872="van Blocklant";
				NLD_Name1873="van Bloemendaal";
				NLD_Name1874="van Bohemen";
				NLD_Name1875="van Boxel";
				NLD_Name1876="van Brandenburgh";
				NLD_Name1877="van Brederode";
				NLD_Name1878="van Breemen";
				NLD_Name1879="van Buren";
				NLD_Name1880="van Buuringen";
				NLD_Name1881="van Campen";
				NLD_Name1882="van Coppen";
				NLD_Name1883="van Daanberg";
				NLD_Name1884="van Dael";
				NLD_Name1885="van Dam";
				NLD_Name1886="van de Bergh";
				NLD_Name1887="van de Kamp";
				NLD_Name1888="van de Laak";
				NLD_Name1889="Van de Loo";
				NLD_Name1890="van de Panne";
				NLD_Name1891="van de Pol";
				NLD_Name1892="van de Ven";
				NLD_Name1893="van de Vlist";
				NLD_Name1894="van de Water";
				NLD_Name1895="van de Weert";
				NLD_Name1896="van de Winckel";
				NLD_Name1897="van den Aakster";
				NLD_Name1898="van den Abbeelen";
				NLD_Name1899="van den Ban";
				NLD_Name1900="van den Berg";
				NLD_Name1901="van den Berg van Ommen";
				NLD_Name1902="van den Bergh";
				NLD_Name1903="van den Biesen";
				NLD_Name1904="van den Bogaard";
				NLD_Name1905="van den Boogaard";
				NLD_Name1906="van den Bosch";
				NLD_Name1907="van den Brande";
				NLD_Name1908="van den Brandt";
				NLD_Name1909="van den Brink";
				NLD_Name1910="van den Broek";
				NLD_Name1911="van den Bronk";
				NLD_Name1912="van den Dyck";
				NLD_Name1913="van den Ende";
				NLD_Name1917="van den Heuvel";
				NLD_Name1918="van den Hoevel";
				NLD_Name1919="van den Hoogen";
				NLD_Name1920="van den Hul";
				NLD_Name1921="van den Nieuwenhuizen";
				NLD_Name1922="van den Noort";
				NLD_Name1923="van den Panhuijsen";
				NLD_Name1924="van der Aa";
				NLD_Name1925="van der Beek";
				NLD_Name1926="van der Bogaard";
				NLD_Name1927="van der Burgh";
				NLD_Name1928="van der Donk";
				NLD_Name1929="van der Drift";
				NLD_Name1930="van der Eijk";
				NLD_Name1931="van der Gaag";
				NLD_Name1932="van der Grint";
				NLD_Name1933="van der Gulik";
				NLD_Name1934="van der Haer";
				NLD_Name1935="van der Heijden";
				NLD_Name1936="van der Hidde";
				NLD_Name1937="van der Hulst";
				NLD_Name1938="van der Jagt";
				NLD_Name1939="van der Knuijt";
				NLD_Name1940="van der Knuit";
				NLD_Name1941="van der Kolk";
				NLD_Name1942="van der Kooij";
				NLD_Name1943="van der Laeck";
				NLD_Name1944="van der Laen";
				NLD_Name1945="van der Lee";
				NLD_Name1946="van der Leeden";
				NLD_Name1947="van der Lelij";
				NLD_Name1948="van der Linden";
				NLD_Name1949="van der Logt";
				NLD_Name1950="van der Loo";
				NLD_Name1951="van der Mark";
				NLD_Name1952="van der Meer";
				NLD_Name1953="van der Meulen";
				NLD_Name1954="van der Most";
				NLD_Name1955="van der Munk";
				NLD_Name1956="van der Oord";
				NLD_Name1957="van der Pand";
				NLD_Name1958="van der Pant";
				NLD_Name1959="van der Pol";
				NLD_Name1960="van der Reet";
				NLD_Name1961="van der Riet";
				NLD_Name1962="van der Schoor";
				NLD_Name1963="van der Slik";
				NLD_Name1964="van der Smaal";
				NLD_Name1965="van der Smagt";
				NLD_Name1966="van der Spek";
				NLD_Name1967="van der Splinter";
				NLD_Name1968="van der Star";
				NLD_Name1969="van der Stek";
				NLD_Name1970="van der Vaart";
				NLD_Name1971="van der Veecke";
				NLD_Name1972="van der Veen";
				NLD_Name1973="van der Veld";
				NLD_Name1974="van der Velde";
				NLD_Name1975="van der Veldt";
				NLD_Name1976="van der Vin";
				NLD_Name1977="van der Vlag";
				NLD_Name1978="van der Vliet";
				NLD_Name1979="van der Voet";
				NLD_Name1980="van der Waarden";
				NLD_Name1981="van der Wal";
				NLD_Name1982="van der Weerden";
				NLD_Name1983="van der Weijden";
				NLD_Name1984="van der Werf";
				NLD_Name1985="van der Wielen";
				NLD_Name1986="van der Wilp";
				NLD_Name1987="van der Winkel";
				NLD_Name1988="van der Wulp";
				NLD_Name1989="van der Zee";
				NLD_Name1990="van der Zel";
				NLD_Name1991="van der Zwet";
				NLD_Name1992="van Diepen";
				NLD_Name1993="van Dieren";
				NLD_Name1994="van Dieren Bijvoet";
				NLD_Name1995="van Dieren-Bijvoet";
				NLD_Name1996="van Dijk";
				NLD_Name1997="van Doorn";
				NLD_Name1998="van Duffel";
				NLD_Name1999="van Duren";
				NLD_Name2000="van Dusseldorp";
				NLD_Name2001="van Duuren";
				NLD_Name2002="van Dyck";
				NLD_Name2003="van Eeken";
				NLD_Name2004="van Egmond";
				NLD_Name2005="van Egten";
				NLD_Name2006="van Elburg";
				NLD_Name2007="van Erp";
				NLD_Name2008="van Es";
				NLD_Name2009="van Esch";
				NLD_Name2010="van Etten";
				NLD_Name2011="van Eunen";
				NLD_Name2012="van Eupen";
				NLD_Name2013="van Everdingen";
				NLD_Name2014="van Gastel";
				NLD_Name2015="van Geenen";
				NLD_Name2016="van Gelder";
				NLD_Name2017="van Genderen";
				NLD_Name2018="van Genk";
				NLD_Name2019="van Gent";
				NLD_Name2020="van Gijn";
				NLD_Name2021="van Glabbeek";
				NLD_Name2022="van Godde";
				NLD_Name2023="van Goethem";
				NLD_Name2024="van Gorp";
				NLD_Name2025="van Grieken";
				NLD_Name2026="van Grinsven";
				NLD_Name2027="van Grol";
				NLD_Name2028="van Gulik";
				NLD_Name2029="van Haaren";
				NLD_Name2030="van Haren";
				NLD_Name2031="van Hees";
				NLD_Name2032="van Heeswijk";
				NLD_Name2033="van Hertum";
				NLD_Name2034="van Hesewijck";
				NLD_Name2035="van Hinte";
				NLD_Name2036="van Hoek";
				NLD_Name2037="van Hoeven";
				NLD_Name2038="van Hoof";
				NLD_Name2039="van Horick";
				NLD_Name2040="Van Hove";
				NLD_Name2041="van Hövell tot Westerflier";
				NLD_Name2042="van Iersel";
				NLD_Name2043="van Kampen";
				NLD_Name2044="van Kapel";
				NLD_Name2045="van Kemenade";
				NLD_Name2046="van Kempe";
				NLD_Name2047="van Kempen";
				NLD_Name2048="van Kessel";
				NLD_Name2049="van Keulen";
				NLD_Name2050="van Koutrik";
				NLD_Name2051="van Krimpen";
				NLD_Name2052="van Kuppeveld";
				NLD_Name2053="van Laar";
				NLD_Name2054="van Laarhoven";
				NLD_Name2055="van Latum";
				NLD_Name2056="van Leendt";
				NLD_Name2057="van Leerdam";
				NLD_Name2058="van Leeuwen";
				NLD_Name2059="van Leuwen";
				NLD_Name2060="van Liempt Eiting";
				NLD_Name2061="van Liemt";
				NLD_Name2062="van Lier";
				NLD_Name2063="van Lingen";
				NLD_Name2064="van Loenen";
				NLD_Name2065="van Loo";
				NLD_Name2066="van Luijck";
				NLD_Name2067="van Luijk";
				NLD_Name2068="van Luijpen";
				NLD_Name2069="van Mallem";
				NLD_Name2070="van Malm";
				NLD_Name2071="van Maris";
				NLD_Name2072="van Meer";
				NLD_Name2073="van Meeuwen";
				NLD_Name2074="van Merode";
				NLD_Name2075="van Mierlo";
				NLD_Name2076="van Mourik";
				NLD_Name2077="van Nieuwenhoven";
				NLD_Name2078="van Noort";
				NLD_Name2079="van Oerle";
				NLD_Name2080="van Ommen";
				NLD_Name2081="van Onckhuijsen";
				NLD_Name2082="van Onkhuijsen";
				NLD_Name2083="van Oosterom";
				NLD_Name2084="van Opmeer";
				NLD_Name2085="van Os";
				NLD_Name2086="van Otterbeek Bastiaanse";
				NLD_Name2087="van Outersterp";
				NLD_Name2088="van Overeem";
				NLD_Name2089="van Pottelberghe";
				NLD_Name2090="van Ray";
				NLD_Name2091="van Reen";
				NLD_Name2092="van Rhijn";
				NLD_Name2093="van Rhoon";
				NLD_Name2094="van Riel";
				NLD_Name2095="van Rijckevorsel";
				NLD_Name2096="van Rijn";
				NLD_Name2097="van Rijsewijk";
				NLD_Name2098="van Robbroek";
				NLD_Name2099="van Roessel";
				NLD_Name2100="van Rooijen";
				NLD_Name2101="van Rooy";
				NLD_Name2102="van Ruiten";
				NLD_Name2103="van Saasen";
				NLD_Name2104="van Santen";
				NLD_Name2105="van Schagen";
				NLD_Name2106="van Schijndel";
				NLD_Name2107="van Schip";
				NLD_Name2108="van Schorrenbergh";
				NLD_Name2109="van Schuijlenburg";
				NLD_Name2110="van Seumeren";
				NLD_Name2111="van Soelen";
				NLD_Name2112="van Son";
				NLD_Name2113="van Soolen";
				NLD_Name2114="van Steden";
				NLD_Name2115="van Steede";
				NLD_Name2116="van Steen";
				NLD_Name2117="van Steenberge";
				NLD_Name2118="van Steenhove";
				NLD_Name2119="van Steenove";
				NLD_Name2120="van Steenwijk";
				NLD_Name2121="van Steijn";
				NLD_Name2122="van Stein";
				NLD_Name2123="van Stoll";
				NLD_Name2124="van Straten";
				NLD_Name2125="van Strijen";
				NLD_Name2126="van Til";
				NLD_Name2127="van Tomputte";
				NLD_Name2128="van Triene";
				NLD_Name2129="van Twuijver";
				NLD_Name2130="van Varseveld";
				NLD_Name2131="van Veen";
				NLD_Name2132="van Velsen";
				NLD_Name2133="Van Velthoven";
				NLD_Name2134="van Verseveld";
				NLD_Name2135="van Vliet";
				NLD_Name2136="van Voorst tot Voorst";
				NLD_Name2137="van Voorthuizen";
				NLD_Name2138="van Vugt";
				NLD_Name2139="van Vuren";
				NLD_Name2140="van Walree";
				NLD_Name2141="van Weegen";
				NLD_Name2142="van Weerden";
				NLD_Name2143="van Weeteren";
				NLD_Name2144="van Wegen";
				NLD_Name2145="van Welzenes";
				NLD_Name2146="van Wetten";
				NLD_Name2147="van Wickeren";
				NLD_Name2148="van Wijngaarden";
				NLD_Name2149="van Wissen";
				NLD_Name2150="van Wittenhorst";
				NLD_Name2151="van Woerkom";
				NLD_Name2152="van Wymeersch";
				NLD_Name2153="van Zandvoord";
				NLD_Name2154="van Zeventer";
				NLD_Name2155="van Zinderen";
				NLD_Name2156="van Zon";
				NLD_Name2157="Vanbriel";
				NLD_Name2158="Vandael";
				NLD_Name2159="Vandelaak";
				NLD_Name2160="Vandendriesche";
				NLD_Name2161="Vandeput";
				NLD_Name2162="vander Lande";
				NLD_Name2163="vander Lee";
				NLD_Name2164="Vanderaelst";
				NLD_Name2165="Vandereyken";
				NLD_Name2166="Vandersanden";
				NLD_Name2167="Vandervelden";
				NLD_Name2168="Vandewal";
				NLD_Name2169="Vandillen";
				NLD_Name2170="Vanhees";
				NLD_Name2171="Vanhout";
				NLD_Name2172="Vanlindt";
				NLD_Name2173="Vanrintel";
				NLD_Name2174="Vanrintelen";
				NLD_Name2175="Vanspauwen";
				NLD_Name2176="Vanstiphout";
				NLD_Name2177="Veen";
				NLD_Name2178="Veenendaal";
				NLD_Name2179="Veer";
				NLD_Name2180="Veldboer";
				NLD_Name2181="Veldemans";
				NLD_Name2182="Veldhuis";
				NLD_Name2183="Veldman";
				NLD_Name2185="Velleman";
				NLD_Name2186="Velseboer";
				NLD_Name2187="Veltenaar";
				NLD_Name2188="Velthausz";
				NLD_Name2189="Velthuis";
				NLD_Name2190="Velthuyse";
				NLD_Name2191="Velzeboer";
				NLD_Name2192="Verbakel";
				NLD_Name2193="Verbaten";
				NLD_Name2194="Verbeeck";
				NLD_Name2195="Verbeek";
				NLD_Name2196="Verberne";
				NLD_Name2197="Verborcht";
				NLD_Name2198="Verboven";
				NLD_Name2199="Verbunt";
				NLD_Name2200="Verburg";
				NLD_Name2201="Verdessen";
				NLD_Name2202="Verdonschot";
				NLD_Name2203="Verduijn";
				NLD_Name2204="Verduin";
				NLD_Name2205="Verheijen";
				NLD_Name2206="Verhoek";
				NLD_Name2207="Verhoeven";
				NLD_Name2208="Verhulsdonck";
				NLD_Name2209="Verhulst";
				NLD_Name2210="Verkerk";
				NLD_Name2211="Verlaat";
				NLD_Name2212="Verlinden";
				NLD_Name2213="Verloop";
				NLD_Name2214="Vermaas";
				NLD_Name2215="Vermaes";
				NLD_Name2216="Vermandel";
				NLD_Name2217="Vermeer";
				NLD_Name2218="Vermeulen";
				NLD_Name2219="Vermijl";
				NLD_Name2220="Verploegen";
				NLD_Name2221="Verroten";
				NLD_Name2222="Verschaeken";
				NLD_Name2223="Verschoor";
				NLD_Name2224="Verschuuren";
				NLD_Name2225="Versluijs";
				NLD_Name2226="Verstappen";
				NLD_Name2227="Versteegh";
				NLD_Name2228="Versterren";
				NLD_Name2229="Vertelman";
				NLD_Name2230="Vervoort";
				NLD_Name2231="Verweij";
				NLD_Name2232="Verwilligen";
				NLD_Name2233="Vignaroli";
				NLD_Name2234="Vink";
				NLD_Name2235="Vis";
				NLD_Name2236="Visser";
				NLD_Name2237="Vissers";
				NLD_Name2238="Vitale";
				NLD_Name2239="Vlaar";
				NLD_Name2240="Vlaarkamp";
				NLD_Name2241="Vlaskamp";
				NLD_Name2242="Vlemincx";
				NLD_Name2243="Vleminx";
				NLD_Name2244="Vliet";
				NLD_Name2245="Vluggen";
				NLD_Name2246="Vlugt";
				NLD_Name2247="Voerman";
				NLD_Name2248="Voets";
				NLD_Name2249="Vogd";
				NLD_Name2250="Vogels";
				NLD_Name2251="Vogt";
				NLD_Name2252="Voisin";
				NLD_Name2253="Volckeringh";
				NLD_Name2254="Völker";
				NLD_Name2255="Volkers";
				NLD_Name2256="Volmer";
				NLD_Name2257="von Bruchhausen";
				NLD_Name2258="Vongers van den Biesen";
				NLD_Name2259="Voorburg";
				NLD_Name2260="Voorhuis";
				NLD_Name2261="Voorman";
				NLD_Name2262="Voors";
				NLD_Name2263="Vorstman";
				NLD_Name2264="Vos";
				NLD_Name2265="Voskuil";
				NLD_Name2266="Vossen";
				NLD_Name2267="Vredenburg";
				NLD_Name2268="Vrederiks";
				NLD_Name2269="Vreeburg";
				NLD_Name2270="Vreeksz";
				NLD_Name2271="Vreker";
				NLD_Name2272="Vreys";
				NLD_Name2273="Vriamont";
				NLD_Name2274="Vrielink";
				NLD_Name2275="Vriend";
				NLD_Name2276="Vriendt";
				NLD_Name2277="Vriendts";
				NLD_Name2278="Vriens";
				NLD_Name2279="Vrients";
				NLD_Name2280="Vriesmans";
				NLD_Name2281="Vrijer";
				NLD_Name2282="Vrijns";
				NLD_Name2283="Vrijsen";
				NLD_Name2284="Vrints";
				NLD_Name2286="Vugt";
				NLD_Name2287="Vugts";
				NLD_Name2288="Vuijst";
				NLD_Name2289="Vuist";
				NLD_Name2290="Vuyst";
				NLD_Name2291="Waa";
				NLD_Name2292="Wagemakers";
				NLD_Name2293="Wagemans";
				NLD_Name2294="Wagenvoorde";
				NLD_Name2295="Waghtelaers";
				NLD_Name2296="Wagner";
				NLD_Name2297="Waij";
				NLD_Name2298="Walheer";
				NLD_Name2299="Walraven";
				NLD_Name2300="Walsmits";
				NLD_Name2301="Walters";
				NLD_Name2302="Wamstekers";
				NLD_Name2303="Wandresse";
				NLD_Name2304="Ward";
				NLD_Name2305="Warmer";
				NLD_Name2306="Warnaar";
				NLD_Name2307="Warners";
				NLD_Name2308="Wassens";
				NLD_Name2309="Waterval";
				NLD_Name2310="Watses";
				NLD_Name2311="Weaver";
				NLD_Name2312="Weel";
				NLD_Name2313="Weesing";
				NLD_Name2314="Weicker";
				NLD_Name2315="Weijper";
				NLD_Name2316="Welhuis";
				NLD_Name2317="Wellens";
				NLD_Name2318="Wels";
				NLD_Name2319="Welsing";
				NLD_Name2320="Wennink";
				NLD_Name2321="Werson";
				NLD_Name2322="Wessels";
				NLD_Name2323="Wester";
				NLD_Name2324="Westmeijer";
				NLD_Name2325="Weterings";
				NLD_Name2326="Weustink";
				NLD_Name2327="Weutens";
				NLD_Name2328="Weyters";
				NLD_Name2329="Wichman";
				NLD_Name2330="Wiechers Leussink";
				NLD_Name2331="Wiegman";
				NLD_Name2332="Wielens";
				NLD_Name2333="Wienders";
				NLD_Name2334="Wieriks";
				NLD_Name2335="Wiersma";
				NLD_Name2336="Wijckmans";
				NLD_Name2337="Wijdenes";
				NLD_Name2338="Wijer";
				NLD_Name2339="Wijnaers";
				NLD_Name2340="Wijnen";
				NLD_Name2341="Wijners";
				NLD_Name2342="Wijnker";
				NLD_Name2343="Wijnstok";
				NLD_Name2344="Wildenbeest";
				NLD_Name2345="Wilhelmus";
				NLD_Name2347="Willems";
				NLD_Name2348="Williamson";
				NLD_Name2349="Wilsens";
				NLD_Name2350="Windels";
				NLD_Name2351="Winkel";
				NLD_Name2353="Winterhalter";
				NLD_Name2354="Winters";
				NLD_Name2355="Wisman";
				NLD_Name2356="Wisse";
				NLD_Name2357="Wit";
				NLD_Name2358="With";
				NLD_Name2359="Witmeur";
				NLD_Name2360="Wittenberg";
				NLD_Name2361="Witteveen";
				NLD_Name2362="Wittkampf";
				NLD_Name2363="Woestenburg";
				NLD_Name2364="Wolbers";
				NLD_Name2365="Wolff";
				NLD_Name2366="Woltering";
				NLD_Name2367="Wolterink";
				NLD_Name2368="Wortel";
				NLD_Name2369="Wouters";
				NLD_Name2370="Wuyten";
				NLD_Name2371="Wuyts";
				NLD_Name2372="Ydema";
				NLD_Name2373="Yntema";
				NLD_Name2374="Zalm";
				NLD_Name2375="Zeeman";
				NLD_Name2376="Zellerhoff";
				NLD_Name2377="Zengerink";
				NLD_Name2378="Zerfuss";
				NLD_Name2379="Zijdewind";
				NLD_Name2380="Zimmermann";
				NLD_Name2381="Zittersteijn";
				NLD_Name2382="Zoet";
				NLD_Name2383="Zonneveld";
				NLD_Name2384="Zoon";
				NLD_Name2385="Zootjes";
				NLD_Name2386="Zuiderduin";
				NLD_Name2387="Zuurbier";
				NLD_Name2388="Zwaan";
				NLD_Name2389="Zwart";
				NLD_Name2390="Zweers";
				NLD_Name2391="Zwenk";
				NLD_Name2392="Zwinnen";
			};
		};
	};
};
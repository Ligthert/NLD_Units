class CfgPatches {
	class NLD_Units_Air {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F_Enoch_Loadorder"};
	};
};

class WeaponFireGun ;
class WeaponCloudsGun ;
class WeaponFireMGun ;
class WeaponCloudsMGun ;
class RCWSOptics;
class Turrets;
class MainTurret;

class CfgVehicles
{
	class I_Heli_light_03_F;
	class I_Heli_light_03_unarmed_F;
	class Heli_Transport_02_base_F;
	class NH90;
	class NH90Armed_GR2;
	class EC635_Unarmed;
	class C_man_pilot_F;
	class B_Heli_Transport_03_F;
	class B_Heli_Transport_03_unarmed_F;
	class CUP_B_CH47F_USA;
	class CUP_B_AH64_DL_USA;
	class CUP_B_AH64D_DL_USA;
	class CUP_B_AW159_Unarmed_GB;
	class CUP_B_AW159_Hellfire_GB;
	class CUP_B_SA330_Puma_HC2_BAF;
	class CUP_B_F35B_USMC;
	class CUP_B_F35B_Stealth_USMC;
	class CUP_B_C130J_USMC;
	class CUP_B_C130J_Cargo_USMC;
	class CUP_CH47F_VIV_Base;
	class CUP_B_USMC_DYN_MQ9;

	class EC635_NLD_Police: EC635_Unarmed
	{
		author = "Lowlands Tactical";
		displayName = "EC135 (Police)";
		scope = 2;
		side = 3;
		faction = "NLD_Units";
		crew = "NLD_Police_F";
		editorPreview = "\NLD_vehicle_units\previews\EC635_NLD_Police.jpg";
		typicalCargo[] = {"NLD_Police_F","NLD_Police_F"};
		vehicleClass = "Air";
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\police\ec635\OuterHaul_co.paa","\NLD_Vehicle_Units\Air\Data\police\ec635\UpperParts_co.paa","\NLD_Vehicle_Units\Air\Data\police\ec635\Tail_co.paa","\NLD_Vehicle_Units\Air\Data\police\ec635\Bawl_co.paa","\NLD_Vehicle_Units\Air\Data\police\ec635\SideDoors_co.paa","\NLD_Vehicle_Units\Air\Data\police\ec635\CargoDoors_co.paa"};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class EC635_NLD_Lifeliner: EC635_Unarmed
	{
		author = "Lowlands Tactical";
		displayName = "EC135 (Lifeliner 2)";
		scope = 2;
		side = 3;
		faction = "NLD_Units";
		crew = "NLD_Lifeliner_F";
		editorPreview = "\NLD_vehicle_units\previews\EC635_NLD_Lifeliner.jpg";
		typicalCargo[] = {"NLD_Lifeliner_F","NLD_Lifeliner_F"};
		vehicleClass = "Air";
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\lifeliner\ec635\OuterHaul_co.paa","\NLD_Vehicle_Units\Air\Data\lifeliner\ec635\UpperParts_co.paa","\NLD_Vehicle_Units\Air\Data\lifeliner\ec635\Tail_co.paa","\NLD_Vehicle_Units\Air\Data\lifeliner\ec635\Bawl_co.paa","\NLD_Vehicle_Units\Air\Data\lifeliner\ec635\SideDoors_co.paa","\NLD_Vehicle_Units\Air\Data\lifeliner\ec635\CargoDoors_co.paa"};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_MediKit
			{
				name = "MediKit";
				count = 2;
			};
		};
		class TransportMagazines{};
		class TransportWeapons{};
	};

	class NLD_AH64D : CUP_B_AH64_DL_USA
	{
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "AH64D";
		side = 1;
		crew = "NLD_HeliPilot";
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_AH64D.jpg";
		vehicleClass = Air;
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\Apache\Data\ah64d_body_co.paa","\NLD_Vehicle_Units\Air\Data\Apache\Data\ah64d_adds_co.paa","\NLD_Vehicle_Units\Air\Data\Apache\Data\ah64d_alfa_ca.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
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
				count=5;
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
		};
	};
	
	class NLD_AH64E : CUP_B_AH64D_DL_USA
	{
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "AH64E Guardian";
		side = 1;
		crew = "NLD_HeliPilot";
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_AH64E.jpg";
		vehicleClass = Air;
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\Apache\Data\ah64d_body_co.paa","\NLD_Vehicle_Units\Air\Data\Apache\Data\ah64d_adds_co.paa","\NLD_Vehicle_Units\Air\Data\Apache\Data\ah64d_alfa_ca.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
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
				count=5;
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
		};
	};
	
	class NLD_MQ9 : CUP_B_USMC_DYN_MQ9
	{
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "MQ9 Reaper";
		side = 1;
		crew = "B_UAV_AI";
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_MQ9.jpg";
		vehicleclass﻿ = "Autonomous";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\MQ9\Data\mq9reaper.paa"};
	};
	
	class NLD_Cougar : CUP_B_SA330_Puma_HC2_BAF
	{
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Cougar MK.II";
		side = 1;
		crew = "NLD_HeliPilot";
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_Cougar.jpg";
		vehicleClass = Air;
		hiddenSelections[] = {"_OFrP_330_skin01"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\Cougar\Data\Cougar_body.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
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
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
		};
	};
	
	class NLD_Cougar_WDL : CUP_B_SA330_Puma_HC2_BAF
	{
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Cougar MK.II (WDL)";
		side = 1;
		crew = "NLD_HeliPilot";
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_Cougar_WDL.jpg";
		vehicleClass = Air;
		hiddenSelections[] = {"_OFrP_330_skin01"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\Cougar\Data\Cougar_wdl_body.paa"};
	};	
	
	class NLD_C130H : CUP_B_C130J_USMC
	{
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "C-130H Hercules";
		side = 1;
		crew = "NLD_HeliPilot";
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_C130H.jpg";
		vehicleClass = Air;
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\C130\Data\c130j_body_co.paa", "\NLD_Vehicle_Units\Air\Data\C130\Data\c130j_wings_co.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
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
				count=5;
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
		};
	};
	
	class NLD_C130H_VIV : CUP_B_C130J_Cargo_USMC
	{
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "C-130H Hercules (viv)";
		side = 1;
		crew = "NLD_HeliPilot";
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_C130H_VIV.jpg";
		vehicleClass = Air;
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\C130\Data\c130j_body_co.paa", "\NLD_Vehicle_Units\Air\Data\C130\Data\c130j_wings_co.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
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
				count=5;
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
		};
	};
	
	class NLD_F35 : CUP_B_F35B_USMC
	{
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "F35";
		side = 1;
		crew = "B_Pilot_F";
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_F35.jpg";
		vehicleClass = Air;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\F35\Data\F35.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
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
				count=5;
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
		};
	};

	class NLD_F35_Stealth : CUP_B_F35B_Stealth_USMC
	{
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "F35 (Stealth)";
		side = 1;
		crew = "B_Pilot_F";
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_F35_Stealth.jpg";
		vehicleClass = Air;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\F35\Data\F35.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
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
				count=5;
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
		};
	};
	
	class NLD_Lynx_Armed : I_Heli_light_03_F
	{
		author = "Lowlands Tactical";
		scope = 1;
		_generalMacro = "I_Heli_light_03_F";
		displayName = "SH-14D Lynx (Armed)";
		side = 1;
		crew = "NLD_HeliPilot";
		faction = "NLD_Units";
		vehicleClass = Air;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\Lynx.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};

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
				count=5;
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
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=5;
			};
			class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249
			{
				magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
				count=5;
			};
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=15;
			};
			class _xx_CUP_5Rnd_86x70_L115A1
			{
				magazine="CUP_5Rnd_86x70_L115A1";
				count=15;
			};
			class _xx_CUP_M136_M
			{
				magazine="CUP_M136_M";
				count=5;
			};
		};
		class TransportWeapons {};
	};

	class NLD_Lynx : CUP_B_AW159_Unarmed_GB
	{
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "SH-14D SeaLynx";
		side = 1;
		crew = "NLD_HeliPilot";
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_Lynx.jpg";
		vehicleClass = Air;
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\Lynx.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};

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
				count=5;
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
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=5;
			};
			class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch
			{
				magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";
				count=5;
			};
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=15;
			};
			class _xx_CUP_5Rnd_86x70_L115A1
			{
				magazine="CUP_5Rnd_86x70_L115A1";
				count=15;
			};
		};
		class TransportWeapons {};
	};

	class NLD_Lynx_Hellfire : CUP_B_AW159_Hellfire_GB
	{
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "SH-14D SeaLynx (armed)";
		side = 1;
		crew = "NLD_HeliPilot";
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_Lynx_Hellfire.jpg";
		vehicleClass = Air;
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\Lynx.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};

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
				count=5;
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
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=5;
			};
			class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch
			{
				magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";
				count=5;
			};
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=15;
			};
			class _xx_CUP_5Rnd_86x70_L115A1
			{
				magazine="CUP_5Rnd_86x70_L115A1";
				count=15;
			};
		};
		class TransportWeapons {};
	};

	class NLD_Lynx_Cannon : CUP_B_AW159_Hellfire_GB
	{
		author = "Lowlands Tactical";
		scope = 1;
		displayName = "SH-14D SeaLynx (Cannon)";
		side = 1;
		crew = "NLD_HeliPilot";
		faction = "NLD_Units";
		vehicleClass = Air;
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\Lynx.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};

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
				count=5;
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
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=5;
			};
			class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249
			{
				magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
				count=5;
			};
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=15;
			};
			class _xx_CUP_5Rnd_86x70_L115A1
			{
				magazine="CUP_5Rnd_86x70_L115A1";
				count=15;
			};
			class _xx_CUP_M136_M
			{
				magazine="CUP_M136_M";
				count=5;
			};
		};
		class TransportWeapons {};
	};

	class NLD_NH90: NH90
	{
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "NH90Marine";
		displayName = "NH-90";
		side = 1;
		editorPreview = "\NLD_vehicle_units\previews\NLD_NH90.jpg";
		crew = "NLD_HeliPilot";
		faction = "NLD_Units";
		vehicleClass = Air;
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {{0.6,-4,-0.25},{-0.6,-4,-0.25}};
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\NH90\outerhaul_co.paa","\NLD_Vehicle_Units\Air\Data\NH90\upperTail_co.paa","\NLD_Vehicle_Units\Air\Data\NH90\misc_co.paa","\NLD_Vehicle_Units\Air\Data\NH90\doors_co.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};

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
				count=5;
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
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=5;
			};
			class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch
			{
				magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";
				count=5;
			};
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=15;
			};
			class _xx_CUP_5Rnd_86x70_L115A1
			{
				magazine="CUP_5Rnd_86x70_L115A1";
				count=15;
			};
		};
		class TransportWeapons {};
	};
	
	class NLD_NH90_armed: NH90Armed_GR2
	{
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "NH90Marine (armed)";
		displayName = "NH-90 (armed)";
		side = 1;
		editorPreview = "\NLD_vehicle_units\previews\NLD_NH90_armed.jpg";
		crew = "NLD_HeliPilot";
		typicalCargo[]={"NLD_Helicrew","NLD_Helicrew"};
		faction = "NLD_Units";
		vehicleClass = Air;
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {{0.6,-4,-0.25},{-0.6,-4,-0.25}};
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\NH90\outerhaul_co.paa","\NLD_Vehicle_Units\Air\Data\NH90\upperTail_co.paa","\NLD_Vehicle_Units\Air\Data\NH90\misc_co.paa","\NLD_Vehicle_Units\Air\Data\NH90\doors_co.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};

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
				count=5;
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
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=5;
			};
			class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch
			{
				magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";
				count=5;
			};
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=15;
			};
			class _xx_CUP_5Rnd_86x70_L115A1
			{
				magazine="CUP_5Rnd_86x70_L115A1";
				count=15;
			};
		};
		class TransportWeapons {};
	};

	class NLD_CH47D_Armed: CUP_B_CH47F_USA
	{
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "CH-47D (Armed)";
		side = 1;
		crew = "NLD_HeliPilot";
		typicalCargo[]={"NLD_Helicrew","NLD_Helicrew"};
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_CH47D_Armed.jpg";
		vehicleClass = Air;
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47D\Data\CH-47D_body_co.paa","\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47D\Data\CH-47D_body2_co.paa","\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47D\Data\ch47d_nalepky_ca.paa"};
		class eventHandlers { init="(_this select 0) execVM '\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47D\Data\randomize.sqf'"; };

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};

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
				count=5;
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
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=5;
			};
			class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch
			{
				magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";
				count=5;
			};
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=15;
			};
			class _xx_CUP_5Rnd_86x70_L115A1
			{
				magazine="CUP_5Rnd_86x70_L115A1";
				count=15;
			};
		};
		class TransportWeapons {};
	};

	class NLD_CH47F_Armed: CUP_B_CH47F_USA
	{
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "CH-47F (Armed)";
		side = 1;
		crew = "NLD_HeliPilot";
		typicalCargo[]={"NLD_Helicrew","NLD_Helicrew"};
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_CH47F_Armed.jpg";
		vehicleClass = Air;
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47F\Data\CH-47F_body_co.paa","\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47F\Data\CH-47F_body2_co.paa","\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47F\Data\ch47f_nalepky_ca.paa"};
		class eventHandlers { init="(_this select 0) execVM '\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47F\Data\randomize.sqf'"; };

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};

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
				count=5;
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
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=5;
			};
			class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch
			{
				magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";
				count=5;
			};
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=15;
			};
			class _xx_CUP_5Rnd_86x70_L115A1
			{
				magazine="CUP_5Rnd_86x70_L115A1";
				count=15;
			};
		};
		class TransportWeapons {};
	};
	
	class NLD_CH47D_VIV: CUP_CH47F_VIV_Base
	{
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "CH-47D (ViV)";
		side = 1;
		crew = "NLD_HeliPilot";
		typicalCargo[]={"NLD_Helicrew","NLD_Helicrew"};
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_CH47D_VIV.jpg";
		vehicleClass = Air;
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47D\Data\CH-47D_body_co.paa","\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47D\Data\CH-47D_body2_co.paa","\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47D\Data\ch47d_nalepky_ca.paa"};
		class eventHandlers { init="(_this select 0) execVM '\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47D\Data\randomize.sqf'"; };

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};

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
				count=5;
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
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=5;
			};
			class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch
			{
				magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";
				count=5;
			};
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=15;
			};
			class _xx_CUP_5Rnd_86x70_L115A1
			{
				magazine="CUP_5Rnd_86x70_L115A1";
				count=15;
			};
		};
		class TransportWeapons {};
	};

	class NLD_CH47F_ViV: CUP_CH47F_VIV_Base
	{
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "CH-47F (ViV)";
		side = 1;
		crew = "NLD_HeliPilot";
		typicalCargo[]={"NLD_Helicrew","NLD_Helicrew"};
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_CH47F_ViV.jpg";
		vehicleClass = Air;
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47F\Data\CH-47F_body_co.paa","\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47F\Data\CH-47F_body2_co.paa","\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47F\Data\ch47f_nalepky_ca.paa"};
		class eventHandlers { init="(_this select 0) execVM '\NLD_Vehicle_Units\Air\Data\CH47_Chinook\CH-47F\Data\randomize.sqf'"; };

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};

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
				count=5;
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
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=5;
			};
			class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch
			{
				magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";
				count=5;
			};
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=15;
			};
			class _xx_CUP_5Rnd_86x70_L115A1
			{
				magazine="CUP_5Rnd_86x70_L115A1";
				count=15;
			};
		};
		class TransportWeapons {};
	};

	class NLD_CH47_Armed: B_Heli_Transport_03_F
	{
		crew = "NLD_HeliPilot";
		scope=1;
		scopeCurator = 0;
		displayName = "CH-47K (Armed)";
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\CH47K Chinook\Green\Chinookgreen.paa","\NLD_Vehicle_Units\Air\Data\CH47K Chinook\Green\Chinookgreen1.paa"};
		faction = "NLD_Units";
		vehicleClass = Air;
		textureList[] = {"NLD_CH47_Green", 1};
		class textureSources
		{
			class NLD_CH47_Green
			{
				displayName = "Grey, Green";
				author = Lowlands Tactical;
				textures[] =
				{
					"\NLD_Vehicle_Units\Air\Data\CH47K Chinook\Green\Chinookgreen.paa",
					"\NLD_Vehicle_Units\Air\Data\CH47K Chinook\Green\Chinookgreen1.paa"
				};
				materials[] = {};
				factions[] =
				{
					"BLU_F"
				};
			};
		};
	};

	class NLD_CH47_Unarmed: B_Heli_Transport_03_unarmed_F
	{
		crew = "NLD_HeliPilot";
		scope=1;
		scopeCurator = 0;
		displayName = "CH-47K (Unarmed)";
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\CH47K Chinook\Grey\Chinookgrey.paa","\NLD_Vehicle_Units\Air\Data\CH47K Chinook\Grey\Chinookgrey1.paa"};
		faction = "NLD_Units";
		vehicleClass = Air;
		textureList[] = {"NLD_CH47_Grey", 1};
		class textureSources
		{
			class NLD_CH47_Green
			{
				displayName = "Grey, Grey";
				author = Lowlands Tactical;
				textures[] =
				{
					"\NLD_Vehicle_Units\Air\Data\CH47K Chinook\Grey\Chinookgrey.paa",
					"\NLD_Vehicle_Units\Air\Data\CH47K Chinook\Green\Chinookgrey1.paa"
				};
				materials[] = {};
				factions[] =
				{
					"BLU_F"
				};
			};
		};
	};
};

class CfgPatches {
	class NLD_Units_Air {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR","A3_Modules_F", "A3_Modules_F_Curator"};
	};
};

class WeaponFireGun ;
class WeaponCloudsGun ;
class WeaponFireMGun ;
class WeaponCloudsMGun ;
class RCWSOptics;

class CfgVehicles 
{
	class I_Heli_light_03_F;
	class I_Heli_light_03_unarmed_F;
	class Heli_Transport_02_base_F;
	class NH90;
	class EC635_Unarmed;
	class C_man_pilot_F;
	class B_Heli_Transport_03_F;
	class B_Heli_Transport_03_unarmed_F;
	class DEGA_US_CH47F_M134_M240;
	class DEGA_Wildcat_Unarmed_Digital_AAF;
	class DEGA_Wildcat_Hellfire_Armed_Digital_AAF;
	class DEGA_Wildcat_Cannon_Armed_Digital_AAF;
	class DEGA_Apache_AH64D_Block_II_USA;

	class EC635_NLD_Police: EC635_Unarmed
	{
		author = "Lowlands Tactical";
		displayName = "EC135 (Police)";
		scope = 2;
		side = 3;
		faction = "NLD_Units";
		crew = "NLD_Police_F";
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
	
	class NLD_AH64D : DEGA_Apache_AH64D_Block_II_USA
	{
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "AH64D";
		side = 1;
		crew = "NLD_HeliPilot";
		faction = "NLD_Units";
		vehicleClass = Air;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\Apache\Data\ah64d_body_co.paa","\NLD_Vehicle_Units\Air\Data\Apache\Data\ah64d_details_co.paa"};
		
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
		class TransportWeapons {};
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
			class _xx_NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=5;
			};
			class _xx_CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249
			{
				magazine="CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249";
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
	
	class NLD_Lynx : DEGA_Wildcat_Unarmed_Digital_AAF
	{
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "SH-14D SeaLynx";
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
			class _xx_NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=5;
			};
			class _xx_CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249
			{
				magazine="CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249";
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
	
	class NLD_Lynx_Hellfire : DEGA_Wildcat_Hellfire_Armed_Digital_AAF
	{
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "SH-14D SeaLynx (Hellfire)";
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
			class _xx_NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=5;
			};
			class _xx_CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249
			{
				magazine="CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249";
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
	
	class NLD_Lynx_Cannon : DEGA_Wildcat_Cannon_Armed_Digital_AAF
	{
		author = "Lowlands Tactical";
		scope = 2;
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
			class _xx_NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=5;
			};
			class _xx_CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249
			{
				magazine="CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249";
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
		author = "Aplion";
		scope = 2;
		_generalMacro = "NH90Marine";
		displayName = "NH-90";
		side = 1;
		crew = "NLD_HeliPilot";
		faction = "NLD_Units";
		vehicleClass = Air;
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
			class _xx_NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=5;
			};
			class _xx_CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249
			{
				magazine="CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249";
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
	
	class NLD_CH47D_Armed: DEGA_US_CH47F_M134_M240
	{
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "CH-47D (Armed)";
		side = 1;
		crew = "NLD_HeliPilot";
		typicalCargo[]={"NLD_Helicrew","NLD_Helicrew"};
		faction = "NLD_Units";
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
			class _xx_NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=5;
			};
			class _xx_CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249
			{
				magazine="CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249";
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
	
	class NLD_CH47F_Armed: DEGA_US_CH47F_M134_M240
	{
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "CH-47F (Armed)";
		side = 1;
		crew = "NLD_HeliPilot";
		typicalCargo[]={"NLD_Helicrew","NLD_Helicrew"};
		faction = "NLD_Units";
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
			class _xx_NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=5;
			};
			class _xx_CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249
			{
				magazine="CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249";
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

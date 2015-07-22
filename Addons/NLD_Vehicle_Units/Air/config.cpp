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
	class LLW_Apache_RNLAF;
	class NH90;
	class EC635_Unarmed;
	class C_man_pilot_F;
	
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
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\police\ec635\OuterHaul_co.paa","Dutch_Aviation_Emergency_Services\data\police\ec635\UpperParts_co.paa","Dutch_Aviation_Emergency_Services\data\police\ec635\Tail_co.paa","Dutch_Aviation_Emergency_Services\data\police\ec635\Bawl_co.paa","Dutch_Aviation_Emergency_Services\data\police\ec635\SideDoors_co.paa","Dutch_Aviation_Emergency_Services\data\police\ec635\CargoDoors_co.paa"};
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
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\lifeliner\ec635\OuterHaul_co.paa","Dutch_Aviation_Emergency_Services\data\lifeliner\ec635\UpperParts_co.paa","Dutch_Aviation_Emergency_Services\data\lifeliner\ec635\Tail_co.paa","Dutch_Aviation_Emergency_Services\data\lifeliner\ec635\Bawl_co.paa","Dutch_Aviation_Emergency_Services\data\lifeliner\ec635\SideDoors_co.paa","Dutch_Aviation_Emergency_Services\data\lifeliner\ec635\CargoDoors_co.paa"};
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

	class NLD_AH64D: LLW_Apache_RNLAF
	{
		author = "Lowlands Warrior";
		scope = 2;
		_generalMacro = "LLW_Apache_RNLAF";
		side = 1;
		crew = "NLD_HeliPilot";
		faction = "NLD_Units";
		vehicleClass = Air;
	};

	class NLD_Lynx : I_Heli_light_03_unarmed_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "I_Heli_light_03_unarmed_F";
		displayName = "Lynx";
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
				count=25;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=10;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};
	
	class NLD_MH65_Armed : I_Heli_light_03_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "I_Heli_light_03_F";
		displayName = "Lynx (Armed)";
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
				count=25;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=10;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
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
	};

	/*
    class NLD_NH90 : Heli_Transport_02_base_F
    {
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "Heli_Transport_02_base_F";
		displayName = "NH-90";
		side = 1;
		crew = "NLD_HeliPilot";
		faction = "NLD_Units";
		vehicleClass = Air;
	    hiddenSelections[]= {"camo1","camo2","camo3"};
	    hiddenSelectionsTextures[]= {"\NLD_Vehicle_Units\Air\Data\NH90_1.paa","\NLD_Vehicle_Units\Air\Data\NH90_2.paa","\NLD_Vehicle_Units\Air\Data\NH90_3.paa"};
		
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
				count=25;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=10;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};

	class NLD_MH65 : O_Heli_Light_02_unarmed_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "O_Heli_Light_02_unarmed_F";
		displayName = "MH-65";
		side = 1;
		crew = "NLD_HeliPilot";
		faction = "NLD_Units";
		vehicleClass = Air;
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\MH65.paa"};
		AGM_FastRoping = 1;
		AGM_FastRoping_Positions[] = {{1.4, 1.4, 0.05}, {-1.4, 1.4, 0.05}};
		
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
				count=25;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=10;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};
	
	class NLD_MH65_Armed : O_Heli_Light_02_F
	{
		author = "Lowlands Tactical";
		scope = 2;
		_generalMacro = "O_Heli_Light_02_F";
		displayName = "MH-65 (Armed)";
		side = 1;
		crew = "NLD_HeliPilot";
		faction = "NLD_Units";
		vehicleClass = Air;
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\MH65.paa"};
		AGM_FastRoping = 1;
		AGM_FastRoping_Positions[] = {{1.4, 1.4, 0.05}, {-1.4, 1.4, 0.05}};
		
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
				count=25;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=10;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};
	*/
	
};

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
	class NLD_cars
	{
		displayName="Cars";
	};

};

class CfgVehicles {
	class MRAP_03_base_F;	// External class reference
	
	class Fennek_Desert : MRAP_03_base_F {
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Fennek (Desert)";
		side = 1;
		vehicleClass = "NLD_cars";
		faction = NLD_Units;
		crew = "NLD_DST_GL";
		typicalCargo[] = {"NLD_DST_GL"};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\A3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa", "\a3\data_f\vehicles\turret_co.paa"};
		
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
				count=100;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=100;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=100;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=50;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=100;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=100;
			};
		};
		class TransportWeapons {};
	};
	class MRAP_03_hmg_base_F;	// External class reference
	
	class Fennek_Desert_HMG : MRAP_03_hmg_base_F {
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Fennek HMG (Desert)";
		side = 1;
		vehicleClass = "NLD_cars";
		faction = NLD_Units;
		crew = "NLD_DST_GL";
		typicalCargo[] = {"NLD_DST_GL"};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\A3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa", "\a3\data_f\vehicles\turret_co.paa"};
		
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
				count=100;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=100;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=100;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=50;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=100;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=100;
			};
		};
		
		class TransportWeapons {};
	};
	class MRAP_03_gmg_base_F;	// External class reference
	
	class Fennek_Desert_GMG : MRAP_03_gmg_base_F {
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Fennek GMG (Desert)";
		side = 1;
		vehicleClass = "NLD_cars";
		faction = NLD_Units;
		crew = "NLD_DST_GL";
		typicalCargo[] = {"NLD_DST_GL"};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\A3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa", "\a3\data_f\vehicles\turret_co.paa"};
		
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
				count=100;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=100;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=100;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=50;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=100;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=100;
			};
		};
		class TransportWeapons {};
	};
};

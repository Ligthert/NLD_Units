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

class CfgVehicles {
	class MRAP_03_base_F;		// External class reference
	class MRAP_03_hmg_base_F;	// External class reference
	class MRAP_03_gmg_base_F;	// External class reference
	
// Fennek - Desert
	class NLD_Fennek_DST : MRAP_03_base_F {
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Fennek (Desert)";
		side = 1;
		vehicleClass = Car;
		faction = NLD_Units;
		crew = "NLD_DST_GL";
		typicalCargo[] = {"NLD_DST_GL"};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\NLD Vehicle Units\Wheeled\Fennek\desert\Fennek.paa", "\NLD Vehicle Units\Wheeled\Fennek\desert\Turret.paa"};
		
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
				count=50;
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
		};
		class TransportWeapons {};
	};

	
	class NLD_Fennek_DST_HMG : MRAP_03_hmg_base_F {
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Fennek HMG (Desert)";
		side = 1;
		vehicleClass = Car;
		faction = NLD_Units;
		crew = "NLD_DST_GL";
		typicalCargo[] = {"NLD_DST_GL"};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\NLD Vehicle Units\Wheeled\Fennek\desert\Fennek.paa", "\NLD Vehicle Units\Wheeled\Fennek\desert\Turret.paa"};
		
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
				count=50;
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
		};
		
		class TransportWeapons {};
	};
	
	
	class NLD_Fennek_DST_GMG : MRAP_03_gmg_base_F {
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Fennek GMG (Desert)";
		side = 1;
		vehicleClass = Car;
		faction = NLD_Units;
		crew = "NLD_DST_GL";
		typicalCargo[] = {"NLD_DST_GL"};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\NLD Vehicle Units\Wheeled\Fennek\desert\Fennek.paa", "\NLD Vehicle Units\Wheeled\Fennek\desert\Turret.paa"};
		
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
				count=50;
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
		};
		class TransportWeapons {};
	};


// Fennek - Woodland

	class NLD_Fennek_WLD : NLD_Fennek_DST {
		displayName = "Fennek (Woodland)";
		crew = "NLD_WLD_GL";
		typicalCargo[] = {"NLD_WLD_GL"};
		hiddenSelectionsTextures[] = {"\NLD Vehicle Units\Wheeled\Fennek\woodland\Fennek.paa", "\NLD Vehicle Units\Wheeled\Fennek\woodland\Turret.paa"};
	};

	class NLD_Fennek_WLD_HMG : NLD_Fennek_DST_HMG {
		displayName = "Fennek HMG (Woodland)";
		crew = "NLD_WLD_GL";
		typicalCargo[] = {"NLD_WLD_GL"};
		hiddenSelectionsTextures[] = {"\NLD Vehicle Units\Wheeled\Fennek\woodland\Fennek.paa", "\NLD Vehicle Units\Wheeled\Fennek\woodland\Turret.paa"};
	};

	class NLD_Fennek_WLD_GMG : NLD_Fennek_DST_GMG {
		displayName = "Fennek GMG (Woodland)";
		crew = "NLD_WLD_GL";
		typicalCargo[] = {"NLD_WLD_GL"};
		hiddenSelectionsTextures[] = {"\NLD Vehicle Units\Wheeled\Fennek\woodland\Fennek.paa", "\NLD Vehicle Units\Wheeled\Fennek\woodland\Turret.paa"};
	};


// Fennek - Winter
	class NLD_Fennek_WTR : NLD_Fennek_DST {
		displayName = "Fennek (Winter)";
		crew = "NLD_WTR_GL";
		typicalCargo[] = {"NLD_WTR_GL"};
		hiddenSelectionsTextures[] = {"\NLD Vehicle Units\Wheeled\Fennek\winter\Fennek.paa", "\NLD Vehicle Units\Wheeled\Fennek\winter\Turret.paa"};
	};

	class NLD_Fennek_WTR_HMG : NLD_Fennek_DST_HMG {
		displayName = "Fennek HMG (Winter)";
		crew = "NLD_WTR_GL";
		typicalCargo[] = {"NLD_WTR_GL"};
		hiddenSelectionsTextures[] = {"\NLD Vehicle Units\Wheeled\Fennek\winter\Fennek.paa", "\NLD Vehicle Units\Wheeled\Fennek\winter\Turret.paa"};
	};

	class NLD_Fennek_WTR_GMG : NLD_Fennek_DST_GMG {
		displayName = "Fennek GMG (Winter)";
		crew = "NLD_WTR_GL";
		typicalCargo[] = {"NLD_WTR_GL"};
		hiddenSelectionsTextures[] = {"\NLD Vehicle Units\Wheeled\Fennek\winter\Fennek.paa", "\NLD Vehicle Units\Wheeled\Fennek\winter\Turret.paa"};
	};

};

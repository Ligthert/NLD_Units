class CfgPatches {
	class NLD_Units_Wheeled {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
	};
};

class CfgVehicles {
	class MRAP_03_base_F;		// External class reference
	class MRAP_03_hmg_base_F;	// External class reference
	class MRAP_03_gmg_base_F;	// External class reference
	class I_Truck_02_transport_F;
	class I_Truck_02_covered_F;
	class I_Truck_02_fuel_F;
	class I_Truck_02_box_F;
	class I_Truck_02_medical_F;
	class I_Truck_02_ammo_F;

	
// Fennek - Desert
	class NLD_DST_Fennek : MRAP_03_base_F {
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Fennek (Desert)";
		side = 1;
		vehicleClass = Car;
		faction = NLD_Units;
		crew = "NLD_DST_GL";
		typicalCargo[] = {"NLD_DST_GL"};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Fennek\desert\Recon\fennek.paa", "\NLD_Vehicle_Units\Wheeled\Fennek\desert\Recon\turret.paa"};
		
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

	
	class NLD_DST_Fennek_HMG : MRAP_03_hmg_base_F {
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Fennek HMG (Desert)";
		side = 1;
		vehicleClass = Car;
		faction = NLD_Units;
		crew = "NLD_DST_GL";
		typicalCargo[] = {"NLD_DST_GL"};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Fennek\desert\HMG\fennek.paa", "\NLD_Vehicle_Units\Wheeled\Fennek\desert\HMG\turret.paa"};
		
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
	
	
	class NLD_DST_Fennek_GMG : MRAP_03_gmg_base_F {
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Fennek GMG (Desert)";
		side = 1;
		vehicleClass = Car;
		faction = NLD_Units;
		crew = "NLD_DST_GL";
		typicalCargo[] = {"NLD_DST_GL"};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Fennek\desert\GMG\fennek.paa", "\NLD_Vehicle_Units\Wheeled\Fennek\desert\GMG\turret.paa"};
		
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


// Fennek - Woodland

	class NLD_WLD_Fennek : NLD_DST_Fennek {
		displayName = "Fennek (Woodland)";
		crew = "NLD_WLD_GL";
		typicalCargo[] = {"NLD_WLD_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Fennek\woodland\Recon\Fennek.paa", "\NLD_Vehicle_Units\Wheeled\Fennek\woodland\Recon\turret.paa"};
	};

	class NLD_WLD_Fennek_HMG : NLD_DST_Fennek_HMG {
		displayName = "Fennek HMG (Woodland)";
		crew = "NLD_WLD_GL";
		typicalCargo[] = {"NLD_WLD_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Fennek\woodland\HMG\Fennek.paa", "\NLD_Vehicle_Units\Wheeled\Fennek\woodland\HMG\turret.paa"};
	};

	class NLD_WLD_Fennek_GMG : NLD_DST_Fennek_GMG {
		displayName = "Fennek GMG (Woodland)";
		crew = "NLD_WLD_GL";
		typicalCargo[] = {"NLD_WLD_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Fennek\woodland\GMG\Fennek.paa", "\NLD_Vehicle_Units\Wheeled\Fennek\woodland\GMG\turret.paa"};
	};


// Fennek - Winter
	class NLD_WTR_Fennek : NLD_DST_Fennek {
		displayName = "Fennek (Winter)";
		crew = "NLD_WTR_GL";
		typicalCargo[] = {"NLD_WTR_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Fennek\winter\Fennek.paa", "\NLD_Vehicle_Units\Wheeled\Fennek\winter\turret.paa"};
	};

	class NLD_WTR_Fennek_HMG : NLD_DST_Fennek_HMG {
		displayName = "Fennek HMG (Winter)";
		crew = "NLD_WTR_GL";
		typicalCargo[] = {"NLD_WTR_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Fennek\winter\Fennek.paa", "\NLD_Vehicle_Units\Wheeled\Fennek\winter\turret.paa"};
	};

	class NLD_WTR_Fennek_GMG : NLD_DST_Fennek_GMG {
		displayName = "Fennek GMG (Winter)";
		crew = "NLD_WTR_GL";
		typicalCargo[] = {"NLD_WTR_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Fennek\winter\Fennek.paa", "\NLD_Vehicle_Units\Wheeled\Fennek\winter\turret.paa"};
	};

	class NLD_DAF_Transport: I_Truck_02_transport_F
	{
		author="Lowlands Tactical";
		displayName="DAF 4442 (Transport)";
		side=1;
		scope=2;
		faction="NLD_Units";
		crew="NLD_WLD_GL";
		typicalCargo[] = {"NLD_WLD_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Daf 4442\Data\daf4442front.paa","\NLD_Vehicle_Units\Wheeled\Daf 4442\Data\daf4442covered.paa"};
		
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

	class NLD_DAF_Transport_Covered: I_Truck_02_covered_F
	{
		author="Lowlands Tactical";
		displayName="DAF 4442 (Covered)";
		side=1;
		scope=2;
		faction="NLD_Units";
		crew="NLD_WLD_GL";
		typicalCargo[] = {"NLD_WLD_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Daf 4442\Data\daf4442front.paa","\NLD_Vehicle_Units\Wheeled\Daf 4442\Data\daf4442covered.paa"};
		
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

	class NLD_DAF_Transport_Fuel: I_Truck_02_fuel_F
	{
		author="Lowlands Tactical";
		displayName="DAF 4442 (Fuel)";
		side=1;
		scope=2;
		faction="NLD_Units";
		crew="NLD_WLD_GL";
		typicalCargo[] = {"NLD_WLD_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Daf 4442\Data\daf4442front.paa","\NLD_Vehicle_Units\Wheeled\Daf 4442\Data\daf4442fuel.paa"};
		
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

	class NLD_DAF_Transport_repair: I_Truck_02_box_F
	{
		author="Lowlands Tactical";
		displayName="DAF 4442 (repair)";
		side=1;
		scope=2;
		faction="NLD_Units";
		crew="NLD_WLD_GL";
		typicalCargo[] = {"NLD_WLD_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Daf 4442\Data\daf4442front.paa","\NLD_Vehicle_Units\Wheeled\Daf 4442\Data\daf4442repair.paa"};
		
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

	class NLD_DAF_Transport_ammo: I_Truck_02_ammo_F
	{
		author="Lowlands Tactical";
		displayName="DAF 4442 (Ammo)";
		side=1;
		scope=2;
		faction="NLD_Units";
		crew="NLD_WLD_GL";
		typicalCargo[] = {"NLD_WLD_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Daf 4442\Data\daf4442front.paa","\NLD_Vehicle_Units\Wheeled\Daf 4442\Data\daf4442repair.paa"};
		
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

	class NLD_DAF_Transport_medical: I_Truck_02_medical_F
	{
		author="Lowlands Tactical";
		displayName="DAF 4442 (Medical)";
		side=1;
		scope=2;
		faction="NLD_Units";
		crew="NLD_WLD_CLS";
		typicalCargo[] = {"NLD_WLD_CLS"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Daf 4442\Data\daf4442front.paa","\NLD_Vehicle_Units\Wheeled\Daf 4442\Data\daf4442covered.paa"};
		
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
};

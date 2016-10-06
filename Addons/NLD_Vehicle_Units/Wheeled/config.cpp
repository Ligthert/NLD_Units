class CfgPatches {
	class NLD_Units_Wheeled {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"NLD_Units_Infantry","NLD_Units_Insignia"};
	};
};

class CfgVehicles {
	class MRAP_03_base_F;
	class MRAP_03_hmg_base_F;
	class MRAP_03_gmg_base_F;
	class I_Truck_02_transport_F;
	class I_Truck_02_covered_F;
	class I_Truck_02_fuel_F;
	class I_Truck_02_box_F;
	class I_Truck_02_medical_F;
	class I_Truck_02_ammo_F;
	class B_LSV_01_armed_olive_F;
	class B_LSV_01_armed_sand_F;
	class B_LSV_01_unarmed_olive_F;
	class B_LSV_01_unarmed_sand_F;


// Fennek - Desert
	class NLD_DST_Fennek : MRAP_03_base_F {
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Fennek (Desert)";
		side = 1;
		vehicleClass = Car;
		faction = "NLD_Units_DST";
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


	class NLD_DST_Fennek_HMG : MRAP_03_hmg_base_F {
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Fennek HMG (Desert)";
		side = 1;
		vehicleClass = Car;
		faction = "NLD_Units_DST";
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


	class NLD_DST_Fennek_GMG : MRAP_03_gmg_base_F {
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Fennek GMG (Desert)";
		side = 1;
		vehicleClass = Car;
		faction = "NLD_Units_DST";
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
	
		class NLD_DST_VECTOR_ARMED : B_LSV_01_armed_sand_F {
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "VECTOR armed (Desert)";
		side = 1;
		vehicleClass = Car;
		faction = "NLD_Units_NFPT";
		crew = "NLD_NFPT_GL";
		typicalCargo[] = {"NLD_NFPT_GL"};

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
		class NLD_DST_VECTOR : B_LSV_01_unarmed_sand_F {
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "VECTOR unarmed (Desert)";
		side = 1;
		vehicleClass = Car;
		faction = "NLD_Units_NFPT";
		crew = "NLD_NFPT_GL";
		typicalCargo[] = {"NLD_NFPT_GL"};

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

// Fennek - Woodland

	class NLD_WLD_Fennek : NLD_DST_Fennek {
		displayName = "Fennek (Woodland)";
		faction = "NLD_Units_WLD";
		crew = "NLD_WLD_GL";
		typicalCargo[] = {"NLD_WLD_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Fennek\woodland\Recon\Fennek.paa", "\NLD_Vehicle_Units\Wheeled\Fennek\woodland\Recon\turret.paa"};
	};

	class NLD_WLD_Fennek_HMG : NLD_DST_Fennek_HMG {
		displayName = "Fennek HMG (Woodland)";
		faction = "NLD_Units_WLD";
		crew = "NLD_WLD_GL";
		typicalCargo[] = {"NLD_WLD_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Fennek\woodland\HMG\Fennek.paa", "\NLD_Vehicle_Units\Wheeled\Fennek\woodland\HMG\turret.paa"};
	};

	class NLD_WLD_Fennek_GMG : NLD_DST_Fennek_GMG {
		displayName = "Fennek GMG (Woodland)";
		faction = "NLD_Units_WLD";
		crew = "NLD_WLD_GL";
		typicalCargo[] = {"NLD_WLD_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Fennek\woodland\GMG\Fennek.paa", "\NLD_Vehicle_Units\Wheeled\Fennek\woodland\GMG\turret.paa"};
	};
	
	class NLD_WLD_VECTOR : B_LSV_01_unarmed_olive_F {
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "VECTOR unarmed (Olive)";
		side = 1;
		vehicleClass = Car;
		faction = "NLD_Units_MTP";
		crew = "NLD_MTP_COMSPEC";
		typicalCargo[] = {"NLD_MTP_TL"};

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
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
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
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=15;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=3;
			};
		};
		class TransportWeapons {};
	};
	
	class NLD_WLD_VECTOR_ARMED : B_LSV_01_armed_olive_F {
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "VECTOR (Olive)";
		side = 1;
		vehicleClass = Car;
		faction = "NLD_Units_MTP";
		crew = "NLD_MTP_COMSPEC";
		typicalCargo[] = {"NLD_MTP_TL"};

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
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
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
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=15;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=3;
			};
		};
		class TransportWeapons {};
	};


// Fennek - Winter
	class NLD_WTR_Fennek : NLD_DST_Fennek {
		displayName = "Fennek (Winter)";
		faction = "NLD_Units_WTR";
		crew = "NLD_WTR_GL";
		typicalCargo[] = {"NLD_WTR_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Fennek\winter\Recon\Fennek.paa", "\NLD_Vehicle_Units\Wheeled\Fennek\winter\Recon\turret.paa"};
	};

	class NLD_WTR_Fennek_HMG : NLD_DST_Fennek_HMG {
		displayName = "Fennek HMG (Winter)";
		faction = "NLD_Units_WTR";
		crew = "NLD_WTR_GL";
		typicalCargo[] = {"NLD_WTR_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Fennek\winter\HMG\Fennek.paa", "\NLD_Vehicle_Units\Wheeled\Fennek\winter\HMG\turret.paa"};
	};

	class NLD_WTR_Fennek_GMG : NLD_DST_Fennek_GMG {
		displayName = "Fennek GMG (Winter)";
		faction = "NLD_Units_WTR";
		crew = "NLD_WTR_GL";
		typicalCargo[] = {"NLD_WTR_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Fennek\winter\GMG\Fennek.paa", "\NLD_Vehicle_Units\Wheeled\Fennek\winter\GMG\turret.paa"};
	};

// DAF-4442 - Woodland
	class NLD_DAF_Transport: I_Truck_02_transport_F
	{
		author="Lowlands Tactical";
		displayName="DAF 4442 (Transport)";
		side=1;
		scope=2;
		faction="NLD_Units";
		crew="NLD_WLD_GL";
		typicalCargo[] = {"NLD_WLD_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_4442\Data\daf4442_front1_co.paa","\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_4442\Data\daf4442covered.paa"};

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

	class NLD_DAF_Transport_Covered: I_Truck_02_covered_F
	{
		author="Lowlands Tactical";
		displayName="DAF 4442 (Covered)";
		side=1;
		scope=2;
		faction="NLD_Units";
		crew="NLD_WLD_GL";
		typicalCargo[] = {"NLD_WLD_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_4442\Data\daf4442_front2_co.paa","\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_4442\Data\daf4442covered.paa"};

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

	class NLD_DAF_Fuel: I_Truck_02_fuel_F
	{
		author="Lowlands Tactical";
		displayName="DAF 4442 (Fuel)";
		side=1;
		scope=2;
		faction="NLD_Units";
		crew="NLD_WLD_GL";
		typicalCargo[] = {"NLD_WLD_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_4442\Data\daf4442_front3_co.paa","\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_4442\Data\daf4442fuel.paa"};

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

	class NLD_DAF_repair: I_Truck_02_box_F
	{
		author="Lowlands Tactical";
		displayName="DAF 4442 (repair)";
		side=1;
		scope=2;
		faction="NLD_Units";
		crew="NLD_WLD_GL";
		typicalCargo[] = {"NLD_WLD_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_4442\Data\daf4442_front4_co.paa","\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_4442\Data\daf4442repair.paa"};

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

	class NLD_DAF_ammo: I_Truck_02_ammo_F
	{
		author="Lowlands Tactical";
		displayName="DAF 2300 (Ammo)";
		side=1;
		scope=2;
		faction="NLD_Units";
		crew="NLD_WLD_GL";
		typicalCargo[] = {"NLD_WLD_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_2300\Data\daf2300_front_co.paa","\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_2300\Data\daf2300ammo.paa"};

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

	class NLD_DAF_medical: I_Truck_02_medical_F
	{
		author="Lowlands Tactical";
		displayName="DAF 4442 (Medical)";
		side=1;
		scope=2;
		faction="NLD_Units";
		crew="NLD_WLD_CLS";
		typicalCargo[] = {"NLD_WLD_CLS"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_4442\Data\daf4442_front5_co.paa","\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_4442\Data\daf4442covered.paa"};

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
};

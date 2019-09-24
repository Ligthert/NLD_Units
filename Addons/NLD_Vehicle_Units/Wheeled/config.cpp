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
	class B_T_LSV_01_armed_olive_F;
	class B_LSV_01_armed_sand_F;
	class B_LSV_01_unarmed_olive_F;
	class B_LSV_01_unarmed_sand_F;
	class CUP_B_M1126_ICV_M2_Woodland;
	class CUP_B_M1126_ICV_MK19_Woodland;
	class CUP_B_M1133_MEV_Woodland;
	class I_E_Offroad_01_comms_F;


	
// Boxer GNGP M2 - Woodland

	class NLD_Boxer_m2: CUP_B_M1126_ICV_M2_Woodland
	{
		author="Lowlands Tactical";
		displayName="Boxer MRAV GNGP (M2)";
		side=1;
		scope=2;
		faction="NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_Boxer_m2.jpg";
		crew="NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Boxer\Boxer_m2\Boxer_body.paa","\NLD_Vehicle_Units\Wheeled\Boxer\Boxer_m2\Boxer_extra.paa","\NLD_Vehicle_Units\Wheeled\Boxer\Boxer_m2\Boxer_extra.paa","\NLD_Vehicle_Units\Wheeled\Boxer\Boxer_m2\Boxer_hmg.paa","\NLD_Vehicle_Units\Wheeled\Boxer\Boxer_m2\Boxer_optics.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_Toolkit {
				name = "Toolkit";
				count = 4;
			};
		};

		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_ATMine_Range_Mag
			{
				magazine="ATMine_Range_Mag";
				count=10;
			};
			class _xx_APERSMine_Range_Mag
			{
				magazine="APERSMine_Range_Mag";
				count=10;
			};
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine="APERSBoundingMine_Range_Mag";
				count=10;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine="SLAMDirectionalMine_Wire_Mag";
				count=10;
			};
			class _xx_APERSTripMine_Wire_Mag
			{
				magazine="APERSTripMine_Wire_Mag";
				count=10;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=10;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=10;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine="SatchelCharge_Remote_Mag";
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
	
// Boxer GNPG MK19 - Woodland
	class NLD_Boxer_mk19: CUP_B_M1126_ICV_MK19_Woodland
	{
		author="Lowlands Tactical";
		displayName="Boxer MRAV GNGP (MK19)";
		side=1;
		scope=2;
		faction="NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_Boxer_mk19.jpg";
		crew="NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Boxer\Boxer_mk19\Boxer_body.paa","\NLD_Vehicle_Units\Wheeled\Boxer\Boxer_mk19\Boxer_extra.paa","\NLD_Vehicle_Units\Wheeled\Boxer\Boxer_mk19\Boxer_extra.paa","\NLD_Vehicle_Units\Wheeled\Boxer\Boxer_mk19\Boxer_hmg.paa","\NLD_Vehicle_Units\Wheeled\Boxer\Boxer_mk19\Boxer_optics.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_Toolkit {
				name = "Toolkit";
				count = 4;
			};
		};

		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_ATMine_Range_Mag
			{
				magazine="ATMine_Range_Mag";
				count=10;
			};
			class _xx_APERSMine_Range_Mag
			{
				magazine="APERSMine_Range_Mag";
				count=10;
			};
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine="APERSBoundingMine_Range_Mag";
				count=10;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine="SLAMDirectionalMine_Wire_Mag";
				count=10;
			};
			class _xx_APERSTripMine_Wire_Mag
			{
				magazine="APERSTripMine_Wire_Mag";
				count=10;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=10;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=10;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine="SatchelCharge_Remote_Mag";
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
	
// Boxer AMB - Woodland
	class NLD_Boxer_amb: CUP_B_M1133_MEV_Woodland
	{
		author="Lowlands Tactical";
		displayName="Boxer MRAV Ambulance";
		side=1;
		scope=2;
		faction="NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_Boxer_amb.jpg";
		crew="NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Boxer\Boxer_med\Boxer_body.paa","\NLD_Vehicle_Units\Wheeled\Boxer\Boxer_med\Boxer_extra.paa","\NLD_Vehicle_Units\Wheeled\Boxer\Boxer_med\Boxer_medic.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 30;
			};
			class _xx_Medikit {
				name = "Medikit";
				count = 4;
			};
		};

		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=20;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=5;
			};
			
		};
		class TransportWeapons {};
	};
	
// Fennek - Desert
	class NLD_DST_Fennek : MRAP_03_base_F {
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Fennek (Desert)";
		side = 1;
		vehicleClass = Car;
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_DST_Fennek.jpg";
		crew = "NLD_NFPT_GL";
		typicalCargo[] = {"NLD_NFPT_GL"};
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
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_DST_Fennek_HMG.jpg";
		crew = "NLD_NFPT_GL";
		typicalCargo[] = {"NLD_NFPT_GL"};
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
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_DST_Fennek_GMG.jpg";
		crew = "NLD_NFPT_GL";
		typicalCargo[] = {"NLD_NFPT_GL"};
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
		scopeCurator = 2;
		displayName = "VECTOR armed (Desert)";
		side = 1;
		vehicleClass = Car;
		faction = "NLD_Units_MTP";
		editorPreview = "\NLD_vehicle_units\previews\NLD_DST_VECTOR_ARMED.jpg";
		crew = "NLD_MTP_Operator";
		typicalCargo[] = {"NLD_MTP_Operator"};

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
		scopeCurator = 2;
		displayName = "VECTOR unarmed (Desert)";
		side = 1;
		vehicleClass = Car;
		faction = "NLD_Units_MTP";
		editorPreview = "\NLD_vehicle_units\previews\NLD_DST_VECTOR.jpg";
		crew = "NLD_MTP_Operator";
		typicalCargo[] = {"NLD_MTP_Operator"};

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
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_WLD_Fennek.jpg";
		crew = "NLD_NFPG_GL";
		typicalCargo[] = {"NLD_NFPG_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Fennek\woodland\Recon\Fennek.paa", "\NLD_Vehicle_Units\Wheeled\Fennek\woodland\Recon\turret.paa"};
	};

	class NLD_WLD_Fennek_HMG : NLD_DST_Fennek_HMG {
		displayName = "Fennek HMG (Woodland)";
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_WLD_Fennek_HMG.jpg";
		crew = "NLD_NFPG_GL";
		typicalCargo[] = {"NLD_NFPG_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Fennek\woodland\HMG\Fennek.paa", "\NLD_Vehicle_Units\Wheeled\Fennek\woodland\HMG\turret.paa"};
	};

	class NLD_WLD_Fennek_GMG : NLD_DST_Fennek_GMG {
		displayName = "Fennek GMG (Woodland)";
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_WLD_Fennek_GMG.jpg";
		crew = "NLD_NFPG_GL";
		typicalCargo[] = {"NLD_NFPG_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Fennek\woodland\GMG\Fennek.paa", "\NLD_Vehicle_Units\Wheeled\Fennek\woodland\GMG\turret.paa"};
	};
	
	class NLD_Amarok : I_E_Offroad_01_comms_F {
		author = "Lowlands Tactical";
		scope = 2;
		scopeCurator = 2;
		displayName = "VW Amarok";
		side = 1;
		vehicleClass = Car;
		faction = "NLD_Units";
		crew = "NLD_WLD_rifleman";
		typicalCargo[] = {"NLD_WLD_rifleman"};
		textureList[] = 
		{
			"Green", 1,
		};

		
		animationList[] =
		{
			"hidePolice",1,
			"HideServices",1,
			"HideCover",0,
			"StartBeaconLight",0,
			"HideRoofRack",0,
			"HideLoudSpeakers",0,
			"HideAntennas",0,
			"HideBeacon",1,
			"HideSpotlight",0,
			"HideDoor3",0,
			"OpenDoor3",0,
			"HideDoor1",0,
			"HideDoor2",0,
			"HideBackpacks",1,
			"HideBumper1",1,
			"HideBumper2",1,
			"HideConstruction",0,
			"BeaconsStart",0		
		};
		
		class TransportWeapons {

			class _xx_NLD_C8 {
				weapon = "NLD_C8";
				count = 2;
			}; 
		};
	
		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
		
		class TransportMagazines
		{
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
		}; 
	};

	class NLD_WLD_VECTOR : B_LSV_01_unarmed_olive_F {
		author = "Lowlands Tactical";
		scope = 2;
		scopeCurator = 2;
		displayName = "VECTOR unarmed (Olive)";
		side = 1;
		vehicleClass = Car;
		faction = "NLD_Units_MTP";
		editorPreview = "\NLD_vehicle_units\previews\NLD_WLD_VECTOR.jpg";
		crew = "NLD_MTP_Operator";
		typicalCargo[] = {"NLD_MTP_Operator"};

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

	class NLD_WLD_VECTOR_ARMED : B_T_LSV_01_armed_olive_F {
		author = "Lowlands Tactical";
		scope = 2;
		scopeCurator = 2;
		displayName = "VECTOR (Olive)";
		side = 1;
		vehicleClass = Car;
		faction = "NLD_Units_MTP";
		editorPreview = "\NLD_vehicle_units\previews\NLD_WLD_VECTOR_ARMED.jpg";
		crew = "NLD_MTP_Operator";
		typicalCargo[] = {"NLD_MTP_Operator"};

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
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_WTR_Fennek.jpg";
		crew = "NLD_WTR_GL";
		typicalCargo[] = {"NLD_WTR_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Fennek\winter\Recon\Fennek.paa", "\NLD_Vehicle_Units\Wheeled\Fennek\winter\Recon\turret.paa"};
	};

	class NLD_WTR_Fennek_HMG : NLD_DST_Fennek_HMG {
		displayName = "Fennek HMG (Winter)";
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_WTR_Fennek_HMG.jpg";
		crew = "NLD_WTR_GL";
		typicalCargo[] = {"NLD_WTR_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Fennek\winter\HMG\Fennek.paa", "\NLD_Vehicle_Units\Wheeled\Fennek\winter\HMG\turret.paa"};
	};

	class NLD_WTR_Fennek_GMG : NLD_DST_Fennek_GMG {
		displayName = "Fennek GMG (Winter)";
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_WTR_Fennek_GMG.jpg";
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
		editorPreview = "\NLD_vehicle_units\previews\NLD_DAF_Transport.jpg";
		crew="NLD_NFPG_GL";
		typicalCargo[] = {"NLD_NFPG_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_4442\Data\daf4442_front1_co.paa","\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_4442\Data\daf4442covered.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};

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
		editorPreview = "\NLD_vehicle_units\previews\NLD_DAF_Transport_Covered.jpg";
		crew="NLD_NFPG_GL";
		typicalCargo[] = {"NLD_NFPG_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_4442\Data\daf4442_front2_co.paa","\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_4442\Data\daf4442covered.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};

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
		editorPreview = "\NLD_vehicle_units\previews\NLD_DAF_Fuel.jpg";
		crew="NLD_NFPG_GL";
		typicalCargo[] = {"NLD_NFPG_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_4442\Data\daf4442_front3_co.paa","\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_4442\Data\daf4442fuel.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};

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
		editorPreview = "\NLD_vehicle_units\previews\NLD_DAF_Repair.jpg";
		crew="NLD_NFPG_GL";
		typicalCargo[] = {"NLD_NFPG_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_4442\Data\daf4442_front4_co.paa","\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_4442\Data\daf4442repair.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};

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
		editorPreview = "\NLD_vehicle_units\previews\NLD_DAF_ammo.jpg";
		crew="NLD_NFPG_GL";
		typicalCargo[] = {"NLD_NFPG_GL"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_2300\Data\daf2300_front_co.paa","\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_2300\Data\daf2300ammo.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};

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
		editorPreview = "\NLD_vehicle_units\previews\NLD_DAF_medical.jpg";
		crew="NLD_NFPG_CLS";
		typicalCargo[] = {"NLD_NFPG_CLS"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_4442\Data\daf4442_front5_co.paa","\NLD_Vehicle_Units\Wheeled\Daf_Truck\Daf_4442\Data\daf4442covered.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};

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

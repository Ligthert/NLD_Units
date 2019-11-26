class CfgPatches {
	class NLD_Units_Tanks {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
	};
};
	
// The MEAT!
class CfgVehicles {

	// External Class References
	class I_MBT_03_cannon_F;
	class B_MBT_01_arty_F;
	class B_MBT_01_mlrs_F;
	class I_APC_tracked_03_cannon_F;
	class B_APC_Tracked_01_rcws_F;
	class B_APC_Tracked_01_CRV_F;
	class B_APC_Tracked_01_AA_F;
	class CUP_B_M113_USA;
	class CUP_B_M113_Med_USA;
	class CUP_B_M270_HE_USA;
	class CUP_B_M270_DPICM_USA;
	class B_Radar_System_01_F;
	class B_SAM_System_03_F;
	class CUP_B_Leopard2A6_GER;
	class B_SDV_01_F;
	class I_C_Boat_Transport_02_F;
	class CUP_B_RHIB_USMC;
	class CUP_I_Frigate_AAF;
	class CUP_I_LCVP_VIV_RACS;
	class CUP_I_LCVP_RACS;
	class CUP_B_MK10_GB;
    
	

// YPR_765
	class NLD_YPR_765 : CUP_B_M113_USA
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "YPR-765 (M2)";
		side = 1;
		vehicleClass = Armored;
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_YPR_765.jpg";
		crew = "NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\YPR_765\Armed\YPR.paa"};

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
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};
	
// YPR_765 Medevac
	class NLD_YPR_765_AMB : CUP_B_M113_med_USA
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "YPR-765 Ambulance";
		side = 1;
		vehicleClass = Armored;
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_YPR_765_AMB.jpg";
		crew = "NLD_Crew";
		typicalCargo[] = {};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\YPR_765\Medevac\YPR.paa"};

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
	
// YPR_765 KMAR
	class NLD_YPR_765_KMAR : CUP_B_M113_USA
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "YPR-765 KMAR";
		side = 1;
		vehicleClass = Armored;
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_YPR_765_KMAR.jpg";
		crew = "NLD_KMAR_Crew";
		typicalCargo[] = {"NLD_KMAR_Crew"};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\YPR_765\Kmar\YPRkmar.paa"};

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
			class _xx_CUP_30Rnd_9x19_MP5
			{
				magazine="CUP_30Rnd_9x19_MP5";
				count=20;
			};
			
		};
		class TransportWeapons {};
	};
	
// M270 MLRS HE
	class NLD_MLRS_M270_HE : CUP_B_M270_HE_USA
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "M270 MLRS (HE)";
		side = 1;
		vehicleClass = Armored;
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_MLRS_M270_HE.jpg";
		crew = "NLD_Crew_MLRS";
		typicalCargo[] = {"NLD_Crew_MLRS"};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\M270_MLRS\M270.paa"};

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
		class TransportWeapons {};
	};

// M270 MLRS DPICM
	class NLD_MLRS_M270_DPICM : CUP_B_M270_DPICM_USA
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "M270 MLRS (DPICM)";
		side = 1;
		vehicleClass = Armored;
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_MLRS_M270_DPICM.jpg";
		crew = "NLD_Crew_MLRS";
		typicalCargo[] = {"NLD_Crew_MLRS"};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\M270_MLRS\M270.paa"};

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
		class TransportWeapons {};
	};
	
// Leopard2 - Woodland
	class NLD_WLD_Leo2 : I_MBT_03_cannon_F
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Leopard 2 Revolution (Woodland)";
		side = 1;
		vehicleClass = Armored;
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_WLD_Leo2.jpg";
		crew = "NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "CamoNet"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\Leopard2\woodland\Data\leobodywdl.paa", "\NLD_Vehicle_Units\Armored\Leopard2\woodland\Data\leobody1wdl.paa", "\NLD_Vehicle_Units\Armored\Leopard2\woodland\Data\leorcwswdl.paa", "A3\Armor_F\Data\camonet_NATO_Green_CO.paa"};
		
		class TextureSources {
			textures[]=
			{
				"\NLD_Vehicle_Units\Armored\Leopard2\woodland\Data\leobodywdl.paa",
				"\NLD_Vehicle_Units\Armored\Leopard2\woodland\Data\leobody1wdl.paa",
				"\NLD_Vehicle_Units\Armored\Leopard2\woodland\Data\leorcwswdl.paa",
				"A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
			};
			
		};
	
		
		class EventHandlers {
			init = "if (local (_this select 1)) then {{(_this select 1) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
		};
		

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
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};
	
	class NLD_Leopard2A6 : CUP_B_Leopard2A6_GER
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Leopard 2A6MA2";
		side = 1;
		vehicleClass = Armored;
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_WLD_Leo2.jpg";
		crew = "NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\Leopard2\woodland\Data\Leo_hull.paa", "\NLD_Vehicle_Units\Armored\Leopard2\woodland\Data\Leo_turret.paa"};
		
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
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};


// Leopard2 - Orange
	class NLD_ORANGE_Leo2 : NLD_WLD_Leo2
	{

		author = "Lowlands Tactical";
		scope = 0;
		displayName = "Leopard 2 Revolution (Orange)";
		side = 1;
		vehicleClass = Armored;
		faction = NLD_Units;
		crew = "NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "HideHull", "HideTurret"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\Leopard2\orange\Data\leobodyoranje.paa", "\NLD_Vehicle_Units\Armored\Leopard2\orange\Data\leobody1oranje.paa", "\NLD_Vehicle_Units\Armored\Leopard2\orange\Data\leorcwsoranje.paa"};

		class EventHandlers {
			init = "if (local (_this select 1)) then {{(_this select 1) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
		};

	};

	// Leopard2 - Desert
	class NLD_DST_Leo2 : NLD_WLD_Leo2
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Leopard 2 Revolution (Desert)";
		side = 1;
		vehicleClass = Armored;
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_DST_Leo2.jpg";
		crew = "NLD_DST_rifleman";
		typicalCargo[] = {"NLD_DST_OFF"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "CamoNet"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\Leopard2\desert\Data\leobodytan.paa", "\NLD_Vehicle_Units\Armored\Leopard2\desert\Data\leobody1tan.paa", "\NLD_Vehicle_Units\Armored\Leopard2\desert\Data\leorcwstan.paa", "A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};

		class EventHandlers {
			init = "if (local (_this select 1)) then {{(_this select 1) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
		};
		
		class TextureSources {
			textures[]=
			{
				"\NLD_Vehicle_Units\Armored\Leopard2\woodland\Data\leobodytan.paa",
				"\NLD_Vehicle_Units\Armored\Leopard2\woodland\Data\leobody1tan.paa",
				"\NLD_Vehicle_Units\Armored\Leopard2\woodland\Data\leorcwstan.paa",
				"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
			};
			
		};

	};
	
// PzH2000NL - Woodland
	class NLD_WLD_PzH2000NL : B_MBT_01_arty_F
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "PzH2000NL";
		side = 1;
		vehicleClass = Armored;
		faction = NLD_Units;
		editorPreview = "\NLD_vehicle_units\previews\NLD_WLD_PzH2000NL.jpg";
		crew = "NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "CamoNet"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\PzH2000NL\woodland\Data\pzh2000body.paa", "\NLD_Vehicle_Units\Armored\PzH2000NL\woodland\Data\pzh2000turret.paa", "\NLD_Vehicle_Units\Armored\PzH2000NL\woodland\Data\pzh2000comgun.paa", "A3\Armor_F\Data\camonet_NATO_Green_CO.paa"};
		
		class TextureSources {
			textures[]=
			{
				"\NLD_Vehicle_Units\Armored\Leopard2\woodland\Data\pzh2000body.paa",
				"\NLD_Vehicle_Units\Armored\Leopard2\woodland\Data\pzh2000turret.paa",
				"\NLD_Vehicle_Units\Armored\Leopard2\woodland\Data\pzh2000comgun.paa",
				"A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
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
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};
	
// Patriot Radar en raketten
	class NLD_WLD_PatriotRadar : B_Radar_System_01_F
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "AN-MPQ53 radarsysteem";
		side = 1;
		editorPreview = "\NLD_vehicle_units\previews\NLD_WLD_PatriotRadar.jpg";
		vehicleClass = Armored;
		faction = NLD_Units;
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\Patriot\MiM.paa", "\NLD_Vehicle_Units\Armored\Patriot\Radar.paa"};		
	};
	
	class NLD_WLD_PatriotMim : B_SAM_System_03_F
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "MIM-104 Patriot Raketinstallatie";
		side = 1;
		editorPreview = "\NLD_vehicle_units\previews\NLD_WLD_PatriotMim.jpg";
		vehicleClass = Armored;
		faction = NLD_Units;
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\Patriot\Base.paa", "\NLD_Vehicle_Units\Armored\Patriot\Missile.paa"};
	};
	

// M270MLRS - Woodland
	class NLD_WLD_M270MLRS : B_MBT_01_mlrs_F
	{

		author = "Lowlands Tactical";
		scope = 1;
		displayName = "M270 MLRS";
		side = 1;
		vehicleClass = Armored;
		faction = NLD_Units;
		crew = "NLD_Crew_MLRS";
		typicalCargo[] = {"NLD_Crew_MLRS"};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\M270MLRS\woodland\Data\mlrsbody.paa", "\NLD_Vehicle_Units\Armored\M270MLRS\woodland\Data\mlrsturret.paa"};

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
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};
// CV9035NL - Woodland
	class NLD_WLD_CV9035NL : I_APC_tracked_03_cannon_F
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "CV-9035NL";
		side = 1;
		vehicleClass = Armored;
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_WLD_CV9035NL.jpg";
		crew = "NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
		hiddenSelections[] = {"Camo1", "Camo2", "CamoNet", "CamoSlat"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\CV9035NL\woodland\Data\cv90turret.paa", "\NLD_Vehicle_Units\Armored\CV9035NL\woodland\Data\cv90body.paa", "A3\Armor_F\Data\camonet_NATO_Green_CO.paa", "A3\Armor_F\Data\cage_olive_CO.paa"};		
			
		class EventHandlers {
			init = "_this select 0 removeWeaponTurret ['autocannon_30mm',[0]];_this select 0 addWeaponTurret ['autocannon_40mm_CTWS',[0]];_this select 0 addMagazineTurret ['60Rnd_40mm_GPR_Tracer_Yellow_shells',[0]];_this select 0 addMagazineTurret ['60Rnd_40mm_GPR_Tracer_Yellow_shells',[0]];_this select 0 addMagazineTurret ['60Rnd_40mm_GPR_Tracer_Yellow_shells',[0]];_this select 0 addMagazineTurret ['60Rnd_40mm_GPR_Tracer_Yellow_shells',[0]];_this select 0 addMagazineTurret ['60Rnd_40mm_GPR_Tracer_Yellow_shells',[0]];_this select 0 addMagazineTurret ['40Rnd_40mm_APFSDS_Tracer_Yellow_shells',[0]];_this select 0 addMagazineTurret ['40Rnd_40mm_APFSDS_Tracer_Yellow_shells',[0]];_this select 0 addMagazineTurret ['40Rnd_40mm_APFSDS_Tracer_Yellow_shells',[0]];_this select 0 addMagazineTurret ['40Rnd_40mm_APFSDS_Tracer_Yellow_shells',[0]];_this select 0 addMagazineTurret ['40Rnd_40mm_APFSDS_Tracer_Yellow_shells',[0]];";	 
		};
		
		animationList[] =
		{
			"showBags",0,
			"showBags2",1,
			"showCamonetHull",0,
			"showCamonetTurret",0,
			"showTools",1,
			"showSLATHull",0,
			"showSLATTurret",0
		};
		
		class TextureSources {
			textures[]=
			{
				"\NLD_Vehicle_Units\Armored\CV9035NL\woodland\Data\cv90turret.paa",
				"\NLD_Vehicle_Units\Armored\CV9035NL\woodland\Data\cv90body.paa",
				"A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
				"A3\Armor_F\Data\cage_olive_CO.paa"
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
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};

// CV9035NL - Desert
	class NLD_DST_CV9035NL : I_APC_tracked_03_cannon_F
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "CV-9035NL (Desert)";
		side = 1;
		vehicleClass = Armored;
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_DST_CV9035NL.jpg";
		crew = "NLD_DST_rifleman";
		typicalCargo[] = {"NLD_DST_OFF"};
		hiddenSelections[] = {"Camo1", "Camo2", "CamoNet", "CamoSlat"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\CV9035NL\Desert\Data\cv90turrettan.paa", "\NLD_Vehicle_Units\Armored\CV9035NL\Desert\Data\cv90bodytan.paa", "A3\Armor_F\Data\camonet_NATO_Desert_CO.paa", "A3\Armor_F\Data\cage_sand_CO.paa"};
		
		class EventHandlers {
			init = "_this select 0 removeWeaponTurret ['autocannon_30mm',[0]];_this select 0 addWeaponTurret ['autocannon_40mm_CTWS',[0]];_this select 0 addMagazineTurret ['60Rnd_40mm_GPR_Tracer_Yellow_shells',[0]];_this select 0 addMagazineTurret ['60Rnd_40mm_GPR_Tracer_Yellow_shells',[0]];_this select 0 addMagazineTurret ['60Rnd_40mm_GPR_Tracer_Yellow_shells',[0]];_this select 0 addMagazineTurret ['60Rnd_40mm_GPR_Tracer_Yellow_shells',[0]];_this select 0 addMagazineTurret ['60Rnd_40mm_GPR_Tracer_Yellow_shells',[0]];_this select 0 addMagazineTurret ['40Rnd_40mm_APFSDS_Tracer_Yellow_shells',[0]];_this select 0 addMagazineTurret ['40Rnd_40mm_APFSDS_Tracer_Yellow_shells',[0]];_this select 0 addMagazineTurret ['40Rnd_40mm_APFSDS_Tracer_Yellow_shells',[0]];_this select 0 addMagazineTurret ['40Rnd_40mm_APFSDS_Tracer_Yellow_shells',[0]];_this select 0 addMagazineTurret ['40Rnd_40mm_APFSDS_Tracer_Yellow_shells',[0]];";	 
		};
		
		animationList[] =
		{
			"showBags",0,
			"showBags2",1,
			"showCamonetHull",0,
			"showCamonetTurret",0,
			"showTools",1,
			"showSLATHull",0,
			"showSLATTurret",0
		};
		
		class TextureSources {
			textures[]=
			{
				"\NLD_Vehicle_Units\Armored\CV9035NL\woodland\Data\cv90turret.paa",
				"\NLD_Vehicle_Units\Armored\CV9035NL\woodland\Data\cv90body.paa",
				"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
				"A3\Armor_F\Data\cage_sand_CO.paa"
			};
			
		};

	};
	
// YPR-765 - Woodland
	class NLD_WLD_YPR : B_APC_Tracked_01_rcws_F
	{

		author = "Lowlands Tactical";
		scope = 1;
		displayName = "YPR-765";
		side = 1;
		vehicleClass = Armored;
		faction = "NLD_Units";
		crew = "NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
		hiddenSelections[] = {"Camo1", "Camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\YPR\woodland\Data\YPRbodyup.paa", "\NLD_Vehicle_Units\Armored\YPR\woodland\Data\YPRbodylow.paa", "\NLD_Vehicle_Units\Armored\PzH2000NL\woodland\Data\pzh2000comgun.paa"};

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
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};
// KMAR YPR-765 - Woodland
	class NLD_KMAR_YPR : B_APC_Tracked_01_rcws_F
	{

		author = "Lowlands Tactical";
		scope = 1;
		displayName = "YPR-765 (KMAR)";
		side = 1;
		vehicleClass = Armored;
		faction = NLD_Units;
		crew = "NLD_KMAR_Crew";
		typicalCargo[] = {"NLD_KMAR_Crew"};
		hiddenSelections[] = {"Camo1", "Camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\KMAR-YPR\Blue\Data\KMARYPRbodyup.paa", "\NLD_Vehicle_Units\Armored\KMAR-YPR\Blue\Data\KMARYPRbodylow.paa", "\NLD_Vehicle_Units\Armored\KMAR-YPR\Blue\Data\KMARYPRcomgun.paa"};

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
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};
// Leopard 2 Bergingstank - KMAR
	class NLD_KMAR_Buffel : B_APC_Tracked_01_CRV_F
	{

		author = "Lowlands Tactical";
		scope = 1;
		displayName = "Leopard 2 Bergingstank (KMAR)";
		side = 1;
		vehicleClass = Armored;
		faction = NLD_Units;
		crew = "NLD_KMAR_Crew";
		typicalCargo[] = {"NLD_KMAR_Crew"};
		hiddenSelections[] = {"Camo1", "Camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\KMAR-YPR\Blue\Data\KMARYPRbodyup.paa", "\NLD_Vehicle_Units\Armored\KMAR-YPR\Blue\Data\KMARYPRbodylow.paa", "\NLD_Vehicle_Units\Armored\KMAR-YPR\Blue\Data\KMARYPRcomgun.paa", "\NLD_Vehicle_Units\Armored\KMAR-YPR\Blue\Data\KMARYPRcrv.paa"};

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
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};
// Leopard 2 Bergingstank - Woodland
	class NLD_WLD_Buffel : B_APC_Tracked_01_CRV_F
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Leopard 2 Bergingstank";
		side = 1;
		vehicleClass = Armored;
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_WLD_Buffel.jpg";
		crew = "NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
		hiddenSelections[] = {"Camo1", "Camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\Buffel\woodland\Data\BUFFELbodyup.paa", "\NLD_Vehicle_Units\Armored\Buffel\woodland\Data\BUFFELbodylow.paa", "\NLD_Vehicle_Units\Armored\PzH2000NL\woodland\Data\pzh2000comgun.paa", "\NLD_Vehicle_Units\Armored\Buffel\woodland\Data\BUFFELcrv.paa"};

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
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};
// Cheetah PRTL - Woodland
	class NLD_WLD_PRTL : B_APC_Tracked_01_AA_F
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Cheetah PRTL";
		side = 1;
		vehicleClass = Armored;
		faction = "NLD_Units";
		editorPreview = "\NLD_vehicle_units\previews\NLD_WLD_PRTL.jpg";
		crew = "NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
		hiddenSelections[] = {"Camo1", "Camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\PRTL\woodland\Data\PRTLbodyup.paa", "\NLD_Vehicle_Units\Armored\PRTL\woodland\Data\PRTLbodylow.paa", "\NLD_Vehicle_Units\Armored\PRTL\woodland\Data\PRTLturret.paa"};

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
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};
	
// BOATS

	class NLD_RHIB : I_C_Boat_Transport_02_F
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "RHIB";
		side = 1;
		vehicleClass = Boats;
		faction = "NLD_Units";
		editorPreview = "";
		crew = "NLD_KMI_Rifleman";
		typicalCargo[] = {"NLD_KMI_Rifleman"};
		
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
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=5;
			};
			class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch
			{
				magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";
				count=2;
			};
			class _xx_CUP_20Rnd_762x51_HK417
			{
				magazine="CUP_20Rnd_762x51_HK417";
				count=3;
			};
			class _xx_CUP_5Rnd_86x70_L115A1
			{
				magazine="CUP_5Rnd_86x70_L115A1";
				count=15;
			};
		};
		class TransportWeapons {};
	};
	
	class NLD_FRISC : CUP_B_RHIB_USMC
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "FRISC-motorboot";
		side = 1;
		vehicleClass = Boats;
		faction = "NLD_Units";
		editorPreview = "";
		crew = "NLD_KM_Operator";
		typicalCargo[] = {"NLD_KM_Operator"};
		
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
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=5;
			};
			class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch
			{
				magazine="CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";
				count=2;
			};
			class _xx_CUP_20Rnd_762x51_HK417
			{
				magazine="CUP_20Rnd_762x51_HK417";
				count=3;
			};
		};
		class TransportWeapons {};
	};
	
	class NLD_LCF : CUP_I_Frigate_AAF
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Zeven Provinciënklasse LCF";
		side = 1;
		vehicleClass = Boats;
		faction = "NLD_Units";
		editorPreview = "";
		crew = "NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
	};
	
	class NLD_SDV : B_SDV_01_F
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Minisub";
		side = 1;
		vehicleClass = Boats;
		faction = "NLD_Units";
		editorPreview = "";
		crew = "NLD_SF_Operator";
		typicalCargo[] = {"NLD_SF_Operator"};
	};
	
	class NLD_LCU : CUP_B_MK10_GB
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "LCU MK2";
		side = 1;
		vehicleClass = Boats;
		faction = "NLD_Units";
		editorPreview = "";
		crew = "NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
	};
	
	class NLD_LCVP : CUP_I_LCVP_RACS
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "LCVP MK5 (Infantry)";
		side = 1;
		vehicleClass = Boats;
		faction = "NLD_Units";
		editorPreview = "";
		crew = "NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
	};
	
	class NLD_LCVP_VIV : CUP_I_LCVP_VIV_RACS
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "LCVP MK5 (Vehicles)";
		side = 1;
		vehicleClass = Boats;
		faction = "NLD_Units";
		editorPreview = "";
		crew = "NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
	};


};

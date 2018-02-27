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
	class I_MBT_03_BASE_F;
	class B_MBT_01_arty_F;
	class B_MBT_01_mlrs_F;
	class I_APC_tracked_03_cannon_F;
	class B_APC_Tracked_01_rcws_F;
	class B_APC_Tracked_01_CRV_F;
	class B_APC_Tracked_01_AA_F;


// Leopard2 - Woodland
	class NLD_WLD_Leo2 : I_MBT_03_BASE_F
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Leopard 2 Revolution (Woodland)";
		side = 1;
		vehicleClass = Armored;
		faction = "NLD_Units_WLD";
		crew = "NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "HideHull", "HideTurret"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\Leopard2\woodland\Data\leobodywdl.paa", "\NLD_Vehicle_Units\Armored\Leopard2\woodland\Data\leobody1wdl.paa", "\NLD_Vehicle_Units\Armored\Leopard2\woodland\Data\leorcwswdl.paa"};

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
			class _xx_30Rnd_556x45_Stanag_noTracer
			{
				magazine="30Rnd_556x45_Stanag_noTracer";
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
		faction = "NLD_Units_DST";
		crew = "NLD_DST_rifleman";
		typicalCargo[] = {"NLD_DST_OFF"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "HideHull", "HideTurret"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\Leopard2\desert\Data\leobodytan.paa", "\NLD_Vehicle_Units\Armored\Leopard2\desert\Data\leobody1tan.paa", "\NLD_Vehicle_Units\Armored\Leopard2\desert\Data\leorcwstan.paa"};

		class EventHandlers {
			init = "if (local (_this select 1)) then {{(_this select 1) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
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
		crew = "NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\PzH2000NL\woodland\Data\pzh2000body.paa", "\NLD_Vehicle_Units\Armored\PzH2000NL\woodland\Data\pzh2000turret.paa", "\NLD_Vehicle_Units\Armored\PzH2000NL\woodland\Data\pzh2000comgun.paa"};

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
			class _xx_30Rnd_556x45_Stanag_noTracer
			{
				magazine="30Rnd_556x45_Stanag_noTracer";
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
// M270MLRS - Woodland
	class NLD_WLD_M270MLRS : B_MBT_01_mlrs_F
	{

		author = "Lowlands Tactical";
		scope = 2;
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
			class _xx_30Rnd_556x45_Stanag_noTracer
			{
				magazine="30Rnd_556x45_Stanag_noTracer";
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
// CV9035NL - Woodland
	class NLD_WLD_CV9035NL : I_APC_tracked_03_cannon_F
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "CV-9035NL";
		side = 1;
		vehicleClass = Armored;
		faction = "NLD_Units_WLD";
		crew = "NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\CV9035NL\woodland\Data\cv90turret.paa", "\NLD_Vehicle_Units\Armored\CV9035NL\woodland\Data\cv90body.paa"};

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
			class _xx_30Rnd_556x45_Stanag_noTracer
			{
				magazine="30Rnd_556x45_Stanag_noTracer";
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

// CV9035NL - Desert
	class NLD_DST_CV9035NL : I_APC_tracked_03_cannon_F
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "CV-9035NL (Desert)";
		side = 1;
		vehicleClass = Armored;
		faction = "NLD_Units_DST";
		crew = "NLD_DST_rifleman";
		typicalCargo[] = {"NLD_DST_OFF"};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\CV9035NL\Desert\Data\cv90turrettan.paa", "\NLD_Vehicle_Units\Armored\CV9035NL\Desert\Data\cv90bodytan.paa"};

	};
// YPR-765 - Woodland
	class NLD_WLD_YPR : B_APC_Tracked_01_rcws_F
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "YPR-765";
		side = 1;
		vehicleClass = Armored;
		faction = "NLD_Units_WLD";
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
			class _xx_30Rnd_556x45_Stanag_noTracer
			{
				magazine="30Rnd_556x45_Stanag_noTracer";
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
// KMAR YPR-765 - Woodland
	class NLD_KMAR_YPR : B_APC_Tracked_01_rcws_F
	{

		author = "Lowlands Tactical";
		scope = 2;
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
			class _xx_30Rnd_556x45_Stanag_noTracer
			{
				magazine="30Rnd_556x45_Stanag_noTracer";
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
// Leopard 2 Bergingstank - KMAR
	class NLD_KMAR_Buffel : B_APC_Tracked_01_CRV_F
	{

		author = "Lowlands Tactical";
		scope = 2;
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
			class _xx_30Rnd_556x45_Stanag_noTracer
			{
				magazine="30Rnd_556x45_Stanag_noTracer";
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
// Leopard 2 Bergingstank - Woodland
	class NLD_WLD_Buffel : B_APC_Tracked_01_CRV_F
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Leopard 2 Bergingstank";
		side = 1;
		vehicleClass = Armored;
		faction = "NLD_Units_WLD";
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
			class _xx_30Rnd_556x45_Stanag_noTracer
			{
				magazine="30Rnd_556x45_Stanag_noTracer";
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
// Cheetah PRTL - Woodland
	class NLD_WLD_PRTL : B_APC_Tracked_01_AA_F
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Cheetah PRTL";
		side = 1;
		vehicleClass = Armored;
		faction = "NLD_Units_WLD";
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
			class _xx_30Rnd_556x45_Stanag_noTracer
			{
				magazine="30Rnd_556x45_Stanag_noTracer";
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

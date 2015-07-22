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


// Leopard2 - Woodland
	class NLD_WLD_Leo2 : I_MBT_03_BASE_F
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Leopard2A8 (Woodland)";
		side = 1;
		vehicleClass = Armored;
		faction = NLD_Units;
		crew = "NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "HideHull", "HideTurret"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\Leopard2\woodland\Leopard_0.paa", "\NLD_Vehicle_Units\Armored\Leopard2\woodland\Leopard_1.paa", "\NLD_Vehicle_Units\Armored\Leopard2\woodland\Leopard_2.paa"};

		class EventHandlers {
			init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
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


// Leopard2 - Desert
	class NLD_DST_Leo2 : NLD_WLD_Leo2
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Leopard2A8 (Desert)";
		side = 1;
		vehicleClass = Armored;
		faction = NLD_Units;
		crew = "NLD_DST_rifleman";
		typicalCargo[] = {"NLD_DST_OFF"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "HideHull", "HideTurret"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\Leopard2\desert\Leopard_0.paa", "\NLD_Vehicle_Units\Armored\Leopard2\desert\Leopard_1.paa", "\NLD_Vehicle_Units\Armored\Leopard2\desert\Leopard_2.paa"};

		class EventHandlers {
			init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
		};

	};
// PzH2000NL - Woodland
	class NLD_WLD_PzH2000NL : B_MBT_01_arty_F
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "PzH2000NL (Woodland)";
		side = 1;
		vehicleClass = Armored;
		faction = NLD_Units;
		crew = "NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\PzH2000NL\woodland\mbt_body_co.paa", "\NLD_Vehicle_Units\Armored\PzH2000NL\woodland\pzh2000_turret_co.paa", "\NLD_Vehicle_Units\Armored\PzH2000NL\woodland\mbt_turret_co.paa"};

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
// M270MLRS - Woodland
	class NLD_WLD_M270MLRS : B_MBT_01_mlrs_F
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "M270 MLRS (Woodland)";
		side = 1;
		vehicleClass = Armored;
		faction = NLD_Units;
		crew = "NLD_Crew_MLRS";
		typicalCargo[] = {"NLD_Crew_MLRS"};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Armored\M270MLRS\woodland\mbt_body_mlrs_co.paa", "\NLD_Vehicle_Units\Armored\M270MLRS\woodland\mlrs_turret_co.paa"};

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
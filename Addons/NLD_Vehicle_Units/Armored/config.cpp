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
		icon="\NLD_Infantry_Units\Icon\Icon.jpg";
		priority=1;
		side=1;
	};
};

// The MEAT!
class CfgVehicles {

	// External Class References
	class I_MBT_03_BASE_F;

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


};
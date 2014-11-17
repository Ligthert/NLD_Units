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

// The MEAT!
class CfgVehicles {

	// External Class References
	class I_MBT_03_BASE_F;

// Leopard2 - Woodland
	class NLD_Leo2_WLD : I_MBT_03_BASE_F
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Leopard2 (Woodland)";
		side = 1;
		vehicleClass = Armored;
		faction = NLD_Units;
		crew = "NLD_Crew";
		typicalCargo[] = {"NLD_Crew"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "HideHull", "HideTurret"};
		hiddenSelectionsTextures[] = {"\NLD Vehicle Units\Armored\Leopard2\woodland\Leopard_0.paa", "\NLD Vehicle Units\Armored\Leopard2\woodland\Leopard_1.paa", "\NLD Vehicle Units\Armored\Leopard2\woodland\Leopard_2.paa"};

		class EventHandlers {
			init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
		};

	};


// Leopard2 - Desert
	class NLD_Leo2_DST : NLD_Leo2_WLD
	{

		author = "Lowlands Tactical";
		scope = 2;
		displayName = "Leopard2 (Desert)";
		side = 1;
		vehicleClass = Armored;
		faction = NLD_Units;
		crew = "NLD_DST_rifleman";
		typicalCargo[] = {"NLD_DST_OFF"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "HideHull", "HideTurret"};
		hiddenSelectionsTextures[] = {"\NLD Vehicle Units\Armored\Leopard2\desert\Leopard_0.paa", "\NLD Vehicle Units\Armored\Leopard2\desert\Leopard_1.paa", "\NLD Vehicle Units\Armored\Leopard2\desert\Leopard_2.paa"};

		class EventHandlers {
			init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
		};

	};


};
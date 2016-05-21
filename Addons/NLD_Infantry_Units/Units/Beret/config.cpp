class CfgPatches
{
	class NL_Infantry_Units_Berets
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
	};
};

class CfgVehicleClasses
{
	class NL_Infantry_Units_Berets
	{
		displayName = "NL Units Berets";
	};
};

class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;

	class Dutch_Beret_RoyalMarines: ItemCore
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Beret (Korps Mariniers)";
		picture = "\NLD_Infantry_Units\Units\Beret\uim\RoyalMarines.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Beret\RoyalMarines.paa"};
		hiddenSelections[] = {"Camo"};
         
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
			hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Beret\RoyalMarines.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class Dutch_Beret_Commandos: ItemCore
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Beret (Korps Commandotroepen)";
		picture = "\NLD_Infantry_Units\Units\Beret\uim\Commandos.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Beret\Commandos.paa"};
		hiddenSelections[] = {"Camo"};

		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
			hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Beret\Commandos.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class Dutch_Beret_KMAR: ItemCore
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Beret (Koninklijke Marechaussee)";
		picture = "\NLD_Infantry_Units\Units\Beret\uim\KMAR.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Beret\KMAR.paa"};
		hiddenSelections[] = {"Camo"};

		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
			hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Beret\KMAR.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class Dutch_Beret_80: ItemCore
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Beret (80's)";
		picture = "\NLD_Infantry_Units\Units\Beret\uim\80s.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Beret\80s.paa"};
		hiddenSelections[] = {"Camo"};

		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
			hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Beret\80s.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class Dutch_Beret_Luchtmobiele_Brigade: ItemCore
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Beret (Luchtmobiele Brigade)";
		picture = "\NLD_Infantry_Units\Units\Beret\uim\11AirManoeuvreBrigade.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Beret\11AirManoeuvreBrigade.paa"};
		hiddenSelections[] = {"Camo"};

		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
			hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Beret\11AirManoeuvreBrigade.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
};
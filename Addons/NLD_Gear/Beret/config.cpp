////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.33
//Produced on Tue Sep 27 09:18:38 2016 : Created on Tue Sep 27 09:18:38 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class NLD_Gear : Beret\config.bin{
class CfgPatches
{
	class NL_Infantry_Units_Berets
	{
		units[] = {};
		weapons[] = {"Dutch_Beret_RoyalMarines","Dutch_Beret_Commandos","Dutch_Beret_KMAR","Dutch_Beret_80","Dutch_Beret_Luchtmobiele_Brigade"};
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
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class Dutch_Beret_RoyalMarines: ItemCore
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Beret (Korps Mariniers)";
		picture = "\NLD_Gear\Beret\uim\RoyalMarines.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Beret\RoyalMarines.paa"};
		hiddenSelections[] = {"Camo"};
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
			hiddenSelectionsTextures[] = {"\NLD_Gear\Beret\RoyalMarines.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class Dutch_Beret_Commandos: ItemCore
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Beret (Korps Commandotroepen)";
		picture = "\NLD_Gear\Beret\uim\Commandos.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Beret\Commandos.paa"};
		hiddenSelections[] = {"Camo"};
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
			hiddenSelectionsTextures[] = {"\NLD_Gear\Beret\Commandos.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class Dutch_Beret_KMAR: ItemCore
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Beret (Koninklijke Marechaussee)";
		picture = "\NLD_Gear\Beret\uim\KMAR.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Beret\KMAR.paa"};
		hiddenSelections[] = {"Camo"};
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
			hiddenSelectionsTextures[] = {"\NLD_Gear\Beret\KMAR.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class Dutch_Beret_80: ItemCore
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Beret (80's)";
		picture = "\NLD_Gear\Beret\uim\80s.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Beret\80s.paa"};
		hiddenSelections[] = {"Camo"};
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
			hiddenSelectionsTextures[] = {"\NLD_Gear\Beret\80s.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class Dutch_Beret_Luchtmobiele_Brigade: ItemCore
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Beret (Luchtmobiele Brigade)";
		picture = "\NLD_Gear\Beret\uim\11AirManoeuvreBrigade.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Beret\11AirManoeuvreBrigade.paa"};
		hiddenSelections[] = {"Camo"};
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
			hiddenSelectionsTextures[] = {"\NLD_Gear\Beret\11AirManoeuvreBrigade.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
};
//};

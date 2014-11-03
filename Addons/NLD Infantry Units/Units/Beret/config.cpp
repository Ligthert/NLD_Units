#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly			2
#define ReadOnlyVerified	3

#define true				1
#define false				0

#define VSoft				0
#define VArmor				1
#define VAir				2

#define TEast				0
#define TWest				1
#define TGuerrila			2
#define TCivilian			3
#define TSideUnknown		4
#define TEnemy				5
#define TFriendly			6
#define TLogic				7

#define private				0
#define protected			1
#define public				2 


class CfgPatches
{
	class NL_Infantry_Units_Berets
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
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

	class Dutch_Beret_RoyalArmy: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Koninklijke Landmacht";
		picture = "\NLD Infantry Units\Units\Beret\uim\RoyalArmy.jpg";
		model = "\A3\Characters_F\Common\headgear_beret01";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Beret\RoyalArmy.paa"};
		hiddenSelections[] = {"Camo"};
         
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\A3\Characters_F\Common\headgear_beret01";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
			hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Beret\RoyalArmy.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class Dutch_Beret_Commandos: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Korps Commandotroepen";
		picture = "\NLD Infantry Units\Units\Beret\uim\Commandos.jpg";
		model = "\A3\Characters_F\Common\headgear_beret01";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Beret\Commandos.paa"};
		hiddenSelections[] = {"Camo"};

		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\A3\Characters_F\Common\headgear_beret01";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
			hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Beret\Commandos.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class Dutch_Beret_Luchtmobiele_Brigade: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Luchtmobiele Brigade";
		picture = "\NLD Infantry Units\Units\Beret\uim\11AirManoeuvreBrigade.jpg";
		model = "\A3\Characters_F\Common\headgear_beret01";
		hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Beret\11AirManoeuvreBrigade.paa"};
		hiddenSelections[] = {"Camo"};

		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\A3\Characters_F\Common\headgear_beret01";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
			hiddenSelectionsTextures[] = {"\NLD Infantry Units\Units\Beret\11AirManoeuvreBrigade.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
};
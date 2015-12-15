class CfgPatches {
	class NLD_Units_Gear {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
	};
};

class cfgWeapons {
	class Uniform_Base;	// External class reference
	class UniformItem;	// External class reference
	class U_B_GhillieSuit;	// External class reference
	class U_I_CombatUniform;	// External class reference
	class U_B_HeliPilotCoveralls;	// External class reference
	class ItemInfo;	// External class reference
	class ItemCore;		// External class reference
	class HeadgearItem;	// External class reference
	class H_HelmetIA;	// External class reference
	class H_HelmetB;
	class NVGoggles_OPFOR;	// External class reference
	class Vest_Camo_Base;	// External class reference
	class VestItem;	// External class reference
	class V_PlateCarrier1_blk;
	class H_HelmetCrew_B;
	
	class NLD_DST_Camo : Uniform_Base {
		scope = 2;
		displayName = "[NLD] Desert Camo";
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_DST_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	
	class NLD_DST_Helmet : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Desert Helmet";
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Helmet.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Helmet.paa"};
		
		class ItemInfo : HeadgearItem {
			mass = 1;
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			modelSides[] = {3, 1};
			armor = 6;
			passThrough = 0.5;
			hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Helmet.paa"};
			hiddenSelections[] = {"camo"};
		};
	};

	class NLD_DST_BaseballCap: ItemCore{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Desert Baseball Cap";
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\BaseballCap.paa";
		model = "\A3\Characters_F\common\capb";
        hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\BaseballCap.paa"};
        hiddenSelections[] = {"Camo"};
                
		class ItemInfo: HeadgearItem{
			mass = 1;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = "0.5";
			passThrough = 0.95;
            hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\BaseballCap.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};

	class NLD_DST_BoonieHat: ItemCore{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Desert Boonie Hat";
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\BoonieHat.paa";
		model = "\A3\Characters_F\Common\booniehat";
        hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\BoonieHat.paa"};
        hiddenSelections[] = {"Camo"};      

		class ItemInfo: HeadgearItem{
			mass = 1;
			uniformmodel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			armor = "0.5";
			passThrough = 0.95;
            hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\BoonieHat.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	
	 class NLD_NVGoggles : NVGoggles_OPFOR {
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\A3\Weapons_f\binocular\nvg_proxy";
		displayName = "[NLD] NV Goggles";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f\common\data\nvg_opfor_co.paa"};
  
		class ItemInfo : ItemInfo {
			uniformModel = "A3\weapons_f\binocular\nvg_proxy.p3d";
			modelOff = "A3\weapons_f\binocular\NVG_proxy_off.p3d";
			hiddenSelections[] = {"camo"};
		};
	};

	class NLD_WLD_Camo : Uniform_Base {
		scope = 2;
		displayName = "[NLD] Woodland Camo";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_WLD_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	
	class NLD_NFPT_Camo : NLD_WLD_Camo {
		scope = 2;
		displayName = "[NLD] NFP-Tan Camo";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_NFPT_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	};

	class NLD_NFPG_Camo : NLD_WLD_Camo {
		scope = 2;
		displayName = "[NLD] NFP-Green Camo";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_NFPG_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	};

	class NLD_WTR_Camo : NLD_WLD_Camo {
		scope = 2;
		displayName = "[NLD] Winter Camo";
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_WTR_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	};

	class NLD_SF_CAMO : NLD_WLD_Camo {
		scope = 2;
		displayName = "[NLD] Black Camo";
		picture = "\NLD_Infantry_Units\Units\SF\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_SF_Operator";
			containerClass = "Supply60";
			mass = 1;
		};
	};

	class NLD_MTP_CAMO : NLD_WLD_Camo {
		scope = 2;
		displayName = "[NLD] MTP Camo";
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_MTP_Operator";
			containerClass = "Supply60";
			mass = 1;
		};
	};

	class NLD_JGL_Camo : NLD_WLD_Camo {
		scope = 2;
		displayName = "[NLD] Jungle Camo";
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_JGL_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	class NLD_KM_Camo : Uniform_Base 
	{
		scope = 2;
		displayName = "[NLD] KM Camo";
		picture = "\NLD_Infantry_Units\Units\Korps_Mariniers\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_KM_Operator";
			containerClass = "Supply60";
			mass = 1;
		};	
	};
	class NLD_KM_Camo2 : Uniform_Base 
	{
		scope = 2;
		displayName = "[NLD] KM Camo2";
		picture = "\NLD_Infantry_Units\Units\Korps_Mariniers\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_KM_Operator_MP5";
			containerClass = "Supply60";
			mass = 1;
		};	
	};

	class NLD_WLD_Helmet : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Woodland Helmet";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Helmet.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Helmet.paa"};
		
		class ItemInfo : HeadgearItem {
			mass = 1;
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			modelSides[] = {3, 1};
			armor = 6;
			passThrough = 0.5;
                        hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\BaseballCap.paa"};
			hiddenSelections[] = {"camo"};
		};
	};

	class NLD_NFPT_Helmet : NLD_WLD_Helmet {
		displayName = "[NLD] NFP-Tan Helmet";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Helmet.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Helmet.paa"};		
	};

	class NLD_NFPG_Helmet : NLD_WLD_Helmet {
		displayName = "[NLD] NFP-Green Helmet";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Helmet.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Helmet.paa"};		
	};

	class NLD_WTR_Helmet : NLD_WLD_Helmet {
		displayName = "[NLD] Winter Helmet";
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Helmet.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Helmet.paa"};		
	};

	class NLD_KM_Helmet : NLD_WLD_Helmet {
		displayName = "[NLD] KM Helmet";
		picture = "\NLD_Infantry_Units\Units\Korps_Mariniers\Data\uim\Helmet.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Korps_Mariniers\Data\Helmet.paa"};		
	};

	class NLD_JGL_Helmet : NLD_WLD_Helmet {
		displayName = "[NLD] Jungle Helmet";
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Helmet.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Helmet.paa"};		
	};

	class NLD_UN_Helmet : NLD_WLD_Helmet {
		displayName = "[NLD] UN Helmet";
		picture = "\NLD_Infantry_Units\Units\UN\Data\uim\Helmet.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\UN\Data\Helmet.paa"};		
	};

	class NLD_WLD_BaseballCap: ItemCore{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Woodland Baseball Cap";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\BaseballCap.paa";
		model = "\A3\Characters_F\common\capb";
        hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\BaseballCap.paa"};
        hiddenSelections[] = {"Camo"};
                
		class ItemInfo: HeadgearItem{
			mass = 1;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = "0.5";
			passThrough = 0.95;
            hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\BaseballCap.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};

	class NLD_NFPT_BaseballCap : NLD_WLD_BaseballCap {
		displayName = "[NLD] NFP-Tan Baseball Cap";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\BaseballCap.paa";
        hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\BaseballCap.paa"};
	};

	class NLD_NFPG_BaseballCap : NLD_WLD_BaseballCap {
		displayName = "[NLD] NFP-Green Baseball Cap";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\BaseballCap.paa";
        hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\BaseballCap.paa"};
	};

	class NLD_SF_BaseballCap : NLD_WLD_BaseballCap {
		displayName = "[NLD] Black Baseball Cap";
		picture = "\NLD_Infantry_Units\Units\SF\Data\uim\BaseballCap.paa";
        hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\SF\Data\BaseballCap.paa"};
	};	

	class NLD_WLD_BoonieHat: ItemCore{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Woodland Boonie Hat";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\BoonieHat.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\BoonieHat.paa"};
		hiddenSelections[] = {"Camo"};

		class ItemInfo: HeadgearItem{
			mass = 1;
			uniformmodel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			armor = "0.5";
			passThrough = 0.95;
            hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\BoonieHat.paa"};
            hiddenSelections[] = {"Camo"};
		};
	};
	
	class NLD_NFPT_BoonieHat : NLD_WLD_BoonieHat {
		displayName = "[NLD] NFP-Tan Boonie Hat";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\BoonieHat.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\BoonieHat.paa"};
	};

	class NLD_NFPG_BoonieHat : NLD_WLD_BoonieHat {
		displayName = "[NLD] NFP-Green Boonie Hat";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\BoonieHat.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\BoonieHat.paa"};
	};

	class NLD_SF_BoonieHat : NLD_WLD_BoonieHat {
		displayName = "[NLD] Black Boonie Hat";
		picture = "\NLD_Infantry_Units\Units\SF\Data\uim\BoonieHat.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\SF\Data\BoonieHat.paa"};
	};

	class NLD_WLD_Vest : Vest_Camo_Base {
		scope = 2;
		displayName = "[NLD] Woodland Vest";
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Vest.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Vest.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			containerClass = "Supply120";
			mass = 1;
			armor = 30;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};

	class NLD_NFPT_Vest : NLD_WLD_Vest {
		displayName = "[NLD] NFP-Tan Vest";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Vest.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Vest.paa"};
	};

	class NLD_NFPG_Vest : NLD_WLD_Vest {
		displayName = "[NLD] NFP-Green Vest";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Vest.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Vest.paa"};
	};

	class NLD_DST_Vest : NLD_WLD_Vest {
		scope = 1;
		displayName = "[NLD] Desert Vest";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Vest.paa"};
	};

	class NLD_WTR_Vest : NLD_WLD_Vest {
		displayName = "[NLD] Winter Vest";
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Vest.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Vest.paa"};
	};

	class NLD_SF_Vest : NLD_WLD_Vest {
		displayName = "[NLD] Black Vest";
		picture = "\NLD_Infantry_Units\Units\SF\Data\uim\Vest.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\SF\Data\Vest.paa"};
	};

	class NLD_JGL_Vest : NLD_WLD_Vest {
		displayName = "[NLD] Jungle Vest";
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Vest.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Vest.paa"};
	};

	class NLD_UN_Vest : Vest_Camo_Base {
		scope = 2;
		displayName = "[NLD] UN Vest";
		picture = "\NLD_Infantry_Units\Units\UN\Data\uim\Vest.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\UN\Data\Vest.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			containerClass = "Supply120";
			mass = 1;
			armor = 30;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};

	class NLD_SF_PlateCarrier : V_PlateCarrier1_blk
	{
		displayName = "[NLD] Black Plate Carrier";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		picture = "\NLD_Infantry_Units\Units\SF\Data\uim\PlateCarrier.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\SF\Data\PlateCarrier.paa"};
		scope = 2;
		class ItemInfo: ItemInfo {
			armor = 40;
			containerclass = "Supply120";
			mass = 60;
			passthrough = 0.5;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		};
	};

	class NLD_MTP_PlateCarrier : NLD_SF_PlateCarrier
	{
		displayName = "[NLD] MTP Plate Carrier";
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\PlateCarrier.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\PlateCarrier.paa"};
	};

	class NLD_SF_ECH: H_HelmetB {
		displayname = "[NLD] Black ECH";
		hiddenselections[] = {"camo"};
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		picture = "\NLD_Infantry_Units\Units\SF\Data\uim\ECH.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\SF\Data\ECH.paa"};
		scope = 2;
		weaponpoolavailable = 1;
		class ItemInfo: HeadgearItem {
			armor = 6;
			hiddenselections[] = {"camo"};
			mass = 40;
			modelsides[] = {3, 1};
			passthrough = 0.5;
			uniformmodel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		};
	};

	class NLD_MTP_ECH : NLD_SF_ECH
	{
		displayName = "[NLD] MTP ECH";
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\ECH.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\ECH.paa"};
	};

	class NLD_Helipilot_base : U_B_HeliPilotCoveralls {
		scope = 2;
		displayName = "[NLD] HeliPilot Coveralls";
		genericNames = "NLD_Units";
		picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_Helipilot";
			containerClass = "Supply90";
			mass = 40;
		};
	};
	
	class NLD_Helicrew_base : U_B_HeliPilotCoveralls {
		scope = 2;
		displayName = "[NLD] HeliCrew Coveralls";
		picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_Helicrew";
			containerClass = "Supply90";
			mass = 40;
		};
	};
	
	class NLD_Crew_base : Uniform_Base {
		scope = 2;
		displayName = "[NLD] Crew Coveralls";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\WorkUniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_Crew";
			containerClass = "Supply90";
			mass = 40;
		};
	};
	
	class NLD_Crew_MLRS_base : Uniform_Base {
		scope = 1;
		displayName = "[NLD] Crew MLRS Coveralls";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\WorkUniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_Crew_MLRS";
			containerClass = "Supply90";
			mass = 40;
		};
	};
	class NLD_Police_Uniform: U_B_HeliPilotCoveralls
	{
		scope = 2;
		displayName = "[NLD] Police Pilot Uniform ";
		picture = "\NLD_Vehicle_Units\Air\Data\police\pilots\ui\police_pilot.paa";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_Police_F";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class NLD_Lifeliner_Uniform: U_B_HeliPilotCoveralls
	{
		scope = 2;
		displayName = "[NLD] Lifeliner Pilot Uniform ";
		picture = "\NLD_Vehicle_Units\Air\Data\lifeliner\pilots\ui\lifeliner_pilot.paa";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_Lifeliner_F";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class NLD_Police_Helmet: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Police Helmet";
		picture = "\NLD_Vehicle_Units\Air\Data\police\pilots\ui\police_helmet.paa";
		model = "A3\Characters_F\Common\headgear_helmet_heli";
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\police\pilots\police_helmet.paa"};
		hiddenSelections[] = {"Camo"};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "A3\Characters_F\Common\headgear_helmet_heli";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
			hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\police\pilots\police_helmet.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class NLD_Lifeliner_Helmet: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Lifeliner Helmet";
		picture = "\NLD_Vehicle_Units\Air\Data\lifeliner\pilots\ui\lifeliner_helmet.paa";
		model = "A3\Characters_F\Common\headgear_helmet_heli";
		hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\lifeliner\pilots\lifeliner_helmet.paa"};
		hiddenSelections[] = {"Camo"};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "A3\Characters_F\Common\headgear_helmet_heli";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
			hiddenSelectionsTextures[] = {"\NLD_Vehicle_Units\Air\Data\lifeliner\pilots\lifeliner_helmet.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class NLD_Police_belt: Vest_Camo_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[NLD] police Belt";
		picture = "\A3\Characters_F\data\ui\icon_V_Belt_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply80";
			mass = 20;
			armor = "5*0.2";
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
		};
	};

	class NLD_KMAR_Camo : Uniform_Base {
		scope = 2;
		displayName = "[NLD] KMAR Camo";
		picture = "\NLD_Infantry_Units\Units\Support\Data\uim\KMAR.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_KMAR_Police";
			containerClass = "Supply60";
			mass = 1;
		};
	};

	class NLD_KMAR_Camo2 : Uniform_Base {
		scope = 2;
		displayName = "[NLD] KMAR Camo2";
		picture = "\NLD_Infantry_Units\Units\Support\Data\uim\KMAR_coveralls.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_KMAR_Police2";
			containerClass = "Supply60";
			mass = 1;
		};
	};

	class NLD_KMAR_Crew_Camo : Uniform_Base {
		scope = 2;
		displayName = "[NLD] KMAR Crew Camo";
		picture = "\NLD_Infantry_Units\Units\Support\Data\uim\KMAR_coveralls.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "NLD_KMAR_Crew";
			containerClass = "Supply60";
			mass = 1;
		};
	};

    class NLDO_KMAR_Vest: V_PlateCarrier1_blk
	{
		scope = 2;
		displayName = "[NLD] KMAR Vest";
		picture="\A3\Characters_F_EPC\Data\UI\icon_V_PressVest_CA.paa";
		model = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Support\Data\KMAR_Vest.paa"};
                
                  

		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
			containerClass = "Supply120";
			hiddenSelections[] = {"camo"};
			mass = 50;
			armor = 60;
			passThrough = 0.30;
		};
	};
	class NLD_KMAR_Helmet: H_HelmetCrew_B
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] KMAR Helmet";
		picture = "\NLD_Infantry_Units\Units\Support\Data\uim\KMAR_Helmet.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Support\Data\KMAR_Helmet.paa"};
		hiddenSelections[] = {"Camo"};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
			hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Support\Data\KMAR_Helmet.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
};
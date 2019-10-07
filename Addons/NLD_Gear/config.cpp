enum {
	StabilizedInAxesNone = 0,
	StabilizedInAxisX = 1,
	StabilizedInAxisY = 2,
	StabilizedInAxesBoth = 3,
	StabilizedInAxesXYZ = 4,
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	OrdinalEnum = 2,
	destructbuilding = 1
};

//Class NLD_Gear : config.bin{
class CfgPatches
{
	class NLD_Units_Gear
	{
		units[] = {"NLD_WLD_rifleman","NLD_DST_rifleman","NLD_NFPT_rifleman","NLD_NFPG_rifleman","NLD_WTR_rifleman","NLD_UN_WLD_rifleman","NLD_UN_DST_rifleman","NLD_SF_Operator","NLD_MTP_Operator","NLD_KM_Operator","NLD_DSI_assault"};
		weapons[] = {"NLD_WLD_Camo","NLD_DST_Camo","NLD_DSI_Camo","NLD_NFPT_Camo","NLD_NFPG_Camo","NLD_WTR_Camo","NLD_SF_CAMO","NLD_MTP_CAMO","NLD_MTP_CAMO2","NLD_KM_Camo","NLD_KM_Camo2","NLD_Helipilot_base","NLD_Helicrew_base","NLD_Crew_base","NLD_Crew_MLRS_base","NLD_Police_Uniform","NLD_Lifeliner_Uniform","NLD_KMAR_Camo","NLD_KMAR_Camo2","NLD_KMAR_Crew_Camo","NLD_WLD_Vest","NLD_NFPT_Vest","NLD_NFPG_Vest","NLD_DST_Vest","NLD_WTR_Vest","NLD_SF_Vest","NLD_UN_Vest","NLD_SF_PlateCarrier","NLD_MTP_PlateCarrier","NLDO_KMAR_Vest","NLD_Police_belt","NLD_WLD_Helmet","NLD_DST_Helmet","NLD_NFPT_Helmet","NLD_NFPG_Helmet","NLD_WTR_Helmet","NLD_KM_Helmet","NLD_UN_Helmet","NLD_WLD_Helmet_Camo","NLD_SF_ECH","NLD_MTP_ECH","NLD_Police_Helmet","NLD_Lifeliner_Helmet","NLD_KMAR_Helmet","NLD_M1Helmet_Green","NLD_WLD_BoonieHat","NLD_DST_BoonieHat","NLD_NFPT_BoonieHat","NLD_NFPG_BoonieHat","NLD_SF_BoonieHat","NLD_WLD_BaseballCap","NLD_DST_BaseballCap","NLD_NFPT_BaseballCap","NLD_NFPG_BaseballCap","NLD_SF_BaseballCap"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class O_officer_F;
	class B_Recon_F;
	class B_diver_F;
	class B_Lifeboat;
	class B_Boat_Transport_01_F;
	class B_Boat_Armed_01_minigun_F;
	class NLD_WLD_rifleman: B_Soldier_base_F
	
	{
		side = 1;
		scope = 2;
		displayName = "[NLD] Woodland Rifleman";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01";
		uniformClass = "NLD_WLD_Camo";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa",""};
		hasDriver = 1;
		linkedItems[] = {"NLD_WLD_Vest","NLD_WLD_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NLD_WLD_Vest","NLD_WLD_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class NLD_DST_rifleman: NLD_WLD_rifleman
	{
		displayName = "[NLD] Desert Rifleman";
		uniformClass = "NLD_DST_Camo";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa",""};
		linkedItems[] = {"NLD_DST_Vest","NLD_DST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NLD_DST_Vest","NLD_DST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class NLD_NFPT_rifleman: NLD_WLD_rifleman
	{
		displayName = "[NLD] NFP Tan Rifleman";
		uniformClass = "NLD_NFPT_Camo";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Uniform.paa",""};
		linkedItems[] = {"NLD_NFPT_Vest","NLD_NFPT_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPT_Vest","NLD_NFPT_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class NLD_NFPG_rifleman: NLD_WLD_rifleman
	{
		displayName = "[NLD] NFP Green Rifleman";
		uniformClass = "NLD_NFPG_Camo";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Uniform.paa",""};
		linkedItems[] = {"NLD_NFPG_Vest","NLD_NFPG_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NLD_NFPG_Vest","NLD_NFPG_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class NLD_WTR_rifleman: NLD_WLD_rifleman
	{
		displayName = "[NLD] Winter Rifleman";
		uniformClass = "NLD_WTR_Camo";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Uniform.paa",""};
		linkedItems[] = {"NLD_WTR_Vest","NLD_WTR_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NLD_WTR_Vest","NLD_WTR_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class NLD_UN_WLD_rifleman: NLD_WLD_rifleman
	{
		vehicleClass = "Infantry_UN_Woodland";
		uniformClass = "NLD_WLD_Camo";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Uniform.paa","\NLD_Infantry_Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_UN_Vest","NLD_UN_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NLD_UN_Vest","NLD_UN_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class NLD_UN_DST_rifleman: NLD_WLD_rifleman
	{
		vehicleClass = "Infantry_UN_Desert";
		uniformClass = "NLD_DST_Camo";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Uniform.paa","\NLD_Infantry_Units\Badges\11LMB.paa"};
		linkedItems[] = {"NLD_UN_Vest","NLD_UN_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NLD_UN_Vest","NLD_UN_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class NLD_SF_Operator: NLD_WLD_rifleman
	{
		displayName = "[NLD] Black Operator";
		vehicleClass = "Infantry_SF";
		uniformClass = "NLD_SF_Camo";
		hiddenSelectionsTextures[] = {"\NLD_Gear\SF\Data\Uniform.paa",""};
		linkedItems[] = {"NLD_SF_PlateCarrier","NLD_SF_ECH","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnLinkedItems[] = {"NLD_SF_PlateCarrier","NLD_SF_ECH","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
	};
	class NLD_MTP_Operator: NLD_SF_Operator
	{
		displayName = "[NLD] MTP Operator";
		uniformClass = "NLD_MTP_Camo";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\MTP\Data\Uniform.paa","\NLD_Infantry_Units\Badges\KCT.paa"};
		hiddenSelectionsMaterials[] = {"NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_MTP_PlateCarrier","NLD_MTP_ECH","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NLD_MTP_PlateCarrier","NLD_MTP_ECH","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class NLD_DSI_assault: NLD_SF_Operator
	{
		displayName = "[NLD] DSI assault (HK416)";
		uniformClass = "NLD_DSI_Camo";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Uniform_DSI.paa","\NLD_Infantry_Units\Badges\DSI.paa"};
		hiddenSelectionsMaterials[] = {"NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_Vest_DSI","NLD_Helmet_DSI","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NLD_Vest_DSI","NLD_Helmet_DSI","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class NLD_AT_assault: NLD_SF_Operator
	{
		displayName = "[NLD] AT assault (MP5)";
		uniformClass = "NLD_AT_Camo";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Uniform_AT.paa","\NLD_Infantry_Units\Badges\DSI.paa"};
		hiddenSelectionsMaterials[] = {"NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_Vest_AT","NLD_SF_ECH","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NLD_Vest_AT","NLD_SF_ECH","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class NLD_KM_Operator: NLD_SF_Operator
	{
		displayName = "[NLD] KM Operator";
		uniformClass = "NLD_KM_Camo";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[] = {"\NLD_Gear\MTP\Data\Uniform.paa","\NLD_Infantry_Units\Badges\KCT.paa"};
		hiddenSelectionsMaterials[] = {"NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		linkedItems[] = {"NLD_KM_PlateCarrier","NLD_KM_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"NLD_KM_PlateCarrier","NLD_KM_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
};
class cfgWeapons
{
	class InventoryItem_Base_F;
	class UniformItem: InventoryItem_Base_F
	{
		type = 801;
	};
	class ItemCore;
	class HeadgearItem;
	class H_HelmetB;
	class H_HelmetIA;
	class H_Booniehat_khk;
	class H_MilCap_mcamo;
	class H_HelmetB_plain_mcamo;
	class H_HelmetCrew_B;
	class Uniform_Base;
	class U_B_HeliPilotCoveralls;
	class VestItem;
	class V_PlateCarrier1_blk;
	class V_PlateCarrierIA1_dgtl;
	class V_Chestrig_oli;
	class NVGoggles_OPFOR;
	class H_HelmetB_light_black;
	class V_PlateCarrierIAGL_oli;
	class V_PlateCarrierIA2_dgtl;
	
	class NLD_WLD_Camo: Uniform_Base
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] Woodland Camo";
		picture = "\NLD_Gear\Woodland\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_WLD_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	
	class NLD_DSI_Camo: NLD_WLD_Camo
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] DSI Camo";
		picture = "\NLD_Gear\SF\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelectionsMaterials[] = {"NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_DSI_assault";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	
	class NLD_AT_Camo: NLD_WLD_Camo
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] AT Camo";
		picture = "\NLD_Gear\Support\Data\uim\KMAR_coveralls.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelectionsMaterials[] = {"NLD_Gear\Korps_Mariniers\Data\data\TRYKuni2.rvmat"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_AT_assault";
			containerClass = "Supply60";
			mass = 1;
		};
	};

	class NLD_DST_Camo: Uniform_Base
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] Desert Camo";
		picture = "\NLD_Gear\Desert\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_DST_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	class NLD_NFPT_Camo: NLD_WLD_Camo
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] NFP-Tan Camo";
		picture = "\NLD_Gear\NFP-Tan\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_NFPT_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	class NLD_NFPG_Camo: NLD_WLD_Camo
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] NFP-Green Camo";
		picture = "\NLD_Gear\NFP-Green\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_NFPG_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	class NLD_WTR_Camo: NLD_WLD_Camo
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] Winter Camo";
		picture = "\NLD_Gear\Winter\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_WTR_rifleman";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	class NLD_SF_CAMO: NLD_WLD_Camo
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] Black Camo";
		picture = "\NLD_Gear\SF\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_SF_Operator";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	class NLD_MTP_CAMO: NLD_WLD_Camo
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] MTP Camo";
		picture = "\NLD_Gear\MTP\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_MTP_Operator";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	class NLD_MTP_CAMO2: NLD_WLD_Camo
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] MTP Camo2";
		picture = "\NLD_Gear\MTP\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_MTP_Operator";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	class NLD_KM_Camo: Uniform_Base
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] KM Camo";
		picture = "\NLD_Gear\Korps_Mariniers\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_KM_Operator";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	class NLD_KM_Camo2: Uniform_Base
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] KM Camo2";
		picture = "\NLD_Gear\Korps_Mariniers\Data\uim\Uniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_KM_Operator_MP5";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	class NLD_Helipilot_base: U_B_HeliPilotCoveralls
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] HeliPilot Coveralls";
		genericNames = "NLD_Units";
		picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_Helipilot";
			containerClass = "Supply90";
			mass = 40;
		};
	};
	class NLD_Helicrew_base: U_B_HeliPilotCoveralls
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] HeliCrew Coveralls";
		picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_Helicrew";
			containerClass = "Supply90";
			mass = 40;
		};
	};
	class NLD_Crew_base: Uniform_Base
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] Crew Coveralls";
		picture = "\NLD_Gear\Woodland\Data\uim\WorkUniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_Crew";
			containerClass = "Supply90";
			mass = 40;
		};
	};
	class NLD_Crew_MLRS_base: Uniform_Base
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 1;
		displayName = "[NLD] Crew MLRS Coveralls";
		picture = "\NLD_Gear\Woodland\Data\uim\WorkUniform.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_Crew_MLRS";
			containerClass = "Supply90";
			mass = 40;
		};
	};
	class NLD_Police_Uniform: U_B_HeliPilotCoveralls
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] Police Pilot Uniform ";
		picture = "\NLD_Gear\police\pilots\ui\police_pilot.paa";
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
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] Lifeliner Pilot Uniform ";
		picture = "\NLD_Gear\lifeliner\pilots\ui\lifeliner_pilot.paa";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_Lifeliner_F";
			containerClass = "Supply80";
			mass = 20;
		};
	};
	class NLD_KMAR_Camo: Uniform_Base
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] KMAR Camo";
		picture = "\NLD_Gear\Support\Data\uim\KMAR.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_KMAR_Police";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	class NLD_KMAR_Camo2: Uniform_Base
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] KMAR Camo2";
		picture = "\NLD_Gear\Support\Data\uim\KMAR_coveralls.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_KMAR_Police2";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	class NLD_KMAR_Crew_Camo: Uniform_Base
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] KMAR Crew Camo";
		picture = "\NLD_Gear\Support\Data\uim\KMAR_coveralls.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "NLD_KMAR_Crew";
			containerClass = "Supply60";
			mass = 1;
		};
	};
	class NLD_WLD_Vest: V_PlateCarrierIA1_dgtl
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] Woodland Vest";
		picture = "\NLD_Gear\Desert\Data\uim\Vest.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Vest.paa"};
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		class ItemInfo: VestItem
		{
			mass = 20;
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			containerClass = "Supply120";
			hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Vest.paa"};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	
	class NLD_AT_Vest: V_PlateCarrierIA1_dgtl
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] AT Vest";
		picture = "\NLD_Gear\SF\Data\uim\Vest.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Vest_AT.paa"};
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		class ItemInfo: VestItem
		{
			mass = 20;
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			containerClass = "Supply120";
			hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Vest_AT.paa"};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	
	class NLD_NFPT_Vest: V_PlateCarrier1_blk
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] NFP-Tan Vest";
		picture = "\NLD_Gear\NFP-Tan\Data\uim\Vest.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Vest.paa"};
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		class ItemInfo: VestItem
		{
			mass = 20;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass = "Supply120";
			hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Vest.paa"};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class NLD_NFPG_Vest: NLD_NFPT_Vest
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		displayName = "[NLD] NFP-Green Vest";
		picture = "\NLD_Gear\NFP-Green\Data\uim\Vest.paa";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Vest.paa"};
	};
	class NLD_DST_Vest: NLD_WLD_Vest
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 1;
		displayName = "[NLD] Desert Vest";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Vest.paa"};
	};
	class NLD_WTR_Vest: NLD_WLD_Vest
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		displayName = "[NLD] Winter Vest";
		picture = "\NLD_Gear\Winter\Data\uim\Vest.paa";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Vest.paa"};
	};
	class NLD_SF_Vest: NLD_WLD_Vest
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		displayName = "[NLD] Black Vest";
		picture = "\NLD_Gear\SF\Data\uim\Vest.paa";
		hiddenSelectionsTextures[] = {"\NLD_Gear\SF\Data\Vest.paa"};
	};
	class NLD_UN_Vest: V_PlateCarrierIA1_dgtl
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] UN Vest";
		picture = "\NLD_Gear\Desert\Data\uim\Vest.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\UN\Data\Vest.paa"};
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		class ItemInfo: VestItem
		{
			mass = 20;
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			containerClass = "Supply120";
			hiddenSelectionsTextures[] = {"\NLD_Gear\UN\Data\Vest.paa"};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class NLD_SF_PlateCarrier: V_PlateCarrier1_blk
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] Black Plate Carrier";
		picture = "\NLD_Gear\Desert\Data\uim\Vest.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\SF\Data\PlateCarrier.paa"};
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		class ItemInfo: VestItem
		{
			mass = 20;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
			containerClass = "Supply120";
			hiddenSelectionsTextures[] = {"\NLD_Gear\SF\Data\PlateCarrier.paa"};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class NLD_DSI_PlateCarrier: V_PlateCarrier1_blk
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] DSI Plate Carrier";
		picture = "\NLD_Gear\SF\Data\uim\Vest.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Vest_DSI.paa"};
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		class ItemInfo: VestItem
		{
			mass = 20;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass = "Supply120";
			hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Vest_DSI.paa"};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	
	class NLD_Vest_DSI_EOD: V_PlateCarrierIAGL_oli
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] DSI EOD Carrier";
		picture = "\NLD_Gear\SF\Data\uim\Vest.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Vest_DSI_EOD.paa"};
		model = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
		class ItemInfo: VestItem
		{
			mass = 20;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
			containerClass = "Supply120";
			hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Vest_DSI_EOD.paa"};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
					explosionShielding  = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
					explosionShielding  = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
					explosionShielding  = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
					explosionShielding  = 0.5;
				};
			};
		};
	};
	
	class NLD_Vest_AT_EOD: V_PlateCarrierIA2_dgtl
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] AT EOD Carrier";
		picture = "\NLD_Gear\SF\Data\uim\Vest.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Vest_AT.paa"};
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		class ItemInfo: VestItem
		{
			mass = 20;
			uniformmodel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			containerClass = "Supply120";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Vest_AT.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
					explosionShielding  = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.3;
					explosionShielding  = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
					explosionShielding  = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
					explosionShielding  = 0.5;
				};
			};
		};
	};
	class NLD_MTP_PlateCarrier: NLD_SF_PlateCarrier
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		displayName = "[NLD] MTP Plate Carrier";
		picture = "\NLD_Gear\MTP\Data\uim\PlateCarrier.paa";
		hiddenSelectionsTextures[] = {"\NLD_Gear\MTP\Data\PlateCarrier.paa"};
	};
	class NLDO_KMAR_Vest: V_PlateCarrier1_blk
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		displayName = "[NLD] KMAR Vest";
		picture = "\A3\Characters_F_EPC\Data\UI\icon_V_PressVest_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\Support\Data\KMAR_Vest.paa"};
		model = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
		class ItemInfo: VestItem
		{
			mass = 20;
			uniformModel = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
			containerClass = "Supply120";
			hiddenSelectionsTextures[] = {"\NLD_Gear\Support\Data\KMAR_Vest.paa"};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};

	class NLD_Police_belt: V_PlateCarrier1_blk
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
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
			hiddenSelections[] = {"camo"};
		};
	};
	class NLD_WLD_Helmet: H_HelmetIA
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Woodland Helmet";
		picture = "\NLD_Gear\Woodland\Data\uim\Helmet.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Helmet.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			modelSides[] = {3,1};
			hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\Helmet.paa"};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class NLD_DST_Helmet: NLD_WLD_Helmet
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		displayName = "[NLD] Desert Helmet";
		picture = "\NLD_Gear\Desert\Data\uim\Helmet.paa";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\Helmet.paa"};
	};
	class NLD_WTR_Helmet: NLD_WLD_Helmet
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		displayName = "[NLD] Winter Helmet";
		picture = "\NLD_Gear\Winter\Data\uim\Helmet.paa";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Winter\Data\Helmet.paa"};
	};
	class NLD_KM_Helmet: NLD_WLD_Helmet
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		displayName = "[NLD] KM Helmet";
		picture = "\NLD_Gear\Korps_Mariniers\Data\uim\Helmet.paa";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Korps_Mariniers\Data\Helmet.paa"};
	};

	class NLD_UN_Helmet: NLD_WLD_Helmet
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		displayName = "[NLD] UN Helmet";
		picture = "\NLD_Gear\UN\Data\uim\Helmet.paa";
		hiddenSelectionsTextures[] = {"\NLD_Gear\UN\Data\Helmet.paa"};
	};
	class NLD_WLD_Helmet_Camo: H_HelmetB
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Woodland Helmet Camo";
		picture = "\NLD_Gear\Woodland\Data\uim\Helmet.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\HelmetCamo.paa","\A3\characters_f\common\data\ghillie2_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			modelSides[] = {3,1};
			hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\HelmetCamo.paa"};
			hiddenSelections[] = {"camo1","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class NLD_SF_ECH: H_HelmetB
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayname = "[NLD] Black ECH";
		picture = "\NLD_Gear\SF\Data\uim\ECH.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\SF\Data\ECH.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			modelSides[] = {3,1};
			hiddenSelectionsTextures[] = {"\NLD_Gear\SF\Data\ECH.paa"};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	class NLD_MTP_ECH: H_HelmetB
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayname = "[NLD] MTP ECH";
		picture = "\NLD_Gear\SF\Data\uim\ECH.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\MTP\Data\ECH.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			modelSides[] = {3,1};
			hiddenSelectionsTextures[] = {"\NLD_Gear\MTP\Data\ECH.paa"};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
		class NLD_NFPT_Helmet: H_HelmetB
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] NFP-Tan Helmet";
		picture = "\NLD_Gear\NFP-Tan\Data\uim\Helmet.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Helmet.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			modelSides[] = {3,1};
			hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\Helmet.paa"};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
		class NLD_NFPG_Helmet: H_HelmetB
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] NFP-Green Helmet";
		picture = "\NLD_Gear\NFP-Green\Data\uim\Helmet.paa";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Helmet.paa"};
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelections[] = {"camo"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			modelSides[] = {3,1};
			hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\Helmet.paa"};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	class NLD_DSI_Helmet: H_HelmetB_light_black
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayname = "[NLD] DSI Helmet";
		picture = "\NLD_Gear\SF\Data\uim\ECH.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Helmet_DSI.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			modelSides[] = {3,1};
			hiddenSelectionsTextures[] = {"\NLD_Gear\DSI\Helmet_DSI.paa"};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	class NLD_Police_Helmet: ItemCore
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Police Helmet";
		picture = "\NLD_Gear\police\pilots\ui\police_helmet.paa";
		model = "A3\Characters_F\Common\headgear_helmet_heli";
		hiddenSelectionsTextures[] = {"\NLD_Gear\police\pilots\police_helmet.paa"};
		hiddenSelections[] = {"Camo"};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "A3\Characters_F\Common\headgear_helmet_heli";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
			hiddenSelectionsTextures[] = {"\NLD_Gear\police\pilots\police_helmet.paa"};
			hiddenSelections[] = {"Camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class NLD_Lifeliner_Helmet: ItemCore
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Lifeliner Helmet";
		picture = "\NLD_Gear\lifeliner\pilots\ui\lifeliner_helmet.paa";
		model = "A3\Characters_F\Common\headgear_helmet_heli";
		hiddenSelectionsTextures[] = {"\NLD_Gear\lifeliner\pilots\lifeliner_helmet.paa"};
		hiddenSelections[] = {"Camo"};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "A3\Characters_F\Common\headgear_helmet_heli";
			modelSides[] = {3,1};
			hiddenSelectionsTextures[] = {"\NLD_Gear\lifeliner\pilots\lifeliner_helmet.paa"};
			hiddenSelections[] = {"Camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class NLD_KMAR_Helmet: H_HelmetCrew_B
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] KMAR Helmet";
		picture = "\NLD_Gear\Support\Data\uim\KMAR_Helmet.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Support\Data\KMAR_Helmet.paa"};
		hiddenSelections[] = {"Camo"};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
			modelSides[] = {3,1};
			hiddenSelectionsTextures[] = {"\NLD_Gear\Support\Data\KMAR_Helmet.paa"};
			hiddenSelections[] = {"Camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class NLD_WLD_BoonieHat: ItemCore
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Woodland Boonie Hat";
		picture = "\NLD_Gear\Woodland\Data\uim\BoonieHat.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\BoonieHat.paa"};
		hiddenSelections[] = {"Camo"};
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			armor = "0.5";
			passThrough = 0.95;
			hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\BoonieHat.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class NLD_DST_BoonieHat: NLD_WLD_BoonieHat
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		displayName = "[NLD] Desert Boonie Hat";
		picture = "\NLD_Gear\Desert\Data\uim\BoonieHat.paa";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\BoonieHat.paa"};
	};
	class NLD_NFPT_BoonieHat: NLD_WLD_BoonieHat
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		displayName = "[NLD] NFP-Tan Boonie Hat";
		picture = "\NLD_Gear\NFP-Tan\Data\uim\BoonieHat.paa";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\BoonieHat.paa"};
	};
	class NLD_NFPG_BoonieHat: NLD_WLD_BoonieHat
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		displayName = "[NLD] NFP-Green Boonie Hat";
		picture = "\NLD_Gear\NFP-Green\Data\uim\BoonieHat.paa";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\BoonieHat.paa"};
	};
	class NLD_SF_BoonieHat: NLD_WLD_BoonieHat
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		displayName = "[NLD] Black Boonie Hat";
		picture = "\NLD_Gear\SF\Data\uim\BoonieHat.paa";
		hiddenSelectionsTextures[] = {"\NLD_Gear\SF\Data\BoonieHat.paa"};
	};
	class NLD_WLD_BaseballCap: ItemCore
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[NLD] Woodland Baseball Cap";
		picture = "\NLD_Gear\Woodland\Data\uim\BaseballCap.paa";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\BaseballCap.paa"};
		hiddenSelections[] = {"Camo"};
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = "0.5";
			passThrough = 0.95;
			hiddenSelectionsTextures[] = {"\NLD_Gear\Woodland\Data\BaseballCap.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class NLD_DST_BaseballCap: NLD_WLD_BaseballCap
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		displayName = "[NLD] Desert Baseball Cap";
		picture = "\NLD_Gear\Desert\Data\uim\BaseballCap.paa";
		hiddenSelectionsTextures[] = {"\NLD_Gear\Desert\Data\BaseballCap.paa"};
	};
	class NLD_NFPT_BaseballCap: NLD_WLD_BaseballCap
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		displayName = "[NLD] NFP-Tan Baseball Cap";
		picture = "\NLD_Gear\NFP-Tan\Data\uim\BaseballCap.paa";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Tan\Data\BaseballCap.paa"};
	};
	class NLD_NFPG_BaseballCap: NLD_WLD_BaseballCap
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		displayName = "[NLD] NFP-Green Baseball Cap";
		picture = "\NLD_Gear\NFP-Green\Data\uim\BaseballCap.paa";
		hiddenSelectionsTextures[] = {"\NLD_Gear\NFP-Green\Data\BaseballCap.paa"};
	};
	class NLD_SF_BaseballCap: NLD_WLD_BaseballCap
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		displayName = "[NLD] Black Baseball Cap";
		picture = "\NLD_Gear\SF\Data\uim\BaseballCap.paa";
		hiddenSelectionsTextures[] = {"\NLD_Gear\SF\Data\BaseballCap.paa"};
	};
	class NLD_NVGoggles: NVGoggles_OPFOR
	{
		dlc = "NLD_Units";
		author = "Lowlands Tactical";
		displayName = "[NLD] NV Goggles";
	};
};
//};

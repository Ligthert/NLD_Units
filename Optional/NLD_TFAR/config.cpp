class CfgPatches
{
	class NLD_TFAR_Backpacks
	{
		units[] = {"NLD_rt1523g_Woodland","NLD_rt1523g_Desert","NLD_rt1523g_MTP","NLD_rt1523g_KM","NLD_rt1523g_NFP"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Modules_F","A3_UI_F","A3_Structures_F_Items_Electronics","A3_Weapons_F_ItemHolders"};	
	};
};

class CfgVehicles
{
	class tf_rt1523g;

	class NLD_rt1523g_Woodland: tf_rt1523g
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] RT-1523G (ASIP) Woodland";
		descriptionShort = "RT-1523G (ASIP) NLD Woodland long range radio 20km";
		maximumLoad = 160;
		mass = 120;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"NLD_TFAR\data\TFAR_LR_Woodland_co.paa"};
		model = "\task_force_radio_items\models\clf_nicecomm2";
	};

	class NLD_rt1523g_Desert: tf_rt1523g
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] RT-1523G (ASIP) Desert";
		descriptionShort = "RT-1523G (ASIP) NLD Desert long range radio 20km";
		maximumLoad = 160;
		mass = 120;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"NLD_TFAR\data\TFAR_LR_Desert_co.paa"};
		model = "\task_force_radio_items\models\clf_nicecomm2";
	};
	
	class NLD_rt1523g_MTP: tf_rt1523g
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] RT-1523G (ASIP) MTP";
		descriptionShort = "RT-1523G (ASIP) NLD MTP long range radio 20km";
		maximumLoad = 160;
		mass = 120;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"NLD_TFAR\data\TFAR_LR_MTP_co.paa"};
		model = "\task_force_radio_items\models\clf_nicecomm2";
	};
	
	class NLD_rt1523g_KM: tf_rt1523g
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] RT-1523G (ASIP) KM";
		descriptionShort = "RT-1523G (ASIP) NLD KM long range radio 20km";
		maximumLoad = 160;
		mass = 120;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"NLD_TFAR\data\TFAR_LR_KM_co.paa"};
		model = "\task_force_radio_items\models\clf_nicecomm2";
	};
	
	class NLD_rt1523g_NFP: tf_rt1523g
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] RT-1523G (ASIP) NFP";
		descriptionShort = "RT-1523G (ASIP) NLD NFP long range radio 20km";
		maximumLoad = 160;
		mass = 120;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"NLD_TFAR\data\TFAR_LR_NFP_co.paa"};
		model = "\task_force_radio_items\models\clf_nicecomm2";
	};
	
	class NLD_rt1523g_BLACK: tf_rt1523g
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] RT-1523G (ASIP) BLACK";
		descriptionShort = "RT-1523G (ASIP) NLD BLACK long range radio 20km";
		maximumLoad = 160;
		mass = 120;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"NLD_TFAR\data\TFAR_LR_BLACK_co.paa"};
		model = "\task_force_radio_items\models\clf_nicecomm2";
	};
};

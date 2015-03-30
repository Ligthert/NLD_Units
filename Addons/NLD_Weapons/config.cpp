class CfgPatches {
	class NLD_Units_Weapons {
		units[] = {};
		weapons[] = {"NLD_blk_C8","NLD_blk_C8GL","NLD_Minimi","NLD_MAG"};
		requiredVersion = 0.1;
		requiredAddons[] = {"NLD_Units_Infantry"};
	};
};

// Weapons
class CfgWeapons {

	// ext class ref
	class CUP_arifle_M4A1_black;
	class CUP_arifle_M4A1_BUIS_GL;
	class CUP_lmg_M249_para;
	class CUP_lmg_m240;
	class CUP_srifle_M107_Base;

	// Diemaco C8
	class NLD_blk_C8: CUP_arifle_M4A1_black {
		displayName="Diemaco C8";
		author="Lowlands Tactical";
		scope=2;
		class Library {libTextDesc = "Dimaco C8";}; //$STR_LIB_M16;};
		descriptionShort = "Dimaco C8"; //$STR_DSS_M16A2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountM4";
				item = "CUP_optic_ACOG";
			};
			class LinkedItemsAcc
			{
				slot = "CUP_PicatinnySideMountM4";
				item = "acc_pointer_IR";
			};
		};
	};

	// Diemaco C8 GL
	class NLD_blk_C8GL: CUP_arifle_M4A1_BUIS_GL {
		displayName="Diemaco C8 GL";
		author="Lowlands Tactical";
		scope=2;
		class Library {libTextDesc = "Dimaco C8";}; //$STR_LIB_M16;};
		descriptionShort = "Dimaco C8 GL"; //$STR_DSS_M16A2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountM4";
				item = "CUP_optic_ACOG";
			};
			class LinkedItemsAcc
			{
				slot = "CUP_PicatinnySideMountM4";
				item = "acc_pointer_IR";
			};
		};
	};

	// Minimi
	class NLD_Minimi: CUP_lmg_M249_para {
		displayName="FN Minimi";
		author="Lowlands Tactical";
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountM249";
				item = "CUP_optic_ElcanM145";
			};
			class LinkedItemsAcc
			{
				slot = "CUP_PicatinnySideMountM249";
				item = "acc_pointer_IR";
			};
		};
	};

	// Mag
	class NLD_MAG: CUP_lmg_M240 {
		displayName="FN MAG";
		author="Lowlands Tactical";
		scope=2;
		magazines[] =
		{
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
			"NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountM240";
				item = "CUP_optic_ElcanM145";
			};
			class LinkedItemsAcc
			{
				slot = "CUP_PicatinnySideMountM240";
				item = "acc_pointer_IR";
			};
		};
	};
};

class CfgMagazines {

	// ext class ref
	class CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M;

	// 200rnd belt
	class NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M: CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M {
		author = "CUP";
		scope = 2;
		displayName = "7.62x51mm 200 Rnd 240 Belt (red tracers)";
		picture = "\A3\Weapons_F\Data\UI\M_200Rnd_65x39_CA.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		count = 200;
		type = 2 * 256;
		ammo = "B_762x51_Tracer_Red";
		initSpeed = 900;
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		descriptionShort = "7.62x51mm Belt (red tracers)";
	};
};
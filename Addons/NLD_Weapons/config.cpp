class CfgPatches {
	class NLD_Units_Weapons {
		units[] = {};
		weapons[] = {"NLD_blk_C8","NLD_blk_C8GL","NLD_Minimi","NLD_MAG","NLD_AWM","NLD_AT4","NLD_Ammo_Crate"};
		requiredVersion = 0.1;
		requiredAddons[] = {"NLD_Units_Infantry"};
	};
};

class CfgVehicleClasses
{
	class NLD_Ammo_Crates
	{
		displayName="[NLD] Ammo_Crates";
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
	class CUP_srifle_AWM_wdl;
	class CUP_launch_M136;
	class arifle_MXC_F;
	class arifle_MX_F;
	class arifle_MX_GL_F;
	class arifle_MX_SW_F;
	class arifle_MXM_F;

	// Diemaco C8
	class NLD_blk_C8: CUP_arifle_M4A1_black {
		displayName="[NLD] Diemaco C8";
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
		displayName="[NLD] Diemaco C8 GL";
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
		displayName="[NLD] FN Minimi";
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
	
	//AWM
	class NLD_AWM: CUP_srifle_AWM_wdl
	{
		displayName="[NLD] AWM";
		author="Lowlands Tactical";
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountAWM";
				item = "optic_LRPS";
			};
			class LinkedItemsBipod
			{
				slot = "CUP_PicatinnyUnderMountAWM";
				item = "bipod_01_F_blk";
			};
		};
	};

	// Mag
	class NLD_MAG: CUP_lmg_M240 {
		displayName="[NLD] FN MAG";
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
	
	//AT4
	class NLD_AT4: CUP_launch_M136 {
		displayName="[NLD] AT4";
		author="Lowlands Tactical";
		scope=2;
		magazines[] =
		{
			"CUP_M136_M"
		};
	};
	
	//MX SF
	class NLD_MX_C: arifle_MXC_F
	{
		author="Lowlands Tactical";
		displayName="[NLD] MX C SF";
		Scope=2;
		weaponPoolAvailable=1;
		picture = "\NLD_Weapons\MX series\UIM\UI\MX_C_SF.paa";
		hiddenselections[]=
		{
			"camo1"
		};
		hiddenselectionstextures[]=
		{
			"\NLD_Weapons\MX series\UIM\MX_C_SF.paa"
		};
	};
	class NLD_MX: arifle_MX_F
	{
		author="Lowlands Tactical";
		displayName="[NLD] MX SF";
		Scope=2;
		weaponPoolAvailable=1;
		picture = "\NLD_Weapons\MX series\UIM\UI\MX_SF.paa";
		hiddenselections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"\NLD_Weapons\MX series\UIM\MX_SF.paa",			
			"\NLD_Weapons\MX series\UIM\MX_C_SF.paa"
		};
	};
	class NLD_MX_GL: arifle_MX_GL_F
	{
		author="Lowlands Tactical";
		displayName="[NLD] MX GL SF";
		Scope=2;
		weaponPoolAvailable=1;
		picture = "\NLD_Weapons\MX series\UIM\UI\MX_GL_SF.paa";
		hiddenselections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"\NLD_Weapons\MX series\UIM\MX_SF.paa",	
			"\NLD_Weapons\MX series\UIM\MX_GL_SF.paa"
		};
	};
	class NLD_MX_SW: arifle_MX_SW_F
	{
		author="Lowlands Tactical";
		displayName="[NLD] MX SW SF";
		Scope=2;
		weaponPoolAvailable=1;
		picture = "\NLD_Weapons\MX series\UIM\UI\MX_SW_SF.paa";
		hiddenselections[]=
		{
			"camo1"
		};
		hiddenselectionstextures[]=
		{
			"\NLD_Weapons\MX series\UIM\MX_SW_SF.paa"
		};
	};
	class NLD_MX_DMR: arifle_MXM_F
	{
		author="Lowlands Tactical";
		displayName="[NLD] MX DMR SF";
		Scope=2;
		weaponPoolAvailable=1;
		picture = "\NLD_Weapons\MX series\UIM\UI\MX_DMR_SF.paa";
		hiddenselections[]=
		{
			"camo1"
		};
		hiddenselectionstextures[]=
		{
			"\NLD_Weapons\MX series\UIM\MX_DMR_SF.paa"
		};
	};
	
	class NLD_MX_C_SF: NLD_MX_C
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class NLD_MX_SF: NLD_MX
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class NLD_MX_GL_SF: NLD_MX_GL
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class NLD_MX_SW_SF: NLD_MX_SW
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_snd";
			};
		};
	};
	class NLD_MX_DMR_SF: NLD_MX_DMR
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_snd";
			};
		};
	};
	
	//MX Winter
	class NLD_MX_C_W: arifle_MXC_F
	{
		author="Lowlands Tactical";
		displayName="[NLD] MX C Winter";
		Scope=2;
		weaponPoolAvailable=1;
		picture = "\NLD_Weapons\MX series\Winter\UI\MX_C_Winter.paa";
		hiddenselections[]=
		{
			"camo1"
		};
		hiddenselectionstextures[]=
		{
			"\NLD_Weapons\MX series\Winter\MX_C_Winter.paa"
		};
	};
	class NLD_MX_W: arifle_MX_F
	{
		author="Lowlands Tactical";
		displayName="[NLD] MX Winter";
		Scope=2;
		weaponPoolAvailable=1;
		picture = "\NLD_Weapons\MX series\Winter\UI\MX_Winter.paa";
		hiddenselections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"\NLD_Weapons\MX series\Winter\MX_Winter.paa",			
			"\NLD_Weapons\MX series\Winter\MX_C_Winter.paa"
		};
	};
	class NLD_MX_GL_W: arifle_MX_GL_F
	{
		author="Lowlands Tactical";
		displayName="[NLD] MX GL Winter";
		Scope=2;
		weaponPoolAvailable=1;
		picture = "\NLD_Weapons\MX series\Winter\UI\MX_GL_Winter.paa";
		hiddenselections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"\NLD_Weapons\MX series\Winter\MX_Winter.paa",
			"\NLD_Weapons\MX series\Winter\MX_GL_Winter.paa"
		};
	};
	class NLD_MX_SW_W: arifle_MX_SW_F
	{
		author="Lowlands Tactical";
		displayName="[NLD] MX SW Winter";
		Scope=2;
		weaponPoolAvailable=1;
		picture = "\NLD_Weapons\MX series\Winter\UI\MX_SW_Winter.paa";
		hiddenselections[]=
		{
			"camo1"
		};
		hiddenselectionstextures[]=
		{
			"\NLD_Weapons\MX series\Winter\MX_SW_Winter.paa"
		};
	};
	class NLD_MX_DMR_W: arifle_MXM_F
	{
		author="Lowlands Tactical";
		displayName="[NLD] MX DMR Winter";
		Scope=2;
		weaponPoolAvailable=1;
		picture = "\NLD_Weapons\MX series\Winter\UI\MX_DMR_Winter.paa";
		hiddenselections[]=
		{
			"camo1"
		};
		hiddenselectionstextures[]=
		{
			"\NLD_Weapons\MX series\Winter\MX_DMR_Winter.paa"
		};
	};
	
	class NLD_MX_C_Winter: NLD_MX_C_W
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class NLD_MX_Winter: NLD_MX_W
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class NLD_MX_GL_Winter: NLD_MX_GL_W
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class NLD_MX_SW_Winter: NLD_MX_SW_W
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_blk";
			};
		};
	};
	class NLD_MX_DMR_Winter: NLD_MX_DMR_W
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_blk";
			};
		};
	};


	class  hgun_Rook40_F;
	class NLD_Glock17: hgun_Rook40_F
	{
		scope=2;
		displayName="[NLD] Glock17";
	};

/*
	class CUP_hgun_Glock17;
	class NLD_Glock17: CUP_hgun_Glock17
	{
		scope=2;
		displayName="[NLD] Glock17";
		minRange=0;
		minRangeProbab=1;
		midRange=25;
		midRangeProbab=1;
		maxRange=50;
		maxRangeProbab=1;
	};
*/

};

// Magazines
class CfgMagazines {

	// ext class ref
	class CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M;

	// 200rnd belt
	class NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M: CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M {
		author = "CUP";
		scope = 2;
		displayName = "[NLD] 7.62x51mm 200 Rnd 240 Belt (red tracers)";
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

// Ammo Boxes
class CfgVehicles
{
	class Box_NATO_AmmoVeh_F;
	
	class NLD_Ammo_Crate_Medisch : Box_NATO_AmmoVeh_F
	{
		scope = 2;
		model = "\NLD_Weapons\AmmoCrates\AmmoCrates.p3d";
		displayname = "Ammocrate Medisch";
		vehicleclass = "NLD_Ammo_Crates";
		icon="\NLD_Weapons\AmmoCrates\data\ui\map_ammomed_f_ca.paa";
		transportMaxWeapons=1000;
		transportMaxMagazines=1000;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\NLD_Weapons\AmmoCrates\data\ammocrates_medisch.paa"};
		class TransportItems {
			
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 100;
			};
			class _xx_Medikit {
				name = "Medikit";
				count = 100;
			};

		};
	};
	
	class NLD_Ammo_Crate_Munitie : Box_NATO_AmmoVeh_F
	{
		scope = 2;
		model = "\NLD_Weapons\AmmoCrates\AmmoCrates.p3d";
		displayname = "Ammocrate Munitie";
		vehicleclass = "NLD_Ammo_Crates";
		icon="\NLD_Weapons\AmmoCrates\data\ui\map_ammobox_f_ca.paa";
		transportMaxWeapons=1000;
		transportMaxMagazines=1000;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\NLD_Weapons\AmmoCrates\data\ammocrates_munitie.paa"};
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine = "CUP_30Rnd_556x45_Stanag";
				count = 100;
			};

			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 50;
			};

			class _xx_CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249
			{
				magazine = "CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249";
				count = "50";
			};

			class _xx_CUP_5Rnd_86x70_L115A1
			{
				magazine = "CUP_5Rnd_86x70_L115A1";
				count = 50;
			};

			class _xx_NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count = 50;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 50;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 50;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 50;
			};
			class _xx_CUP_1Rnd_HE_M203
			{
				magazine = "CUP_1Rnd_HE_M203";
				count = 50;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 50;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 50;
			};
		};
	};
	
	class NLD_Ammo_Crate_Explosieven : Box_NATO_AmmoVeh_F
	{
		scope = 2;
		model = "\NLD_Weapons\AmmoCrates\AmmoCrates.p3d";
		displayname = "Ammocrate Explosieven";
		vehicleclass = "NLD_Ammo_Crates";
		icon="\NLD_Weapons\AmmoCrates\data\ui\map_ammoord_f_ca.paa";
		transportMaxWeapons=1000;
		transportMaxMagazines=1000;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\NLD_Weapons\AmmoCrates\data\ammocrates_explosieven.paa"};
		class TransportMagazines
		{
			class _xx_ATMine_Range_Mag
			{
				magazine="ATMine_Range_Mag";
				count=10;
			};
			class _xx_APERSMine_Range_Mag
			{
				magazine="APERSMine_Range_Mag";
				count=10;
			};
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine="APERSBoundingMine_Range_Mag";
				count=10;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine="SLAMDirectionalMine_Wire_Mag";
				count=10;
			};
			class _xx_APERSTripMine_Wire_Mag
			{
				magazine="APERSTripMine_Wire_Mag";
				count=10;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=10;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=10;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine="SatchelCharge_Remote_Mag";
				count=10;
			};
		};
	};
	
	class NLD_Ammo_Crate_Wapens : Box_NATO_AmmoVeh_F
	{
		scope = 2;
		model = "\NLD_Weapons\AmmoCrates\AmmoCrates.p3d";
		displayname = "Ammocrate Wapens";
		vehicleclass = "NLD_Ammo_Crates";
		icon="\NLD_Weapons\AmmoCrates\data\ui\map_wpnsbox_f_ca.paa";
		transportMaxWeapons=1000;
		transportMaxMagazines=1000;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\NLD_Weapons\AmmoCrates\data\ammocrates_wapens.paa"};
		class TransportWeapons
		{
			class _xx_NLD_AT4
			{
				weapon = "NLD_AT4";
				count = 5;
			};
			class _xx_CUP_launch_FIM92Stinger
			{
				weapon = "CUP_launch_FIM92Stinger";
				count = 5;
			};
			class _xx_NLD_blk_C8
			{
				weapon = "NLD_blk_C8";
				count = 20;
			};
			class _xx_NLD_blk_C8GL
			{
				weapon = "NLD_blk_C8GL";
				count = 10;
			};
			class _xx_NLD_Minimi
			{
				weapon = "NLD_Minimi";
				count = 10;
			};
			class _xx_NLD_MAG
			{
				weapon = "NLD_MAG";
				count = 10;
			};
			class _xx_NLD_AWM
			{
				weapon = "NLD_AWM";
				count = 10;
			};
			class _xx_NLD_Glock17
			{
				weapon = "NLD_Glock17";
				count = 10;
			};
		};
	};
};
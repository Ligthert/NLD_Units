class CfgPatches {
	class NLD_Units_Weapons {
		units[] = {};
		weapons[] = {"NLD_blk_C8","NLD_blk_C8GL","NLD_Minimi","NLD_MAG","NLD_AWM","NLD_AT4","NLD_Ammo_Crate","NLD_HK416","NLD_HK416_GL","NLD_HK417","NLD_MX_C","NLD_MX","NLD_MX_GL","NLD_MX_SW","NLD_MX_DMR","NLD_C7","NLD_C7_GL","NLD_C8","NLD_C8_GL","MX_C_SF","MX_SF","MX_SW_SF","MX_GL_SF","MX_DMR_SF"};
		requiredVersion = 0.1;
		requiredAddons[] = {"NLD_Units_Main"};
		authors[]={"Sacha Ligthert","Smootch","ShiftySean"};
		url = "http://lowtac.nl/";
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
	class CUP_lmg_L110A1;
	class CUP_srifle_M107_Pristine;
	class CUP_srifle_M107_Desert;
	class CUP_srifle_AWM_wdl;
	class CUP_launch_M136_Loaded;
	class arifle_MXC_Black_F;
	class arifle_MX_Black_F;
	class arifle_MX_GL_Black_F;
	class arifle_MX_SW_Black_F;
	class arifle_MXM_Black_F;
	class arifle_SPAR_02_snd_F;
	class CUP_hgun_Glock17_blk;
	class Weapon_C7NLD_nogrip;
	class Weapon_C7NLD_BaseGL;
	class Weapon_C8NLD_BaseGL;
	class Weapon_C8NLD_nogrip;
	class SMG_03C_black;
	class CUP_glaunch_M32;
	class CUP_smg_MP5A5_flashlight;
	class CUP_sgun_M1014_vfg;
	class SMG_05_F;
	class srifle_DMR_02_F;
	class launch_MRAWS_green_F;
	class CUP_arifle_M4A1_black;
	class CUP_arifle_M4A1_BUIS_GL;
	class CUP_arifle_HK_M27;
	class CUP_arifle_HK416_CQB_Desert;
	class CUP_arifle_HK416_CQB_AG36_Desert;
	class CUP_arifle_HK417_20_Desert;
	class CUP_arifle_HK417_20;
	class CUP_arifle_HK416_CQB_AG36;
	class CUP_arifle_HK416_CQB_Black;
	class launch_I_Titan_short_F;
	class CUP_lmg_FNMAG_RIS_modern;
	
	
	class NLD_C7: Weapon_C7NLD_nogrip
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] Colt C7";
		Scope=2;
		weaponPoolAvailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="COLT_Scope_Down";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="COLT_Laser_Pointer_Tan";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "COLT_Grip";
			};
		};
	};
	
	class NLD_C7_GL: Weapon_C7NLD_BaseGL
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] Colt C7 M320";
		Scope=2;
		weaponPoolAvailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="COLT_Scope_Down";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="COLT_Laser_Pointer_Tan";
			};
		};
	};
	
	class NLD_C8: Weapon_C8NLD_nogrip
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] Colt C8";
		Scope=2;
		weaponPoolAvailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="COLT_Scope_Down";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="COLT_Laser_Pointer_Tan";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "COLT_Grip";
			};
		};
	};
	
	class NLD_C8_GL: Weapon_C8NLD_BaseGL
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] Colt C8 M320";
		Scope=2;
		weaponPoolAvailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="COLT_Scope_Down";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="COLT_Laser_Pointer_Tan";
			};
		};
	};
	
// Diemaco C8
	class NLD_blk_C8: CUP_arifle_M4A1_black {
		displayName="[NLD] Diemaco C8";
		author="Lowlands Tactical";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountM4";
				item = "CUP_optic_Elcan_reflex";
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
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountM4";
				item = "CUP_optic_Elcan_reflex";
			};
			class LinkedItemsAcc
			{
				slot = "CUP_PicatinnySideMountM4";
				item = "acc_pointer_IR";
			};
		};
	};

	// Minimi
	class NLD_Minimi: CUP_lmg_L110A1 {
		displayName="[NLD] FN Minimi";
		author="Lowlands Tactical";
		scope=2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountM249";
				item = "CUP_optic_AIMM_COMPM4_BLK";
			};
			class LinkedItemsAcc
			{
				slot = "CUP_PicatinnySideMountM249";
				item = "CUP_acc_LLM01_L";
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
				item = "CUP_optic_SB_3_12x50_PMII";
			};
			class LinkedItemsBipod
			{
				slot = "CUP_PicatinnyUnderMountAWM";
				item = "bipod_01_F_blk";
			};
		};
	};

	// Mag
	class NLD_MAG: CUP_lmg_FNMAG_RIS_modern {
		displayName="[NLD] FN MAG";
		author="Lowlands Tactical";
		scope=2;
		magazines[] =
		{
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
			"CUP_100Rnd_TE4_LRT4_red_Tracer_762x51_Belt_M"
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
	class NLD_AT4: CUP_launch_M136_Loaded {
		displayName="[NLD] AT4";
		author="Lowlands Tactical";
		scope=2;
		magazines[] =
		{
			"CUP_M136_M"
		};
	};
	
	//Panzerfaust 3
	class NLD_Pzf3: launch_MRAWS_green_F {
		displayName="[NLD] Panzerfaust 3";
		author="Lowlands Tactical";
		scope=1;
		magazines[] =
		{
			"MRAWS_HEAT_F"
		};
	};
	
	//Spike MR
	class NLD_Spike: launch_I_Titan_short_F {
		displayName="[NLD] Spike MR";
		author="Lowlands Tactical";
		scope=2;
		magazines[] =
		{
			"Titan_AT",
			"Titan_AP"
		};
	};

// Massive Paste Here

	//MX SF Compact
	class NLD_MX_C: arifle_MXC_Black_F
	{
		author="Lowlands Tactical";
		displayName="[NLD] MX C SF";
		Scope=2;
		baseWeapon = "NLD_MX_C";
		weaponPoolAvailable=1;
		picture = "\NLD_Weapons\MX series\UIM\UI\MX_C_SF.paa";
		hiddenselections[]= { "camo1" };
		hiddenselectionstextures[]= { "\NLD_Weapons\MX series\UIM\MX_C_SF.paa" };
	};

	// NLD MX
	class NLD_MX: arifle_MX_Black_F
	{
		author="Lowlands Tactical";
		displayName="[NLD] MX SF";
		Scope=2;
		baseWeapon = "NLD_MX";
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

	class NLD_MX_GL: arifle_MX_GL_Black_F
	{
		author="Lowlands Tactical";
		displayName="[NLD] MX GL SF";
		Scope=2;
		baseWeapon = "NLD_MX_GL";
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

	class NLD_MX_SW: arifle_MX_SW_Black_F
	{
		author="Lowlands Tactical";
		displayName="[NLD] MX SW SF";
		Scope=2;
		baseWeapon = "NLD_MX_SW";
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

	class NLD_MX_DMR: arifle_MXM_Black_F
	{
		author="Lowlands Tactical";
		displayName="[NLD] MX DMR SF";
		Scope=2;
		baseWeapon = "NLD_MX_DMR";
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
	class NLD_MX_C_W: arifle_MXC_Black_F
	{
		author="Lowlands Tactical";
		displayName="[NLD] MX C Winter";
		Scope=2;
		baseWeapon = "NLD_MX_C_W";
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

	class NLD_MX_W: arifle_MX_Black_F
	{
		author="Lowlands Tactical";
		displayName="[NLD] MX Winter";
		Scope=2;
		baseWeapon = "NLD_MX_W";
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

	class NLD_MX_GL_W: arifle_MX_GL_Black_F
	{
		author="Lowlands Tactical";
		displayName="[NLD] MX GL Winter";
		Scope=2;
		baseWeapon = "NLD_MX_GL_W";
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

	class NLD_MX_SW_W: arifle_MX_SW_Black_F
	{
		author="Lowlands Tactical";
		displayName="[NLD] MX SW Winter";
		Scope=2;
		baseWeapon = "NLD_MX_SW_W";
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

	class NLD_MX_DMR_W: arifle_MXM_Black_F
	{
		author="Lowlands Tactical";
		displayName="[NLD] MX DMR Winter";
		Scope=2;
		baseWeapon = "NLD_MX_DMR_W";
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


	//HK416
	class NLD_HK416: CUP_arifle_HK416_CQB_Black
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] HK416";
		Scope=2;
		weaponPoolAvailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_AIMM_COMPM4_BLK";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_LLM01_L";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "CUP_muzzle_snds_M16";
			};
		};
	};
	class NLD_HK416_DSI: CUP_arifle_HK416_CQB_Black
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] HK416 DSI";
		Scope=2;
		weaponPoolAvailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_AIMM_COMPM4_BLK";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_LLM01_L";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "CUP_muzzle_snds_M16";
			};
		};
	};
	class NLD_HK416_GL: CUP_arifle_HK416_CQB_AG36
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] HK416 GL";
		Scope=2;
		weaponPoolAvailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_AIMM_COMPM4_BLK";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_LLM01_L";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "CUP_muzzle_snds_M16";
			};
		};
	};
	class NLD_HK417: CUP_arifle_HK417_20
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] HK417";
		Scope=2;
		weaponPoolAvailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_SB_3_12x50_PMII";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_ANPEQ_15_Flashlight_Black_L";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "CUP_bipod_VLTOR_Modpod_black";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_B";
			};
		};
	};
	class NLD_HK417_DSI: CUP_arifle_HK417_20
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] HK417";
		Scope=2;
		weaponPoolAvailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_SB_3_12x50_PMII";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "CUP_bipod_VLTOR_Modpod_black";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_B";
			};
		};
	};
	class NLD_SIG_DSI: srifle_DMR_02_F
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] SIG SUR300";
		Scope=2;
		weaponPoolAvailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_SB_3_12x50_PMII";
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
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_338_black";
			};
		};
	};
	class NLD_M107: CUP_srifle_M107_Pristine
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] M107 Barret";
		Scope=2;
		weaponPoolAvailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_SB_3_12x50_PMII";
			};			
		};
	};
	class NLD_M107_Tan: CUP_srifle_M107_Desert
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] M107 Barret (Tan)";
		Scope=2;
		weaponPoolAvailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_SB_3_12x50_PMII";
			};			
		};
	};
	class NLD_HK_LSW: CUP_arifle_HK_M27
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] HK LSW";
		Scope=2;
		weaponPoolAvailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_AIMM_COMPM4_BLK";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_LLM01_L";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "CUP_bipod_VLTOR_Modpod_black";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "CUP_muzzle_snds_M16";
			};
		};
	};
	
	class NLD_Colt_LSW: CUP_arifle_HK_M27
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] LOAWNLD";
		Scope=2;
		weaponPoolAvailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_AIMM_COMPM4_BLK";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_LLM01_L";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "CUP_bipod_VLTOR_Modpod_black";
			};
		};
	};

	class NLD_HK416_SND: CUP_arifle_HK416_CQB_Desert
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] HK416 sand";
		Scope=2;
		weaponPoolAvailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_AIMM_COMPM4_BLK";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_LLM01_coyote_L";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "CUP_muzzle_snds_M16_coyote";
			};
		};
	};
	class NLD_HK416_GL_SND: CUP_arifle_HK416_CQB_AG36_Desert
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] HK416 GL sand";
		Scope=2;
		weaponPoolAvailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_AIMM_COMPM4_BLK";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_LLM01_coyote_L";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "CUP_muzzle_snds_M16_coyote";
			};
		};
	};
	class NLD_HK417_SND: CUP_arifle_HK417_20_Desert
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] HK417 sand";
		Scope=2;
		weaponPoolAvailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_SB_3_12x50_PMII";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "CUP_bipod_VLTOR_Modpod";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_B_arid_F";
			};
		};
	};
	class NLD_HK_LSW_SND: arifle_SPAR_02_snd_F
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] HK LSW sand";
		Scope=1;
		weaponPoolAvailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_AIMM_COMPM4_BLK";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="CUP_acc_LLM01_L";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_snd";
			};
		};
	};
	
	class NLD_MP5K: SMG_05_F
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] MP5K";
		Scope=2;
		weaponPoolAvailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_CompM2_Black";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_L";
			};
		};
	};
	
	class NLD_MP5: CUP_smg_MP5A5_flashlight
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] MP5A5";
		Scope=2;
		weaponPoolAvailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_CompM2_Black";
			};			
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_L";
			};
		};
	};
	
	class NLD_Beneli: CUP_sgun_M1014_vfg
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] Mossberg Shotgun";
		Scope=2;
		weaponPoolAvailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_CompM4";
			};			
		};
	};
	
	class NLD_P90: SMG_03C_black
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] FN P90";
		Scope=2;
		weaponPoolAvailable=1;	
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_570";
			};
		};
	};
	
	class NLD_M32_GL: CUP_glaunch_M32
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName="[NLD] M32 GL";
		Scope=2;
		weaponPoolAvailable=1;
	};

	class NLD_Glock17: CUP_hgun_Glock17_blk
	{
		scope=2;
		displayName="[NLD] Glock17";
	};
	
	class NLD_Glock17S: CUP_hgun_Glock17_blk
	{
		scope=2;
		displayName="[NLD] Glock17";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "CUP_muzzle_snds_M9";
			};
		};
	};
	
};

// Magazines
class CfgMagazines {
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
			
			class _xx_CUP_20Rnd_762x51_HK417
			{
				magazine = "CUP_20Rnd_762x51_HK417";
				count = 20;
			};

			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 50;
			};

			class _xx_CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch
			{
				magazine = "CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch";
				count = "50";
			};

			class _xx_CUP_5Rnd_86x70_L115A1
			{
				magazine = "CUP_5Rnd_86x70_L115A1";
				count = 50;
			};

			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
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
			class _xx_NLD_Pzf3
			{
				weapon = "NLD_Pzf3";
				count = 5;
			};
			class _xx_CUP_launch_FIM92Stinger
			{
				weapon = "CUP_launch_FIM92Stinger";
				count = 5;
			};
			class _xx_NLD_C8
			{
				weapon = "NLD_C8";
				count = 20;
			};
			class _xx_NLD_C8_GL
			{
				weapon = "NLD_C8_GL";
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

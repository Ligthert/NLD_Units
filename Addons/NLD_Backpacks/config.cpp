class CfgPatches {
	class NLD_Units_Backpacks {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
	};
};

class CfgVehicles {
// Backpacks
	class B_Carryall_oli;	// External class reference
	class B_UAV_01_backpack_F;	// External class reference

	class NLD_DST_Carryall_Empty: B_Carryall_oli {
		displayName = "[NLD] Desert Carryall (empty)";
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Backpack.paa"};
	};

	class NLD_WLD_Carryall_Empty : B_Carryall_oli {
		displayName = "[NLD] Woodland Carryall (empty)";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_Empty : B_Carryall_oli {
		displayName = "[NLD] NFP-Tan Carryall (empty)";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_Empty : B_Carryall_oli {
		displayName = "[NLD] NFP-Green Carryall (empty)";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_Empty : B_Carryall_oli {
		displayName = "[NLD] Winter Carryall (empty)";
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};	

	class NLD_JGL_Carryall_Empty : B_Carryall_oli {
		displayName = "[NLD] Jungle Carryall (empty)";
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};
	
	class NLD_DST_Carryall_B : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall";
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_WLD_Carryall_B : NLD_DST_Carryall_B {
		displayName = "[NLD] Woodland Carryall";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_B : NLD_DST_Carryall_B {
		displayName = "[NLD] NFP-Tan Carryall";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_B : NLD_DST_Carryall_B {
		displayName = "[NLD] NFP-Green Carryall";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_B : NLD_DST_Carryall_B {
		displayName = "[NLD] Winter Carryall";
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};	

	class NLD_JGL_Carryall_B : NLD_DST_Carryall_B {
		displayName = "[NLD] Jungle Carryall";
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_GL : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall GL";
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_CUP_1Rnd_HE_M203
			{
				magazine="CUP_1Rnd_HE_M203";
				count=12;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=2;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_WLD_Carryall_GL : NLD_DST_Carryall_GL {
		displayName = "[NLD] Woodland Carryall GL";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_GL : NLD_DST_Carryall_GL {
		displayName = "[NLD] NFP-Tan Carryall GL";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_GL : NLD_DST_Carryall_GL {
		displayName = "[NLD] NFP-Green Carryall GL";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_GL : NLD_DST_Carryall_GL {
		displayName = "[NLD] Winter Carryall GL";
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_GL : NLD_DST_Carryall_GL {
		displayName = "[NLD] Jungle Carryall GL";
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_TL : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall TL";
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=1;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=1;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=1;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=4;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_WLD_Carryall_TL : NLD_DST_Carryall_TL {
		displayName = "[NLD] Woodland Carryall TL";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_TL : NLD_DST_Carryall_TL {
		displayName = "[NLD] NFP-Tan Carryall TL";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_TL : NLD_DST_Carryall_TL {
		displayName = "[NLD] NFP-Green Carryall TL";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_TL : NLD_DST_Carryall_TL {
		displayName = "[NLD] Winter Carryall TL";
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_TL : NLD_DST_Carryall_TL {
		displayName = "[NLD] Jungle Carryall TL";
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_Medic : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall Medic";
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_WLD_Carryall_Medic : NLD_DST_Carryall_Medic {
		displayName = "[NLD] Woodland Carryall Medic";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_Medic : NLD_DST_Carryall_Medic {
		displayName = "[NLD] NFP-Tan Carryall Medic";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_Medic : NLD_DST_Carryall_Medic {
		displayName = "[NLD] NFP-Green Carryall Medic";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_Medic : NLD_DST_Carryall_Medic {
		displayName = "[NLD] Winter Carryall Medic";
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_Medic : NLD_DST_Carryall_Medic {
		displayName = "[NLD] Jungle Carryall Medic";
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_AT : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall AT";
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_CUP_M136_M
			{
				magazine="CUP_M136_M";
				count=3;
			};

			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_WLD_Carryall_AT : NLD_DST_Carryall_AT {
		displayName = "[NLD] Woodland Carryall AT";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_AT : NLD_DST_Carryall_AT {
		displayName = "[NLD] NFP-Tan Carryall AT";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_AT : NLD_DST_Carryall_AT {
		displayName = "[NLD] NFP-Green Carryall AT";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_AT : NLD_DST_Carryall_AT {
		displayName = "[NLD] Winter Carryall AT";
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_AT : NLD_DST_Carryall_AT {
		displayName = "[NLD] Jungle Carryall AT";
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_AR : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall AR";
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249
			{
				magazine="CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};

	class NLD_NFPT_Carryall_AR : NLD_DST_Carryall_AR {
		displayName = "[NLD] NFP-Tan Carryall AR";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_AR : NLD_DST_Carryall_AR {
		displayName = "[NLD] NFP-Green Carryall AR";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_AR : NLD_DST_Carryall_AR {
		displayName = "[NLD] Winter Carryall AR";
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_AR : NLD_DST_Carryall_AR {
		displayName = "[NLD] Jungle Carryall AR";
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_Eng : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall Eng";
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Backpack.paa"};

		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_WLD_Carryall_Eng : NLD_DST_Carryall_Eng {
		displayName = "[NLD] Woodland Carryall Eng";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_Eng : NLD_DST_Carryall_Eng {
		displayName = "[NLD] NFP-Tan Carryall Eng";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_Eng : NLD_DST_Carryall_Eng {
		displayName = "[NLD] NFP-Green Carryall Eng";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_Eng : NLD_DST_Carryall_Eng {
		displayName = "[NLD] Winter Carryall Eng";
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_Eng : NLD_DST_Carryall_Eng {
		displayName = "[NLD] Jungle Carryall Eng";
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_Ammo : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall Ammo";
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_CUP_1Rnd_HE_M203
			{
				magazine="CUP_1Rnd_HE_M203";
				count=5;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=10;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine="CUP_30Rnd_556x45_Stanag";
				count=10;
			};
			class _xx_CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249
			{
				magazine="CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_WLD_Carryall_Ammo : NLD_DST_Carryall_Ammo {
		displayName = "[NLD] Woodland Carryall Ammo";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_Ammo : NLD_DST_Carryall_Ammo {
		displayName = "[NLD] NFP-Tan Carryall Ammo";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_Ammo : NLD_DST_Carryall_Ammo {
		displayName = "[NLD] NFP-Green Carryall Ammo";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_Ammo : NLD_DST_Carryall_Ammo {
		displayName = "[NLD] Winter Carryall Ammo";
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_Ammo : NLD_DST_Carryall_Ammo {
		displayName = "[NLD] Jungle Carryall Ammo";
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_Expl : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall Expl";
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=3;
			};
			class _xx_SatchelCharge_Remote_Mag 
			{
				magazine="SatchelCharge_Remote_Mag";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_WLD_Carryall_Expl : NLD_DST_Carryall_Expl {
		displayName = "[NLD] Woodland Carryall Expl";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_Expl : NLD_DST_Carryall_Expl {
		displayName = "[NLD] NFP-Tan Carryall Expl";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_Expl : NLD_DST_Carryall_Expl {
		displayName = "[NLD] NFP-Green Carryall Expl";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_Expl : NLD_DST_Carryall_Expl {
		displayName = "[NLD] Winter Carryall Expl";
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_Expl : NLD_DST_Carryall_Expl {
		displayName = "[NLD] Jungle Carryall Expl";
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};
	
	class NLD_DST_Carryall_UAV : B_UAV_01_backpack_F {
		displayName = "[NLD] Desert Carryall UAV";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack-UAV.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack-UAV.paa"};

		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_WLD_Carryall_UAV : NLD_DST_Carryall_UAV {
		displayName = "[NLD] Woodland Carryall UAV";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack-UAV.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack-UAV.paa"};
	};

	class NLD_NFPT_Carryall_UAV : NLD_DST_Carryall_UAV {
		displayName = "[NLD] NFP-Tan Carryall UAV";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack-UAV.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack-UAV.paa"};
	};

	class NLD_NFPG_Carryall_UAV : NLD_DST_Carryall_UAV {
		displayName = "[NLD] NFP-Green Carryall UAV";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack-UAV.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack-UAV.paa"};
	};

	class NLD_WTR_Carryall_UAV : NLD_DST_Carryall_UAV {
		displayName = "[NLD] Winter Carryall UAV";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack-UAV.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack-UAV.paa"};
	};

	class NLD_JGL_Carryall_UAV : NLD_DST_Carryall_UAV {
		displayName = "[NLD] Jungle Carryall UAV";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack-UAV.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack-UAV.paa"};
	};

	class NLD_DST_Carryall_JTAC : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall JTAC";
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=5;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_WLD_Carryall_JTAC : NLD_DST_Carryall_JTAC {
		displayName = "[NLD] Woodland Carryall JTAC";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_JTAC : NLD_DST_Carryall_JTAC {
		displayName = "[NLD] NFP-Tan Carryall JTAC";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_JTAC : NLD_DST_Carryall_JTAC {
		displayName = "[NLD] NFP-Green Carryall JTAC";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_JTAC : NLD_DST_Carryall_JTAC {
		displayName = "[NLD] Winter Carryall JTAC";
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_JTAC : NLD_DST_Carryall_JTAC {
		displayName = "[NLD] Jungle Carryall JTAC";
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_AAR : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall AAR";
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249
			{
				magazine="CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249";
				count=12;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_WLD_Carryall_AAR : NLD_DST_Carryall_AAR {
		displayName = "[NLD] Woodland Carryall AAR";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_AAR : NLD_DST_Carryall_AAR {
		displayName = "[NLD] NFP-Tan Carryall AAR";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_AAR : NLD_DST_Carryall_AAR {
		displayName = "[NLD] NFP-Green Carryall AAR";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_AAR : NLD_DST_Carryall_AAR {
		displayName = "[NLD] Winter Carryall AAR";
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_AAR : NLD_DST_Carryall_AAR {
		displayName = "[NLD] Jungle Carryall AAR";
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_MMG : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall MMG";
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=6;
			};
			
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_WLD_Carryall_MMG : NLD_DST_Carryall_MMG {
		displayName = "[NLD] Woodland Carryall MMG";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_MMG : NLD_DST_Carryall_MMG {
		displayName = "[NLD] NFP-Tan Carryall MMG";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_MMG : NLD_DST_Carryall_MMG {
		displayName = "[NLD] NFP-Green Carryall MMG";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_MMG : NLD_DST_Carryall_MMG {
		displayName = "[NLD] Winter Carryall MMG";
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_MMG : NLD_DST_Carryall_MMG {
		displayName = "[NLD] Jungle Carryall MMG";
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_MAT : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall MAT";
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_WLD_Carryall_MAT : NLD_DST_Carryall_MAT {
		displayName = "[NLD] Woodland Carryall MAT";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_MAT : NLD_DST_Carryall_MAT {
		displayName = "[NLD] NFP-Tan Carryall MAT";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_MAT : NLD_DST_Carryall_MAT {
		displayName = "[NLD] NFP-Green Carryall MAT";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_MAT : NLD_DST_Carryall_MAT {
		displayName = "[NLD] Winter Carryall MAT";
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_MAT : NLD_DST_Carryall_MAT {
		displayName = "[NLD] Jungle Carryall MAT";
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_AA : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall AA";
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_CUP_Stinger_M
			{
				magazine="CUP_Stinger_M";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
			class _xx_Dutch_Beret_Luchtmobiele_Brigade
			{
				name="Dutch_Beret_Luchtmobiele_Brigade";
				count=1;
			};
		};
	};
	
	class NLD_WLD_Carryall_AA : NLD_DST_Carryall_AA {
		displayName = "[NLD] Woodland Carryall AA";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_AA : NLD_DST_Carryall_AA {
		displayName = "[NLD] NFP-Tan Carryall AA";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_AA : NLD_DST_Carryall_AA {
		displayName = "[NLD] NFP-Green Carryall AA";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_AA : NLD_DST_Carryall_AA {
		displayName = "[NLD] Winter Carryall AA";
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_AA : NLD_DST_Carryall_AA {
		displayName = "[NLD] Jungle Carryall AA";
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};


// SF Backpacks

	class NLD_SF_Carryall_Empty : B_Carryall_oli {
		displayName = "NLD Black Carryall (empty)";
		picture = "\NLD_Infantry_Units\Units\SF\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\SF\Data\Backpack.paa"};
	};

	class NLD_MTP_Carryall_Empty : B_Carryall_oli {
		displayName = "NLD MTP Carryall (empty)";
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_SF_Carryall_B : B_Carryall_oli {
		displayName = "NLD Black Carryall";
		picture = "\NLD_Infantry_Units\Units\SF\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\SF\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count = 1;
			};
			class _xx_muzzle_snds_L 
			{
				name="muzzle_snds_L";
				count = 1;
			};
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Commandos
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
		};
	};

	class NLD_MTP_Carryall_B : NLD_SF_Carryall_B
	{
		displayName = "NLD MTP Carryall";
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_SF_Carryall_Medic : B_Carryall_oli {
		displayName = "NLD Black Carryall Medic";
		picture = "\NLD_Infantry_Units\Units\SF\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\SF\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
		};
		class TransportItems
		{
			class _xx_muzzle_snds_H 
			{
				name="muzzle_snds_H";
				count = 1;
			};
			class _xx_muzzle_snds_L 
			{
				name="muzzle_snds_L";
				count = 1;
			};
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_MediKit
			{
				name="MediKit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Dutch_Beret_Commandos
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
		};
	};

	class NLD_MTP_Carryall_Medic : NLD_SF_Carryall_Medic
	{
		displayName = "NLD MTP Carryall Medic";
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_SF_Carryall_ComSpec : B_Carryall_oli {
		displayName = "NLD Black Carryall ComSpec";
		picture = "\NLD_Infantry_Units\Units\SF\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\SF\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=1;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_muzzle_snds_H 
			{
				name="muzzle_snds_H";
				count = 1;
			};
			class _xx_muzzle_snds_L 
			{
				name="muzzle_snds_L";
				count = 1;
			};
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Commandos
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
		};
	};

	class NLD_MTP_Carryall_ComSpec : NLD_SF_Carryall_ComSpec {
		displayName = "NLD MTP Carryall ComSpec";
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_SF_Carryall_Expl : B_Carryall_oli {
		displayName = "NLD Black Carryall Expl";
		picture = "\NLD_Infantry_Units\Units\SF\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\SF\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=3;
			};
			class _xx_SatchelCharge_Remote_Mag 
			{
				magazine="SatchelCharge_Remote_Mag";
				count=1;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_muzzle_snds_H 
			{
				name="muzzle_snds_H";
				count = 1;
			};
			class _xx_muzzle_snds_L 
			{
				name="muzzle_snds_L";
				count = 1;
			};
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Commandos
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
		};
	};	

	class NLD_MTP_Carryall_Expl : NLD_SF_Carryall_Expl {
		displayName = "NLD MTP Carryall Expl";
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_SF_Carryall_AT : B_Carryall_oli {
		displayName = "NLD Black Carryall AT";
		picture = "\NLD_Infantry_Units\Units\SF\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\SF\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=3;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_muzzle_snds_H 
			{
				name="muzzle_snds_H";
				count = 1;
			};
			class _xx_muzzle_snds_L 
			{
				name="muzzle_snds_L";
				count = 1;
			};
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Commandos
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
		};
	};

	class NLD_MTP_Carryall_AT : NLD_SF_Carryall_AT {
		displayName = "NLD MTP Carryall AT";
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_SF_Carryall_AA : B_Carryall_oli {
		displayName = "NLD Black Carryall AA";
		picture = "\NLD_Infantry_Units\Units\SF\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\SF\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine="Titan_AA";
				count=2;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_muzzle_snds_H 
			{
				name="muzzle_snds_H";
				count = 1;
			};
			class _xx_muzzle_snds_L 
			{
				name="muzzle_snds_L";
				count = 1;
			};
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Commandos
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
		};
	};

	class NLD_MTP_Carryall_AA : NLD_SF_Carryall_AA {
		displayName = "NLD MTP Carryall AA";
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_SF_Carryall_SLA : B_Carryall_oli {
		displayName = "NLD Black Carryall Sharpshooter";
		picture = "\NLD_Infantry_Units\Units\SF\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\SF\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Commandos
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
			class _xx_CUP_muzzle_snds_AWM 
			{
				name="CUP_muzzle_snds_AWM";
				count = 1;
			};
			class _xx_muzzle_snds_L 
			{
				name="muzzle_snds_L";
				count = 1;
			};
		};
	};

	class NLD_MTP_Carryall_SLA : NLD_SF_Carryall_SLA {
		displayName = "NLD MTP Carryall Sharpshooter";
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_SF_Carryall_AR : B_Carryall_oli {
		displayName = "NLD Black Carryall AR";
		picture = "\NLD_Infantry_Units\Units\SF\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\SF\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
			class _xx_NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="NLD_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=4;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Commandos
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
			class _xx_muzzle_snds_L 
			{
				name="muzzle_snds_L";
				count = 1;
			};
		};
	};

	class NLD_MTP_Carryall_AR : NLD_SF_Carryall_AR {
		displayName = "NLD MTP Carryall AR";
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_SF_Carryall_MP5 : B_Carryall_oli {
		displayName = "NLD Black Carryall AR";
		picture = "\NLD_Infantry_Units\Units\SF\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\SF\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=1;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
			class _xx_CUP_30Rnd_9x19_MP5
			{
				magazine="CUP_30Rnd_9x19_MP5";
				count=5;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_Commandos
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
			class _xx_muzzle_snds_L 
			{
				name="muzzle_snds_L";
				count = 1;
			};
		};
	};

	class NLD_MTP_Carryall_MP5 : NLD_SF_Carryall_MP5 {
		displayName = "NLD MTP Carryall MP5";
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\Backpack.paa"};
	};

};
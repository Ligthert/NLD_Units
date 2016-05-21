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
	class B_AssaultPack_blk;
	class B_UAV_01_backpack_F;	// External class reference
	class B_FieldPack_oli;


	class NLD_DST_Carryall_Empty: B_Carryall_oli {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] Desert Carryall";
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Backpack.paa"};
	};

	class NLD_WLD_Carryall_Empty : B_Carryall_oli {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] Woodland Carryall";
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_Empty : B_Carryall_oli {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] NFP-Tan Carryall";
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_Empty : B_Carryall_oli {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] NFP-Green Carryall";
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_Empty : B_Carryall_oli {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] Winter Carryall";
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};	

	class NLD_JGL_Carryall_Empty : B_Carryall_oli {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] Jungle Carryall";
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};
	
	class NLD_DST_Carryall_B : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall";
        scope = 1;
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
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_B : NLD_DST_Carryall_B {
		displayName = "[NLD] NFP-Tan Carryall";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_B : NLD_DST_Carryall_B {
		displayName = "[NLD] NFP-Green Carryall";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_B : NLD_DST_Carryall_B {
		displayName = "[NLD] Winter Carryall";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};	

	class NLD_JGL_Carryall_B : NLD_DST_Carryall_B {
		displayName = "[NLD] Jungle Carryall";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_GL : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall GL";
        scope = 1;
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
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_GL : NLD_DST_Carryall_GL {
		displayName = "[NLD] NFP-Tan Carryall GL";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_GL : NLD_DST_Carryall_GL {
		displayName = "[NLD] NFP-Green Carryall GL";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_GL : NLD_DST_Carryall_GL {
		displayName = "[NLD] Winter Carryall GL";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_GL : NLD_DST_Carryall_GL {
		displayName = "[NLD] Jungle Carryall GL";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_TL : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall TL";
        scope = 1;
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
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_TL : NLD_DST_Carryall_TL {
		displayName = "[NLD] NFP-Tan Carryall TL";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_TL : NLD_DST_Carryall_TL {
		displayName = "[NLD] NFP-Green Carryall TL";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_TL : NLD_DST_Carryall_TL {
		displayName = "[NLD] Winter Carryall TL";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_TL : NLD_DST_Carryall_TL {
		displayName = "[NLD] Jungle Carryall TL";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_Medic : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall Medic";
        scope = 1;
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
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_Medic : NLD_DST_Carryall_Medic {
		displayName = "[NLD] NFP-Tan Carryall Medic";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_Medic : NLD_DST_Carryall_Medic {
		displayName = "[NLD] NFP-Green Carryall Medic";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_Medic : NLD_DST_Carryall_Medic {
		displayName = "[NLD] Winter Carryall Medic";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_Medic : NLD_DST_Carryall_Medic {
		displayName = "[NLD] Jungle Carryall Medic";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_AT : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall AT";
        scope = 1;
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
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_AT : NLD_DST_Carryall_AT {
		displayName = "[NLD] NFP-Tan Carryall AT";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_AT : NLD_DST_Carryall_AT {
		displayName = "[NLD] NFP-Green Carryall AT";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_AT : NLD_DST_Carryall_AT {
		displayName = "[NLD] Winter Carryall AT";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_AT : NLD_DST_Carryall_AT {
		displayName = "[NLD] Jungle Carryall AT";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_AR : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall AR";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249
			{
				magazine="CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249";
				count=3;
			};
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
	
	class NLD_WLD_Carryall_AR : NLD_DST_Carryall_AR {
		displayName = "[NLD] Woodland Carryall AR";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_AR : NLD_DST_Carryall_AR {
		displayName = "[NLD] NFP-Tan Carryall AR";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_AR : NLD_DST_Carryall_AR {
		displayName = "[NLD] NFP-Green Carryall AR";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_AR : NLD_DST_Carryall_AR {
		displayName = "[NLD] Winter Carryall AR";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_AR : NLD_DST_Carryall_AR {
		displayName = "[NLD] Jungle Carryall AR";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_Eng : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall Eng";
        scope = 1;
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
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_Eng : NLD_DST_Carryall_Eng {
		displayName = "[NLD] NFP-Tan Carryall Eng";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_Eng : NLD_DST_Carryall_Eng {
		displayName = "[NLD] NFP-Green Carryall Eng";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_Eng : NLD_DST_Carryall_Eng {
		displayName = "[NLD] Winter Carryall Eng";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_Eng : NLD_DST_Carryall_Eng {
		displayName = "[NLD] Jungle Carryall Eng";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_Ammo : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall Ammo";
        scope = 1;
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
			class _xx_CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249
			{
				magazine="CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249";
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
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_Ammo : NLD_DST_Carryall_Ammo {
		displayName = "[NLD] NFP-Tan Carryall Ammo";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_Ammo : NLD_DST_Carryall_Ammo {
		displayName = "[NLD] NFP-Green Carryall Ammo";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_Ammo : NLD_DST_Carryall_Ammo {
		displayName = "[NLD] Winter Carryall Ammo";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_Ammo : NLD_DST_Carryall_Ammo {
		displayName = "[NLD] Jungle Carryall Ammo";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_Expl : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall Expl";
        scope = 1;
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
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_Expl : NLD_DST_Carryall_Expl {
		displayName = "[NLD] NFP-Tan Carryall Expl";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_Expl : NLD_DST_Carryall_Expl {
		displayName = "[NLD] NFP-Green Carryall Expl";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_Expl : NLD_DST_Carryall_Expl {
		displayName = "[NLD] Winter Carryall Expl";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_Expl : NLD_DST_Carryall_Expl {
		displayName = "[NLD] Jungle Carryall Expl";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};
	
	class NLD_DST_Carryall_UAV : B_UAV_01_backpack_F {
		displayName = "[NLD] Desert Carryall UAV";
        scope = 1;
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
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack-UAV.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack-UAV.paa"};
	};

	class NLD_NFPT_Carryall_UAV : NLD_DST_Carryall_UAV {
		displayName = "[NLD] NFP-Tan Carryall UAV";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack-UAV.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack-UAV.paa"};
	};

	class NLD_NFPG_Carryall_UAV : NLD_DST_Carryall_UAV {
		displayName = "[NLD] NFP-Green Carryall UAV";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack-UAV.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack-UAV.paa"};
	};

	class NLD_WTR_Carryall_UAV : NLD_DST_Carryall_UAV {
		displayName = "[NLD] Winter Carryall UAV";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack-UAV.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack-UAV.paa"};
	};

	class NLD_JGL_Carryall_UAV : NLD_DST_Carryall_UAV {
		displayName = "[NLD] Jungle Carryall UAV";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack-UAV.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack-UAV.paa"};
	};

	class NLD_DST_Carryall_JTAC : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall JTAC";
        scope = 1;
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
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_JTAC : NLD_DST_Carryall_JTAC {
		displayName = "[NLD] NFP-Tan Carryall JTAC";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_JTAC : NLD_DST_Carryall_JTAC {
		displayName = "[NLD] NFP-Green Carryall JTAC";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_JTAC : NLD_DST_Carryall_JTAC {
		displayName = "[NLD] Winter Carryall JTAC";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_JTAC : NLD_DST_Carryall_JTAC {
		displayName = "[NLD] Jungle Carryall JTAC";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_AAR : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall AAR";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249
			{
				magazine="CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249";
				count=3;
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
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_AAR : NLD_DST_Carryall_AAR {
		displayName = "[NLD] NFP-Tan Carryall AAR";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_AAR : NLD_DST_Carryall_AAR {
		displayName = "[NLD] NFP-Green Carryall AAR";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_AAR : NLD_DST_Carryall_AAR {
		displayName = "[NLD] Winter Carryall AAR";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_AAR : NLD_DST_Carryall_AAR {
		displayName = "[NLD] Jungle Carryall AAR";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_MMG : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall MMG";
        scope = 1;
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
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_MMG : NLD_DST_Carryall_MMG {
		displayName = "[NLD] NFP-Tan Carryall MMG";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_MMG : NLD_DST_Carryall_MMG {
		displayName = "[NLD] NFP-Green Carryall MMG";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_MMG : NLD_DST_Carryall_MMG {
		displayName = "[NLD] Winter Carryall MMG";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_MMG : NLD_DST_Carryall_MMG {
		displayName = "[NLD] Jungle Carryall MMG";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_MAT : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall MAT";
        scope = 1;
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
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_MAT : NLD_DST_Carryall_MAT {
		displayName = "[NLD] NFP-Tan Carryall MAT";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_MAT : NLD_DST_Carryall_MAT {
		displayName = "[NLD] NFP-Green Carryall MAT";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_MAT : NLD_DST_Carryall_MAT {
		displayName = "[NLD] Winter Carryall MAT";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_MAT : NLD_DST_Carryall_MAT {
		displayName = "[NLD] Jungle Carryall MAT";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};

	class NLD_DST_Carryall_AA : B_Carryall_oli {
		displayName = "[NLD] Desert Carryall AA";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Desert\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Desert\Data\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_CUP_Stinger_M
			{
				magazine="CUP_Stinger_M";
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
	
	class NLD_WLD_Carryall_AA : NLD_DST_Carryall_AA {
		displayName = "[NLD] Woodland Carryall AA";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Woodland\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Woodland\Data\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_AA : NLD_DST_Carryall_AA {
		displayName = "[NLD] NFP-Tan Carryall AA";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Tan\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Tan\Data\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_AA : NLD_DST_Carryall_AA {
		displayName = "[NLD] NFP-Green Carryall AA";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\NFP-Green\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\NFP-Green\Data\Backpack.paa"};
	};

	class NLD_WTR_Carryall_AA : NLD_DST_Carryall_AA {
		displayName = "[NLD] Winter Carryall AA";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Winter\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Winter\Data\Backpack.paa"};
	};

	class NLD_JGL_Carryall_AA : NLD_DST_Carryall_AA {
		displayName = "[NLD] Jungle Carryall AA";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Jungle\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Jungle\Data\Backpack.paa"};
	};


// SF Backpacks

	class NLD_SF_Carryall_Empty : B_Carryall_oli {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] Black Carryall";
		picture = "\NLD_Infantry_Units\Units\SF\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\SF\Data\Backpack.paa"};
	};

	class NLD_MTP_Carryall_Empty : B_Carryall_oli {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] MTP Carryall";
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\Backpack.paa"};
	};
	class NLD_KM_Carryall_Empty : B_Carryall_oli {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] KM Carryall";
		picture = "\NLD_Infantry_Units\Units\Korps_Mariniers\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Korps_Mariniers\Data\Backpack.paa"};
	};

	class NLD_SF_Carryall_B : B_Carryall_oli {
		displayName = "[NLD] Black Carryall (basic)";
        scope = 1;
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

	class NLD_KM_Carryall_B : B_Carryall_oli
	{
		displayName = "[NLD] KM Carryall (basic)";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Korps_Mariniers\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Korps_Mariniers\Data\Backpack.paa"};

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
			class _xx_Dutch_Beret_RoyalMarines
			{
				name="Dutch_Beret_RoyalMarines";
				count=1;
			};
		};
	};

	class NLD_MTP_Carryall_B : NLD_SF_Carryall_B
	{
		displayName = "[NLD] MTP Carryall (basic)";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_SF_Carryall_TL : B_Carryall_oli {
		displayName = "[NLD] Black Carryall TL";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\SF\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\SF\Data\Backpack.paa"};

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
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
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
				name="Dutch_Beret_Commandos";
				count=1;
			};
		};
	};

	class NLD_MTP_Carryall_TL : B_Carryall_oli
	{
		displayName = "[NLD] MTP Carryall (TL)";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\Backpack.paa"};

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
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
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
				name="Dutch_Beret_Commandos";
				count=1;
			};
		};
	};

	class NLD_KM_Carryall_TL : B_Carryall_oli {
		displayName = "[NLD] Black Carryall TL";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Korps_Mariniers\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Korps_Mariniers\Data\Backpack.paa"};

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
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
		};
		class TransportItems
		{
			class _xx_NLD_NVGoggles {
				name = "NLD_NVGoggles";
				count = 1;
			};
			class _xx_Dutch_Beret_RoyalMarines
			{
				name="Dutch_Beret_RoyalMarines";
				count=1;
			};
		};
	};

	class NLD_SF_Carryall_Medic : B_Carryall_oli {
		displayName = "[NLD] Black Carryall Medic";
        scope = 1;
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
		displayName = "[NLD] MTP Carryall Medic";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_KM_Carryall_Medic : B_Carryall_oli
	{
		displayName = "[NLD] KM Carryall (Medic)";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Korps_Mariniers\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Korps_Mariniers\Data\Backpack.paa"};

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
			class _xx_Dutch_Beret_RoyalMarines
			{
				name="Dutch_Beret_RoyalMarines";
				count=1;
			};
		};
	};

	class NLD_SF_Carryall_ComSpec : B_Carryall_oli {
		displayName = "[NLD] Black Carryall ComSpec";
        scope = 1;
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
		displayName = "[NLD] MTP Carryall ComSpec";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_KM_Carryall_ComSpec : B_Carryall_oli {
		displayName = "[NLD] KM Carryall ComSpec";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Korps_Mariniers\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Korps_Mariniers\Data\Backpack.paa"};

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
			class _xx_Dutch_Beret_RoyalMarines
			{
				name="Dutch_Beret_RoyalMarines";
				count=1;
			};
		};
	};	

	class NLD_SF_Carryall_Expl : B_Carryall_oli {
		displayName = "[NLD] Black Carryall Expl";
        scope = 1;
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
		displayName = "[NLD] MTP Carryall Expl";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_KM_Carryall_Expl : B_Carryall_oli {
		displayName = "[NLD] KM Carryall Expl";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Korps_Mariniers\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Korps_Mariniers\Data\Backpack.paa"};

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
			class _xx_Dutch_Beret_RoyalMarines
			{
				name="Dutch_Beret_RoyalMarines";
				count=1;
			};
		};
	};

	class NLD_SF_Carryall_AT : B_Carryall_oli {
		displayName = "[NLD] Black Carryall AT";
        scope = 1;
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
		displayName = "[NLD] MTP Carryall AT";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_KM_Carryall_AT : B_Carryall_oli {
		displayName = "[NLD] KM Carryall AT";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Korps_Mariniers\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Korps_Mariniers\Data\Backpack.paa"};

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
			class _xx_Dutch_Beret_RoyalMarines
			{
				name="Dutch_Beret_RoyalMarines";
				count=1;
			};
		};
	};

	class NLD_SF_Carryall_AA : B_Carryall_oli {
		displayName = "[NLD] Black Carryall AA";
        scope = 1;
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
		displayName = "[NLD] MTP Carryall AA";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_KM_Carryall_AA : B_Carryall_oli {
		displayName = "[NLD] KM Carryall AA";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Korps_Mariniers\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Korps_Mariniers\Data\Backpack.paa"};

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
			class _xx_Dutch_Beret_RoyalMarines
			{
				name="Dutch_Beret_RoyalMarines";
				count=1;
			};
		};
	};

	class NLD_SF_Carryall_SLA : B_Carryall_oli {
		displayName = "[NLD] Black Carryall Sharpshooter";
        scope = 1;
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
		displayName = "[NLD] MTP Carryall Sharpshooter";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_KM_Carryall_SLA : B_Carryall_oli {
		displayName = "[NLD] KM Carryall Sharpshooter";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Korps_Mariniers\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Korps_Mariniers\Data\Backpack.paa"};

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
			class _xx_Dutch_Beret_RoyalMarines
			{
				name="Dutch_Beret_RoyalMarines";
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

	class NLD_SF_Carryall_AR : B_Carryall_oli {
		displayName = "[NLD] Black Carryall AR";
        scope = 1;
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
		displayName = "[NLD] MTP Carryall AR";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_KM_Carryall_AR : B_Carryall_oli {
		displayName = "[NLD] KM Carryall AR";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Korps_Mariniers\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Korps_Mariniers\Data\Backpack.paa"};

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
			class _xx_Dutch_Beret_RoyalMarines
			{
				name="Dutch_Beret_RoyalMarines";
				count=1;
			};
			class _xx_muzzle_snds_L 
			{
				name="muzzle_snds_L";
				count = 1;
			};
		};
	};

	class NLD_SF_Carryall_MP5 : B_Carryall_oli {
		displayName = "[NLD] Black Carryall AR";
        scope = 1;
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
		displayName = "[NLD] MTP Carryall MP5";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\MTP\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\MTP\Data\Backpack.paa"};
	};

	class NLD_KM_Carryall_MP5 : B_Carryall_oli {
		displayName = "[NLD] KM Carryall MP5";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\Korps_Mariniers\Data\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\Korps_Mariniers\Data\Backpack.paa"};

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
			class _xx_Dutch_Beret_RoyalMarines
			{
				name="Dutch_Beret_RoyalMarines";
				count=1;
			};
			class _xx_muzzle_snds_L 
			{
				name="muzzle_snds_L";
				count = 1;
			};
		};
	};

	class NLD_Spongebob_Tactical : B_AssaultPack_blk {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] SpongeBob Tacticalpack";
        scope = 2;
		picture = "\NLD_Backpacks\Spongebob\Data\uim\Spongebobsquarebag.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Spongebob\Data\Spongebobsquarebag.paa"};
	};

	class NLD_80_Fieldpack_Empty : B_FieldPack_oli 
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] 80's Fieldpack";
        scope = 2;
		picture = "\NLD_Infantry_Units\Units\80s\Data\uim\fieldpack.paa";
		maximumLoad=320;
		mass=30;
	};

	class NLD_80_Fieldpack_Medic : NLD_80_Fieldpack_Empty
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] 80's Fieldpack Medic";
        scope = 1;
		hiddenSelectionsTextures[] = {"\NLD_Infantry_Units\Units\80s\Data\fieldpack_medic_oli.paa"};

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
			class _xx_Dutch_Beret_80
			{
				name="Dutch_Beret_80";
				count=1;
			};
		};
	};

	class NLD_80_Fieldpack_B : B_FieldPack_oli 
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] 80's Fieldpack";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\80s\Data\uim\fieldpack.paa";
		maximumLoad=320;
		mass=30;

		class TransportMagazines
		{
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
				count=5;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=5;
			};
			class _xx_Dutch_Beret_80
			{
				name="Dutch_Beret_80";
				count=1;
			};
		};
	};

	class NLD_80_Fieldpack_GL : B_FieldPack_oli 
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] 80's Fieldpack GL";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\80s\Data\uim\fieldpack.paa";
		maximumLoad=320;
		mass=30;

		class TransportMagazines
		{
			class _xx_CUP_1Rnd_HE_M203
			{
				magazine="CUP_1Rnd_HE_M203";
				count=15;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=5;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=5;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=5;
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
				count=5;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_80
			{
				name="Dutch_Beret_80";
				count=1;
			};
		};
	};

	class NLD_80_Fieldpack_AMMO : B_FieldPack_oli 
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] 80's Fieldpack AMMO";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\80s\Data\uim\fieldpack.paa";
		maximumLoad=320;
		mass=30;

		class TransportMagazines
		{
			class _xx_CUP_1Rnd_HE_M203
			{
				magazine="CUP_1Rnd_HE_M203";
				count=5;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M";
				count=2;
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
				count=5;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=5;
			};
			class _xx_Dutch_Beret_80
			{
				name="Dutch_Beret_80";
				count=1;
			};
		};
	};

	class NLD_80_Fieldpack_TL : B_FieldPack_oli 
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] 80's Fieldpack TL";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\80s\Data\uim\fieldpack.paa";
		maximumLoad=320;
		mass=30;

		class TransportMagazines
		{
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
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=5;
			};
			class _xx_Dutch_Beret_80
			{
				name="Dutch_Beret_80";
				count=1;
			};
		};
	};

	class NLD_80_Fieldpack_SLA : B_FieldPack_oli 
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] 80's Fieldpack SLA";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\80s\Data\uim\fieldpack.paa";
		maximumLoad=320;
		mass=30;

		class TransportMagazines
		{
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
				count=5;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=5;
			};
			class _xx_Dutch_Beret_80
			{
				name="Dutch_Beret_80";
				count=1;
			};
		};
	};

	class NLD_80_Fieldpack_Expl : B_FieldPack_oli 
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] 80's Fieldpack Expl";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\80s\Data\uim\fieldpack.paa";
		maximumLoad=320;
		mass=30;

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
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=3;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=3;
			};
		};
		class TransportItems
		{
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_80
			{
				name="Dutch_Beret_80";
				count=1;
			};
		};
	};

	class NLD_80_Fieldpack_ENG : B_FieldPack_oli 
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] 80's Fieldpack ENG";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\80s\Data\uim\fieldpack.paa";
		maximumLoad=320;
		mass=30;

		class TransportMagazines
		{
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=3;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=3;
			};
		};
		class TransportItems
		{
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
			class _xx_Dutch_Beret_80
			{
				name="Dutch_Beret_80";
				count=1;
			};
		};
	};

	class NLD_80_Fieldpack_LAT : B_FieldPack_oli 
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] 80's Fieldpack LAT";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\80s\Data\uim\fieldpack.paa";
		maximumLoad=320;
		mass=30;


		class TransportMagazines
		{
			class _xx_CUP_MAAWS_HEDP_M
			{
				magazine="CUP_MAAWS_HEDP_M";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_80
			{
				name="Dutch_Beret_80";
				count=1;
			};
		};
	};

	class NLD_80_Fieldpack_MAT : B_FieldPack_oli 
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] 80's Fieldpack MAT";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\80s\Data\uim\fieldpack.paa";
		maximumLoad=320;
		mass=30;


		class TransportMagazines
		{
			class _xx_CUP_Dragon_EP1_M
			{
				magazine="CUP_Dragon_EP1_M";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_80
			{
				name="Dutch_Beret_80";
				count=1;
			};
		};
	};

	class NLD_80_Fieldpack_MMG : B_FieldPack_oli 
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] 80's Fieldpack MMG";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\80s\Data\uim\fieldpack.paa";
		maximumLoad=320;
		mass=30;


		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_80
			{
				name="Dutch_Beret_80";
				count=1;
			};
		};
	};

	class NLD_80_Fieldpack_AA : B_FieldPack_oli 
	{
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] 80's Fieldpack AA";
        scope = 1;
		picture = "\NLD_Infantry_Units\Units\80s\Data\uim\fieldpack.paa";
		maximumLoad=320;
		mass=30;


		class TransportMagazines
		{
			class _xx_CUP_Stinger_M
			{
				magazine="CUP_Stinger_M";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Dutch_Beret_80
			{
				name="Dutch_Beret_80";
				count=1;
			};
		};
	};
};
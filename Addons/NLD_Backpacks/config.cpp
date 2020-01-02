class CfgPatches {
	class NLD_Units_Backpacks {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F_Enoch_Loadorder"};
		authors[] = {"Sacha Ligthert","Smootch","ShiftySean"};
		url = "http://lowtac.nl/";
	};
};

class CfgVehicles {

// Backpacks
	class B_Carryall_oli;
	class B_AssaultPack_blk;
	class B_UAV_01_backpack_F;
	class B_FieldPack_oli;
	class B_Kitbag_mcamo;
	class B_Kitbag_rgr;
	class CUP_B_USPack_Black;
	class B_Carryall_cbr;



	class NLD_DST_Carryall_Empty: B_Carryall_cbr {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] Desert Carryall";
		picture = "\NLD_Backpacks\Desert\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Desert\Backpack.paa"};
	};

	class NLD_WLD_Carryall_Empty : B_Carryall_oli {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] Woodland Carryall";
		picture = "\NLD_Backpacks\Woodland\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Woodland\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_Empty : B_Carryall_oli {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] NFP-Tan Carryall";
		picture = "\NLD_Backpacks\NFP-Tan\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Tan\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_Empty : B_Carryall_oli {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] NFP-Green Carryall";
		picture = "\NLD_Backpacks\NFP-Green\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Green\Backpack.paa"};
	};

	class NLD_WTR_Carryall_Empty : B_Carryall_oli {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] NFP Arctic Carryall";
		picture = "\NLD_Backpacks\Winter\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Winter\Backpack.paa"};
	};
	
	class NLD_KMI_Carryall_Empty : B_Carryall_oli {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] Korps Mariniers Carryall";
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Korps_Mariniers\Backpack.paa"};
	};

	class NLD_DST_Carryall_B : B_Carryall_cbr {
		displayName = "[NLD] Desert Carryall";
		scope = 1;
		picture = "\NLD_Backpacks\Desert\Picture.paa";

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
			class _xx_COLT_Suppressor_Black
			{
				name="COLT_Suppressor_Black";
				count=1;
			};
		};
	};

	class NLD_WLD_Carryall_B : NLD_DST_Carryall_B {
		displayName = "[NLD] Woodland Carryall";
		scope = 1;
		picture = "\NLD_Backpacks\Woodland\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Woodland\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_B : NLD_DST_Carryall_B {
		displayName = "[NLD] NFP-Tan Carryall";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Tan\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Tan\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_B : NLD_DST_Carryall_B {
		displayName = "[NLD] NFP-Green Carryall";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Green\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Green\Backpack.paa"};
	};

	class NLD_WTR_Carryall_B : NLD_DST_Carryall_B {
		displayName = "[NLD] NFP-Arctic Carryall";
		scope = 1;
		picture = "\NLD_Backpacks\Winter\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Winter\Backpack.paa"};
	};
	
	class NLD_KMI_Carryall_B : NLD_DST_Carryall_B {
		displayName = "[NLD] Korps Mariniers Carryall";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Korps_Mariniers\Backpack.paa"};
	};
	
	class NLD_DST_Carryall_SLA : B_Carryall_cbr {
		displayName = "[NLD] Desert Carryall";
		scope = 1;
		picture = "\NLD_Backpacks\Desert\Picture.paa";

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
			class _xx_CUP_5Rnd_86x70_L115A1
			{
				magazine="CUP_5Rnd_86x70_L115A1";
				count=8;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
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
		};
	};

	class NLD_WLD_Carryall_SLA : NLD_DST_Carryall_SLA {
		displayName = "[NLD] Woodland Carryall";
		scope = 1;
		picture = "\NLD_Backpacks\Woodland\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Woodland\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_SLA : NLD_DST_Carryall_SLA {
		displayName = "[NLD] NFP-Tan Carryall";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Tan\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Tan\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_SLA : NLD_DST_Carryall_SLA {
		displayName = "[NLD] NFP-Green Carryall";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Green\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Green\Backpack.paa"};
	};

	class NLD_WTR_Carryall_SLA : NLD_DST_Carryall_SLA {
		displayName = "[NLD] Winter Carryall";
		scope = 1;
		picture = "\NLD_Backpacks\Winter\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Winter\Backpack.paa"};
	};
	
	class NLD_KMI_Carryall_SLA : NLD_DST_Carryall_SLA {
		displayName = "[NLD] Korps Mariniers Carryall";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Korps_Mariniers\Backpack.paa"};
	};

	class NLD_DST_Carryall_GL : B_Carryall_cbr {
		displayName = "[NLD] Desert Carryall GL";
		scope = 1;
		picture = "\NLD_Backpacks\Desert\Picture.paa";

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
			class _xx_COLT_Suppressor_Black
			{
				name="COLT_Suppressor_Black";
				count=1;
			};
		};
	};

	class NLD_WLD_Carryall_GL : NLD_DST_Carryall_GL {
		displayName = "[NLD] Woodland Carryall GL";
		scope = 1;
		picture = "\NLD_Backpacks\Woodland\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Woodland\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_GL : NLD_DST_Carryall_GL {
		displayName = "[NLD] NFP-Tan Carryall GL";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Tan\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Tan\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_GL : NLD_DST_Carryall_GL {
		displayName = "[NLD] NFP-Green Carryall GL";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Green\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Green\Backpack.paa"};
	};

	class NLD_WTR_Carryall_GL : NLD_DST_Carryall_GL {
		displayName = "[NLD] Winter Carryall GL";
		scope = 1;
		picture = "\NLD_Backpacks\Winter\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Winter\Backpack.paa"};
	};
	
	class NLD_KMI_Carryall_GL : NLD_DST_Carryall_GL {
		displayName = "[NLD] Korps Mariniers Carryall GL";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Korps_Mariniers\Backpack.paa"};
	};

	class NLD_DST_Carryall_TL : B_Carryall_cbr {
		displayName = "[NLD] Desert Carryall TL";
		scope = 1;
		picture = "\NLD_Backpacks\Desert\Picture.paa";

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
			class _xx_COLT_Suppressor_Black
			{
				name="COLT_Suppressor_Black";
				count=1;
			};
		};
	};

	class NLD_WLD_Carryall_TL : NLD_DST_Carryall_TL {
		displayName = "[NLD] Woodland Carryall TL";
		scope = 1;
		picture = "\NLD_Backpacks\Woodland\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Woodland\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_TL : NLD_DST_Carryall_TL {
		displayName = "[NLD] NFP-Tan Carryall TL";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Tan\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Tan\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_TL : NLD_DST_Carryall_TL {
		displayName = "[NLD] NFP-Green Carryall TL";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Green\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Green\Backpack.paa"};
	};

	class NLD_WTR_Carryall_TL : NLD_DST_Carryall_TL {
		displayName = "[NLD] Winter Carryall TL";
		scope = 1;
		picture = "\NLD_Backpacks\Winter\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Winter\Backpack.paa"};
	};
	
	class NLD_KMI_Carryall_TL : NLD_DST_Carryall_TL {
		displayName = "[NLD] Korps Mariniers Carryall TL";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Korps_Mariniers\Backpack.paa"};
	};

	class NLD_DST_Carryall_Medic : B_Carryall_cbr {
		displayName = "[NLD] Desert Carryall Medic";
		scope = 1;
		picture = "\NLD_Backpacks\Desert\Picture.paa";

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
			class _xx_COLT_Suppressor_Black
			{
				name="COLT_Suppressor_Black";
				count=1;
			};
		};
	};

	class NLD_WLD_Carryall_Medic : NLD_DST_Carryall_Medic {
		displayName = "[NLD] Woodland Carryall Medic";
		scope = 1;
		picture = "\NLD_Backpacks\Woodland\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Woodland\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_Medic : NLD_DST_Carryall_Medic {
		displayName = "[NLD] NFP-Tan Carryall Medic";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Tan\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Tan\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_Medic : NLD_DST_Carryall_Medic {
		displayName = "[NLD] NFP-Green Carryall Medic";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Green\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Green\Backpack.paa"};
	};

	class NLD_WTR_Carryall_Medic : NLD_DST_Carryall_Medic {
		displayName = "[NLD] Winter Carryall Medic";
		scope = 1;
		picture = "\NLD_Backpacks\Winter\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Winter\Backpack.paa"};
	};
	
	class NLD_KMI_Carryall_Medic : NLD_DST_Carryall_Medic {
		displayName = "[NLD] Korps Mariniers Carryall Medic";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Korps_Mariniers\Backpack.paa"};
	};

	class NLD_DST_Carryall_AT : B_Carryall_cbr {
		displayName = "[NLD] Desert Carryall AT";
		scope = 1;
		picture = "\NLD_Backpacks\Desert\Picture.paa";

		class TransportMagazines
		{
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
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
			class _xx_COLT_Suppressor_Black
			{
				name="COLT_Suppressor_Black";
				count=1;
			};
		};
	};

	class NLD_WLD_Carryall_AT : NLD_DST_Carryall_AT {
		displayName = "[NLD] Woodland Carryall AT";
		scope = 1;
		picture = "\NLD_Backpacks\Woodland\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Woodland\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_AT : NLD_DST_Carryall_AT {
		displayName = "[NLD] NFP-Tan Carryall AT";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Tan\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Tan\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_AT : NLD_DST_Carryall_AT {
		displayName = "[NLD] NFP-Green Carryall AT";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Green\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Green\Backpack.paa"};
	};

	class NLD_WTR_Carryall_AT : NLD_DST_Carryall_AT {
		displayName = "[NLD] Winter Carryall AT";
		scope = 1;
		picture = "\NLD_Backpacks\Winter\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Winter\Backpack.paa"};
	};
	
	class NLD_KMI_Carryall_AT : NLD_DST_Carryall_AT {
		displayName = "[NLD] Korps Mariniers Carryall AT";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Korps_Mariniers\Backpack.paa"};
	};
	
		class NLD_DST_Carryall_AT4 : B_Carryall_cbr {
		displayName = "[NLD] Desert Carryall AT4";
		scope = 1;
		picture = "\NLD_Backpacks\Desert\Picture.paa";

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
			class _xx_COLT_Suppressor_Black
			{
				name="COLT_Suppressor_Black";
				count=1;
			};
		};
	};

	class NLD_WLD_Carryall_AT4 : NLD_DST_Carryall_AT4 {
		displayName = "[NLD] Woodland Carryall AT4";
		scope = 1;
		picture = "\NLD_Backpacks\Woodland\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Woodland\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_AT4 : NLD_DST_Carryall_AT4 {
		displayName = "[NLD] NFP-Tan Carryall AT4";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Tan\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Tan\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_AT4 : NLD_DST_Carryall_AT4{
		displayName = "[NLD] NFP-Green Carryall AT4";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Green\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Green\Backpack.paa"};
	};

	class NLD_WTR_Carryall_AT4 : NLD_DST_Carryall_AT4 {
		displayName = "[NLD] Winter Carryall AT4";
		scope = 1;
		picture = "\NLD_Backpacks\Winter\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Winter\Backpack.paa"};
	};
	
	class NLD_KMI_Carryall_AT4 : NLD_DST_Carryall_AT4 {
		displayName = "[NLD] Korps Mariniers Carryall AT4";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Korps_Mariniers\Backpack.paa"};
	};

	class NLD_DST_Carryall_AR : B_Carryall_cbr {
		displayName = "[NLD] Desert Carryall AR";
		scope = 1;
		picture = "\NLD_Backpacks\Desert\Picture.paa";

		class TransportMagazines
		{
			class _xx_CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch
			{
				magazine="CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch";
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
		};
	};

	class NLD_WLD_Carryall_AR : NLD_DST_Carryall_AR {
		displayName = "[NLD] Woodland Carryall AR";
		scope = 1;
		picture = "\NLD_Backpacks\Woodland\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Woodland\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_AR : NLD_DST_Carryall_AR {
		displayName = "[NLD] NFP-Tan Carryall AR";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Tan\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Tan\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_AR : NLD_DST_Carryall_AR {
		displayName = "[NLD] NFP-Green Carryall AR";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Green\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Green\Backpack.paa"};
	};

	class NLD_WTR_Carryall_AR : NLD_DST_Carryall_AR {
		displayName = "[NLD] Winter Carryall AR";
		scope = 1;
		picture = "\NLD_Backpacks\Winter\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Winter\Backpack.paa"};
	};
	
	class NLD_KMI_Carryall_AR : NLD_DST_Carryall_AR {
		displayName = "[NLD] Korps Mariniers Carryall AR";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Korps_Mariniers\Backpack.paa"};
	};
	
	class NLD_KMI_Carryall_LAR : B_Carryall_oli {
		displayName = "[NLD] Korps Mariniers Carryall LAR";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Korps_Mariniers\Backpack.paa"};

		class TransportMagazines
		{
			class _xx_CUP_60Rnd_556x45_SureFire
			{
				magazine="CUP_60Rnd_556x45_SureFire";
				count=10;
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
			class _xx_CUP_muzzle_snds_M16
			{
				name="CUP_muzzle_snds_M16";
				count=1;
			};
		};
	};

	class NLD_DST_Carryall_Eng : B_Carryall_cbr {
		displayName = "[NLD] Desert Carryall Eng";
		scope = 1;
		picture = "\NLD_Backpacks\Desert\Picture.paa";

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
			class _xx_COLT_Suppressor_Black
			{
				name="COLT_Suppressor_Black";
				count=1;
			};
		};
	};

	class NLD_WLD_Carryall_Eng : NLD_DST_Carryall_Eng {
		displayName = "[NLD] Woodland Carryall Eng";
		scope = 1;
		picture = "\NLD_Backpacks\Woodland\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Woodland\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_Eng : NLD_DST_Carryall_Eng {
		displayName = "[NLD] NFP-Tan Carryall Eng";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Tan\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Tan\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_Eng : NLD_DST_Carryall_Eng {
		displayName = "[NLD] NFP-Green Carryall Eng";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Green\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Green\Backpack.paa"};
	};

	class NLD_WTR_Carryall_Eng : NLD_DST_Carryall_Eng {
		displayName = "[NLD] Winter Carryall Eng";
		scope = 1;
		picture = "\NLD_Backpacks\Winter\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Winter\Backpack.paa"};
	};
	
	class NLD_KMI_Carryall_Eng : NLD_DST_Carryall_Eng {
		displayName = "[NLD] Korps Mariniers Carryall Eng";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Korps_Mariniers\Backpack.paa"};
	};

	class NLD_DST_Carryall_Ammo : B_Carryall_cbr {
		displayName = "[NLD] Desert Carryall Ammo";
		scope = 1;
		picture = "\NLD_Backpacks\Desert\Picture.paa";

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
			class _xx_CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch
			{
				magazine="CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch";
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
			class _xx_COLT_Suppressor_Black
			{
				name="COLT_Suppressor_Black";
				count=1;
			};
		};
	};

	class NLD_WLD_Carryall_Ammo : NLD_DST_Carryall_Ammo {
		displayName = "[NLD] Woodland Carryall Ammo";
		scope = 1;
		picture = "\NLD_Backpacks\Woodland\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Woodland\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_Ammo : NLD_DST_Carryall_Ammo {
		displayName = "[NLD] NFP-Tan Carryall Ammo";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Tan\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Tan\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_Ammo : NLD_DST_Carryall_Ammo {
		displayName = "[NLD] NFP-Green Carryall Ammo";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Green\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Green\Backpack.paa"};
	};

	class NLD_WTR_Carryall_Ammo : NLD_DST_Carryall_Ammo {
		displayName = "[NLD] Winter Carryall Ammo";
		scope = 1;
		picture = "\NLD_Backpacks\Winter\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Winter\Backpack.paa"};
	};
	
	class NLD_KMI_Carryall_Ammo : NLD_DST_Carryall_Ammo {
		displayName = "[NLD] Korps Mariniers Carryall Ammo";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Korps_Mariniers\Backpack.paa"};
	};

	class NLD_DST_Carryall_Expl : B_Carryall_cbr {
		displayName = "[NLD] Desert Carryall Expl";
		scope = 1;
		picture = "\NLD_Backpacks\Desert\Picture.paa";

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
			class _xx_COLT_Suppressor_Black
			{
				name="COLT_Suppressor_Black";
				count=1;
			};
		};
	};

	class NLD_WLD_Carryall_Expl : NLD_DST_Carryall_Expl {
		displayName = "[NLD] Woodland Carryall Expl";
		scope = 1;
		picture = "\NLD_Backpacks\Woodland\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Woodland\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_Expl : NLD_DST_Carryall_Expl {
		displayName = "[NLD] NFP-Tan Carryall Expl";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Tan\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Tan\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_Expl : NLD_DST_Carryall_Expl {
		displayName = "[NLD] NFP-Green Carryall Expl";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Green\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Green\Backpack.paa"};
	};

	class NLD_WTR_Carryall_Expl : NLD_DST_Carryall_Expl {
		displayName = "[NLD] Winter Carryall Expl";
		scope = 1;
		picture = "\NLD_Backpacks\Winter\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Winter\Backpack.paa"};
	};
	
	class NLD_KMI_Carryall_Expl : NLD_DST_Carryall_Expl {
		displayName = "[NLD] Korps Mariniers Carryall Expl";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Korps_Mariniers\Backpack.paa"};
	};

	class NLD_DST_Carryall_UAV : B_UAV_01_backpack_F {
		displayName = "[NLD] Desert Carryall UAV";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Tan\Picture-UAV.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Tan\Backpack-UAV.paa"};

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
			class _xx_COLT_Suppressor_Black
			{
				name="COLT_Suppressor_Black";
				count=1;
			};
		};
	};

	class NLD_WLD_Carryall_UAV : NLD_DST_Carryall_UAV {
		displayName = "[NLD] Woodland Carryall UAV";
		scope = 1;
		picture = "\NLD_Backpacks\Woodland\Picture-UAV.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Woodland\Backpack-UAV.paa"};
	};

	class NLD_NFPT_Carryall_UAV : NLD_DST_Carryall_UAV {
		displayName = "[NLD] NFP-Tan Carryall UAV";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Tan\Picture-UAV.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Tan\Backpack-UAV.paa"};
	};

	class NLD_NFPG_Carryall_UAV : NLD_DST_Carryall_UAV {
		displayName = "[NLD] NFP-Green Carryall UAV";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Green\Picture-UAV.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Green\Backpack-UAV.paa"};
	};

	class NLD_WTR_Carryall_UAV : NLD_DST_Carryall_UAV {
		displayName = "[NLD] Winter Carryall UAV";
		scope = 1;
		picture = "\NLD_Backpacks\Woodland\Picture-UAV.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Woodland\Backpack-UAV.paa"};
	};
	
	class NLD_KMI_Carryall_UAV : NLD_DST_Carryall_UAV {
		displayName = "[NLD] Korps Mariniers Carryall UAV";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Korps_Mariniers\Backpack.paa"};
	};

	class NLD_DST_Carryall_JTAC : B_Carryall_cbr {
		displayName = "[NLD] Desert Carryall JTAC";
		scope = 1;
		picture = "\NLD_Backpacks\Desert\Picture.paa";

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
			class _xx_COLT_Suppressor_Black
			{
				name="COLT_Suppressor_Black";
				count=1;
			};
		};
	};

	class NLD_WLD_Carryall_JTAC : NLD_DST_Carryall_JTAC {
		displayName = "[NLD] Woodland Carryall JTAC";
		scope = 1;
		picture = "\NLD_Backpacks\Woodland\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Woodland\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_JTAC : NLD_DST_Carryall_JTAC {
		displayName = "[NLD] NFP-Tan Carryall JTAC";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Tan\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Tan\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_JTAC : NLD_DST_Carryall_JTAC {
		displayName = "[NLD] NFP-Green Carryall JTAC";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Green\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Green\Backpack.paa"};
	};

	class NLD_WTR_Carryall_JTAC : NLD_DST_Carryall_JTAC {
		displayName = "[NLD] Winter Carryall JTAC";
		scope = 1;
		picture = "\NLD_Backpacks\Winter\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Winter\Backpack.paa"};
	};
	
	class NLD_KMI_Carryall_JTAC : NLD_DST_Carryall_JTAC {
		displayName = "[NLD] Korps Mariniers Carryall JTAC";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Korps_Mariniers\Backpack.paa"};
	};

	class NLD_DST_Carryall_AAR : B_Carryall_cbr {
		displayName = "[NLD] Desert Carryall AAR";
		scope = 1;
		picture = "\NLD_Backpacks\Desert\Picture.paa";

		class TransportMagazines
		{
			class _xx_CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch
			{
				magazine="CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch";
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
			class _xx_COLT_Suppressor_Black
			{
				name="COLT_Suppressor_Black";
				count=1;
			};
		};
	};

	class NLD_WLD_Carryall_AAR : NLD_DST_Carryall_AAR {
		displayName = "[NLD] Woodland Carryall AAR";
		scope = 1;
		picture = "\NLD_Backpacks\Woodland\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Woodland\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_AAR : NLD_DST_Carryall_AAR {
		displayName = "[NLD] NFP-Tan Carryall AAR";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Tan\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Tan\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_AAR : NLD_DST_Carryall_AAR {
		displayName = "[NLD] NFP-Green Carryall AAR";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Green\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Green\Backpack.paa"};
	};

	class NLD_WTR_Carryall_AAR : NLD_DST_Carryall_AAR {
		displayName = "[NLD] Winter Carryall AAR";
		scope = 1;
		picture = "\NLD_Backpacks\Winter\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Winter\Backpack.paa"};
	};
	
	class NLD_KMI_Carryall_AAR : NLD_DST_Carryall_AAR {
		displayName = "[NLD] Korps Mariniers Carryall AAR";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Korps_Mariniers\Backpack.paa"};
	};

	class NLD_DST_Carryall_MMG : B_Carryall_cbr {
		displayName = "[NLD] Desert Carryall MMG";
		scope = 1;
		picture = "\NLD_Backpacks\Desert\Picture.paa";

		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
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
				count=1;
			};
		};
	};

	class NLD_WLD_Carryall_MMG : NLD_DST_Carryall_MMG {
		displayName = "[NLD] Woodland Carryall MMG";
		scope = 1;
		picture = "\NLD_Backpacks\Woodland\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Woodland\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_MMG : NLD_DST_Carryall_MMG {
		displayName = "[NLD] NFP-Tan Carryall MMG";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Tan\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Tan\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_MMG : NLD_DST_Carryall_MMG {
		displayName = "[NLD] NFP-Green Carryall MMG";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Green\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Green\Backpack.paa"};
	};

	class NLD_WTR_Carryall_MMG : NLD_DST_Carryall_MMG {
		displayName = "[NLD] Winter Carryall MMG";
		scope = 1;
		picture = "\NLD_Backpacks\Winter\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Winter\Backpack.paa"};
	};
	
	class NLD_KMI_Carryall_MMG : NLD_DST_Carryall_MMG {
		displayName = "[NLD] Korps Mariniers Carryall MMG";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Korps_Mariniers\Backpack.paa"};
	};

	class NLD_DST_Carryall_MAT : B_Carryall_cbr {
		displayName = "[NLD] Desert Carryall MAT";
		scope = 1;
		picture = "\NLD_Backpacks\Desert\Picture.paa";

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
			class _xx_COLT_Suppressor_Black
			{
				name="COLT_Suppressor_Black";
				count=1;
			};
		};
	};

	class NLD_WLD_Carryall_MAT : NLD_DST_Carryall_MAT {
		displayName = "[NLD] Woodland Carryall MAT";
		scope = 1;
		picture = "\NLD_Backpacks\Woodland\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Woodland\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_MAT : NLD_DST_Carryall_MAT {
		displayName = "[NLD] NFP-Tan Carryall MAT";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Tan\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Tan\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_MAT : NLD_DST_Carryall_MAT {
		displayName = "[NLD] NFP-Green Carryall MAT";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Green\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Green\Backpack.paa"};
	};

	class NLD_WTR_Carryall_MAT : NLD_DST_Carryall_MAT {
		displayName = "[NLD] Winter Carryall MAT";
		scope = 1;
		picture = "\NLD_Backpacks\Winter\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Winter\Backpack.paa"};
	};
	
	class NLD_KMI_Carryall_MAT : NLD_DST_Carryall_MAT {
		displayName = "[NLD] Korps Mariniers Carryall MAT";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Korps_Mariniers\Backpack.paa"};
	};

	class NLD_DST_Carryall_AA : B_Carryall_cbr {
		displayName = "[NLD] Desert Carryall AA";
		scope = 1;
		picture = "\NLD_Backpacks\Desert\Picture.paa";

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
			class _xx_COLT_Suppressor_Black
			{
				name="COLT_Suppressor_Black";
				count=1;
			};
		};
	};

	class NLD_WLD_Carryall_AA : NLD_DST_Carryall_AA {
		displayName = "[NLD] Woodland Carryall AA";
		scope = 1;
		picture = "\NLD_Backpacks\Woodland\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Woodland\Backpack.paa"};
	};

	class NLD_NFPT_Carryall_AA : NLD_DST_Carryall_AA {
		displayName = "[NLD] NFP-Tan Carryall AA";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Tan\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Tan\Backpack.paa"};
	};

	class NLD_NFPG_Carryall_AA : NLD_DST_Carryall_AA {
		displayName = "[NLD] NFP-Green Carryall AA";
		scope = 1;
		picture = "\NLD_Backpacks\NFP-Green\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\NFP-Green\Backpack.paa"};
	};

	class NLD_WTR_Carryall_AA : NLD_DST_Carryall_AA {
		displayName = "[NLD] Winter Carryall AA";
		scope = 1;
		picture = "\NLD_Backpacks\Winter\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Winter\Backpack.paa"};
	};
	
	class NLD_KMI_Carryall_AA : NLD_DST_Carryall_AA {
		displayName = "[NLD] Korps Mariniers Carryall AA";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Korps_Mariniers\Backpack.paa"};
	};


// SF Backpacks

	class NLD_SF_Carryall_Empty : CUP_B_USPack_Black {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] Divers Tactical Backpack";
		picture = "\NLD_Backpacks\SF\Picture.paa";
	};

	class NLD_MTP_Carryall_Empty : B_Kitbag_mcamo {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] KCT mcam Kitbag";
		picture = "\NLD_Backpacks\MTP\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\MTP\Kitbag_mcam.paa"};
	};
	class NLD_KM_Carryall_Empty : B_Kitbag_rgr {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] Marsof Kitbag";
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";
	};

	class NLD_SF_Carryall_B : CUP_B_USPack_Black {
		displayName = "[NLD] Black Tactical Pack(basic)";
		scope = 1;
		picture = "\NLD_Backpacks\SF\Picture.paa";

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
			class _xx_NVGogglesB_blk_F {
				name = "NVGogglesB_blk_F";
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
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_KM_Carryall_B : B_Kitbag_rgr
	{
		displayName = "[NLD] Marsof Kitbag (basic)";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";

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
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_MTP_Carryall_B : B_Kitbag_mcamo
	{
		displayName = "[NLD] KCT mcam Kitbag (basic)";
		scope = 1;
		picture = "\NLD_Backpacks\MTP\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\MTP\Kitbag_mcam.paa"};
		
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
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_SF_Carryall_TL : CUP_B_USPack_Black {
		displayName = "[NLD] Black Tactical Pack TL";
		scope = 1;
		picture = "\NLD_Backpacks\SF\Picture.paa";

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
			class _xx_NVGogglesB_blk_F {
				name = "NVGogglesB_blk_F";
				count = 1;
			};
			class _xx_Dutch_Beret_RoyalMarines
			{
				name="Dutch_Beret_RoyalMarines";
				count=1;
			};
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_MTP_Carryall_TL : B_Kitbag_mcamo
	{
		displayName = "[NLD] KCT mcam Kitbag (TL)";
		scope = 1;
		picture = "\NLD_Backpacks\MTP\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\MTP\Kitbag_mcam.paa"};

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
			class _xx_Dutch_Beret_Commandos
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_KM_Carryall_TL : B_Kitbag_rgr {
		displayName = "[NLD] Marsof Kitbag TL";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";

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
			class _xx_Dutch_Beret_RoyalMarines
			{
				name="Dutch_Beret_RoyalMarines";
				count=1;
			};
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_SF_Carryall_Medic : CUP_B_USPack_Black {
		displayName = "[NLD] Black Tactical Pack Medic";
		scope = 1;
		picture = "\NLD_Backpacks\SF\Picture.paa";

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
			class _xx_NVGogglesB_blk_F {
				name = "NVGogglesB_blk_F";
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
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};
	
	class NLD_DSI_Backpack_Medic : B_AssaultPack_blk {
		displayName = "[NLD] Black backpack Medic";
		scope = 1;
		picture = "\NLD_Backpacks\SF\Picture.paa";

		class TransportMagazines
		{
			
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
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
		};
	};
	
	class NLD_DSI_Engi : B_AssaultPack_blk {
		displayName = "[NLD] Black backpack Breacher";
		scope = 1;
		picture = "\NLD_Backpacks\SF\Picture.paa";

		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
		};
	};
	
	class NLD_DSI_MGback : B_AssaultPack_blk {
		displayName = "[NLD] Black backpack MG";
		scope = 1;
		picture = "\NLD_Backpacks\SF\Picture.paa";

		class TransportMagazines
		{
			class _xx_CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch
			{
				magazine="CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch";
				count=2;
			};
		};
	};

	class NLD_MTP_Carryall_Medic : B_Kitbag_mcamo
	{
		displayName = "[NLD] KCT mcam Kitbag Medic";
		scope = 1;
		picture = "\NLD_Backpacks\MTP\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\MTP\Kitbag_mcam.paa"};
		
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
			class _xx_Dutch_Beret_Commandos
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_KM_Carryall_Medic : B_Kitbag_rgr
	{
		displayName = "[NLD] Marsof Kitbag (Medic)";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";

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
			class _xx_Dutch_Beret_RoyalMarines
			{
				name="Dutch_Beret_RoyalMarines";
				count=1;
			};
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_SF_Carryall_ComSpec : CUP_B_USPack_Black {
		displayName = "[NLD] Black Tactical Pack ComSpec";
		scope = 1;
		picture = "\NLD_Backpacks\SF\Picture.paa";

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
			class _xx_NVGogglesB_blk_F {
				name = "NVGogglesB_blk_F";
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
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_MTP_Carryall_ComSpec : B_Kitbag_mcamo {
		displayName = "[NLD] KCT mcam Kitbag ComSpec";
		scope = 1;
		picture = "\NLD_Backpacks\MTP\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\MTP\Kitbag_mcam.paa"};
		
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
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_KM_Carryall_ComSpec : B_Kitbag_rgr {
		displayName = "[NLD] Marsof Kitbag ComSpec";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";

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
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_SF_Carryall_Expl : CUP_B_USPack_Black {
		displayName = "[NLD] Black Tactical Pack Expl";
		scope = 1;
		picture = "\NLD_Backpacks\SF\Picture.paa";

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
			class _xx_NVGogglesB_blk_F {
				name = "NVGogglesB_blk_F";
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
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_MTP_Carryall_Expl : B_Kitbag_mcamo {
		displayName = "[NLD] KCT mcam Kitbag Expl";
		scope = 1;
		picture = "\NLD_Backpacks\MTP\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\MTP\Kitbag_mcam.paa"};
		
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
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_KM_Carryall_Expl : B_Kitbag_rgr {
		displayName = "[NLD] Marsof Kitbag Expl";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";

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
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_SF_Carryall_AT : CUP_B_USPack_Black {
		displayName = "[NLD] Black Tactical Pack AT";
		scope = 1;
		picture = "\NLD_Backpacks\SF\Picture.paa";

		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
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
			class _xx_NVGogglesB_blk_F {
				name = "NVGogglesB_blk_F";
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
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_MTP_Carryall_AT : B_Kitbag_mcamo {
		displayName = "[NLD] KCT mcam Kitbag AT";
		scope = 1;
		picture = "\NLD_Backpacks\MTP\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\MTP\Kitbag_mcam.paa"};
		
				class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
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
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_KM_Carryall_AT : B_Kitbag_rgr {
		displayName = "[NLD] Marsof Kitbag AT";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";

		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
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
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};
	
	class NLD_SF_Carryall_LAT : CUP_B_USPack_Black {
		displayName = "[NLD] Black Tactical Pack LAT";
		scope = 1;
		picture = "\NLD_Backpacks\SF\Picture.paa";

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
			class _xx_NVGogglesB_blk_F {
				name = "NVGogglesB_blk_F";
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
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_MTP_Carryall_LAT : B_Kitbag_mcamo {
		displayName = "[NLD] KCT mcam Kitbag LAT";
		scope = 1;
		picture = "\NLD_Backpacks\MTP\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\MTP\Kitbag_mcam.paa"};
		
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
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_KM_Carryall_LAT : B_Kitbag_rgr {
		displayName = "[NLD] Marsof Kitbag LAT";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";

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
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_SF_Carryall_AA : CUP_B_USPack_Black {
		displayName = "[NLD] Black Tactical Pack AA";
		scope = 1;
		picture = "\NLD_Backpacks\SF\Picture.paa";

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
			class _xx_NVGogglesB_blk_F {
				name = "NVGogglesB_blk_F";
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
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_MTP_Carryall_AA : B_Kitbag_mcamo {
		displayName = "[NLD] KCT mcam Kitbag AA";
		scope = 1;
		picture = "\NLD_Backpacks\MTP\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\MTP\Kitbag_mcam.paa"};
		
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
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_KM_Carryall_AA : B_Kitbag_rgr {
		displayName = "[NLD] Marsof Kitbag AA";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";

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
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};

	class NLD_SF_Carryall_SLA : CUP_B_USPack_Black {
		displayName = "[NLD] Black Tactical Pack Sharpshooter";
		scope = 1;
		picture = "\NLD_Backpacks\SF\Picture.paa";

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
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_NVGogglesB_blk_F {
				name = "NVGogglesB_blk_F";
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

	class NLD_MTP_Carryall_SLA : B_Kitbag_mcamo {
		displayName = "[NLD] KCT mcam Kitbag Sniper";
		scope = 1;
		picture = "\NLD_Backpacks\MTP\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\MTP\Kitbag_mcam.paa"};
		
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
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
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
			class _xx_Dutch_Beret_Commandos
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
		};
	};
	
	class NLD_MTP_Carryall_HSLA : B_Kitbag_mcamo {
		displayName = "[NLD] KCT mcam Kitbag HSniper";
		scope = 1;
		picture = "\NLD_Backpacks\MTP\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\MTP\Kitbag_mcam.paa"};
		
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
			class _xx_CUP_10Rnd_127x99_M107
			{
				magazine="CUP_10Rnd_127x99_M107";
				count=4;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
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
			class _xx_Dutch_Beret_Commandos
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
		};
	};
	
	class NLD_KM_Carryall_HSLA : B_Kitbag_rgr {
		displayName = "[NLD] Marsof Kitbag Heavy Sniper";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";
		
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
			class _xx_CUP_10Rnd_127x99_M107
			{
				magazine="CUP_10Rnd_127x99_M107";
				count=4;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
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
			class _xx_Dutch_Beret_RoyalMarines
			{
				name="Dutch_Beret_Commandos";
				count=1;
			};
		};
	};

	class NLD_KM_Carryall_SLA : B_Kitbag_rgr {
		displayName = "[NLD] Marsof Kitbag Sharpshooter";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";

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
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
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
			class _xx_Dutch_Beret_RoyalMarines
			{
				name="Dutch_Beret_RoyalMarines";
				count=1;
			};
		};
	};

	class NLD_SF_Carryall_AR : CUP_B_USPack_Black {
		displayName = "[NLD] Black Tactical Pack AR";
		scope = 1;
		picture = "\NLD_Backpacks\SF\Picture.paa";

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
			class _xx_CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch
			{
				magazine="CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch";
				count=4;
			};
		};
		class TransportItems
		{
			class _xx_NVGogglesB_blk_F {
				name = "NVGogglesB_blk_F";
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

	class NLD_MTP_Carryall_AR : B_Kitbag_mcamo {
		displayName = "[NLD] KCT mcam Kitbag AR";
		scope = 1;
		picture = "\NLD_Backpacks\MTP\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\MTP\Kitbag_mcam.paa"};
		
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
			class _xx_CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch
			{
				magazine="CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch";
				count=4;
			};
		};
		class TransportItems
		{
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
	
	class NLD_MTP_Carryall_MMG : B_Kitbag_mcamo {
		displayName = "[NLD] KCT mcam Kitbag MMG";
		scope = 1;
		picture = "\NLD_Backpacks\MTP\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\MTP\Kitbag_mcam.paa"};
		
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
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=4;
			};
		};
		class TransportItems
		{
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

	class NLD_KM_Carryall_AR : B_Kitbag_rgr {
		displayName = "[NLD] Marsof Kitbag AR";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";

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
			class _xx_CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch
			{
				magazine="CUP_200Rnd_TE4_red_Tracer_556x45_M249_Pouch";
				count=4;
			};
		};
		class TransportItems
		{
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
	
	class NLD_KM_Carryall_LAR : B_Kitbag_rgr {
		displayName = "[NLD] Marsof Kitbag LAR";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";

		class TransportMagazines
		{
			class _xx_CUP_60Rnd_556x45_SureFire
			{
				magazine="CUP_60Rnd_556x45_SureFire";
				count=10;
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
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_CUP_muzzle_mfsup_flashhider_556x45_Black
			{
				name="CUP_muzzle_mfsup_flashhider_556x45_Black";
				count=1;
			};
		};
	};
	
	class NLD_KM_Carryall_MMG : B_Kitbag_rgr {
		displayName = "[NLD] Marsof Kitbag MMG";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";

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
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=4;
			};
		};
		class TransportItems
		{
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

	class NLD_SF_Carryall_MP5 : CUP_B_USPack_Black {
		displayName = "[NLD] Black Tactical Pack AR";
		scope = 1;
		picture = "\NLD_Backpacks\SF\Picture.paa";

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
			class _xx_NVGogglesB_blk_F {
				name = "NVGogglesB_blk_F";
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

	class NLD_MTP_Carryall_MP5 : B_Kitbag_mcamo {
		displayName = "[NLD] KCT mcam Kitbag MP5";
		scope = 1;
		picture = "\NLD_Backpacks\MTP\Picture.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\MTP\Kitbag_mcam.paa"};
		
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

	class NLD_KM_Carryall_MP5 : B_Kitbag_rgr {
		displayName = "[NLD] Marsof Kitbag MP5";
		scope = 1;
		picture = "\NLD_Backpacks\Korps_Mariniers\Picture.paa";

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

	class NLD_Spongebob_Tactical : B_AssaultPack_blk {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] SpongeBob Tacticalpack";
        scope = 2;
		picture = "\NLD_Backpacks\Spongebob\Data\uim\Spongebobsquarebag.paa";
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Spongebob\Data\Spongebobsquarebag.paa"};
	};
	
	class NLD_DarthVader : B_AssaultPack_blk {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] DarthVader Tacticalpack";
        scope = 2;
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Spongebob\Data\DarthVader.paa"};
	};
	
	class NLD_Dorapack : B_AssaultPack_blk {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] Dora Tacticalpack";
        scope = 2;
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Spongebob\Data\Dorabackpack.paa"};
	};
	
	class NLD_Courage : B_AssaultPack_blk {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] Courage Tacticalpack";
        scope = 2;
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Spongebob\Data\Courage.paa"};
	};
	
	class NLD_HelloKitty : B_AssaultPack_blk {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] HelloKitty Tacticalpack";
        scope = 2;
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Spongebob\Data\hellokitty.paa"};
	};
	
	class NLD_JohnnyBravo : B_AssaultPack_blk {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] JohnnyBravo Tacticalpack";
        scope = 2;
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Spongebob\Data\JohnnyBravo.paa"};
	};
	
	class NLD_KyloRenn : B_AssaultPack_blk {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] KyloRenn Tacticalpack";
        scope = 2;
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Spongebob\Data\Kylo Renn.paa"};
	};
	
	class NLD_Dickbag : B_AssaultPack_blk {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] BickDag";
        scope = 2;
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Spongebob\Data\lulweek.paa"};
	};
	
	class NLD_PatrickStar : B_AssaultPack_blk {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] PatrickStar Tacticalpack";
        scope = 2;
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Spongebob\Data\Patrickstar.paa"};
	};
	
	class NLD_Pikachu : B_AssaultPack_blk {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] Pikachu Tacticalpack";
        scope = 2;
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Spongebob\Data\Pikachu.paa"};
	};
	
	class NLD_Plankton : B_AssaultPack_blk {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] Plankton Tacticalpack";
        scope = 2;
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Spongebob\Data\Plankton.paa"};
	};
	
	class NLD_Squidward : B_AssaultPack_blk {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] Squidward Tacticalpack";
        scope = 2;
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Spongebob\Data\Squidward.paa"};
	};
	
	class NLD_Stormtrooper : B_AssaultPack_blk {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] Stormtrooper Tacticalpack";
        scope = 2;
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Spongebob\Data\stormtrooper.paa"};
	};
	
	class NLD_BigDickBag : B_Carryall_oli {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] DigBickBag CarryAll";
        scope = 2;
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Spongebob\Data\lulweekbig.paa"};
	};
	
	class NLD_Minion1 : B_Carryall_oli {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] Minion1 CarryAll";
        scope = 2;
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Spongebob\Data\Swagpack1.paa"};
	};
	
	class NLD_Minion2 : B_Carryall_oli {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] Minion2 CarryAll";
        scope = 2;
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Spongebob\Data\Swagpack2.paa"};
	};
	
	class NLD_Minion3 : B_Carryall_oli {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] Minion3 CarryAll";
        scope = 2;
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Spongebob\Data\Swagpack3.paa"};
	};
	
	class NLD_Minion4 : B_Carryall_oli {
		dlc="NLD_Units";
		author="Lowlands Tactical";
		displayName = "[NLD] Minion4 CarryAll";
        scope = 2;
		hiddenSelectionsTextures[] = {"\NLD_Backpacks\Spongebob\Data\Swagpack4.paa"};
	};
};

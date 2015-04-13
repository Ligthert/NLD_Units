class CfgPatches
{
	class NLD_F16
	{
		units[] = {"NLD_F16_AA","NLD_F16_CAS","NLD_F16_AI"};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"FIR_AirWeaponSystem_US"};
	};
};
class CfgVehicles
{
	class FIR_F16C;
	class NLD_F16_AA: FIR_F16C
	{
		scope = 2;
		faction = "NLD_Units";
		vehicleClass = Air;
		side = 1;
		author = "Firewill, da12thMonkey";
		displayName = "F-16C Fighting Falcon AA (NL)";
		hiddenselectionstextures[] = {"NLD_F16\Body_NLD_co.paa","NLD_F16\Wing_NLD_co.paa",""};
		weapons[] = {"FIR_M61A2","CMFlareLauncher","FIR_AIM9L","FIR_AIM120"};
		magazines[] = {"FIR_M61A2_511rnd_M","240Rnd_CMFlare_Chaff_Magazine","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_AIM9L_1rnd_M","FIR_AIM9L_1rnd_M","FIR_AIM120_1rnd_M","FIR_AIM120_1rnd_M","FIR_AIM120_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_AIM120_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_f16C_Fueltank_1rnd_M","FIR_f16C_Fueltank_1rnd_M"};
	};
	class NLD_F16_CAS: FIR_F16C
	{
		scope = 2;
		faction = "NLD_Units";
		vehicleClass = Air;
		side = 1;
		author = "Firewill, da12thMonkey";
		displayName = "F-16C Fighting Falcon CAS (NL)";
		hiddenselectionstextures[] = {"NLD_F16\Body_NLD_co.paa","NLD_F16\Wing_NLD_co.paa",""};
		weapons[] = {"FIR_M61A2","CMFlareLauncher","FIR_AIM9L","FIR_AIM120"};
		magazines[] = {"FIR_M61A2_511rnd_M","240Rnd_CMFlare_Chaff_Magazine","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_AIM9L_1rnd_M","FIR_AIM9L_1rnd_M","FIR_AIM120_1rnd_M","FIR_AIM120_1rnd_M","FIR_AIM120_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_AIM120_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_f16C_Fueltank_1rnd_M","FIR_f16C_Fueltank_1rnd_M"};
	};
	class NLD_F16_AI: FIR_F16C
	{
		scope = 2;
		faction = "NLD_Units";
		vehicleClass = Air;
		side = 1;
		author = "Firewill, da12thMonkey";
		displayName = "F-16C Fighting Falcon CAS-AI (NL)";
		hiddenselectionstextures[] = {"NLD_F16\Body_NLD_co.paa","NLD_F16\Wing_NLD_co.paa",""};
		weapons[] = {"FIR_M61A2","CMFlareLauncher","FIR_AIM9L","FIR_AIM120"};
		magazines[] = {"FIR_M61A2_511rnd_M","240Rnd_CMFlare_Chaff_Magazine","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_AIM9L_1rnd_M","FIR_AIM9L_1rnd_M","FIR_AIM120_1rnd_M","FIR_AIM120_1rnd_M","FIR_AIM120_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_AIM120_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_f16C_Fueltank_1rnd_M","FIR_f16C_Fueltank_1rnd_M"};
	};
};
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
	class NLD_F16C_AA: FIR_F16C
	{
		scope = 2;
		faction = "NLD_Units";
		vehicleClass = Air;
		side = 1;
		author = "Firewill, da12thMonkey";
		displayName = "[NLD] F-16C Fighting Falcon AA";
		hiddenselectionstextures[] = {"NLD_F16\Body_NLD_co.paa","NLD_F16\Wing_NLD_co.paa",""};
		weapons[] = {"FIR_MasterArm", "FIR_M61A2", "CMFlareLauncher", "FIR_AIM9L", "FIR_AIM120"};
		magazines[] = {"FIR_M61A2_511rnd_M","240Rnd_CMFlare_Chaff_Magazine","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_AIM9L_1rnd_M","FIR_AIM9L_1rnd_M","FIR_AIM120_1rnd_M","FIR_AIM120_1rnd_M","FIR_AIM120_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_AIM120_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_f16C_Fueltank_1rnd_M","FIR_f16C_Fueltank_1rnd_M"};
	};
	class NLD_F16C_CAS: FIR_F16C
	{
		scope = 2;
		faction = "NLD_Units";
		vehicleClass = Air;
		side = 1;
		author = "Firewill, da12thMonkey, Sacha Ligthert";
		displayName = "[NLD] F-16C Fighting Falcon CAS";
		hiddenselectionstextures[] = {"NLD_F16\Body_NLD_co.paa","NLD_F16\Wing_NLD_co.paa",""};
		weapons[] = {"FIR_MasterArm", "FIR_M61A2", "CMFlareLauncher", "FIR_AIM9L", "FIR_GBU12"};
		magazines[] = {"FIR_M61A2_511rnd_M","240Rnd_CMFlare_Chaff_Magazine","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_AIM9L_1rnd_M","FIR_AIM9L_1rnd_M","FIR_GBU12_1rnd_M","FIR_GBU12_1rnd_M","FIR_GBU12_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_GBU12_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_f16C_Fueltank_1rnd_M","FIR_f16C_Fueltank_1rnd_M"};
	};
	class NLD_F16C_CASAI: FIR_F16C
	{
		scope = 2;
		faction = "NLD_Units";
		vehicleClass = Air;
		side = 1;
		author = "Firewill, da12thMonkey, Sacha Ligthert";
		displayName = "[NLD] F-16C Fighting Falcon CAS-AI";
		hiddenselectionstextures[] = {"NLD_F16\Body_NLD_co.paa","NLD_F16\Wing_NLD_co.paa",""};
		weapons[] = {"FIR_MasterArm", "Twin_Cannon_20mm", "CMFlareLauncher", "Missile_AA_04_Plane_CAS_01_F","Missile_AGM_02_Plane_CAS_01_F","Bomb_04_Plane_CAS_01_F"};
		magazines[] = {"300Rnd_20mm_shells","240Rnd_CMFlare_Chaff_Magazine","FIR_empty_1rnd_M","FIR_empty_1rnd_M","2Rnd_Missile_AA_04_F","2Rnd_Missile_AA_04_F","6Rnd_Missile_AGM_02_F","6Rnd_Missile_AGM_02_F","6Rnd_Missile_AGM_02_F","4Rnd_Bomb_04_F","4Rnd_Bomb_04_F","4Rnd_Bomb_04_F","6Rnd_Missile_AGM_02_F","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_empty_1rnd_M","FIR_f16C_Fueltank_1rnd_M","FIR_f16C_Fueltank_1rnd_M"};
	};
};
class CfgPatches
{
	class SP_Flags_Netherlands
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Data_F_Enoch_Loadorder"};
	};
};


class CfgVehicles
{
	class FlagPole_F;

	class NLD_Netherlands_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Flag (Netherlands)";
		nameSound = "flag";
		class EventHandlers {
			init = "_this select 0 forceFlagTexture '\NLD_Flags\Flags\NL_Flag.paa'";};
	};

	class NLD_LowlandsTactical_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Flag (Lowlands Tactical)";
		nameSound = "flag";
		class EventHandlers {
			init = "_this select 0 forceFlagTexture '\NLD_Flags\Flags\LT_Flag.paa'";};
	};
	
};

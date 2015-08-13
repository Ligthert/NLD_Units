
class CfgPatches
{
	class SP_Flags_Netherlands
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Structures_F_Mil_Flags"};
	};
};
class CfgVehicles
{
	class FlagPole_F;



	class NLD_Netherlands_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Flag(Netherlands)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\NLD_Flags\Flags\NL_Flag.paa""";

};
	};
	class Netherlands_RoyalAirForce_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Flag(Lowlands Tactical)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\NLD_Flags\Flags\LT_Flag.paa"""

		};
	};
};
//};

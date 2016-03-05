class CfgPatches {
	class NLD_Units_Main {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
	};
};
class CfgMods
{
	class Mod_Base;
	class NLD_Units: Mod_Base
	{
		action="http://lowtac.nl";
		author="Lowlands Tactical";
		dir="NLD_Units";
		dlcColor[]={0,0,0,1};
		fieldManualTopicAndHint[]={};
		hideName=1;
		hidePicture=0;
		logo="\NLD_Main\logo\NLD_Units.paa";
		logoOver="\NLD_Main\logo\NLD_Units_Overlay.paa";
		name="NLD Units: Dutch Units for ArmA 3.";
		overview="NLD Units: Dutch Units for ArmA 3.";
		picture="\NLD_Main\logo\NLD_Units.paa";
		tooltip="NLD_Units";
		tooltipOwned="NLD_Units";
	};
};
class CfgMarkers
{
	class flag_USA;
	class NLD_Units_Marker: flag_USA
	{
		name="[NLD] NLD_Units";
		icon="\NLD_Main\logo\NLD_Units.paa";
	};
	class NLD_LowTac_Marker: flag_USA
	{
		name="[NLD] Lowlands Tactical";
		icon="\NLD_Main\logo\LT-Square.paa";
	};
};

class CfgFactionClasses
{

	class NLD_Units
	{
		displayName="NLD Armed Forces";
		icon="\NLD_Infantry_Units\Icon\Icon.jpg";
		priority=1;
		side=1;
	};

/*
	class NLD_Units_WLD
	{
		displayName="NLD Armed Forces (Woodland)";
		icon="\NLD_Infantry_Units\Icon\Icon.jpg";
		priority=1;
		side=1;
	};

	class NLD_Units_DST
	{
		displayName="NLD Armed Forces (Desert)";
		icon="\NLD_Infantry_Units\Icon\Icon.jpg";
		priority=1;
		side=1;
	};

	class NLD_Units_UN_DST
	{
		displayName="NLD Armed Forces (UN Desert)";
		icon="\NLD_Infantry_Units\Icon\Icon.jpg";
		priority=1;
		side=1;
	};

	class NLD_Units_UN_WLD
	{
		displayName="NLD Armed Forces (UN Woodland)";
		icon="\NLD_Infantry_Units\Icon\Icon.jpg";
		priority=1;
		side=1;
	};

	class NLD_Units_WTR
	{
		displayName="NLD Armed Forces (WTR)";
		icon="\NLD_Infantry_Units\Icon\Icon.jpg";
		priority=1;
		side=1;
	};

	class NLD_Units_NFPG
	{
		displayName="NLD Armed Forces (NFP-Green)";
		icon="\NLD_Infantry_Units\Icon\Icon.jpg";
		priority=1;
		side=1;
	};

	class NLD_Units_NFPT
	{
		displayName="NLD Armed Forces (NFP-Tan)";
		icon="\NLD_Infantry_Units\Icon\Icon.jpg";
		priority=1;
		side=1;
	};

	class NLD_Units_JGL
	{
		displayName="NLD Armed Forces (Jungle)";
		icon="\NLD_Infantry_Units\Icon\Icon.jpg";
		priority=1;
		side=1;
	};
*/
	
};
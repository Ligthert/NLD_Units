class CfgPatches
{
	class NLD_F16
	{
		units[] = {"NLD_F16C"};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"FIR_AirWeaponSystem_US"};
	};
};
class CfgVehicles
{
	class FIR_F16C;
	class NLD_F16: FIR_F16C
	{
		scope = 2;
		faction = "NLD_Units";
		vehicleClass = Air;
		displayName = "F-16 MLU SQN 312"; 
		side = 1;
		fir_f16_engine = "GE";
		fir_f16_aux = "iff";
		fir_f16_hud = "std";		
		fir_f16_vwt = "dragchute"; 
		fir_f16_cft = "no";	
		author = "Firewill, da12thMonkey";
		hiddenselectionstextures[] = {"NLD_F16\body_co.paa","NLD_F16\wing_co.paa","NLD_F16\tail_co.paa"};
		editorPreview = "\NLD_vehicle_units\previews\NLD_F16.jpg";
		crew = "NLD_Pilot_F16";
	};
	
	class NLD_F16_40: FIR_F16C
	{
		scope = 1;
		faction = "NLD_Units";
		vehicleClass = Air;
		displayName = "F-16 40 Years MLU SQN 312"; 
		side = 1;
		fir_f16_engine = "GE";
		fir_f16_aux = "iff";
		fir_f16_hud = "std";		
		fir_f16_vwt = "dragchute"; 
		fir_f16_cft = "no";	
		author = "Firewill, da12thMonkey";
		hiddenselectionstextures[] = {"NLD_F16\body_co.paa","NLD_F16\wing_co.paa","NLD_F16\tail40_co.paa"};
		editorPreview = "\NLD_vehicle_units\previews\NLD_F16.jpg";
		crew = "NLD_Pilot_F16";
	};
};
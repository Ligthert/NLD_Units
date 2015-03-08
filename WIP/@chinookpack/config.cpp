#include "Crewanimations.hpp"

class CfgPatches
{
	class chinookpack
	{
		units[] ={"RAMPGUN_CH47_base","CH_47F_Ramp","RAMPGUNBAF_CH47_base","CH_47FBAF_Ramp", "CH_47F_Unarmed", "CH_47FBAF_Unarmed"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F", "A3_Weapons_F"};
	};
};

class CfgVehicleClasses
{
	class CH47_CH_47F
	{
		displayName = "Chinook Pack";
	};

};

class Mode_SemiAuto;
class Mode_Burst;

class CfgWeapons
{
	class M134_minigun;
	class MGun;
	class M134_minigun_2: M134_minigun {};
	
	class M240_veh: MGun
	{
		scope = 1;
		displayName = "M240";
		soundContinuous = false;
		aiDispersionCoefY=21; // 7
		aiDispersionCoefX=21;
		magazines[] = {"100Rnd_762x51_M240"};
		magazineReloadTime=3;
		canLock = 0;

		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
            displayName = "M240";
            autoFire = 1;
			reloadTime = 0.075;
	        dispersion=0.0012;

			showToPlayer = true;
            burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange=1;minRangeProbab=0.01;
			midRange=2;midRangeProbab=0.01;
			maxRange=3;maxRangeProbab=0.01;
		};
		class close: manual
		{
            showToPlayer = false;
            soundBurst = false;
            burst = 10; //Rg 6;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange=0;minRangeProbab=0.05;
			midRange=100;midRangeProbab=0.58;
			maxRange=200;maxRangeProbab=0.04;
		};
		class short: close
		{
			burst = 8; //Rg 6;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300; //Rg 200;
			minRange=50;minRangeProbab=0.05;
			midRange=200;midRangeProbab=0.58; //Rg 100;
			maxRange=400;maxRangeProbab=0.04; //Rg 200;
		};
		class medium: close
		{
			burst = 4; //Rg 8;
			aiRateOfFire = 3; //Rg 4;
			aiRateOfFireDistance = 600; //Rg 400;
			minRange=300;minRangeProbab=0.05;
			midRange=400;midRangeProbab=0.58; //Rg 300;
			maxRange=600;maxRangeProbab=0.04; //Rg 400;
		};
		class far: close
		{
			burst = 5; //Rg 7;
			aiRateOfFire = 5; //Rg 7;
			aiRateOfFireDistance = 1000; //Rg 600;
			minRange=500;minRangeProbab=0.05;
			midRange=600;midRangeProbab=0.4; //Rg 500;
			maxRange=800;maxRangeProbab=0.01; //Rg 600;
		};
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class 100Rnd_762x51_M240: VehicleMagazine
	{
		scope = 1;
		displayName = "100rnd_M240";
		count=100;
		ammo = "B_762x51_Ball";
		initSpeed = 900;
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound="mgun";
		descriptionShort = "100RND_M240";
	};
};

class CfgVehicles
{
	class AllVehicles;
	class Air : AllVehicles
	{
	
	};
	class Helicopter: Air
	{
		class Turrets
		{
			class MainTurret;
		};
		class NewTurret;
		class AnimationSources;
		class HitPoints;
	};
	class RAMPGUN_CH47_base: Helicopter
	{
	    author = "DELTAGAMER";
		model = "\chinookpack\chinook\CH_47F.p3d";
		picture = "\chinookpack\chinook\data\UI\Picture_ch47f_CA.paa";
		icon = "\chinookpack\chinook\data\UI\Icon_ch47f_CA.paa";
		mapSize = 24;
		scope=2;
		maxSpeed = 295;
		maxFordingDepth = 0.65;
		expansion = 1;
		displayName = "US CH-47F (M240)";
		side = 1;
		faction= "BLU_F";
		vehicleClass = "CH47_CH_47F";
		accuracy=0.5;
		mainRotorSpeed = 1.0;
		backRotorSpeed = 1.0;
		armor=30;
		damageResistance = 0.00100;
		destrType="DestructWreck";
		simulation = "helicopterX";
		slingLoadMemoryPoint = "slingLoad0";
		slingLoadMaxCargoMass = 10000;
		liftForceCoef = 2.5;
		tf_RadioType_api = "tf_anarc210";
		tf_hasLRradio_api = 1; // 1 = true, 0 = false
		tf_isolatedAmount_api = 0.2;
		
		crew = "B_Helipilot_F";
		typicalCargo[]={"B_Helipilot_F", "B_helicrew_F", "B_helicrew_F", "B_helicrew_F"};
		driverAction = "pilot_Heli_Transport_01";
		memoryPointsGetInDriver = "pos cargo";
		memoryPointsGetInDriverDir = "pos cargo dir";		
		slingLoadOperator = 1;
		
		memoryPointsGetInCargo[] = {"pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir"};

		cargoAction[]={"CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1"};
		cargoIsCoDriver[]={"true", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false"};

		transportSoldier=22;
		transportMaxBackpacks = 10;

		weapons[]={"CMFlareLauncher"};
		magazines[]={"168Rnd_CMFlare_Chaff_Magazine"};
		LockDetectionSystem = "2 + 8 + 4";
		IncomingMisslieDetectionSystem = 16;

		radarType = 4;
		enableManualFire = 0;

		//threat[] VSoft, VArmor, VAir
		threat[]={0.8, 1, 0.6};
		
		class MFD{};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 28;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 5;
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret //Left Doorgun
			{
				isCopilot = 0;
				CanEject = 1;
				body="mainTurret";
				gun="mainGun";
				minElev= -50; maxElev= +30; initElev= -30;
				minTurn= -3; maxTurn= 173; initTurn= 0;
				soundServo[]={,db-40,1.0};
				animationSourceHatch="";
				stabilizedInAxes = StabilizedInAxesNone;
				gunBeg="muzzle_1";
				gunEnd="chamber_1";
				weapons[]= {"M134_minigun"};
				magazines[]={"5000Rnd_762x51_Belt"};
				gunnerName= "Left Door Gunner";
				gunnerOpticsModel= "\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				gunnerAction= "CH47_Gunner_EP1";
				gunnerInAction= "CH47_Gunner_EP1";
				commanding= -1;
				primaryGunner= 1;
//				proxyIndex=2;
				class ViewOptics
				{
					initAngleX= 0; minAngleX= -30; maxAngleX= +30;
					initAngleY= 0; minAngleY= -100; maxAngleY= +100;
					initFov= 0.7; minFov= 0.25; maxFov= 1.1;
				};
				gunnerCompartments = Compartment2;
				memoryPointsGetInGunner= "pos gunner";
				memoryPointsGetInGunnerDir= "pos gunner dir";
				slingLoadOperator = 0;
			};
        	class CopilotTurret: NewTurret
			{
				isCopilot = 1;
				weapons[] = {};
				magazines[] = {};
				body = "Turret3";
				gun = "";
				selectionFireAnim = "";
				CanEject = 0;
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Transport_01";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "GetOutLow";
				gunnerName = "Co-Pilot";
				preciseGetInOut = 0;
				GunnerDoor = "";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				proxyIndex = 30;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				slingLoadOperator = 1;
			};
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				CanEject = 1;
				body="Turret2";
				gun="Gun_2";
				minElev= -60; maxElev= +30; initElev= -30;
				minTurn=- 173; maxTurn= 3; initTurn= 0;
				animationSourceBody="Turret_2";
				animationSourceGun="Gun_2";
				stabilizedInAxes = StabilizedInAxesNone;
				selectionFireAnim="zasleh_1";
			    proxyIndex=2;
				gunnerName= "Right Door Gunner";
				commanding= -2;
				weapons[]= {"M134_minigun_2"};
				gunBeg="muzzle_2"; //gunBeg=endpoint of the gun
				gunEnd="chamber_2"; //gunEnd=chamber of the gun
				primaryGunner=0;
				memoryPointGun= "machinegun_2";
				memoryPointGunnerOptics= "gunnerview_2";
				slingLoadOperator = 0;
			};
			class BackDoorGun: MainTurret
			{
				isCopilot = 0;
				CanEject = 1;
				body="Turret3";
				gun="Gun_3";
				minTurn= 130; maxTurn= 230; initTurn= 180;
				minElev= -50; maxElev= +50; initElev= 0;
				animationSourceBody="Turret_3";
				animationSourceGun="Gun_3";
				stabilizedInAxes = StabilizedInAxesNone;
				selectionFireAnim="zasleh_3";

				proxyIndex=3;
				gunnerName= "Rear Gunner";
				gunnerOpticsShowCursor=0;

				commanding=-1;
				gunnerAction= "CH47_Gunner01_EP1";
				gunnerInAction= "CH47_Gunner01_EP1";

				weapons[]={"M240_veh"};
				magazines[]={"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};

				gunBeg="muzzle_3"; //gunBeg=endpoint of the gun
				gunEnd="chamber_3"; //gunEnd=chamber of the gun

				primaryGunner=0;
				memoryPointGun="machinegun_3";
				memoryPointGunnerOptics="gunnerview_3";
				slingLoadOperator = 0;
			};
			class CargoTurret_01: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos Cargo";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos Cargo dir";	/// direction of get in action
				gunnerName 					= "Passenger (Left Side)";	/// name of the position in the Action menu
				proxyIndex 					= 24;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -42;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 20;					/// what is the left-most possible turn of the turret
				minTurn 					= -70;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "";				/// doesn't work unless the said animation source is 1
				usepip = 0;
				startEngine = 0;
                commanding = -1;
				playerPosition=4;
	            outGunnerMayFire = 1;
                inGunnerMayFire = 0;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				memoryPointGunnerOptics= "";
			};
			class CargoTurret_02: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos Cargo";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos Cargo dir";	/// direction of get in action
				gunnerName 					= "Passenger (Right Side)";	/// name of the position in the Action menu
				proxyIndex 					= 23;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -42;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 70;					/// what is the left-most possible turn of the turret
				minTurn 					= -20;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "";				/// doesn't work unless the said animation source is 1
				usepip = 0;
				playerPosition=4;
				startEngine = 0;
                commanding = -1;
                outGunnerMayFire = 1;
                inGunnerMayFire = 0;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				memoryPointGunnerOptics= "";
			};					
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim{source="reload";weapon="M240_veh";};
			class ReloadMagazine{source="reloadmagazine";weapon="M240_veh";};
			class Revolving{source="revolving";weapon="M240_veh";};

			class Gatling_1
			{
				source="revolving";
				weapon="M134_minigun";
			};
			class Gatling_2
			{
				source="revolving";
				weapon="M134_minigun_2";
			};
		};	
		class HitPoints : HitPoints
		{
			class HitVRotor {armor=1;material=51;name="mala vrtule";visual="mala vrtule staticka";passThrough=0.5;};
			class HitHRotor {armor=1;material=51;name="velka vrtule";visual="velka vrtule staticka";passThrough=0.5;};
		};

		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"chinookpack\chinook\sounds\close",0.31622776,1};
		soundGetOut[] = {"chinookpack\chinook\sounds\open",0.31622776,1,40};
		soundDammage[] = {"chinookpack\chinook\sounds\int-alarm_loop",0.56234133,1};
		soundEngineOnInt[] = {"chinookpack\chinook\sounds\CH47_start_int",0.1,1.0};
		soundEngineOnExt[] = {"chinookpack\chinook\sounds\CH47_start_ext",0.56234133,1.0,800};
		soundEngineOffInt[] = {"chinookpack\chinook\sounds\CH47_stop_int",0.1,1.0};
		soundEngineOffExt[] = {"chinookpack\chinook\sounds\CH47_stop_ext",0.56234133,1.0,800};
		slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT", 1.0, 1.0};
		slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock", 1.0, 1.0, 80};
		slingCargoAttach[] = {"slingCargoAttach0", "slingCargoAttach1"};
		slingCargoDetach0[] = {"A3\Sounds_F\dummysound", 1.0, 1.0};
		slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock", 1.0, 1.0, 80};
		slingCargoDetach[] = {"slingCargoDetach0", "slingCargoDetach1"};
		slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int", 1.0, 1.0};
		slingCargoDetachAir1[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext", 1.0, 1.0, 80};
		slingCargoDetachAir[] = {"slingCargoDetach0", "slingCargoDetach1"};
		slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int", 1.0, 1.0};
		slingCargoRopeBreak1[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext", 1.0, 1.0, 80};
		slingCargoRopeBreak[] = {"slingCargoDetach0", "slingCargoDetach1"};
		occludeSoundsWhenIn = 0.56234133;
		obstructSoundsWhenIn = 0.31622776;
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",0.1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",0.1,1};

		class Sounds
		/* EXTERNAL SOUNDS CH47 */
		{
			class Engine
			{
				sound[] ={"chinookpack\chinook\sounds\CH47_engine_high_ext", db0, 1.0, 800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] ={"chinookpack\chinook\sounds\CH47_rotor_ext", db10, 1.0, 1500};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.8,3.14, 2.0, 0.9};
			};
			class RotorHighOut
			{
				sound[] ={"chinookpack\chinook\sounds\CH47_rotor_forsage_ext", db10, 1.0, 1800};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.95))" ;
				cone[] = {1.8,3.14, 2.0, 0.9};
			};
			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
		/* INTERNAL SOUNDS CH47 */
  			class EngineIn
			{
				sound[] ={"chinookpack\chinook\sounds\CH47_engine_high_int", db5, 1.0};
				frequency = "rotorSpeed";
			 	volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] ={"chinookpack\chinook\sounds\CH47_rotor_int", db5, 1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] ={"chinookpack\chinook\sounds\CH47_rotor_forsage_int", db5, 1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)" ;
			};
		};
		class Library 
		{
		libTextDesc = "CH-47F";
		};
		class MarkerLights {
			class WhiteStill {
				name = "bily pozicni";
				color[] = {1.0, 1.0, 1.0};
				ambient[] = {0.1, 0.1, 0.1};
				blinking = 1;
				intensity = 75;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			
			class RedStill {
				name = "cerveny pozicni";
				color[] = {0.8, 0.0, 0.0};
				ambient[] = {0.08, 0.0, 0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			
			class GreenStill {
				name = "zeleny pozicni";
				color[] = {0.0, 0.8, 0.0};
				ambient[] = {0.0, 0.08, 0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			
			class RedBlinking {
				name = "bily pozicni blik";
				color[] = {0.9, 0.15, 0.1};
				ambient[] = {0.09, 0.015, 0.01};
				intensity = 75;
				blinking = 1;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			
			class WhiteBlinking {
				name = "cerveny pozicni blik";
				color[] = {0.9, 0.15, 0.1};
				intensity = 75;
				ambient[] = {0.09, 0.015, 0.01};
				blinking = 1;
				blinkingPattern[] = {0.2, 1.3};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[] = {7000,7500,10000,1};
				ambient[] = {100,100,100,0};
				position = "svetlo";
				direction = "svetlo konec";
				hitpoint = "svetlo";
				selection = "svetlo";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 6;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				direction = "exhaust1_dir";
				effect = "ExhaustEffectHeli";
				position = "exhaust1";
			};
			class Exhaust2
			{
				direction = "exhaust2_dir";
				effect = "ExhaustEffectHeli";
				position = "exhaust2";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]={
				"chinookpack\chinook\data\ch47_1.rvmat",
				"chinookpack\chinook\data\ch47_1_damage.rvmat",
				"chinookpack\chinook\data\ch47_1_destruct.rvmat",

				"chinookpack\chinook\data\ch47_2.rvmat",
				"chinookpack\chinook\data\ch47_2_damage.rvmat",
				"chinookpack\chinook\data\ch47_2_destruct.rvmat",

				"chinookpack\chinook\data\ch47_1_int.rvmat",
				"chinookpack\chinook\data\ch47_1_int.rvmat",
				"chinookpack\chinook\data\ch47_1_int_destruct.rvmat",

				"chinookpack\chinook\data\ch47_2_int.rvmat",
				"chinookpack\chinook\data\ch47_2_int.rvmat",
				"chinookpack\chinook\data\ch47_2_int_destruct.rvmat",

				"chinookpack\chinook\data\ch47_sklo_in.rvmat",
				"chinookpack\chinook\data\ch47_sklo_in_damage.rvmat",
				"chinookpack\chinook\data\ch47_sklo_in_damage.rvmat",

				"chinookpack\chinook\data\ch47_sklo.rvmat",
				"chinookpack\chinook\data\ch47_sklo_damage.rvmat",
				"chinookpack\chinook\data\ch47_sklo_damage.rvmat",

				"chinookpack\chinook\data\default.rvmat",
				"chinookpack\chinook\data\default.rvmat",
				"chinookpack\chinook\data\default_destruct.rvmat"
			};
		};
		irScanRangeMin= 0;
		irScanRangeMax= 1000;
		irScanToEyeFactor= 2;
	};
	class RAMPGUNBAF_CH47_base: Helicopter
	{
		author = "DELTAGAMER";
		model = "\chinookpack\chinookBAF\CH_47F.p3d";
		picture = "\chinookpack\chinookBAF\data\UI\Picture_ch47f_CA.paa";
		icon = "\chinookpack\chinookBAF\data\UI\Icon_ch47f_CA.paa";
		mapSize = 24;
		scope=2;
		maxSpeed = 295;
		maxFordingDepth = 0.65;
		expansion = 1;
		displayName = "RAF CH-47F (M240)";
		side = 1;
		faction= BLU_F;
		vehicleClass = "CH47_CH_47F";
		accuracy=0.5;
		mainRotorSpeed = 1.0;
		backRotorSpeed = 1.0;
		armor=30;
		damageResistance = 0.00100;
		destrType=DestructWreck;
		simulation = "helicopterX";
		slingLoadMemoryPoint = "slingLoad0";
		slingLoadMaxCargoMass = 10000;
		liftForceCoef = 2.5;
		tf_RadioType_api = "tf_anarc210";
		tf_hasLRradio_api = 1; // 1 = true, 0 = false
		tf_isolatedAmount_api = 0.2;
		
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_helicrew_F", "B_helicrew_F", "B_helicrew_F", "B_helicrew_F"};
		driverAction = "pilot_Heli_Transport_01";
		memoryPointsGetInDriver = "pos cargo";
		memoryPointsGetInDriverDir = "pos cargo dir";
		slingLoadOperator = 1;
		
		memoryPointsGetInCargo[] = {"pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir"};

		cargoAction[] = {"CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1"};
		cargoIsCoDriver[] = {"true", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false"};

		transportSoldier = 22;
		transportMaxBackpacks = 10;

		weapons[] = {CMFlareLauncher};
		magazines[] = {168Rnd_CMFlare_Chaff_Magazine};
		LockDetectionSystem = 2 + 8 + 4;
		IncommingMisslieDetectionSystem = 16;

		radarType = 4;
		enableManualFire = 0;

		//threat[] VSoft, VArmor, VAir
		threat[] = {0.8, 1, 0.6};
		
		class MFD{};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 28;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 5;
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret //Left Doorgun
			{
				isCopilot = 0;
				CanEject = 1;
				body = "mainTurret";
				gun = "mainGun";
				minElev = -50; maxElev = +30; initElev = -30;
				minTurn = -3; maxTurn = 173; initTurn = 0;
				soundServo[] = {,db-40,1.0};
				animationSourceHatch = "";
				stabilizedInAxes = StabilizedInAxesNone;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				weapons[] = {"M134_minigun"};
				magazines[] = {"5000Rnd_762x51_Belt"};
				gunnerName = "Left Door Gunner";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerAction = "CH47_Gunner_EP1";
				gunnerInAction = "CH47_Gunner_EP1";
				commanding = -1;
				primaryGunner = 1;
//				proxyIndex = 2;
				class ViewOptics
				{
					initAngleX = 0; minAngleX = -30; maxAngleX = +30;
					initAngleY = 0; minAngleY = -100; maxAngleY = +100;
					initFov = 0.7; minFov = 0.25; maxFov = 1.1;
				};
				gunnerCompartments = Compartment2;
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				slingLoadOperator = 0;
			};
        	class CopilotTurret: NewTurret
			{
				isCopilot = 1;
				weapons[] = {};
				magazines[] = {};
				body = "Turret3";
				gun = "";
				selectionFireAnim = "";
				CanEject = 0;
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Transport_01";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "GetOutLow";
				gunnerName = "Co-Pilot";
				preciseGetInOut = 0;
				GunnerDoor = "";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				proxyIndex = 30;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				slingLoadOperator = 1;
			};
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				CanEject = 1;
				body = "Turret2";
				gun = "Gun_2";
				minElev = -60; maxElev = +30; initElev = -30;
				minTurn = -173; maxTurn = 3; initTurn = 0;
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				stabilizedInAxes = StabilizedInAxesNone;
				selectionFireAnim = "zasleh_1";
			    proxyIndex = 2;
				gunnerName = "Right Door Gunner";
				commanding = -2;
				weapons[] = {"M134_minigun_2"};
				gunBeg = "muzzle_2"; //gunBeg=endpoint of the gun
				gunEnd = "chamber_2"; //gunEnd=chamber of the gun
				primaryGunner = 0;
				memoryPointGun = "machinegun_2";
				memoryPointGunnerOptics = "gunnerview_2";
				slingLoadOperator = 0;
			};
			class BackDoorGun: MainTurret
			{
				isCopilot = 0;
				CanEject = 1;
				body = "Turret3";
				gun = "Gun_3";
				minTurn = 130; maxTurn = 230; initTurn = 180;
				minElev = -50; maxElev = +50; initElev = 0;
				animationSourceBody = "Turret_3";
				animationSourceGun = "Gun_3";
				stabilizedInAxes = StabilizedInAxesNone;
				selectionFireAnim = "zasleh_3";

				proxyIndex = 3;
				gunnerName = "Rear Gunner";
				gunnerOpticsShowCursor = 0;

				commanding = -1;
				gunnerAction = "CH47_Gunner01_EP1";
				gunnerInAction = "CH47_Gunner01_EP1";

				weapons[] = {"M240_veh"};
				magazines[] = {"100Rnd_762x51_M240", "100Rnd_762x51_M240", "100Rnd_762x51_M240", "100Rnd_762x51_M240", "100Rnd_762x51_M240"};

				gunBeg = "muzzle_3"; //gunBeg=endpoint of the gun
				gunEnd = "chamber_3"; //gunEnd=chamber of the gun

				primaryGunner = 0;
				memoryPointGun = "machinegun_3";
				memoryPointGunnerOptics = "gunnerview_3";
				slingLoadOperator = 0;
			};
			class CargoTurret_01: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos Cargo";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos Cargo dir";	/// direction of get in action
				gunnerName 					= "Passenger (Left Side)";	/// name of the position in the Action menu
				proxyIndex 					= 24;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -42;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 20;					/// what is the left-most possible turn of the turret
				minTurn 					= -70;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "";				/// doesn't work unless the said animation source is 1
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				playerPosition=4;
				startEngine = 0;
                commanding = -1;
	            outGunnerMayFire = 1;
                inGunnerMayFire = 0;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				memoryPointGunnerOptics= "";
			};
			class CargoTurret_02: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos Cargo";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos Cargo dir";	/// direction of get in action
				gunnerName 					= "Passenger (Right Side)";	/// name of the position in the Action menu
				proxyIndex 					= 23;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -42;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 70;					/// what is the left-most possible turn of the turret
				minTurn 					= -20;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "";				/// doesn't work unless the said animation source is 1
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				playerPosition=4;
                commanding = -1;
                outGunnerMayFire = 1;
                inGunnerMayFire = 0;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				memoryPointGunnerOptics= "";
			};							
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim {source = "reload"; weapon = "M240_veh";};
			class ReloadMagazine {source = "reloadmagazine"; weapon = "M240_veh";};
			class Revolving {source = "revolving"; weapon = "M240_veh";};

			class Gatling_1
			{
				source = "revolving";
				weapon = "M134_minigun";
			};
			class Gatling_2
			{
				source = "revolving";
				weapon = "M134_minigun_2";
			};
		};	
		class HitPoints : HitPoints
		{
			class HitVRotor {armor = 1; material = 51; name = "mala vrtule"; visual = "mala vrtule staticka"; passThrough = 0.5;};
			class HitHRotor {armor = 1; material = 51; name = "velka vrtule"; visual = "velka vrtule staticka"; passThrough = 0.5;};
		};

		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"chinookpack\chinookBAF\sounds\close", 0.31622776, 1};
		soundGetOut[] = {"chinookpack\chinookBAF\sounds\open", 0.31622776, 1, 40};
		soundDammage[] = {"chinookpack\chinookBAF\sounds\int-alarm_loop", 0.56234133, 1};
		soundEngineOnInt[] = {"chinookpack\chinookBAF\sounds\CH47_start_int", 0.1, 1.0};
		soundEngineOnExt[] = {"chinookpack\chinookBAF\sounds\CH47_start_ext", 0.56234133, 1.0, 800};
		soundEngineOffInt[] = {"chinookpack\chinookBAF\sounds\CH47_stop_int", 0.1, 1.0};
		soundEngineOffExt[] = {"chinookpack\chinookBAF\sounds\CH47_stop_ext", 0.56234133, 1.0, 800};
		slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT", 1.0, 1.0};
		slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock", 1.0, 1.0, 80};
		slingCargoAttach[] = {"slingCargoAttach0", "slingCargoAttach1"};
		slingCargoDetach0[] = {"A3\Sounds_F\dummysound", 1.0, 1.0};
		slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock", 1.0, 1.0, 80};
		slingCargoDetach[] = {"slingCargoDetach0", "slingCargoDetach1"};
		slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int", 1.0, 1.0};
		slingCargoDetachAir1[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext", 1.0, 1.0, 80};
		slingCargoDetachAir[] = {"slingCargoDetach0", "slingCargoDetach1"};
		slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int", 1.0, 1.0};
		slingCargoRopeBreak1[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext", 1.0, 1.0, 80};
		slingCargoRopeBreak[] = {"slingCargoDetach0", "slingCargoDetach1"};
		occludeSoundsWhenIn = 0.56234133;
		obstructSoundsWhenIn = 0.31622776;
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1", 0.1, 1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2", 0.1, 1};

		class Sounds
		/* EXTERNAL SOUNDS CH47 */
		{
			class Engine
			{
				sound[] = {"chinookpack\chinookBAF\sounds\CH47_engine_high_ext", db0, 1.0, 800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"chinookpack\chinookBAF\sounds\CH47_rotor_ext", db10, 1.0, 1500};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.8, 3.14, 2.0, 0.9};
			};
			class RotorHighOut
			{
				sound[] = {"chinookpack\chinookBAF\sounds\CH47_rotor_forsage_ext", db10, 1.0, 1800};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.95))" ;
				cone[] = {1.8, 3.14, 2.0, 0.9};
			};
			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};

		/* INTERNAL SOUNDS CH47 */
  			class EngineIn
			{
				sound[] = {"chinookpack\chinookBAF\sounds\CH47_engine_high_int", db5, 1.0};
				frequency = "rotorSpeed";
			 	volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"chinookpack\chinookBAF\sounds\CH47_rotor_int", db5, 1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"chinookpack\chinookBAF\sounds\CH47_rotor_forsage_int", db5, 1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)" ;
			};
		};
		class Library 
		{
			libTextDesc = "CH-47F";
		};
		class MarkerLights {
			class WhiteStill {
				name = "bily pozicni";
				color[] = {1.0, 1.0, 1.0};
				ambient[] = {0.1, 0.1, 0.1};
				blinking = 1;
				intensity = 75;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			
			class RedStill {
				name = "cerveny pozicni";
				color[] = {0.8, 0.0, 0.0};
				ambient[] = {0.08, 0.0, 0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			
			class GreenStill {
				name = "zeleny pozicni";
				color[] = {0.0, 0.8, 0.0};
				ambient[] = {0.0, 0.08, 0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			
			class RedBlinking {
				name = "bily pozicni blik";
				color[] = {0.9, 0.15, 0.1};
				ambient[] = {0.09, 0.015, 0.01};
				intensity = 75;
				blinking = 1;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			
			class WhiteBlinking {
				name = "cerveny pozicni blik";
				color[] = {0.9, 0.15, 0.1};
				intensity = 75;
				ambient[] = {0.09, 0.015, 0.01};
				blinking = 1;
				blinkingPattern[] = {0.2, 1.3};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[] = {7000, 7500, 10000, 1};
				ambient[] = {100, 100, 100, 0};
				position = "svetlo";
				direction = "svetlo konec";
				hitpoint = "svetlo";
				selection = "svetlo";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 6;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				direction = "exhaust1_dir";
				effect = "ExhaustEffectHeli";
				position = "exhaust1";
			};
			class Exhaust2
			{
				direction = "exhaust2_dir";
				effect = "ExhaustEffectHeli";
				position = "exhaust2";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {
				"chinookpack\chinookBAF\data\ch47_1.rvmat",
				"chinookpack\chinookBAF\data\ch47_1_damage.rvmat",
				"chinookpack\chinookBAF\data\ch47_1_destruct.rvmat",

				"chinookpack\chinookBAF\data\ch47_2.rvmat",
				"chinookpack\chinookBAF\data\ch47_2_damage.rvmat",
				"chinookpack\chinookBAF\data\ch47_2_destruct.rvmat",

				"chinookpack\chinookBAF\data\ch47_1_int.rvmat",
				"chinookpack\chinookBAF\data\ch47_1_int.rvmat",
				"chinookpack\chinookBAF\data\ch47_1_int_destruct.rvmat",

				"chinookpack\chinookBAF\data\ch47_2_int.rvmat",
				"chinookpack\chinookBAF\data\ch47_2_int.rvmat",
				"chinookpack\chinookBAF\data\ch47_2_int_destruct.rvmat",

				"chinookpack\chinookBAF\data\ch47_sklo_in.rvmat",
				"chinookpack\chinookBAF\data\ch47_sklo_in_damage.rvmat",
				"chinookpack\chinookBAF\data\ch47_sklo_in_damage.rvmat",

				"chinookpack\chinookBAF\data\ch47_sklo.rvmat",
				"chinookpack\chinookBAF\data\ch47_sklo_damage.rvmat",
				"chinookpack\chinookBAF\data\ch47_sklo_damage.rvmat",

				"chinookpack\chinookBAF\data\default.rvmat",
				"chinookpack\chinookBAF\data\default.rvmat",
				"chinookpack\chinookBAF\data\default_destruct.rvmat"
			};
		};
		irScanRangeMin = 0;
		irScanRangeMax = 1000;
		irScanToEyeFactor = 2;
	};	
	class CH_47F_Ramp: Helicopter
	{
		author = "DELTAGAMER";
		model = "\chinookpack\chinook\RAMP\CH_47F";
		picture = "\chinookpack\chinook\data\UI\Picture_ch47f_CA.paa";
		icon = "\chinookpack\chinook\data\UI\Icon_ch47f_CA.paa";
		mapSize = 24;
		scope = 2;
		maxSpeed = 295;
		maxFordingDepth = 0.65;
		expansion = 1;
		nameSound = "veh_helicopter";
		displayName = "US CH-47F (Ramp)";
		side = 1;
		faction = "BLU_F";
		vehicleClass = "CH47_CH_47F";
		accuracy = 0.5;
		mainRotorSpeed = 1.0;
		backRotorSpeed = 1.0;
		armor = 30;
		damageResistance = 0.001;
		destrType = "DestructWreck";
		simulation = "helicopterX";
		slingLoadMemoryPoint = "slingLoad0";
		slingLoadMaxCargoMass = 10000;
		liftForceCoef = 2.5;
		tf_RadioType_api = "tf_anarc210";
		tf_hasLRradio_api = 1; // 1 = true, 0 = false
		tf_isolatedAmount_api = 0.2;
		
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F","B_Helipilot_F"};
		driverAction = "pilot_Heli_Transport_01";
		memoryPointsGetInDriver = "pos cargo";
		memoryPointsGetInDriverDir = "pos cargo dir";
		
		memoryPointsGetInCargo[] = {"pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir"};
		
		cargoAction[] = {"CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1"};
		cargoIsCoDriver[] = {"true", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false"};
		
		transportSoldier = 22;
		transportMaxBackpacks = 10;
		
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		LockDetectionSystem = "2 + 8 + 4";
		IncomingMissileDetectionSystem = 16;
		
		radarType = 4;
		enableManualFire = 0;
		
		threat[] = {0.8,1,0.6};
		
		driverLeftHandAnimName = "lever_pilot";
		driverRightHandAnimName = "stick_pilot";
		
		memoryPointCM[]  = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		
		helmetMountedDisplay = 0;
		cargoCanEject = 1;
		driverCanEject = 0;		
		
		class MFD{};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 28;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 5;
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret //Left Doorgun
			{
				isCopilot = 0;
				CanEject = 1;
				body="mainTurret";
				gun="mainGun";
				minElev= -50; maxElev= +30; initElev= -30;
				minTurn= -3; maxTurn= 173; initTurn= 0;
				soundServo[]={,db-40,1.0};
				animationSourceHatch="";
				stabilizedInAxes = StabilizedInAxesNone;
				gunBeg="muzzle_1";
				gunEnd="chamber_1";
				weapons[]= {"M134_minigun"};
				magazines[]={"5000Rnd_762x51_Belt"};
				gunnerName= "Left Door Gunner";
				gunnerOpticsModel= "\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				gunnerAction= "gunner_standup01";
				gunnerInAction= "gunner_standup01";
				commanding= -1;
				primaryGunner= 1;
//				proxyIndex=2;
				class ViewOptics
				{
					initAngleX= 0; minAngleX= -30; maxAngleX= +30;
					initAngleY= 0; minAngleY= -100; maxAngleY= +100;
					initFov= 0.7; minFov= 0.25; maxFov= 1.1;
				};
				gunnerCompartments = Compartment2;
				memoryPointsGetInGunner= "pos cargo";
				memoryPointsGetInGunnerDir= "pos cargo dir";
				slingLoadOperator = 0;
			};
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				CanEject = 1;
				body="Turret2";
				gun="Gun_2";
				minElev= -60; maxElev= +30; initElev= -30;
				minTurn=- 173; maxTurn= 3; initTurn= 0;
				animationSourceBody="Turret_2";
				animationSourceGun="Gun_2";
				stabilizedInAxes = StabilizedInAxesNone;
				selectionFireAnim="zasleh_1";
			    proxyIndex=2;
				gunnerName= "Right Door Gunner";
				commanding= -2;
				weapons[]= {"M134_minigun_2"};
				gunBeg="muzzle_2"; //gunBeg=endpoint of the gun
				gunEnd="chamber_2"; //gunEnd=chamber of the gun
				primaryGunner=0;
				memoryPointGun= "machinegun_2";
				memoryPointGunnerOptics= "gunnerview_2";
				slingLoadOperator = 0;
			};
			class CopilotTurret: NewTurret
			{
				isCopilot = 1;
				weapons[] = {};
				magazines[] = {};
				body = "Turret3";
				animationSourceBody="Turret_3";
				gun = "";
				selectionFireAnim = "";
				CanEject = 0;
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Transport_01";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "GetOutLow";
				gunnerName = "Co-Pilot";
				preciseGetInOut = 0;
				GunnerDoor = "";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				proxyIndex = 30;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				slingLoadOperator = 1;
			};
			class CargoTurret_01: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos Cargo";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos Cargo dir";	/// direction of get in action
				gunnerName 					= "Passenger (Left Side)";	/// name of the position in the Action menu
				proxyIndex 					= 24;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -42;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 20;					/// what is the left-most possible turn of the turret
				minTurn 					= -80;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "";				/// doesn't work unless the said animation source is 1
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
                commanding = -1;
				playerPosition=4;
	            outGunnerMayFire = 1;
                inGunnerMayFire = 0;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				memoryPointGunnerOptics= "";
			};
			class CargoTurret_02: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos Cargo";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos Cargo dir";	/// direction of get in action
				gunnerName 					= "Passenger (Right Side)";	/// name of the position in the Action menu
				proxyIndex 					= 23;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -42;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 80;					/// what is the left-most possible turn of the turret
				minTurn 					= -20;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "";				/// doesn't work unless the said animation source is 1
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
                commanding = -1;
				playerPosition=4;
                outGunnerMayFire = 1;
                inGunnerMayFire = 0;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				memoryPointGunnerOptics= "";
			};						
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim{source="reload";weapon="M240_veh";};
			class ReloadMagazine{source="reloadmagazine";weapon="M240_veh";};
			class Revolving{source="revolving";weapon="M240_veh";};
			
			class Gatling_1
			{
				source = "revolving";
				weapon = "M134_minigun";
			};
			class Gatling_2
			{
				source = "revolving";
				weapon = "M134_minigun_2";
			};
			class CargoDoor
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class OpenCargoDoor
			{
				displayName = "Open Ramp";
				position = "actions";
				radius = 12;
				showwindow = 0;
				condition = "this animationPhase ""Ramp"" == 0 and (alive this);";
				statement = "this animate [""Ramp"", 1];";
				onlyforplayer = 1;
			};
			class CloseCargoDoor
			{
				displayName = "Close Ramp";
				position = "actions";
				radius = 12;
				showwindow = 0;
				condition = "this animationPhase ""Ramp"" > 0 and (alive this);";
				statement = "this animate [""Ramp"", 0];";
				onlyforplayer = 1;
			};
		};
		class HitPoints: HitPoints
		{
			class HitVRotor
			{
				armor = 1;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0.5;
			};
			class HitHRotor
			{
				armor = 1;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.5;
			};
		};
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"chinookpack\chinook\sounds\close",0.31622776,1};
		soundGetOut[] = {"chinookpack\chinook\sounds\open",0.31622776,1,40};
		soundDammage[] = {"chinookpack\chinook\sounds\int-alarm_loop",0.56234133,1};
		soundEngineOnInt[] = {"chinookpack\chinook\sounds\CH47_start_int",0.1,1.0};
		soundEngineOnExt[] = {"chinookpack\chinook\sounds\CH47_start_ext",0.56234133,1.0,800};
		soundEngineOffInt[] = {"chinookpack\chinook\sounds\CH47_stop_int",0.1,1.0};
		soundEngineOffExt[] = {"chinookpack\chinook\sounds\CH47_stop_ext",0.56234133,1.0,800};
		slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT", 1.0, 1.0};
		slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock", 1.0, 1.0, 80};
		slingCargoAttach[] = {"slingCargoAttach0", "slingCargoAttach1"};
		slingCargoDetach0[] = {"A3\Sounds_F\dummysound", 1.0, 1.0};
		slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock", 1.0, 1.0, 80};
		slingCargoDetach[] = {"slingCargoDetach0", "slingCargoDetach1"};
		slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int", 1.0, 1.0};
		slingCargoDetachAir1[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext", 1.0, 1.0, 80};
		slingCargoDetachAir[] = {"slingCargoDetach0", "slingCargoDetach1"};
		slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int", 1.0, 1.0};
		slingCargoRopeBreak1[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext", 1.0, 1.0, 80};
		slingCargoRopeBreak[] = {"slingCargoDetach0", "slingCargoDetach1"};
		occludeSoundsWhenIn = 0.56234133;
		obstructSoundsWhenIn = 0.31622776;
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",0.1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",0.1,1};
		class Sounds
		{
			class Engine
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_engine_high_ext",1.0,1.0,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_rotor_ext",3.1622777,1.0,1500};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class RotorHighOut
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_rotor_forsage_ext",3.1622777,1.0,1800};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.95))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class EngineIn
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_engine_high_int",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_rotor_int",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_rotor_forsage_int",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
		};
		class Library
		{
			libTextDesc = "CH-47F";
		};
		class MarkerLights {
			class WhiteStill {
				name = "bily pozicni";
				color[] = {1.0, 1.0, 1.0};
				ambient[] = {0.1, 0.1, 0.1};
				blinking = 1;
				intensity = 75;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			
			class RedStill {
				name = "cerveny pozicni";
				color[] = {0.8, 0.0, 0.0};
				ambient[] = {0.08, 0.0, 0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			
			class GreenStill {
				name = "zeleny pozicni";
				color[] = {0.0, 0.8, 0.0};
				ambient[] = {0.0, 0.08, 0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			
			class RedBlinking {
				name = "bily pozicni blik";
				color[] = {0.9, 0.15, 0.1};
				ambient[] = {0.09, 0.015, 0.01};
				intensity = 75;
				blinking = 1;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			
			class WhiteBlinking {
				name = "cerveny pozicni blik";
				color[] = {0.9, 0.15, 0.1};
				intensity = 75;
				ambient[] = {0.09, 0.015, 0.01};
				blinking = 1;
				blinkingPattern[] = {0.2, 1.3};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[] = {7000,7500,10000,1};
				ambient[] = {100,100,100,0};
				position = "svetlo";
				direction = "svetlo konec";
				hitpoint = "svetlo";
				selection = "svetlo";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 6;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				direction = "exhaust1_dir";
				effect = "ExhaustEffectHeli";
				position = "exhaust1";
			};
			class Exhaust2
			{
				direction = "exhaust2_dir";
				effect = "ExhaustEffectHeli";
				position = "exhaust2";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = 
			{
			"chinookpack\chinook\data\ch47_1.rvmat",
			"chinookpack\chinook\data\ch47_1_damage.rvmat",
			"chinookpack\chinook\data\ch47_1_destruct.rvmat",
			"chinookpack\chinook\data\ch47_2.rvmat",
			"chinookpack\chinook\data\ch47_2_damage.rvmat",
			"chinookpack\chinook\data\ch47_2_destruct.rvmat",
			"chinookpack\chinook\data\ch47_1_int.rvmat",
			"chinookpack\chinook\data\ch47_1_int.rvmat",
			"chinookpack\chinook\data\ch47_1_int_destruct.rvmat",
			"chinookpack\chinook\data\ch47_2_int.rvmat",
			"chinookpack\chinook\data\ch47_2_int.rvmat",
			"chinookpack\chinook\data\ch47_2_int_destruct.rvmat",
			"chinookpack\chinook\data\ch47_sklo_in.rvmat",
			"chinookpack\chinook\data\ch47_sklo_in_damage.rvmat",
			"chinookpack\chinook\data\ch47_sklo_in_damage.rvmat",
			"chinookpack\chinook\data\ch47_sklo.rvmat",
			"chinookpack\chinook\data\ch47_sklo_damage.rvmat",
			"chinookpack\chinook\data\ch47_sklo_damage.rvmat",
			"chinookpack\chinook\data\default.rvmat",
			"chinookpack\chinook\data\default.rvmat",
			"chinookpack\chinook\data\default_destruct.rvmat"
			};
		};
		irScanRangeMin = 0;
		irScanRangeMax = 1000;
		irScanToEyeFactor = 2;
		driverCanSee=31;
		gunnerCanSee=31;
	};
	class CH_47FBAF_Ramp: Helicopter
	{
		author = "DELTAGAMER";
		model = "\chinookpack\chinookBAF\RAMP\CH_47F";
		picture = "\chinookpack\chinook\data\UI\Picture_ch47f_CA.paa";
		icon = "\chinookpack\chinook\data\UI\Icon_ch47f_CA.paa";
		mapSize = 24;
		scope = 2;
		maxSpeed = 295;
		maxFordingDepth = 0.65;
		expansion = 1;
		nameSound = "veh_helicopter";
		displayName = "RAF CH-47F (Ramp)";
		side = 1;
		faction = "BLU_F";
		vehicleClass = "CH47_CH_47F";
		accuracy = 0.5;
		mainRotorSpeed = 1.0;
		backRotorSpeed = 1.0;
		armor = 30;
		damageResistance = 0.001;
		destrType = "DestructWreck";
		simulation = "helicopterX";
		slingLoadMemoryPoint = "slingLoad0";
		slingLoadMaxCargoMass = 10000;
		liftForceCoef = 2.5;
		tf_RadioType_api = "tf_anarc210";
		tf_hasLRradio_api = 1; // 1 = true, 0 = false
		tf_isolatedAmount_api = 0.2;
		
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F","B_Helipilot_F"};
		driverAction = "pilot_Heli_Transport_01";
		memoryPointsGetInDriver = "pos cargo";
		memoryPointsGetInDriverDir = "pos cargo dir";
		
		memoryPointsGetInCargo[] = {"pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir"};
		
		cargoAction[] = {"CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1"};
		cargoIsCoDriver[] = {"true", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false"};
		
		transportSoldier = 22;
		transportMaxBackpacks = 10;
		
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		LockDetectionSystem = "2 + 8 + 4";
		IncomingMissileDetectionSystem = 16;
		
		radarType = 4;
		enableManualFire = 0;
		
		threat[] = {0.8,1,0.6};
		
		driverLeftHandAnimName = "lever_pilot";
		driverRightHandAnimName = "stick_pilot";
		
		memoryPointCM[]  = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		
		helmetMountedDisplay = 0;
		cargoCanEject = 1;
		driverCanEject = 0;
		
		class MFD{};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 28;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 5;
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret //Left Doorgun
			{
				isCopilot = 0;
				CanEject = 1;
				body="mainTurret";
				gun="mainGun";
				minElev= -50; maxElev= +30; initElev= -30;
				minTurn= -3; maxTurn= 173; initTurn= 0;
				soundServo[]={,db-40,1.0};
				animationSourceHatch="";
				stabilizedInAxes = StabilizedInAxesNone;
				gunBeg="muzzle_1";
				gunEnd="chamber_1";
				weapons[]= {"M134_minigun"};
				magazines[]={"5000Rnd_762x51_Belt"};
				gunnerName= "Left Door Gunner";
				gunnerOpticsModel= "\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				gunnerAction= "gunner_standup01";
				gunnerInAction= "gunner_standup01";
				commanding= -1;
				primaryGunner= 1;
//				proxyIndex=2;
				class ViewOptics
				{
					initAngleX= 0; minAngleX= -30; maxAngleX= +30;
					initAngleY= 0; minAngleY= -100; maxAngleY= +100;
					initFov= 0.7; minFov= 0.25; maxFov= 1.1;
				};
				gunnerCompartments = Compartment2;
				memoryPointsGetInGunner= "pos cargo";
				memoryPointsGetInGunnerDir= "pos cargo dir";
				slingLoadOperator = 0;
			};
			class RightDoorGun: MainTurret
			{
				isCopilot = 0;
				CanEject = 1;
				body="Turret2";
				gun="Gun_2";
				minElev= -60; maxElev= +30; initElev= -30;
				minTurn=- 173; maxTurn= 3; initTurn= 0;
				animationSourceBody="Turret_2";
				animationSourceGun="Gun_2";
				stabilizedInAxes = StabilizedInAxesNone;
				selectionFireAnim="zasleh_1";
			    proxyIndex=2;
				gunnerName= "Right Door Gunner";
				commanding= -2;
				weapons[]= {"M134_minigun_2"};
				gunBeg="muzzle_2"; //gunBeg=endpoint of the gun
				gunEnd="chamber_2"; //gunEnd=chamber of the gun
				primaryGunner=0;
				memoryPointGun= "machinegun_2";
				memoryPointGunnerOptics= "gunnerview_2";
				slingLoadOperator = 0;
			};
			class CopilotTurret: NewTurret
			{
				isCopilot = 1;
				weapons[] = {};
				magazines[] = {};
				body = "Turret3";
				animationSourceBody="Turret_3";
				gun = "";
				selectionFireAnim = "";
				CanEject = 0;
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Transport_01";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "GetOutLow";
				gunnerName = "Co-Pilot";
				preciseGetInOut = 0;
				GunnerDoor = "";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				proxyIndex = 30;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				slingLoadOperator = 1;
			};
			class CargoTurret_01: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos Cargo";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos Cargo dir";	/// direction of get in action
				gunnerName 					= "Passenger (Left Side)";	/// name of the position in the Action menu
				proxyIndex 					= 24;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -42;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 20;					/// what is the left-most possible turn of the turret
				minTurn 					= -70;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "";				/// doesn't work unless the said animation source is 1
				usepip = 0;
				gunnerOutOpticsModel = "";
				playerPosition=4;
				gunnerOpticsModel = "";
				startEngine = 0;
                commanding = -1;
	            outGunnerMayFire = 1;
                inGunnerMayFire = 0;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				memoryPointGunnerOptics= "";
			};
			class CargoTurret_02: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos Cargo";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos Cargo dir";	/// direction of get in action
				gunnerName 					= "Passenger (Right Side)";	/// name of the position in the Action menu
				proxyIndex 					= 23;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -42;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 70;					/// what is the left-most possible turn of the turret
				minTurn 					= -20;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "";				/// doesn't work unless the said animation source is 1
				usepip = 0;
				gunnerOutOpticsModel = "";
				playerPosition=4;
				gunnerOpticsModel = "";
				startEngine = 0;
                commanding = -1;
                outGunnerMayFire = 1;
                inGunnerMayFire = 0;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				memoryPointGunnerOptics= "";
			};						
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim{source="reload";weapon="M240_veh";};
			class ReloadMagazine{source="reloadmagazine";weapon="M240_veh";};
			class Revolving{source="revolving";weapon="M240_veh";};
			
			class Gatling_1
			{
				source = "revolving";
				weapon = "M134_minigun";
			};
			class Gatling_2
			{
				source = "revolving";
				weapon = "M134_minigun_2";
			};
			class CargoDoor
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class OpenCargoDoor
			{
				displayName = "Open Ramp";
				position = "actions";
				radius = 12;
				showwindow = 0;
				condition = "this animationPhase ""Ramp"" == 0 and (alive this);";
				statement = "this animate [""Ramp"", 1];";
				onlyforplayer = 1;
			};
			class CloseCargoDoor
			{
				displayName = "Close Ramp";
				position = "actions";
				radius = 12;
				showwindow = 0;
				condition = "this animationPhase ""Ramp"" > 0 and (alive this);";
				statement = "this animate [""Ramp"", 0];";
				onlyforplayer = 1;
			};
		};
		class HitPoints: HitPoints
		{
			class HitVRotor
			{
				armor = 1;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0.5;
			};
			class HitHRotor
			{
				armor = 1;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.5;
			};
		};
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"chinookpack\chinook\sounds\close",0.31622776,1};
		soundGetOut[] = {"chinookpack\chinook\sounds\open",0.31622776,1,40};
		soundDammage[] = {"chinookpack\chinook\sounds\int-alarm_loop",0.56234133,1};
		soundEngineOnInt[] = {"chinookpack\chinook\sounds\CH47_start_int",0.1,1.0};
		soundEngineOnExt[] = {"chinookpack\chinook\sounds\CH47_start_ext",0.56234133,1.0,800};
		soundEngineOffInt[] = {"chinookpack\chinook\sounds\CH47_stop_int",0.1,1.0};
		soundEngineOffExt[] = {"chinookpack\chinook\sounds\CH47_stop_ext",0.56234133,1.0,800};
		slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT", 1.0, 1.0};
		slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock", 1.0, 1.0, 80};
		slingCargoAttach[] = {"slingCargoAttach0", "slingCargoAttach1"};
		slingCargoDetach0[] = {"A3\Sounds_F\dummysound", 1.0, 1.0};
		slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock", 1.0, 1.0, 80};
		slingCargoDetach[] = {"slingCargoDetach0", "slingCargoDetach1"};
		slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int", 1.0, 1.0};
		slingCargoDetachAir1[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext", 1.0, 1.0, 80};
		slingCargoDetachAir[] = {"slingCargoDetach0", "slingCargoDetach1"};
		slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int", 1.0, 1.0};
		slingCargoRopeBreak1[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext", 1.0, 1.0, 80};
		slingCargoRopeBreak[] = {"slingCargoDetach0", "slingCargoDetach1"};
		occludeSoundsWhenIn = 0.56234133;
		obstructSoundsWhenIn = 0.31622776;
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",0.1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",0.1,1};
		class Sounds
		{
			class Engine
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_engine_high_ext",1.0,1.0,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_rotor_ext",3.1622777,1.0,1500};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class RotorHighOut
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_rotor_forsage_ext",3.1622777,1.0,1800};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.95))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class EngineIn
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_engine_high_int",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_rotor_int",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_rotor_forsage_int",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
		};
		class Library
		{
			libTextDesc = "CH-47F";
		};
		class MarkerLights {
			class WhiteStill {
				name = "bily pozicni";
				color[] = {1.0, 1.0, 1.0};
				ambient[] = {0.1, 0.1, 0.1};
				blinking = 1;
				intensity = 75;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			
			class RedStill {
				name = "cerveny pozicni";
				color[] = {0.8, 0.0, 0.0};
				ambient[] = {0.08, 0.0, 0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			
			class GreenStill {
				name = "zeleny pozicni";
				color[] = {0.0, 0.8, 0.0};
				ambient[] = {0.0, 0.08, 0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			
			class RedBlinking {
				name = "bily pozicni blik";
				color[] = {0.9, 0.15, 0.1};
				ambient[] = {0.09, 0.015, 0.01};
				intensity = 75;
				blinking = 1;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			
			class WhiteBlinking {
				name = "cerveny pozicni blik";
				color[] = {0.9, 0.15, 0.1};
				intensity = 75;
				ambient[] = {0.09, 0.015, 0.01};
				blinking = 1;
				blinkingPattern[] = {0.2, 1.3};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[] = {7000,7500,10000,1};
				ambient[] = {100,100,100,0};
				position = "svetlo";
				direction = "svetlo konec";
				hitpoint = "svetlo";
				selection = "svetlo";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 6;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				direction = "exhaust1_dir";
				effect = "ExhaustEffectHeli";
				position = "exhaust1";
			};
			class Exhaust2
			{
				direction = "exhaust2_dir";
				effect = "ExhaustEffectHeli";
				position = "exhaust2";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"chinookpack\chinookBAF\data\ch47_1.rvmat","chinookpack\chinookBAF\data\ch47_1_damage.rvmat","chinookpack\chinookBAF\data\ch47_1_destruct.rvmat","chinookpack\chinookBAF\data\ch47_2.rvmat","chinookpack\chinookBAF\data\ch47_2_damage.rvmat","chinookpack\chinookBAF\data\ch47_2_destruct.rvmat","chinookpack\chinookBAF\data\ch47_1_int.rvmat","chinookpack\chinookBAF\data\ch47_1_int.rvmat","chinookpack\chinookBAF\data\ch47_1_int_destruct.rvmat","chinookpack\chinookBAF\data\ch47_2_int.rvmat","chinookpack\chinookBAF\data\ch47_2_int.rvmat","chinookpack\chinookBAF\data\ch47_2_int_destruct.rvmat","chinookpack\chinookBAF\data\ch47_sklo_in.rvmat","chinookpack\chinookBAF\data\ch47_sklo_in_damage.rvmat","chinookpack\chinookBAF\data\ch47_sklo_in_damage.rvmat","chinookpack\chinookBAF\data\ch47_sklo.rvmat","chinookpack\chinookBAF\data\ch47_sklo_damage.rvmat","chinookpack\chinookBAF\data\ch47_sklo_damage.rvmat","chinookpack\chinookBAF\data\default.rvmat","chinookpack\chinookBAF\data\default.rvmat","chinookpack\chinookBAF\data\default_destruct.rvmat"};
		};
		irScanRangeMin = 0;
		irScanRangeMax = 1000;
		irScanToEyeFactor = 2;
		driverCanSee=31;
		gunnerCanSee=31;
	};
	class CH_47F_Unarmed: Helicopter
	{
		author = "DELTAGAMER";
		model = "\chinookpack\chinook\UNARMED\CH_47F";
		picture = "\chinookpack\chinook\data\UI\Picture_ch47f_CA.paa";
		icon = "\chinookpack\chinook\data\UI\Icon_ch47f_CA.paa";
		mapSize = 24;
		scope = 2;
		maxSpeed = 295;
		maxFordingDepth = 0.65;
		expansion = 1;
		nameSound = "veh_helicopter";
		displayName = "US CH-47F (Unarmed)";
		side = 1;
		faction = "BLU_F";
		vehicleClass = "CH47_CH_47F";
		accuracy = 0.5;
		mainRotorSpeed = 1.0;
		backRotorSpeed = 1.0;
		armor = 30;
		damageResistance = 0.001;
		destrType = "DestructWreck";
		simulation = "helicopterX";
		slingLoadMemoryPoint = "slingLoad0";
		slingLoadMaxCargoMass = 10000;
		liftForceCoef = 2.5;
		tf_RadioType_api = "tf_anarc210";
		tf_hasLRradio_api = 1; // 1 = true, 0 = false
		tf_isolatedAmount_api = 0.2;
		
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F","B_Helipilot_F"};
		driverAction = "pilot_Heli_Transport_01";
		memoryPointsGetInDriver = "pos cargo";
		memoryPointsGetInDriverDir = "pos cargo dir";
		
		memoryPointsGetInCargo[] = {"pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir"};
		
		cargoAction[] = {"CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1"};
		cargoIsCoDriver[] = {"true", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false"};
		
		transportSoldier = 22;
		transportMaxBackpacks = 10;
		
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		LockDetectionSystem = "2 + 8 + 4";
		IncomingMissileDetectionSystem = 16;
		
		radarType = 4;
		enableManualFire = 0;
		
		threat[] = {0.8,1,0.6};
		
		driverLeftHandAnimName = "lever_pilot";
		driverRightHandAnimName = "stick_pilot";
		
		memoryPointCM[]  = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		
		helmetMountedDisplay = 0;
		cargoCanEject = 1;
		driverCanEject = 0;		
		
		class MFD{};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 28;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 5;
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: NewTurret
			{
				isCopilot = 1;
				weapons[] = {};
				magazines[] = {};
				body = "Turret3";
				animationSourceBody="Turret_3";
				gun = "";
				selectionFireAnim = "";
				CanEject = 0;
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Transport_01";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "GetOutLow";
				gunnerName = "Co-Pilot";
				preciseGetInOut = 0;
				GunnerDoor = "";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				proxyIndex = 30;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				slingLoadOperator = 1;
			};
			class CargoTurret_01: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos Cargo";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos Cargo dir";	/// direction of get in action
				gunnerName 					= "Passenger (Left Side)";	/// name of the position in the Action menu
				proxyIndex 					= 24;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -42;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 20;					/// what is the left-most possible turn of the turret
				minTurn 					= -80;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "";				/// doesn't work unless the said animation source is 1
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
                commanding = -1;
	            outGunnerMayFire = 1;
                inGunnerMayFire = 0;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				memoryPointGunnerOptics= "";
			};
			class CargoTurret_02: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos Cargo";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos Cargo dir";	/// direction of get in action
				gunnerName 					= "Passenger (Right Side)";	/// name of the position in the Action menu
				proxyIndex 					= 23;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -42;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 80;					/// what is the left-most possible turn of the turret
				minTurn 					= -20;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "";				/// doesn't work unless the said animation source is 1
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
                commanding = -1;
                outGunnerMayFire = 1;
                inGunnerMayFire = 0;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				memoryPointGunnerOptics= "";
			};
			class CargoTurret_03: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos Cargo";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos Cargo dir";	/// direction of get in action
				gunnerName 					= "Passenger (Left Door)";	/// name of the position in the Action menu
				proxyIndex 					= 25;					/// what cargo proxy is used according to index in the model
				maxElev 					= 25;					/// what is the highest possible elevation of the turret
				minElev 					= -42;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 40;					/// what is the left-most possible turn of the turret
				minTurn 					= -40;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "";				/// doesn't work unless the said animation source is 1
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
                commanding = -1;
	            outGunnerMayFire = 1;
                inGunnerMayFire = 0;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				memoryPointGunnerOptics= "";
			};
			class CargoTurret_04: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos Cargo";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos Cargo dir";	/// direction of get in action
				gunnerName 					= "Passenger (Right Door)";	/// name of the position in the Action menu
				proxyIndex 					= 26;					/// what cargo proxy is used according to index in the model
				maxElev 					= 40;					/// what is the highest possible elevation of the turret
				minElev 					= -70;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 40;					/// what is the left-most possible turn of the turret
				minTurn 					= -40;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "";				/// doesn't work unless the said animation source is 1
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
                commanding = -1;
                outGunnerMayFire = 1;
                inGunnerMayFire = 0;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				memoryPointGunnerOptics= "";
			};		
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim{source="reload";weapon="M240_veh";};
			class ReloadMagazine{source="reloadmagazine";weapon="M240_veh";};
			class Revolving{source="revolving";weapon="M240_veh";};
			
			class Gatling_1
			{
				source = "revolving";
				weapon = "M134_minigun";
			};
			class Gatling_2
			{
				source = "revolving";
				weapon = "M134_minigun_2";
			};
			class CargoDoor
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class OpenCargoDoor
			{
				displayName = "Open Ramp";
				position = "actions";
				radius = 12;
				showwindow = 0;
				condition = "this animationPhase ""Ramp"" == 0 and (alive this);";
				statement = "this animate [""Ramp"", 1];";
				onlyforplayer = 1;
			};
			class CloseCargoDoor
			{
				displayName = "Close Ramp";
				position = "actions";
				radius = 12;
				showwindow = 0;
				condition = "this animationPhase ""Ramp"" > 0 and (alive this);";
				statement = "this animate [""Ramp"", 0];";
				onlyforplayer = 1;
			};
		};
		class HitPoints: HitPoints
		{
			class HitVRotor
			{
				armor = 1;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0.5;
			};
			class HitHRotor
			{
				armor = 1;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.5;
			};
		};
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"chinookpack\chinook\sounds\close",0.31622776,1};
		soundGetOut[] = {"chinookpack\chinook\sounds\open",0.31622776,1,40};
		soundDammage[] = {"chinookpack\chinook\sounds\int-alarm_loop",0.56234133,1};
		soundEngineOnInt[] = {"chinookpack\chinook\sounds\CH47_start_int",0.1,1.0};
		soundEngineOnExt[] = {"chinookpack\chinook\sounds\CH47_start_ext",0.56234133,1.0,800};
		soundEngineOffInt[] = {"chinookpack\chinook\sounds\CH47_stop_int",0.1,1.0};
		soundEngineOffExt[] = {"chinookpack\chinook\sounds\CH47_stop_ext",0.56234133,1.0,800};
		slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT", 1.0, 1.0};
		slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock", 1.0, 1.0, 80};
		slingCargoAttach[] = {"slingCargoAttach0", "slingCargoAttach1"};
		slingCargoDetach0[] = {"A3\Sounds_F\dummysound", 1.0, 1.0};
		slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock", 1.0, 1.0, 80};
		slingCargoDetach[] = {"slingCargoDetach0", "slingCargoDetach1"};
		slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int", 1.0, 1.0};
		slingCargoDetachAir1[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext", 1.0, 1.0, 80};
		slingCargoDetachAir[] = {"slingCargoDetach0", "slingCargoDetach1"};
		slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int", 1.0, 1.0};
		slingCargoRopeBreak1[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext", 1.0, 1.0, 80};
		slingCargoRopeBreak[] = {"slingCargoDetach0", "slingCargoDetach1"};
		occludeSoundsWhenIn = 0.56234133;
		obstructSoundsWhenIn = 0.31622776;
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",0.1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",0.1,1};
		class Sounds
		{
			class Engine
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_engine_high_ext",1.0,1.0,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_rotor_ext",3.1622777,1.0,1500};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class RotorHighOut
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_rotor_forsage_ext",3.1622777,1.0,1800};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.95))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class EngineIn
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_engine_high_int",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_rotor_int",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_rotor_forsage_int",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
		};
		class Library
		{
			libTextDesc = "CH-47F";
		};
		class MarkerLights {
			class WhiteStill {
				name = "bily pozicni";
				color[] = {1.0, 1.0, 1.0};
				ambient[] = {0.1, 0.1, 0.1};
				blinking = 1;
				intensity = 75;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			
			class RedStill {
				name = "cerveny pozicni";
				color[] = {0.8, 0.0, 0.0};
				ambient[] = {0.08, 0.0, 0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			
			class GreenStill {
				name = "zeleny pozicni";
				color[] = {0.0, 0.8, 0.0};
				ambient[] = {0.0, 0.08, 0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			
			class RedBlinking {
				name = "bily pozicni blik";
				color[] = {0.9, 0.15, 0.1};
				ambient[] = {0.09, 0.015, 0.01};
				intensity = 75;
				blinking = 1;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			
			class WhiteBlinking {
				name = "cerveny pozicni blik";
				color[] = {0.9, 0.15, 0.1};
				intensity = 75;
				ambient[] = {0.09, 0.015, 0.01};
				blinking = 1;
				blinkingPattern[] = {0.2, 1.3};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[] = {7000,7500,10000,1};
				ambient[] = {100,100,100,0};
				position = "svetlo";
				direction = "svetlo konec";
				hitpoint = "svetlo";
				selection = "svetlo";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 6;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				direction = "exhaust1_dir";
				effect = "ExhaustEffectHeli";
				position = "exhaust1";
			};
			class Exhaust2
			{
				direction = "exhaust2_dir";
				effect = "ExhaustEffectHeli";
				position = "exhaust2";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"chinookpack\chinook\data\ch47_1.rvmat","chinookpack\chinook\data\ch47_1_damage.rvmat","chinookpack\chinook\data\ch47_1_destruct.rvmat","chinookpack\chinook\data\ch47_2.rvmat","chinookpack\chinook\data\ch47_2_damage.rvmat","chinookpack\chinook\data\ch47_2_destruct.rvmat","chinookpack\chinook\data\ch47_1_int.rvmat","chinookpack\chinook\data\ch47_1_int.rvmat","chinookpack\chinook\data\ch47_1_int_destruct.rvmat","chinookpack\chinook\data\ch47_2_int.rvmat","chinookpack\chinook\data\ch47_2_int.rvmat","chinookpack\chinook\data\ch47_2_int_destruct.rvmat","chinookpack\chinook\data\ch47_sklo_in.rvmat","chinookpack\chinook\data\ch47_sklo_in_damage.rvmat","chinookpack\chinook\data\ch47_sklo_in_damage.rvmat","chinookpack\chinook\data\ch47_sklo.rvmat","chinookpack\chinook\data\ch47_sklo_damage.rvmat","chinookpack\chinook\data\ch47_sklo_damage.rvmat","chinookpack\chinook\data\default.rvmat","chinookpack\chinook\data\default.rvmat","chinookpack\chinook\data\default_destruct.rvmat"};
		};
		irScanRangeMin = 0;
		irScanRangeMax = 1000;
		irScanToEyeFactor = 2;
		driverCanSee=31;
		gunnerCanSee=31;
	};
	class CH_47FBAF_Unarmed: Helicopter
	{
		author = "DELTAGAMER";
		model = "\chinookpack\chinookBAF\UNARMED\CH_47F";
		picture = "\chinookpack\chinook\data\UI\Picture_ch47f_CA.paa";
		icon = "\chinookpack\chinook\data\UI\Icon_ch47f_CA.paa";
		mapSize = 24;
		scope = 2;
		maxSpeed = 295;
		maxFordingDepth = 0.65;
		expansion = 1;
		nameSound = "veh_helicopter";
		displayName = "RAF CH-47F (Unarmed)";
		side = 1;
		faction = "BLU_F";
		vehicleClass = "CH47_CH_47F";
		accuracy = 0.5;
		mainRotorSpeed = 1.0;
		backRotorSpeed = 1.0;
		armor = 30;
		damageResistance = 0.001;
		destrType = "DestructWreck";
		simulation = "helicopterX";
		slingLoadMemoryPoint = "slingLoad0";
		slingLoadMaxCargoMass = 10000;
		liftForceCoef = 2.5;
		tf_RadioType_api = "tf_anarc210";
		tf_hasLRradio_api = 1; // 1 = true, 0 = false
		tf_isolatedAmount_api = 0.2;
		
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F","B_Helipilot_F"};
		driverAction = "pilot_Heli_Transport_01";
		memoryPointsGetInDriver = "pos cargo";
		memoryPointsGetInDriverDir = "pos cargo dir";
		
		memoryPointsGetInCargo[] = {"pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir"};
		
		cargoAction[] = {"CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1", "CH47_Cargo02_EP1"};
		cargoIsCoDriver[] = {"true", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false", "false"};
		
		transportSoldier = 22;
		transportMaxBackpacks = 10;
		
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		LockDetectionSystem = "2 + 8 + 4";
		IncomingMissileDetectionSystem = 16;
		
		radarType = 4;
		enableManualFire = 0;
		
		threat[] = {0.8,1,0.6};
		
		driverLeftHandAnimName = "lever_pilot";
		driverRightHandAnimName = "stick_pilot";
		
		memoryPointCM[]  = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		
		helmetMountedDisplay = 0;
		cargoCanEject = 1;
		driverCanEject = 0;		
		
		class MFD{};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 28;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 5;
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: NewTurret
			{
				isCopilot = 1;
				weapons[] = {};
				magazines[] = {};
				body = "Turret3";
				animationSourceBody="Turret_3";
				gun = "";
				selectionFireAnim = "";
				CanEject = 0;
				gunnerAction = "pilot_Heli_Transport_01";
				gunnerInAction = "pilot_Heli_Transport_01";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "GetOutLow";
				gunnerName = "Co-Pilot";
				preciseGetInOut = 0;
				GunnerDoor = "";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				proxyIndex = 30;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				gunnerCompartments = "Compartment3";
				commanding = -3;
				slingLoadOperator = 1;
			};
			class CargoTurret_01: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos Cargo";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos Cargo dir";	/// direction of get in action
				gunnerName 					= "Passenger (Left Side)";	/// name of the position in the Action menu
				proxyIndex 					= 24;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -42;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 20;					/// what is the left-most possible turn of the turret
				minTurn 					= -80;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "";				/// doesn't work unless the said animation source is 1
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
                commanding = -1;
	            outGunnerMayFire = 1;
                inGunnerMayFire = 0;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				memoryPointGunnerOptics= "";
			};
			class CargoTurret_02: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos Cargo";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos Cargo dir";	/// direction of get in action
				gunnerName 					= "Passenger (Right Side)";	/// name of the position in the Action menu
				proxyIndex 					= 23;					/// what cargo proxy is used according to index in the model
				maxElev 					= 15;					/// what is the highest possible elevation of the turret
				minElev 					= -42;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 80;					/// what is the left-most possible turn of the turret
				minTurn 					= -20;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "";				/// doesn't work unless the said animation source is 1
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
                commanding = -1;
                outGunnerMayFire = 1;
                inGunnerMayFire = 0;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				memoryPointGunnerOptics= "";
			};
			class CargoTurret_03: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos Cargo";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos Cargo dir";	/// direction of get in action
				gunnerName 					= "Passenger (Left Door)";	/// name of the position in the Action menu
				proxyIndex 					= 25;					/// what cargo proxy is used according to index in the model
				maxElev 					= 25;					/// what is the highest possible elevation of the turret
				minElev 					= -42;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 40;					/// what is the left-most possible turn of the turret
				minTurn 					= -40;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "";				/// doesn't work unless the said animation source is 1
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
                commanding = -1;
	            outGunnerMayFire = 1;
                inGunnerMayFire = 0;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				memoryPointGunnerOptics= "";
			};
			class CargoTurret_04: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 				= "passenger_inside_3";	/// generic animation for sitting inside with rifle ready
				gunnerCompartments 			= "";		/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos Cargo";		/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos Cargo dir";	/// direction of get in action
				gunnerName 					= "Passenger (Right Door)";	/// name of the position in the Action menu
				proxyIndex 					= 26;					/// what cargo proxy is used according to index in the model
				maxElev 					= 40;					/// what is the highest possible elevation of the turret
				minElev 					= -70;					/// what is the lowest possible elevation of the turret
				maxTurn 					= 40;					/// what is the left-most possible turn of the turret
				minTurn 					= -40;					/// what is the right-most possible turn of the turret
				isPersonTurret 				= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 			= 0;					/// seatbelts included
				enabledByAnimationSource 	= "";				/// doesn't work unless the said animation source is 1
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
                commanding = -1;
                outGunnerMayFire = 1;
                inGunnerMayFire = 0;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				memoryPointGunnerOptics= "";
			};		
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim{source="reload";weapon="M240_veh";};
			class ReloadMagazine{source="reloadmagazine";weapon="M240_veh";};
			class Revolving{source="revolving";weapon="M240_veh";};
			
			class Gatling_1
			{
				source = "revolving";
				weapon = "M134_minigun";
			};
			class Gatling_2
			{
				source = "revolving";
				weapon = "M134_minigun_2";
			};
			class CargoDoor
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class OpenCargoDoor
			{
				displayName = "Open Ramp";
				position = "actions";
				radius = 12;
				showwindow = 0;
				condition = "this animationPhase ""Ramp"" == 0 and (alive this);";
				statement = "this animate [""Ramp"", 1];";
				onlyforplayer = 1;
			};
			class CloseCargoDoor
			{
				displayName = "Close Ramp";
				position = "actions";
				radius = 12;
				showwindow = 0;
				condition = "this animationPhase ""Ramp"" > 0 and (alive this);";
				statement = "this animate [""Ramp"", 0];";
				onlyforplayer = 1;
			};
		};
		class HitPoints: HitPoints
		{
			class HitVRotor
			{
				armor = 1;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0.5;
			};
			class HitHRotor
			{
				armor = 1;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.5;
			};
		};
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"chinookpack\chinook\sounds\close",0.31622776,1};
		soundGetOut[] = {"chinookpack\chinook\sounds\open",0.31622776,1,40};
		soundDammage[] = {"chinookpack\chinook\sounds\int-alarm_loop",0.56234133,1};
		soundEngineOnInt[] = {"chinookpack\chinook\sounds\CH47_start_int",0.1,1.0};
		soundEngineOnExt[] = {"chinookpack\chinook\sounds\CH47_start_ext",0.56234133,1.0,800};
		soundEngineOffInt[] = {"chinookpack\chinook\sounds\CH47_stop_int",0.1,1.0};
		soundEngineOffExt[] = {"chinookpack\chinook\sounds\CH47_stop_ext",0.56234133,1.0,800};
		slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT", 1.0, 1.0};
		slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock", 1.0, 1.0, 80};
		slingCargoAttach[] = {"slingCargoAttach0", "slingCargoAttach1"};
		slingCargoDetach0[] = {"A3\Sounds_F\dummysound", 1.0, 1.0};
		slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock", 1.0, 1.0, 80};
		slingCargoDetach[] = {"slingCargoDetach0", "slingCargoDetach1"};
		slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int", 1.0, 1.0};
		slingCargoDetachAir1[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext", 1.0, 1.0, 80};
		slingCargoDetachAir[] = {"slingCargoDetach0", "slingCargoDetach1"};
		slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int", 1.0, 1.0};
		slingCargoRopeBreak1[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext", 1.0, 1.0, 80};
		slingCargoRopeBreak[] = {"slingCargoDetach0", "slingCargoDetach1"};
		occludeSoundsWhenIn = 0.56234133;
		obstructSoundsWhenIn = 0.31622776;
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",0.1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",0.1,1};
		class Sounds
		{
			class Engine
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_engine_high_ext",1.0,1.0,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_rotor_ext",3.1622777,1.0,1500};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class RotorHighOut
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_rotor_forsage_ext",3.1622777,1.0,1800};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.95))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class EngineIn
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_engine_high_int",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_rotor_int",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"chinookpack\chinook\sounds\CH47_rotor_forsage_int",1.7782794,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT", 1.0, 1.0, 500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
		};
		class Library
		{
			libTextDesc = "CH-47F";
		};
		class MarkerLights {
			class WhiteStill {
				name = "bily pozicni";
				color[] = {1.0, 1.0, 1.0};
				ambient[] = {0.1, 0.1, 0.1};
				blinking = 1;
				intensity = 75;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			
			class RedStill {
				name = "cerveny pozicni";
				color[] = {0.8, 0.0, 0.0};
				ambient[] = {0.08, 0.0, 0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			
			class GreenStill {
				name = "zeleny pozicni";
				color[] = {0.0, 0.8, 0.0};
				ambient[] = {0.0, 0.08, 0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			
			class RedBlinking {
				name = "bily pozicni blik";
				color[] = {0.9, 0.15, 0.1};
				ambient[] = {0.09, 0.015, 0.01};
				intensity = 75;
				blinking = 1;
				blinkingPattern[] = {0.1, 0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			
			class WhiteBlinking {
				name = "cerveny pozicni blik";
				color[] = {0.9, 0.15, 0.1};
				intensity = 75;
				ambient[] = {0.09, 0.015, 0.01};
				blinking = 1;
				blinkingPattern[] = {0.2, 1.3};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[] = {7000,7500,10000,1};
				ambient[] = {100,100,100,0};
				position = "svetlo";
				direction = "svetlo konec";
				hitpoint = "svetlo";
				selection = "svetlo";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 6;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				direction = "exhaust1_dir";
				effect = "ExhaustEffectHeli";
				position = "exhaust1";
			};
			class Exhaust2
			{
				direction = "exhaust2_dir";
				effect = "ExhaustEffectHeli";
				position = "exhaust2";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = 
			{
			"chinookpack\chinook\data\ch47_1.rvmat",
			"chinookpack\chinook\data\ch47_1_damage.rvmat",
			"chinookpack\chinook\data\ch47_1_destruct.rvmat",
			"chinookpack\chinook\data\ch47_2.rvmat",
			"chinookpack\chinook\data\ch47_2_damage.rvmat",
			"chinookpack\chinook\data\ch47_2_destruct.rvmat",
			"chinookpack\chinook\data\ch47_1_int.rvmat",
			"chinookpack\chinook\data\ch47_1_int.rvmat",
			"chinookpack\chinook\data\ch47_1_int_destruct.rvmat",
			"chinookpack\chinook\data\ch47_2_int.rvmat",
			"chinookpack\chinook\data\ch47_2_int.rvmat",
			"chinookpack\chinook\data\ch47_2_int_destruct.rvmat",
			"chinookpack\chinook\data\ch47_sklo_in.rvmat",
			"chinookpack\chinook\data\ch47_sklo_in_damage.rvmat",
			"chinookpack\chinook\data\ch47_sklo_in_damage.rvmat",
			"chinookpack\chinook\data\ch47_sklo.rvmat",
			"chinookpack\chinook\data\ch47_sklo_damage.rvmat",
			"chinookpack\chinook\data\ch47_sklo_damage.rvmat",
			"chinookpack\chinook\data\default.rvmat",
			"chinookpack\chinook\data\default.rvmat",
			"chinookpack\chinook\data\default_destruct.rvmat"
			};
		};
		irScanRangeMin = 0;
		irScanRangeMax = 1000;
		irScanToEyeFactor = 2;
		driverCanSee=31;
		gunnerCanSee=31;
	};
};

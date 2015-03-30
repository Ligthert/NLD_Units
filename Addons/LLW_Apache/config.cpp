class CfgPatches
{
	class LLW_Apache
	{
		units[] = {"LLW_Apache_RNLAF"};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Air_F","A3_Weapons_F"};
	};
};
class RscControlsGroup;
class RscText;
class RangeText: RscText{};
class RscPicture;
class RscOpticsText;
class RscIGProgress;
class RscOpticsValue;
class VScrollbar;
class HScrollbar;
class RscLadderPicture;
class RscInGameUI
{
	class RscUnitInfo;
	class Rsc_LLW_AH64D_UI_Turret: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group","CA_VehicleToggles"};
		class VScrollbar;
		class HScrollbar;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance: RscText
				{
					idc = 151;
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					x = "24.78 * 		(0.01875 * SafezoneH)";
					y = "30.88 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Speed: RangeText
				{
					idc = 188;
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "120";
					x = "14.78 * 		(0.01875 * SafezoneH)";
					y = "30.88 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Alt: RangeText
				{
					idc = 189;
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "3825";
					x = "34.78 * 		(0.01875 * SafezoneH)";
					y = "30.88 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 152;
					style = 0;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "VIS";
					x = "12.58 * 		(0.01875 * SafezoneH)";
					y = "8 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "BHOT";
					x = "15.78 * 		(0.01875 * SafezoneH)";
					y = "8 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ValueGrid: RangeText
				{
					idc = 172;
					font = "EtelkaMonospacePro";
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					x = "12.20 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextTADS: RangeText
				{
					idc = 1010;
					text = "TADS";
					font = "EtelkaMonospacePro";
					style = 2;
					shadow = 0;
					x = "12.30 * 		(0.01875 * SafezoneH)";
					y = "5 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ValueTime: RangeText
				{
					idc = 190;
					text = "20:28:35";
					font = "EtelkaMonospacePro";
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					x = "12.1 * 		(0.01875 * SafezoneH)";
					y = "6.5 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					idc = 158;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "\LLW_Apache\Data\Apache_LaserOn.paa";
					x = "20.45 * 		(0.01875 * SafezoneH)";
					y = "14.1 * 		(0.025 * SafezoneH)";
					w = "12.5 * 		(0.01875 * SafezoneH)";
					h = "12 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 0;
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "023";
					x = "24.83 * 		(0.01875 * SafezoneH)";
					y = "6 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class Rsc_LLW_AH64D_UI_01: RscUnitInfo
	{
		controls[] = {"WeaponInfoControlsGroupRight","CA_HitZones","CA_TextFlaresMode","CA_TextFlares","CA_VehicleToggles"};
	};
};
class CfgAmmo
{
	class RocketCore;
	class RocketBase;
	class BulletBase;
	class MissileCore;
	class MissileBase;
	class B_762x51_Ball;
	class B_30mm_HE;
	class M_AT;
	class M_Scalpel_AT;
	class SubmunitionBase;
	class LLW_M230_Ammo_HEDP: B_30mm_HE
	{
		hit = 105;
		indirectHit = 10;
		indirectHitRange = 2;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		explosive = 0.3;
		caliber = 2.5;
		airFriction = -0.00078;
		laserlock = 1;
		airlock = 0;
		irlock = 0;
		cost = 20;
		muzzleEffect = "BIS_fnc_effectFiredRifle";
	};
	class LLW_Hellfire_AT: MissileBase
	{
		model = "\LLW_Apache\AGM114\AGM114Hellfire.p3d";
		proxyShape = "\LLW_Apache\AGM114\AGM114Hellfire_proxy";
		simulation = "shotMissile";
		hit = 1100;
		indirectHit = 20;
		indirectHitRange = 2;
		cost = 1000;
		maxSpeed = 425;
		irLock = 1;
		autoSeekTarget = 1;
		lockSeekRadius = 12000;
		LockType = 0;
		laserLock = 1;
		airLock = 0;
		manualControl = 0;
		maxControlRange = 8000;
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 9;
		timeToLive = 30;
		simulationStep = 0.01;
		sideAirFriction = 0.2;
		initTime = 0;
		thrustTime = 3.25;
		thrust = 240;
		fuseDistance = 30;
		effectsMissileInit = "MissileDAR1";
		effectsMissile = "missile2";
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		weaponLockSystem = "2 + 16";
		whistleDist = 4;
	};
	class LLW_Hellfire_Ammo_K: LLW_Hellfire_AT
	{
		irlock = 0;
		manualcontrol = 0;
		laserLock = 1;
		maxControlRange = 8000;
		timetolive = 40;
		weaponlocksystem = "4 + 16";
		hit = 1400;
		indirecthit = 200;
		indirecthitrange = 4;
		maneuvrability = 7;
		nameSound = "missiles";
		cost = 1000;
	};
	class LLW_Hellfire_Ammo_N: LLW_Hellfire_AT
	{
		irlock = 0;
		timetolive = 40;
		weaponlocksystem = "4 + 16";
		manualcontrol = 0;
		laserLock = 1;
		maxControlRange = 8000;
		maneuvrability = 7;
		hit = 900;
		indirecthit = 200;
		indirecthitrange = 12;
		explosionEffects = "BombExplosion";
		cost = 1000;
	};
	class LLW_Hellfire_Ammo_L: LLW_Hellfire_AT
	{
		hit = 1400;
		indirecthit = 200;
		indirecthitrange = 4;
		timetolive = 40;
		weaponlocksystem = 8;
		manualcontrol = 0;
		lockType = 0;
		laserLock = 0;
		airLock = 0;
		irlock = 1;
		maneuvrability = 7;
		maxSpeed = 1500;
		cost = 1000;
	};
	class LLW_M255_Submunition_FL_1: BulletBase
	{
		hit = 10;
		indirectHit = 3;
		indirectHitRange = 1;
		visibleFire = 6;
		audibleFire = 9;
		explosive = 0.05;
		cost = 1.2;
		airLock = 0;
		typicalSpeed = 800;
		caliber = 1.6;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 0.6;
		tracerStartTime = 0.0075;
		tracerEndTime = 5;
		airFriction = -0.001;
		class CamShakeExplode
		{
			power = "(8^0.5)";
			duration = "((round (8^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((8^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 5;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
	class LLW_M255_Submunition_FL_2: B_762x51_Ball
	{
		hit = 15;
		indirectHit = 10;
		indirectHitRange = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		caliber = 3.6;
		deflecting = 30;
		fuseDistance = 12;
	};
	class LLW_M261_Submunition_MPSM: B_30mm_HE
	{
		hit = 20;
		indirectHit = 10;
		indirectHitRange = 2;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 2;
		tracerStartTime = 0.01;
		tracerEndTime = 2.3;
		explosive = 0.3;
		caliber = 2.5;
		airFriction = -0.00078;
		typicalSpeed = 500;
		laserlock = 1;
		airlock = 0;
		irlock = 0;
		cost = 20;
		muzzleEffect = "BIS_fnc_effectFiredRifle";
	};
	class LLW_Hydra_Ammo_HEDP: M_AT
	{
		model = "\LLW_Apache\70mmRocket\70mmRocket.p3d";
		proxyShape = "\LLW_Apache\70mmRocket\70mmRocket_proxy";
		hit = 400;
		indirectHit = 60;
		indirectHitRange = 15;
		cost = 500;
		maxSpeed = 740;
		thrustTime = 1.1;
		thrust = 570;
		sideAirFriction = 0.2;
		timeToLive = 20;
		fuseDistance = 40;
		whistleDist = 24;
		irlock = 0;
		laserlock = 1;
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
	};
	class LLW_Hydra_Ammo_MPSM: M_AT
	{
		model = "LLW_Apache\70mmRocket\70mmRocket.p3d";
		hit = 250;
		indirectHit = 150;
		indirectHitRange = 30;
		cost = 500;
		maxSpeed = 740;
		thrustTime = 1.1;
		thrust = 570;
		sideAirFriction = 0.2;
		timeToLive = 20;
		fuseDistance = 40;
		whistleDist = 24;
		irlock = 0;
		laserlock = 1;
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
	};
	class LLW_Hydra_Ammo_WP: MissileBase
	{
		model = "\LLW_Apache\70mmRocket\70mmRocket.p3d";
		proxyShape = "\LLW_Apache\70mmRocket\70mmRocket_proxy";
		simulation = "shotMissile";
		hit = 20;
		indirectHit = 5;
		indirectHitRange = 5;
		explosive = 0.5;
		cratereffects = "ExploAmmoCrater";
		explosioneffects = "WPExplosion";
		effectsSmoke = "SmokeShellWhiteSmall";
	};
	class LLW_Hydra_Ammo_FL: SubmunitionBase
	{
		model = "\LLW_Apache\70mmRocket\70mmRocket.p3d";
		submunitionAmmo = "LLW_M255_Submunition_FL_2";
		submunitionCount = 100;
		submunitionConeType[] = {"randomcenter",12};
		submunitionConeAngle = 10;
		triggerDistance = 50;
		cost = 500;
		maxSpeed = 740;
		thrustTime = 1.1;
		thrust = 570;
		sideAirFriction = 0.2;
		airFriction = 0;
		maneuvrability = 0;
		maxControlRange = 0;
		initTime = 0.002;
		fuseDistance = 5;
		muzzleEffect = "";
		effectsMissileInit = "MissileDAR1";
		effectsMissile = "missile2";
		class CamShakeFire
		{
			power = "(155^0.25)";
			duration = "((round (155^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((155^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class LLW_IR_Jammer_Ammo: BulletBase
	{
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		timeToLive = 0.1;
		thrustTime = 2;
		airFriction = -0.01;
		simulation = "shotCM";
		weaponLockSystem = "2 + 8";
		model = "\A3\weapons_f\empty";
		maxControlRange = -1;
		initTime = 0;
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class CA_Magazine;
	class LLW_M230_1200Rnd_Magazine: VehicleMagazine
	{
		scope = 1;
		displayName = "HEDP";
		displayNameShort = "HEDP";
		ammo = "LLW_M230_Ammo_HEDP";
		count = 1200;
		initSpeed = 805;
		tracersEvery = 1;
		maxLeadSpeed = 500;
		nameSound = "cannon";
		airLock = 1;
	};
	class LLW_Hellfire_8Rnd_Magazine: VehicleMagazine
	{
		scope = 2;
		displayName = "HELLFIRE";
		count = 8;
		ammo = "LLW_Hellfire_AT";
		initSpeed = 0;
		maxLeadSpeed = 200;
		sound[] = {"A3\Sounds_F\weapons\Rockets\titan_3",1.2589254,1,1000};
		weaponSoundEffect = "DefaultRifle";
		reloadSound[] = {"",0.00031622776,1,20};
		nameSound = "missiles";
	};
	class LLW_Hellfire_2Rnd_Magazine_K: LLW_Hellfire_8Rnd_Magazine
	{
		displayName = "AGM-114K";
		displayNameShort = "SAL/HEAT";
		ammo = "LLW_Hellfire_Ammo_K";
		displayNameMagazine = "AGM-114K";
		count = 2;
	};
	class LLW_Hellfire_4Rnd_Magazine_K: LLW_Hellfire_2Rnd_Magazine_K
	{
		count = 4;
	};
	class LLW_Hellfire_6Rnd_Magazine_K: LLW_Hellfire_2Rnd_Magazine_K
	{
		count = 6;
	};
	class LLW_Hellfire_8Rnd_Magazine_K: LLW_Hellfire_2Rnd_Magazine_K
	{
		count = 8;
	};
	class LLW_Hellfire_2Rnd_Magazine_N: LLW_Hellfire_2Rnd_Magazine_K
	{
		displayName = "AGM-114N";
		displayNameShort = "SAL/Thermobaric";
		ammo = "LLW_Hellfire_Ammo_N";
		displayNameMagazine = "AGM-114N";
		count = 2;
	};
	class LLW_Hellfire_4Rnd_Magazine_N: LLW_Hellfire_2Rnd_Magazine_N
	{
		count = 4;
	};
	class LLW_Hellfire_6Rnd_Magazine_N: LLW_Hellfire_2Rnd_Magazine_N
	{
		count = 6;
	};
	class LLW_Hellfire_8Rnd_Magazine_N: LLW_Hellfire_2Rnd_Magazine_N
	{
		count = 8;
	};
	class LLW_Hellfire_4Rnd_Magazine_L: LLW_Hellfire_2Rnd_Magazine_K
	{
		displayName = "AGM-114L";
		displayNameShort = "RF/HEAT";
		ammo = "LLW_Hellfire_Ammo_L";
		displayNameMagazine = "AGM-114L";
	};
	class LLW_FFAR_Magazine: VehicleMagazine
	{
		scope = 2;
		displayName = "HYDRA";
		displayNameShort = "HEDP";
		ammo = "LLW_Hydra_Ammo_HEDP";
		count = 12;
		initSpeed = 44;
		maxLeadSpeed = 200;
		nameSound = "rockets";
		sound[] = {"LLW_Apache\Data\Sounds\rocketLauncher_Shot21",3.1622777,1};
		reloadSound[] = {"A3\sounds_f\dummysound",0.00031622776,1};
	};
	class LLW_FFAR_3Rnd_Magazine_HEDP: LLW_FFAR_Magazine
	{
		displayName = "M247 HEDP";
		displayNameShort = "HEDP";
		ammo = "LLW_Hydra_Ammo_HEDP";
		count = 3;
	};
	class LLW_FFAR_4Rnd_Magazine_HEDP: LLW_FFAR_3Rnd_Magazine_HEDP
	{
		count = 4;
	};
	class LLW_FFAR_6Rnd_Magazine_HEDP: LLW_FFAR_3Rnd_Magazine_HEDP
	{
		count = 6;
	};
	class LLW_FFAR_8Rnd_Magazine_HEDP: LLW_FFAR_3Rnd_Magazine_HEDP
	{
		count = 8;
	};
	class LLW_FFAR_12Rnd_Magazine_HEDP: LLW_FFAR_3Rnd_Magazine_HEDP
	{
		count = 12;
	};
	class LLW_FFAR_19Rnd_Magazine_HEDP: LLW_FFAR_3Rnd_Magazine_HEDP
	{
		count = 19;
	};
	class LLW_FFAR_24Rnd_Magazine_HEDP: LLW_FFAR_3Rnd_Magazine_HEDP
	{
		count = 24;
	};
	class LLW_FFAR_38Rnd_Magazine_HEDP: LLW_FFAR_3Rnd_Magazine_HEDP
	{
		count = 38;
	};
	class LLW_FFAR_3Rnd_Magazine_MPSM: LLW_FFAR_Magazine
	{
		displayName = "M261 MPSM";
		displayNameShort = "MPSM";
		ammo = "LLW_Hydra_Ammo_MPSM";
		count = 3;
		initSpeed = 500;
	};
	class LLW_FFAR_4Rnd_Magazine_MPSM: LLW_FFAR_3Rnd_Magazine_MPSM
	{
		count = 4;
	};
	class LLW_FFAR_6Rnd_Magazine_MPSM: LLW_FFAR_3Rnd_Magazine_MPSM
	{
		count = 6;
	};
	class LLW_FFAR_8Rnd_Magazine_MPSM: LLW_FFAR_3Rnd_Magazine_MPSM
	{
		count = 8;
	};
	class LLW_FFAR_12Rnd_Magazine_MPSM: LLW_FFAR_3Rnd_Magazine_MPSM
	{
		count = 12;
	};
	class LLW_FFAR_19Rnd_Magazine_MPSM: LLW_FFAR_3Rnd_Magazine_MPSM
	{
		count = 19;
	};
	class LLW_FFAR_24Rnd_Magazine_MPSM: LLW_FFAR_3Rnd_Magazine_MPSM
	{
		count = 24;
	};
	class LLW_FFAR_38Rnd_Magazine_MPSM: LLW_FFAR_3Rnd_Magazine_MPSM
	{
		count = 38;
	};
	class LLW_FFAR_3Rnd_Magazine_WP: LLW_FFAR_Magazine
	{
		displayName = "M156 WP";
		displayNameShort = "WP";
		ammo = "LLW_Hydra_Ammo_WP";
		count = 3;
	};
	class LLW_FFAR_4Rnd_Magazine_WP: LLW_FFAR_3Rnd_Magazine_WP
	{
		count = 4;
	};
	class LLW_FFAR_6Rnd_Magazine_WP: LLW_FFAR_3Rnd_Magazine_WP
	{
		count = 6;
	};
	class LLW_FFAR_8Rnd_Magazine_WP: LLW_FFAR_3Rnd_Magazine_WP
	{
		count = 8;
	};
	class LLW_FFAR_12Rnd_Magazine_WP: LLW_FFAR_3Rnd_Magazine_WP
	{
		count = 12;
	};
	class LLW_FFAR_19Rnd_Magazine_WP: LLW_FFAR_3Rnd_Magazine_WP
	{
		count = 19;
	};
	class LLW_FFAR_24Rnd_Magazine_WP: LLW_FFAR_3Rnd_Magazine_WP
	{
		count = 24;
	};
	class LLW_FFAR_38Rnd_Magazine_WP: LLW_FFAR_3Rnd_Magazine_WP
	{
		count = 38;
	};
	class LLW_FFAR_3Rnd_Magazine_FL: LLW_FFAR_Magazine
	{
		displayName = "M261 FL";
		displayNameShort = "FL";
		ammo = "LLW_Hydra_Ammo_FL";
		count = 3;
		initSpeed = 500;
	};
	class LLW_FFAR_4Rnd_Magazine_FL: LLW_FFAR_3Rnd_Magazine_FL
	{
		count = 4;
	};
	class LLW_FFAR_6Rnd_Magazine_FL: LLW_FFAR_3Rnd_Magazine_FL
	{
		count = 6;
	};
	class LLW_FFAR_8Rnd_Magazine_FL: LLW_FFAR_3Rnd_Magazine_FL
	{
		count = 8;
	};
	class LLW_FFAR_12Rnd_Magazine_FL: LLW_FFAR_3Rnd_Magazine_FL
	{
		count = 12;
	};
	class LLW_FFAR_19Rnd_Magazine_FL: LLW_FFAR_3Rnd_Magazine_FL
	{
		count = 19;
	};
	class LLW_FFAR_24Rnd_Magazine_FL: LLW_FFAR_3Rnd_Magazine_FL
	{
		count = 24;
	};
	class LLW_FFAR_38Rnd_Magazine_FL: LLW_FFAR_3Rnd_Magazine_FL
	{
		count = 38;
	};
	class LLW_IR_Jammer_Magazine: CA_Magazine
	{
		count = 120;
		ammo = "LLW_IR_Jammer_Ammo";
		initSpeed = 30;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class LauncherCore;
	class RocketPods;
	class CannonCore;
	class MissileLauncher;
	class MGun;
	class CMFlareLauncher;
	class SmokeLauncher;
	class Laserdesignator_mounted;
	class LLW_Master_Arms_Safe: RocketPods
	{
		CanLock = 0;
		displayName = "SAFE";
		displayNameMagazine = "SAFE";
		shortNameMagazine = "SAFE";
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		magazines[] = {"FakeMagazine"};
		burst = 0;
		reloadTime = 0.01;
		magazineReloadTime = 0.1;
	};
	class LLW_Laser_Designator: Laserdesignator_mounted
	{
		CanLock = 2;
		displayName = "Laser Designator";
		shotFromTurret = 1;
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		nameSound = "laserdesignator";
	};
	class LLW_M230_Weapon: CannonCore
	{
		scope = 1;
		displayName = "M230";
		nameSound = "cannon";
		autoFire = 0;
		magazines[] = {"LLW_M230_1200Rnd_Magazine"};
		canLock = 2;
		flash = "gunfire";
		flashSize = 0.3;
		recoil = "Empty";
		ballisticsComputer = 1;
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		cursorSize = 1;
		shotFromTurret = 1;
		modes[] = {"Burst10","Burst20","LowROF","close","near","short","medium","far"};
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun2";
				positionName = "mainGun_beg";
				directionName = "mgun_part_dir";
			};
		};
		class Burst10: Mode_Burst
		{
			displayName = "GUN/Burst 10";
			reloadTime = 0.096;
			textureType = "semi";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\30mm\30mm_st_02",1.99526,1,1500};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
			autoFire = 0;
			burst = 10;
			soundContinuous = 0;
			flash = "gunfire";
			flashSize = 0.3;
			recoil = "Empty";
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 900;
			minRange = 50;
			minRangeProbab = 0.5;
			midRange = 700;
			midRangeProbab = 0.78;
			maxRange = 900;
			maxRangeProbab = 0.2;
			dispersion = 0.005;
			showToPlayer = 1;
		};
		class Burst20: Mode_Burst
		{
			displayName = "GUN/Burst 20";
			reloadTime = 0.096;
			textureType = "burst";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\30mm\30mm_st_02",1.99526,1,1500};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
			autoFire = 0;
			burst = 20;
			soundContinuous = 0;
			flash = "gunfire";
			flashSize = 0.3;
			recoil = "Empty";
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 900;
			minRange = 50;
			minRangeProbab = 0.5;
			midRange = 700;
			midRangeProbab = 0.78;
			maxRange = 900;
			maxRangeProbab = 0.2;
			dispersion = 0.005;
			showToPlayer = 1;
		};
		class LowROF: Mode_FullAuto
		{
			displayName = "GUN/ FULL";
			reloadTime = 0.096;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\30mm\30mm_st_02",1.99526,1,1500};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
			soundContinuous = 0;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			minRange = 1;
			minRangeProbab = 0.9;
			midRange = 2;
			midRangeProbab = 0.9;
			maxRange = 3;
			maxRangeProbab = 0.09;
			dispersion = 0.005;
			showToPlayer = 0;
		};
		class close: LowROF
		{
			showToPlayer = 0;
			burst = 15;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 1;
			minRangeProbab = 0.9;
			midRange = 200;
			midRangeProbab = 0.9;
			maxRange = 400;
			maxRangeProbab = 0.9;
		};
		class near: close
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 1;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.9;
			maxRange = 300;
			maxRangeProbab = 0.9;
		};
		class short: close
		{
			burst = 13;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.9;
			midRange = 400;
			midRangeProbab = 0.9;
			maxRange = 600;
			maxRangeProbab = 0.9;
		};
		class medium: close
		{
			burst = 9;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 400;
			minRangeProbab = 0.9;
			midRange = 700;
			midRangeProbab = 0.9;
			maxRange = 900;
			maxRangeProbab = 0.9;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1500;
			minRange = 800;
			minRangeProbab = 0.9;
			midRange = 1000;
			midRangeProbab = 0.9;
			maxRange = 1500;
			maxRangeProbab = 0.9;
		};
	};
	class LLW_FFAR_Weapon_ALL: RocketPods
	{
		magazines[] = {"LLW_FFAR_3Rnd_Magazine_HEDP","LLW_FFAR_4Rnd_Magazine_HEDP","LLW_FFAR_6Rnd_Magazine_HEDP","LLW_FFAR_8Rnd_Magazine_HEDP","LLW_FFAR_12Rnd_Magazine_HEDP","LLW_FFAR_19Rnd_Magazine_HEDP","LLW_FFAR_24Rnd_Magazine_HEDP","LLW_FFAR_38Rnd_Magazine_HEDP","LLW_FFAR_3Rnd_Magazine_MPSM","LLW_FFAR_4Rnd_Magazine_MPSM","LLW_FFAR_6Rnd_Magazine_MPSM","LLW_FFAR_8Rnd_Magazine_MPSM","LLW_FFAR_12Rnd_Magazine_MPSM","LLW_FFAR_19Rnd_Magazine_MPSM","LLW_FFAR_24Rnd_Magazine_MPSM","LLW_FFAR_38Rnd_Magazine_MPSM","LLW_FFAR_3Rnd_Magazine_WP","LLW_FFAR_4Rnd_Magazine_WP","LLW_FFAR_6Rnd_Magazine_WP","LLW_FFAR_8Rnd_Magazine_WP","LLW_FFAR_12Rnd_Magazine_WP","LLW_FFAR_19Rnd_Magazine_WP","LLW_FFAR_24Rnd_Magazine_WP","LLW_FFAR_38Rnd_Magazine_WP"};
		displayName = "Hydra 70";
		modes[] = {"Far_AI","Burst1","Burst2","Burst4"};
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		canLock = 0;
		magazineReloadTime = 0.8;
		autoReload = 0;
		weaponLockDelay = 0.1;
		weaponLockSystem = 0;
		weaponInfoType = "RscWeaponZeroing";
		class Far_AI: RocketPods
		{
			canLock = 0;
			minRange = 50;
			minRangeProbab = 0.041;
			midRange = 600;
			midRangeProbab = 0.21;
			maxRange = 2500;
			maxRangeProbab = 0.11;
			displayName = "HYDRA-SINGLE";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_8",4,1.2,1600};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.1220185,1.2,700};
			soundContinuous = 0;
			soundBurst = 0;
			burst = 1;
			reloadTime = 0.08;
			autoFire = 0;
			showToPlayer = 0;
		};
		class Burst1: Mode_SemiAuto
		{
			minRange = 1;
			minRangeProbab = 0.001;
			midRange = 2;
			midRangeProbab = 0.001;
			maxRange = 3;
			maxRangeProbab = 0.01;
			displayName = "HEDP/Single";
			burst = 1;
			canLock = 1;
			reloadTime = 0.15;
			autoFire = 0;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_8",4,1.2,1600};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",2.5,1.2,700};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class Burst2: Mode_Burst
		{
			minRange = 1;
			minRangeProbab = 0.001;
			midRange = 2;
			canLock = 1;
			midRangeProbab = 0.001;
			maxRange = 3;
			maxRangeProbab = 0.001;
			displayName = "HEDP/Ripple 2";
			reloadTime = 0.1;
			autoFire = 0;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_8",4,1.2,1600};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.1220185,1.2,700};
			burst = 2;
			soundContinuous = 0;
			soundBurst = 0;
		};
		class Burst4: Mode_FullAuto
		{
			minRange = 1;
			minRangeProbab = 0.001;
			midRange = 2;
			midRangeProbab = 0.001;
			canLock = 1;
			maxRange = 3;
			maxRangeProbab = 0.01;
			reloadTime = 0.1;
			autoFire = 0;
			displayName = "HEDP/Ripple 4";
			burst = 4;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_8",4,1.2,1600};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.1220185,1.2,700};
			soundContinuous = 0;
			soundBurst = 0;
		};
	};
	class LLW_Hellfire_Weapon_K: MissileLauncher
	{
		displayName = "AGM-114K";
		magazines[] = {"LLW_Hellfire_2Rnd_Magazine_K","LLW_Hellfire_4Rnd_Magazine_K","LLW_Hellfire_6Rnd_Magazine_K"};
		weaponLockDelay = 0.5;
		ballisticsComputer = 1;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 4000;
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		cursorSize = 1;
		textureType = "fullAuto";
		reloadTime = 1;
		autoReload = 0;
		backgroundReload = 0;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",5,1.3,1000};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",1,1.5,700};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.31622776,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.31622776,2.5};
	};
	class LLW_Hellfire_Weapon_N: MissileLauncher
	{
		displayName = "AGM-114N";
		magazines[] = {"LLW_Hellfire_2Rnd_Magazine_N","LLW_Hellfire_4Rnd_Magazine_N","LLW_Hellfire_6Rnd_Magazine_N"};
		weaponLockDelay = 0.5;
		ballisticsComputer = 1;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 4000;
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		cursorSize = 1;
		textureType = "fullAuto";
		reloadTime = 1;
		autoReload = 0;
		backgroundReload = 0;
		nameSound = "MissileLauncher";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",5,1.3,1000};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",1,1.5,700};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.31622776,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.31622776,2.5};
	};
	class LLW_Hellfire_Weapon_L: MissileLauncher
	{
		displayName = "AGM-114L";
		magazines[] = {"LLW_Hellfire_4Rnd_Magazine_L"};
		weaponLockDelay = 0.5;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 4000;
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		cursorSize = 1;
		textureType = "fullAuto";
		reloadTime = 1;
		autoReload = 0;
		backgroundReload = 0;
		nameSound = "MissileLauncher";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",5,1.3,1000};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",1,1.5,700};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.31622776,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.31622776,2.5};
	};
	class LLW_Flare_Launcher: CMFlareLauncher
	{
		displayName = "Countermeasures";
		modes[] = {"Single","Burst1","Burst2","Burst3","Burst4","Burst5","Burst6","Burst7","Burst8","AIBurst"};
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.25;
			autoFire = 0;
			displayName = "PRG1 - 4F/-";
			burst = 1;
			multiplier = 4;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1,1,300};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class Burst1: Mode_Burst
		{
			reloadTime = 0.125;
			autoFire = 1;
			displayName = "PRG2 - 16F/0.5S";
			burst = 4;
			multiplier = 4;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1,1,300};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class Burst2: Burst1
		{
			reloadTime = 0.25;
			autoFire = 1;
			displayName = "PRG3 - 16F/1S";
			burst = 4;
			multiplier = 4;
		};
		class Burst3: Burst1
		{
			reloadTime = 0.5;
			autoFire = 1;
			displayName = "PRG4 - 16F/2S";
			burst = 4;
			multiplier = 4;
		};
		class Burst4: Burst1
		{
			reloadTime = 1;
			autoFire = 1;
			displayName = "PRG5 - 16F/4S";
			burst = 4;
			multiplier = 4;
		};
		class Burst5: Burst1
		{
			reloadTime = 0.125;
			autoFire = 1;
			displayName = "PRG6 - 32F/1S";
			burst = 8;
			multiplier = 4;
		};
		class Burst6: Burst1
		{
			reloadTime = 0.25;
			autoFire = 1;
			displayName = "PRG7 - 32F/2S";
			burst = 8;
			multiplier = 4;
		};
		class Burst7: Burst1
		{
			reloadTime = 0.5;
			autoFire = 1;
			displayName = "PRG8 - 32F/4S";
			burst = 8;
			multiplier = 4;
		};
		class Burst8: Burst1
		{
			reloadTime = 1;
			autoFire = 1;
			displayName = "PRG9 - 32F/8S";
			burst = 8;
			multiplier = 4;
		};
	};
	class LLW_IR_Jammer_Weapon: SmokeLauncher
	{
		scope = 2;
		displayName = "IR Jammer";
		magazines[] = {"US_Jammer_Magazine_Kimi"};
		magazineReloadTime = 60;
		simulation = "cmlauncher";
		modes[] = {"Burst1"};
		class Burst1: Mode_Burst
		{
			displayName = "IR Jammer";
			reloadTime = 0.25;
			burst = 120;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"",1,1,300};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "";
			};
			showToPlayer = 1;
			multiplier = 1;
			minRange = 0;
			maxRange = 200;
			soundBurst = 0;
		};
	};
};
class CfgOpticsEffect
{
	class LLW_OpticsBlackWhite
	{
		type = "ColorCorrections";
		priority = 1550;
		params[] = {1,1,0,0,0,0,0,1,1,1,0,1,0,0,0};
	};
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitWinch;
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class Eventhandlers;
		class ViewOptics;
		class ViewPilot;
		class pilotCamera;
		class RotorLibHelicopterProperties;
	};
	class PlaneWreck;
	class HelicopterWreck;
	class AH64_base_EP1: Helicopter_Base_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_air_gunship_s"};
				speechPlural[] = {"veh_air_gunship_p"};
			};
		};
		accuracy = 0.5;
		cost = 10000000;
		armor = 150;
		_generalMacro = "AH64_base_EP1";
		driveOnComponent[] = {"Wheels"};
		gearDownTime = 0.1;
		gearUpTime = 0.1;
		class MFD
		{
			class Kimi_HUD_1
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15,1,0.15,1};
				enableParallax = 0;
				class Bones
				{
					class PlaneOrientation
					{
						type = "fixed";
						pos[] = {0.5,0.5};
					};
					class GunnerAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.5,"0.9 - 0.04 + 0.02934"};
						pos10[] = {"0.5 + 0.0167","0.9 - 0.04 + 0.02934 + 0.0084"};
					};
					class Target
					{
						source = "target";
						type = "vector";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class Velocity
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.5};
						pos10[] = {0.65,0.65};
					};
					class Velocity_slip
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.845};
						pos10[] = {0.53,0.845};
					};
					class VspeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -20;
						max = 20;
						minPos[] = {0.93,0.2};
						maxPos[] = {0.93,0.8};
					};
					class RadarAltitudeBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 3.28084;
						min = 0;
						max = 200;
						minPos[] = {0.965,0.2};
						maxPos[] = {0.965,0.8};
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.5,0.5};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.25,0.25};
					};
					class WeaponAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.5,0.5};
						pos10[] = {0.75,0.75};
					};
					class Level0
					{
						type = "horizon";
						pos0[] = {0.5,0.5};
						pos10[] = {0.78,0.78};
						angle = 0;
					};
					class LevelP5: Level0
					{
						angle = 5;
					};
					class LevelM5: Level0
					{
						angle = -5;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP15: Level0
					{
						angle = 15;
					};
					class LevelM15: Level0
					{
						angle = -15;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP25: Level0
					{
						angle = 25;
					};
					class LevelM25: Level0
					{
						angle = -25;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP35: Level0
					{
						angle = 35;
					};
					class LevelM35: Level0
					{
						angle = -35;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
					};
					class LevelP45: Level0
					{
						angle = 45;
					};
					class LevelM45: Level0
					{
						angle = -45;
					};
					class LevelP50: Level0
					{
						angle = 50;
					};
					class LevelM50: Level0
					{
						angle = -50;
					};
				};
				class Draw
				{
					color[] = {0.18,1,0.18};
					alpha = 1;
					condition = "on";
					class Horizon_Transition
					{
						clipTL[] = {0.15,0.15};
						clipBR[] = {0.85,0.85};
						class Dimmed
						{
							class Level0
							{
								type = "line";
								points[] = {{ "Level0",{ -0.42,0 },1 },{ "Level0",{ -0.38,0 },1 },{  },{ "Level0",{ -0.37,0 },1 },{ "Level0",{ -0.33,0 },1 },{  },{ "Level0",{ -0.32,0 },1 },{ "Level0",{ -0.28,0 },1 },{  },{ "Level0",{ -0.27,0 },1 },{ "Level0",{ -0.23,0 },1 },{  },{ "Level0",{ -0.22,0 },1 },{ "Level0",{ -0.18,0 },1 },{  },{ "Level0",{ -0.17,0 },1 },{ "Level0",{ -0.13,0 },1 },{  },{ "Level0",{ -0.12,0 },1 },{ "Level0",{ -0.08,0 },1 },{  },{ "Level0",{ 0.42,0 },1 },{ "Level0",{ 0.38,0 },1 },{  },{ "Level0",{ 0.37,0 },1 },{ "Level0",{ 0.33,0 },1 },{  },{ "Level0",{ 0.32,0 },1 },{ "Level0",{ 0.28,0 },1 },{  },{ "Level0",{ 0.27,0 },1 },{ "Level0",{ 0.23,0 },1 },{  },{ "Level0",{ 0.22,0 },1 },{ "Level0",{ 0.18,0 },1 },{  },{ "Level0",{ 0.17,0 },1 },{ "Level0",{ 0.13,0 },1 },{  },{ "Level0",{ 0.12,0 },1 },{ "Level0",{ 0.08,0 },1 }};
							};
						};
					};
					class Horizon_Cruise_1
					{
						clipTL[] = {0.15,0.15};
						clipBR[] = {0.85,0.85};
						condition = "ils";
						class Dimmed
						{
							class Level0
							{
								type = "line";
								points[] = {{ "Level0",{ -0.42,0 },1 },{ "Level0",{ -0.08,0 },1 },{  },{ "Level0",{ 0.42,0 },1 },{ "Level0",{ 0.08,0 },1 },{  }};
							};
							class LevelM10: Level0
							{
								type = "line";
								width = 3;
								points[] = {{ "LevelM10",{ -0.2,-0.03 },1 },{ "LevelM10",{ -0.2,0 },1 },{ "LevelM10",{ -0.15,0 },1 },{  },{ "LevelM10",{ -0.1,0 },1 },{ "LevelM10",{ -0.05,0 },1 },{  },{ "LevelM10",{ 0.05,0 },1 },{ "LevelM10",{ 0.1,0 },1 },{  },{ "LevelM10",{ 0.15,0 },1 },{ "LevelM10",{ 0.2,0 },1 },{ "LevelM10",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_10
							{
								type = "text";
								source = "static";
								text = -10;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM10",{ -0.22,-0.085 },1};
								right[] = {"LevelM10",{ -0.17,-0.085 },1};
								down[] = {"LevelM10",{ -0.22,-0.035 },1};
							};
							class VALM_2_10: VALM_1_10
							{
								align = "right";
								pos[] = {"LevelM10",{ 0.22,-0.085 },1};
								right[] = {"LevelM10",{ 0.27,-0.085 },1};
								down[] = {"LevelM10",{ 0.22,-0.035 },1};
							};
							class LevelP10: Level0
							{
								type = "line";
								width = 3;
								points[] = {{ "LevelP10",{ -0.2,0.03 },1 },{ "LevelP10",{ -0.2,0 },1 },{ "LevelP10",{ -0.05,0 },1 },{  },{ "LevelP10",{ 0.05,0 },1 },{ "LevelP10",{ 0.2,0 },1 },{ "LevelP10",{ 0.2,0.03 },1 }};
							};
							class VALP_1_10
							{
								type = "text";
								source = "static";
								text = "10";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP10",{ -0.22,0.035 },1};
								right[] = {"LevelP10",{ -0.17,0.035 },1};
								down[] = {"LevelP10",{ -0.22,0.085 },1};
							};
							class VALP_2_10: VALP_1_10
							{
								align = "right";
								pos[] = {"LevelP10",{ 0.22,0.035 },1};
								right[] = {"LevelP10",{ 0.27,0.035 },1};
								down[] = {"LevelP10",{ 0.22,0.085 },1};
							};
							class LevelM20: Level0
							{
								type = "line";
								width = 3;
								points[] = {{ "LevelM20",{ -0.2,-0.03 },1 },{ "LevelM20",{ -0.2,0 },1 },{ "LevelM20",{ -0.15,0 },1 },{  },{ "LevelM20",{ -0.1,0 },1 },{ "LevelM20",{ -0.05,0 },1 },{  },{ "LevelM20",{ 0.05,0 },1 },{ "LevelM20",{ 0.1,0 },1 },{  },{ "LevelM20",{ 0.15,0 },1 },{ "LevelM20",{ 0.2,0 },1 },{ "LevelM20",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_20
							{
								type = "text";
								source = "static";
								text = -20;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM20",{ -0.22,-0.085 },1};
								right[] = {"LevelM20",{ -0.17,-0.085 },1};
								down[] = {"LevelM20",{ -0.22,-0.035 },1};
							};
							class VALM_2_20: VALM_1_20
							{
								align = "right";
								pos[] = {"LevelM20",{ 0.22,-0.085 },1};
								right[] = {"LevelM20",{ 0.27,-0.085 },1};
								down[] = {"LevelM20",{ 0.22,-0.035 },1};
							};
							class LevelP20: Level0
							{
								type = "line";
								width = 3;
								points[] = {{ "LevelP20",{ -0.2,0.03 },1 },{ "LevelP20",{ -0.2,0 },1 },{ "LevelP20",{ -0.05,0 },1 },{  },{ "LevelP20",{ 0.05,0 },1 },{ "LevelP20",{ 0.2,0 },1 },{ "LevelP20",{ 0.2,0.03 },1 }};
							};
							class VALP_1_20
							{
								type = "text";
								source = "static";
								text = "20";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP20",{ -0.22,0.035 },1};
								right[] = {"LevelP20",{ -0.17,0.035 },1};
								down[] = {"LevelP20",{ -0.22,0.085 },1};
							};
							class VALP_2_20: VALP_1_20
							{
								align = "right";
								pos[] = {"LevelP20",{ 0.22,0.035 },1};
								right[] = {"LevelP20",{ 0.27,0.035 },1};
								down[] = {"LevelP20",{ 0.22,0.085 },1};
							};
							class LevelM30: Level0
							{
								type = "line";
								width = 3;
								points[] = {{ "LevelM30",{ -0.2,-0.03 },1 },{ "LevelM30",{ -0.2,0 },1 },{ "LevelM30",{ -0.15,0 },1 },{  },{ "LevelM30",{ -0.1,0 },1 },{ "LevelM30",{ -0.05,0 },1 },{  },{ "LevelM30",{ 0.05,0 },1 },{ "LevelM30",{ 0.1,0 },1 },{  },{ "LevelM30",{ 0.15,0 },1 },{ "LevelM30",{ 0.2,0 },1 },{ "LevelM30",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_30
							{
								type = "text";
								source = "static";
								text = -30;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM30",{ -0.22,-0.085 },1};
								right[] = {"LevelM30",{ -0.17,-0.085 },1};
								down[] = {"LevelM30",{ -0.22,-0.035 },1};
							};
							class VALM_2_30: VALM_1_30
							{
								align = "right";
								pos[] = {"LevelM30",{ 0.22,-0.085 },1};
								right[] = {"LevelM30",{ 0.27,-0.085 },1};
								down[] = {"LevelM30",{ 0.22,-0.035 },1};
							};
							class LevelP30: Level0
							{
								type = "line";
								width = 3;
								points[] = {{ "LevelP30",{ -0.2,0.03 },1 },{ "LevelP30",{ -0.2,0 },1 },{ "LevelP30",{ -0.05,0 },1 },{  },{ "LevelP30",{ 0.05,0 },1 },{ "LevelP30",{ 0.2,0 },1 },{ "LevelP30",{ 0.2,0.03 },1 }};
							};
							class VALP_1_30
							{
								type = "text";
								source = "static";
								text = "30";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP30",{ -0.22,0.035 },1};
								right[] = {"LevelP30",{ -0.17,0.035 },1};
								down[] = {"LevelP30",{ -0.22,0.085 },1};
							};
							class VALP_2_30: VALP_1_30
							{
								align = "right";
								pos[] = {"LevelP30",{ 0.22,0.035 },1};
								right[] = {"LevelP30",{ 0.27,0.035 },1};
								down[] = {"LevelP30",{ 0.22,0.085 },1};
							};
							class LevelM40: Level0
							{
								type = "line";
								width = 3;
								points[] = {{ "LevelM40",{ -0.2,-0.03 },1 },{ "LevelM40",{ -0.2,0 },1 },{ "LevelM40",{ -0.15,0 },1 },{  },{ "LevelM40",{ -0.1,0 },1 },{ "LevelM40",{ -0.05,0 },1 },{  },{ "LevelM40",{ 0.05,0 },1 },{ "LevelM40",{ 0.1,0 },1 },{  },{ "LevelM40",{ 0.15,0 },1 },{ "LevelM40",{ 0.2,0 },1 },{ "LevelM40",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_40
							{
								type = "text";
								source = "static";
								text = -40;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM40",{ -0.22,-0.085 },1};
								right[] = {"LevelM40",{ -0.17,-0.085 },1};
								down[] = {"LevelM40",{ -0.22,-0.035 },1};
							};
							class VALM_2_40: VALM_1_40
							{
								align = "right";
								pos[] = {"LevelM40",{ 0.22,-0.085 },1};
								right[] = {"LevelM40",{ 0.27,-0.085 },1};
								down[] = {"LevelM40",{ 0.22,-0.035 },1};
							};
							class LevelP40: Level0
							{
								type = "line";
								width = 3;
								points[] = {{ "LevelP40",{ -0.2,0.03 },1 },{ "LevelP40",{ -0.2,0 },1 },{ "LevelP40",{ -0.05,0 },1 },{  },{ "LevelP40",{ 0.05,0 },1 },{ "LevelP40",{ 0.2,0 },1 },{ "LevelP40",{ 0.2,0.03 },1 }};
							};
							class VALP_1_40
							{
								type = "text";
								source = "static";
								text = "40";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP40",{ -0.22,0.035 },1};
								right[] = {"LevelP40",{ -0.17,0.035 },1};
								down[] = {"LevelP40",{ -0.22,0.085 },1};
							};
							class VALP_2_40: VALP_1_40
							{
								align = "right";
								pos[] = {"LevelP40",{ 0.22,0.035 },1};
								right[] = {"LevelP40",{ 0.27,0.035 },1};
								down[] = {"LevelP40",{ 0.22,0.085 },1};
							};
							class LevelM50: Level0
							{
								type = "line";
								width = 3;
								points[] = {{ "LevelM50",{ -0.2,-0.03 },1 },{ "LevelM50",{ -0.2,0 },1 },{ "LevelM50",{ -0.15,0 },1 },{  },{ "LevelM50",{ -0.1,0 },1 },{ "LevelM50",{ -0.05,0 },1 },{  },{ "LevelM50",{ 0.05,0 },1 },{ "LevelM50",{ 0.1,0 },1 },{  },{ "LevelM50",{ 0.15,0 },1 },{ "LevelM50",{ 0.2,0 },1 },{ "LevelM50",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_50
							{
								type = "text";
								source = "static";
								text = -50;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM50",{ -0.22,-0.085 },1};
								right[] = {"LevelM50",{ -0.17,-0.085 },1};
								down[] = {"LevelM50",{ -0.22,-0.035 },1};
							};
							class VALM_2_50: VALM_1_50
							{
								align = "right";
								pos[] = {"LevelM50",{ 0.22,-0.085 },1};
								right[] = {"LevelM50",{ 0.27,-0.085 },1};
								down[] = {"LevelM50",{ 0.22,-0.035 },1};
							};
							class LevelP50: Level0
							{
								type = "line";
								width = 3;
								points[] = {{ "LevelP50",{ -0.2,0.03 },1 },{ "LevelP50",{ -0.2,0 },1 },{ "LevelP50",{ -0.05,0 },1 },{  },{ "LevelP50",{ 0.05,0 },1 },{ "LevelP50",{ 0.2,0 },1 },{ "LevelP50",{ 0.2,0.03 },1 }};
							};
							class VALP_1_50
							{
								type = "text";
								source = "static";
								text = "50";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP50",{ -0.22,0.035 },1};
								right[] = {"LevelP50",{ -0.17,0.035 },1};
								down[] = {"LevelP50",{ -0.22,0.085 },1};
							};
							class VALP_2_50: VALP_1_50
							{
								align = "right";
								pos[] = {"LevelP50",{ 0.22,0.035 },1};
								right[] = {"LevelP50",{ 0.27,0.035 },1};
								down[] = {"LevelP50",{ 0.22,0.085 },1};
							};
						};
					};
					class HorizonBankRot
					{
						type = "line";
						width = 3;
						points[] = {{ "HorizonBankRot",{ 0,0.25 },1 },{ "HorizonBankRot",{ -0.01,0.23 },1 },{ "HorizonBankRot",{ 0.01,0.23 },1 },{ "HorizonBankRot",{ 0,0.25 },1 }};
					};
					class Static_HAD_BOX
					{
						clipTL[] = {0,1};
						clipBR[] = {1,0};
						type = "line";
						width = 5;
						points[] = {{ { "0.5-0.1","0.9-0.04" },1 },{ { "0.5-0.1","0.9+0.04" },1 },{ { "0.5+0.1","0.9+0.04" },1 },{ { "0.5+0.1","0.9-0.04" },1 },{ { "0.5-0.1","0.9-0.04" },1 },{  },{ { "0.5-0.1","0.9-0.04+0.02934" },1 },{ { "0.5-0.092","0.9-0.04+0.02934" },1 },{  },{ { "0.5+0.1","0.9-0.04+0.02934" },1 },{ { "0.5+0.092","0.9-0.04+0.02934" },1 },{  },{ { 0.5,"0.9-0.04" },1 },{ { 0.5,"0.9-0.032" },1 },{  },{ { 0.5,"0.9+0.04" },1 },{ { 0.5,"0.9+0.032" },1 },{  }};
					};
					class Gunner_HAD
					{
						type = "line";
						width = 6;
						points[] = {{ "GunnerAim",{ -0.015,-0.008 },1 },{ "GunnerAim",{ -0.015,0.008 },1 },{ "GunnerAim",{ 0.015,0.008 },1 },{ "GunnerAim",{ 0.015,-0.008 },1 },{ "GunnerAim",{ -0.015,-0.008 },1 }};
					};
					class Slip_ball_group
					{
						class Slip_bars
						{
							type = "line";
							width = 4;
							points[] = {{ { "0.5-0.018","0.9-0.04" },1 },{ { "0.5-0.018","0.9-0.075" },1 },{  },{ { "0.5+0.018","0.9-0.04" },1 },{ { "0.5+0.018","0.9-0.075" },1 }};
						};
						class Slip_ball
						{
							type = "line";
							width = 6;
							points[] = {{ "Velocity_slip",1,{ "0 * 0.75","-0.02 * 0.75" },1 },{ "Velocity_slip",1,{ "0.0099999998 * 0.75","-0.01732 * 0.75" },1 },{ "Velocity_slip",1,{ "0.01732 * 0.75","-0.0099999998 * 0.75" },1 },{ "Velocity_slip",1,{ "0.02 * 0.75","0 * 0.75" },1 },{ "Velocity_slip",1,{ "0.01732 * 0.75","0.0099999998 * 0.75" },1 },{ "Velocity_slip",1,{ "0.0099999998 * 0.75","0.01732 * 0.75" },1 },{ "Velocity_slip",1,{ "0 * 0.75","0.02 * 0.75" },1 },{ "Velocity_slip",1,{ "-0.0099999998 * 0.75","0.01732 * 0.75" },1 },{ "Velocity_slip",1,{ "-0.01732 * 0.75","0.0099999998 * 0.75" },1 },{ "Velocity_slip",1,{ "-0.02 * 0.75","0 * 0.75" },1 },{ "Velocity_slip",1,{ "-0.01732 * 0.75","-0.0099999998 * 0.75" },1 },{ "Velocity_slip",1,{ "-0.0099999998 * 0.75","-0.01732 * 0.75" },1 },{ "Velocity_slip",1,{ "0 * 0.75","-0.02 * 0.75" },1 },{  },{ "Velocity_slip",1,{ "0 * 0.6","-0.02 * 0.6" },1 },{ "Velocity_slip",1,{ "0.0099999998 * 0.6","-0.01732 * 0.6" },1 },{ "Velocity_slip",1,{ "0.01732 * 0.6","-0.0099999998 * 0.6" },1 },{ "Velocity_slip",1,{ "0.02 * 0.6","0 * 0.6" },1 },{ "Velocity_slip",1,{ "0.01732 * 0.6","0.0099999998 * 0.6" },1 },{ "Velocity_slip",1,{ "0.0099999998 * 0.6","0.01732 * 0.6" },1 },{ "Velocity_slip",1,{ "0 * 0.6","0.02 * 0.6" },1 },{ "Velocity_slip",1,{ "-0.0099999998 * 0.6","0.01732 * 0.6" },1 },{ "Velocity_slip",1,{ "-0.01732 * 0.6","0.0099999998 * 0.6" },1 },{ "Velocity_slip",1,{ "-0.02 * 0.6","0 * 0.6" },1 },{ "Velocity_slip",1,{ "-0.01732 * 0.6","-0.0099999998 * 0.6" },1 },{ "Velocity_slip",1,{ "-0.0099999998 * 0.6","-0.01732 * 0.6" },1 },{ "Velocity_slip",1,{ "0 * 0.6","-0.02 * 0.6" },1 },{  },{ "Velocity_slip",1,{ "0 * 0.5","-0.02 * 0.5" },1 },{ "Velocity_slip",1,{ "0.0099999998 * 0.5","-0.01732 * 0.5" },1 },{ "Velocity_slip",1,{ "0.01732 * 0.5","-0.0099999998 * 0.5" },1 },{ "Velocity_slip",1,{ "0.02 * 0.5","0 * 0.5" },1 },{ "Velocity_slip",1,{ "0.01732 * 0.5","0.0099999998 * 0.5" },1 },{ "Velocity_slip",1,{ "0.0099999998 * 0.5","0.01732 * 0.5" },1 },{ "Velocity_slip",1,{ "0 * 0.5","0.02 * 0.5" },1 },{ "Velocity_slip",1,{ "-0.0099999998 * 0.5","0.01732 * 0.5" },1 },{ "Velocity_slip",1,{ "-0.01732 * 0.5","0.0099999998 * 0.5" },1 },{ "Velocity_slip",1,{ "-0.02 * 0.5","0 * 0.5" },1 },{ "Velocity_slip",1,{ "-0.01732 * 0.5","-0.0099999998 * 0.5" },1 },{ "Velocity_slip",1,{ "-0.0099999998 * 0.5","-0.01732 * 0.5" },1 },{ "Velocity_slip",1,{ "0 * 0.5","-0.02 * 0.5" },1 },{  },{ "Velocity_slip",1,{ "0 * 0.4","-0.02 * 0.4" },1 },{ "Velocity_slip",1,{ "0.0099999998 * 0.4","-0.01732 * 0.4" },1 },{ "Velocity_slip",1,{ "0.01732 * 0.4","-0.0099999998 * 0.4" },1 },{ "Velocity_slip",1,{ "0.02 * 0.4","0 * 0.4" },1 },{ "Velocity_slip",1,{ "0.01732 * 0.4","0.0099999998 * 0.4" },1 },{ "Velocity_slip",1,{ "0.0099999998 * 0.4","0.01732 * 0.4" },1 },{ "Velocity_slip",1,{ "0 * 0.4","0.02 * 0.4" },1 },{ "Velocity_slip",1,{ "-0.0099999998 * 0.4","0.01732 * 0.4" },1 },{ "Velocity_slip",1,{ "-0.01732 * 0.4","0.0099999998 * 0.4" },1 },{ "Velocity_slip",1,{ "-0.02 * 0.4","0 * 0.4" },1 },{ "Velocity_slip",1,{ "-0.01732 * 0.4","-0.0099999998 * 0.4" },1 },{ "Velocity_slip",1,{ "-0.0099999998 * 0.4","-0.01732 * 0.4" },1 },{ "Velocity_slip",1,{ "0 * 0.4","-0.02 * 0.4" },1 },{  },{ "Velocity_slip",1,{ "0 * 0.30","-0.02 * 0.30" },1 },{ "Velocity_slip",1,{ "0.0099999998 * 0.30","-0.01732 * 0.30" },1 },{ "Velocity_slip",1,{ "0.01732 * 0.30","-0.0099999998 * 0.30" },1 },{ "Velocity_slip",1,{ "0.02 * 0.30","0 * 0.30" },1 },{ "Velocity_slip",1,{ "0.01732 * 0.30","0.0099999998 * 0.30" },1 },{ "Velocity_slip",1,{ "0.0099999998 * 0.30","0.01732 * 0.30" },1 },{ "Velocity_slip",1,{ "0 * 0.30","0.02 * 0.30" },1 },{ "Velocity_slip",1,{ "-0.0099999998 * 0.30","0.01732 * 0.30" },1 },{ "Velocity_slip",1,{ "-0.01732 * 0.30","0.0099999998 * 0.30" },1 },{ "Velocity_slip",1,{ "-0.02 * 0.30","0 * 0.30" },1 },{ "Velocity_slip",1,{ "-0.01732 * 0.30","-0.0099999998 * 0.30" },1 },{ "Velocity_slip",1,{ "-0.0099999998 * 0.30","-0.01732 * 0.30" },1 },{ "Velocity_slip",1,{ "0 * 0.30","-0.02 * 0.30" },1 },{  },{ "Velocity_slip",1,{ "0 * 0.20","-0.02 * 0.20" },1 },{ "Velocity_slip",1,{ "0.0099999998 * 0.20","-0.01732 * 0.20" },1 },{ "Velocity_slip",1,{ "0.01732 * 0.20","-0.0099999998 * 0.20" },1 },{ "Velocity_slip",1,{ "0.02 * 0.20","0 * 0.20" },1 },{ "Velocity_slip",1,{ "0.01732 * 0.20","0.0099999998 * 0.20" },1 },{ "Velocity_slip",1,{ "0.0099999998 * 0.20","0.01732 * 0.20" },1 },{ "Velocity_slip",1,{ "0 * 0.20","0.02 * 0.20" },1 },{ "Velocity_slip",1,{ "-0.0099999998 * 0.20","0.01732 * 0.20" },1 },{ "Velocity_slip",1,{ "-0.01732 * 0.20","0.0099999998 * 0.20" },1 },{ "Velocity_slip",1,{ "-0.02 * 0.20","0 * 0.20" },1 },{ "Velocity_slip",1,{ "-0.01732 * 0.20","-0.0099999998 * 0.20" },1 },{ "Velocity_slip",1,{ "-0.0099999998 * 0.20","-0.01732 * 0.20" },1 },{ "Velocity_slip",1,{ "0 * 0.20","-0.02 * 0.20" },1 },{  },{ "Velocity_slip",1,{ "0 * 0.1","-0.02 * 0.1" },1 },{ "Velocity_slip",1,{ "0.0099999998 * 0.1","-0.01732 * 0.1" },1 },{ "Velocity_slip",1,{ "0.01732 * 0.1","-0.0099999998 * 0.1" },1 },{ "Velocity_slip",1,{ "0.02 * 0.1","0 * 0.1" },1 },{ "Velocity_slip",1,{ "0.01732 * 0.1","0.0099999998 * 0.1" },1 },{ "Velocity_slip",1,{ "0.0099999998 * 0.1","0.01732 * 0.1" },1 },{ "Velocity_slip",1,{ "0 * 0.1","0.02 * 0.1" },1 },{ "Velocity_slip",1,{ "-0.0099999998 * 0.1","0.01732 * 0.1" },1 },{ "Velocity_slip",1,{ "-0.01732 * 0.1","0.0099999998 * 0.1" },1 },{ "Velocity_slip",1,{ "-0.02 * 0.1","0 * 0.1" },1 },{ "Velocity_slip",1,{ "-0.01732 * 0.1","-0.0099999998 * 0.1" },1 },{ "Velocity_slip",1,{ "-0.0099999998 * 0.1","-0.01732 * 0.1" },1 },{ "Velocity_slip",1,{ "0 * 0.1","-0.02 * 0.1" },1 }};
						};
					};
					class Centerline
					{
						type = "line";
						width = 5;
						points[] = {{ { 0.5,0.48 },1 },{ { 0.5,0.45 },1 },{  },{ { 0.5,0.52 },1 },{ { 0.5,0.55 },1 },{  },{ { 0.48,0.5 },1 },{ { 0.45,0.5 },1 },{  },{ { 0.52,0.5 },1 },{ { 0.55,0.5 },1 },{  }};
					};
					class WeaponName
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{ 0.61,0.86 },1};
						right[] = {{ 0.65,0.86 },1};
						down[] = {{ 0.61,0.9 },1};
					};
					class AmmoCount
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{ 0.61,0.89 },1};
						right[] = {{ 0.65,0.89 },1};
						down[] = {{ 0.61,0.93 },1};
					};
					class LightsGroup
					{
						type = "group";
						condition = "lights";
						class LightsText
						{
							type = "text";
							source = "static";
							text = "LIGHTS";
							align = "right";
							scale = 1;
							pos[] = {{ 0.03,"0.53 + 0.055" },1};
							right[] = {{ 0.07,"0.53 + 0.055" },1};
							down[] = {{ 0.03,"0.53 + 0.095" },1};
						};
					};
					class CollisionLightsGroup
					{
						type = "group";
						condition = "collisionlights";
						class CollisionLightsText
						{
							type = "text";
							source = "static";
							text = "A-COL";
							align = "right";
							scale = 1;
							pos[] = {{ 0.03,"0.53 + 0.105" },1};
							right[] = {{ 0.07,"0.53 + 0.105" },1};
							down[] = {{ 0.03,"0.53 + 0.145" },1};
						};
					};
					class ATMissileTOFGroup
					{
						condition = "ATmissile";
						type = "group";
						class TOFtext
						{
							type = "text";
							align = "right";
							source = "static";
							text = "TOF=";
							scale = 1;
							pos[] = {{ 0.61,0.92 },1};
							right[] = {{ 0.65,0.92 },1};
							down[] = {{ 0.61,0.96 },1};
						};
						class TOFnumber
						{
							type = "text";
							source = "targetDist";
							sourcescale = 0.0025;
							align = "right";
							scale = 1;
							pos[] = {{ 0.69,0.92 },1};
							right[] = {{ 0.73,0.92 },1};
							down[] = {{ 0.69,0.96 },1};
						};
					};
					class LaserTOFGroup
					{
						condition = "Bomb";
						type = "group";
						class TOFtext
						{
							type = "text";
							align = "right";
							source = "static";
							text = "TOF=";
							scale = 1;
							pos[] = {{ 0.61,0.92 },1};
							right[] = {{ 0.65,0.92 },1};
							down[] = {{ 0.61,0.96 },1};
						};
						class TOFnumber
						{
							type = "text";
							source = "targetDist";
							sourcescale = 0.0025;
							align = "right";
							scale = 1;
							pos[] = {{ 0.69,0.92 },1};
							right[] = {{ 0.73,0.92 },1};
							down[] = {{ 0.69,0.96 },1};
						};
					};
					class RocketTOFGroup
					{
						condition = "Rocket";
						type = "group";
						class TOFtext
						{
							type = "text";
							align = "right";
							source = "static";
							text = "TOF=";
							scale = 1;
							pos[] = {{ 0.61,0.92 },1};
							right[] = {{ 0.65,0.92 },1};
							down[] = {{ 0.61,0.96 },1};
						};
						class TOFnumber
						{
							type = "text";
							source = "targetDist";
							sourcescale = 0.0025;
							align = "right";
							scale = 1;
							pos[] = {{ 0.69,0.92 },1};
							right[] = {{ 0.73,0.92 },1};
							down[] = {{ 0.69,0.96 },1};
						};
					};
					class RangeNumber
					{
						type = "text";
						source = "targetDist";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{ 0.39,0.89 },1};
						right[] = {{ 0.43,0.89 },1};
						down[] = {{ 0.39,0.93 },1};
					};
					class RangeText
					{
						type = "text";
						source = "static";
						text = "RNG";
						align = "left";
						scale = 1;
						pos[] = {{ 0.39,0.86 },1};
						right[] = {{ 0.43,0.86 },1};
						down[] = {{ 0.39,0.9 },1};
					};
					class SpeedNumber
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "speed";
						sourceScale = 1.94384;
						pos[] = {{ 0.03,0.475 },1};
						right[] = {{ 0.08,0.475 },1};
						down[] = {{ 0.03,0.525 },1};
					};
					class TorqueNumber
					{
						condition = "simulRTD";
						class Torque_number
						{
							type = "text";
							align = "left";
							scale = 1;
							source = "rtdRotorTorque";
							sourceScale = 290;
							pos[] = {{ 0.065,0.175 },1};
							right[] = {{ 0.115,0.175 },1};
							down[] = {{ 0.065,0.225 },1};
						};
						class Torquetext
						{
							type = "text";
							source = "static";
							text = "%";
							align = "right";
							scale = 1;
							pos[] = {{ 0.07,0.175 },1};
							right[] = {{ 0.12,0.175 },1};
							down[] = {{ 0.07,0.225 },1};
						};
					};
					class AltNumber: SpeedNumber
					{
						align = "right";
						source = "altitudeAGL";
						sourceScale = 3.28084;
						pos[] = {{ 0.83,0.475 },1};
						right[] = {{ 0.88,0.475 },1};
						down[] = {{ 0.83,0.525 },1};
					};
					class ASLNumber
					{
						type = "text";
						source = "altitudeASL";
						sourceScale = 3.28084;
						align = "right";
						scale = 1;
						pos[] = {{ 0.835,0.18 },1};
						right[] = {{ 0.875,0.18 },1};
						down[] = {{ 0.835,0.22 },1};
					};
					class VspeedScalePosta
					{
						type = "line";
						width = 5;
						points[] = {{ { 0.98,0.2 },1 },{ { 1,0.2 },1 },{  },{ { 0.93,0.2 },1 },{ { 0.95,0.2 },1 },{  },{ { 0.98,0.35 },1 },{ { 1,0.35 },1 },{  },{ { 0.93,0.35 },1 },{ { 0.95,0.35 },1 },{  },{ { 0.94,0.38 },1 },{ { 0.95,0.38 },1 },{  },{ { 0.94,0.41 },1 },{ { 0.95,0.41 },1 },{  },{ { 0.94,0.44 },1 },{ { 0.95,0.44 },1 },{  },{ { 0.94,0.47 },1 },{ { 0.95,0.47 },1 },{  },{ { 0.98,0.5 },1 },{ { 1,0.5 },1 },{  },{ { 0.93,0.5 },1 },{ { 0.95,0.5 },1 },{  },{ { 0.94,0.53 },1 },{ { 0.95,0.53 },1 },{  },{ { 0.94,0.56 },1 },{ { 0.95,0.56 },1 },{  },{ { 0.94,0.59 },1 },{ { 0.95,0.59 },1 },{  },{ { 0.94,0.62 },1 },{ { 0.95,0.62 },1 },{  },{ { 0.98,0.65 },1 },{ { 1,0.65 },1 },{  },{ { 0.93,0.65 },1 },{ { 0.95,0.65 },1 },{  },{ { 0.99,0.68 },1 },{ { 0.98,0.68 },1 },{  },{ { 0.99,0.71 },1 },{ { 0.98,0.71 },1 },{  },{ { 0.99,0.74 },1 },{ { 0.98,0.74 },1 },{  },{ { 0.99,0.77 },1 },{ { 0.98,0.77 },1 },{  },{ { 0.98,0.8 },1 },{ { 1,0.8 },1 },{  },{ { 0.93,0.8 },1 },{ { 0.95,0.8 },1 },{  }};
					};
					class RadarAltitudeBand
					{
						clipTL[] = {0,0.2};
						clipBR[] = {1,0.8};
						hideValue = 201;
						class radarbanda
						{
							type = "line";
							width = 17;
							points[] = {{ "RadarAltitudeBone",{ 0,0 },1 },{ "RadarAltitudeBone",{ 0,0.6 },1 }};
						};
					};
					class VspeedBand
					{
						type = "line";
						width = 3;
						points[] = {{ "VspeedBone",{ -0.01,0 },1 },{ "VspeedBone",{ -0.025,-0.015 },1 },{ "VspeedBone",{ -0.025,0.015 },1 },{ "VspeedBone",{ -0.01,0 },1 },{  }};
					};
					class HeadingNumber: SpeedNumber
					{
						source = "heading";
						sourceScale = 1;
						align = "center";
						pos[] = {{ 0.5,0.045 },1};
						right[] = {{ 0.56,0.045 },1};
						down[] = {{ 0.5,"0.045 + 0.06" },1};
					};
					class Center_box
					{
						type = "line";
						width = 1.5;
						points[] = {{ { 0.45,"0.02 + 0.085 - 0.06" },1 },{ { "0.45 + 0.10","0.02 + 0.085 - 0.06" },1 },{ { "0.45 + 0.10","0.02 + 0.085" },1 },{ { 0.45,"0.02 + 0.085" },1 },{ { 0.45,"0.02 + 0.085 - 0.06" },1 }};
					};
					class HeadingArrow
					{
						type = "line";
						width = 7;
						points[] = {{ { "0.5","0.128 + 0.03" },1 },{ { 0.5,0.128 },1 }};
					};
					class HeadingScale_LEFT
					{
						clipTL[] = {0,0};
						clipBR[] = {0.45,1};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 1;
							width = 5;
							top = 0.12;
							center = 0.5;
							bottom = 0.88;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 10;
							stepSize = "0.05";
							align = "center";
							scale = 1;
							pos[] = {0.12,"0.0 + 0.065"};
							right[] = {0.16,"0.0 + 0.065"};
							down[] = {0.12,"0.04 + 0.065"};
						};
					};
					class HeadingScale_RIGHT
					{
						clipTL[] = {0.55,0};
						clipBR[] = {1,1};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 1;
							width = 5;
							top = 0.12;
							center = 0.5;
							bottom = 0.88;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 10;
							stepSize = "0.05";
							align = "center";
							scale = 1;
							pos[] = {0.12,"0.0 + 0.065"};
							right[] = {0.16,"0.0 + 0.065"};
							down[] = {0.12,"0.04 + 0.065"};
						};
					};
					class HeadingScale_BOTTOM
					{
						clipTL[] = {0.45,"0.02 + 0.085"};
						clipBR[] = {"0.45 + 0.10",1};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 1;
							width = 5;
							top = 0.12;
							center = 0.5;
							bottom = 0.88;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 10;
							stepSize = "0.05";
							align = "center";
							scale = 1;
							pos[] = {0.12,"0.0 + 0.065"};
							right[] = {0.16,"0.0 + 0.065"};
							down[] = {0.12,"0.04 + 0.065"};
						};
					};
					class Fuel_Text
					{
						type = "text";
						source = "static";
						text = "Fuel";
						align = "right";
						scale = 1;
						pos[] = {{ 0.03,0.9 },1};
						right[] = {{ 0.07,0.9 },1};
						down[] = {{ 0.03,0.94 },1};
					};
					class Fuel_Number
					{
						type = "text";
						source = "fuel";
						sourceScale = 100;
						align = "right";
						scale = 1;
						pos[] = {{ 0.1,0.9 },1};
						right[] = {{ 0.14,0.9 },1};
						down[] = {{ 0.1,0.94 },1};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.04,0.04,0.1};
				helmetRight[] = {0.08,0,0};
				helmetDown[] = {0,-0.08,0};
			};
			class Kimi_HUD_2
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15,1,0.15,1};
				enableParallax = 0;
				class Bones
				{
					class PlaneOrientation
					{
						type = "fixed";
						pos[] = {0.5,0.5};
					};
					class Velocity
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.5};
						pos10[] = {0.75,0.75};
					};
					class ForwardVec1
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.25,0.25};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.253,0.253};
					};
					class WeaponAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.5,0.5};
						pos10[] = {0.753,0.753};
					};
					class WeaponAim1
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0,0};
						pos10[] = {0.253,0.23};
					};
					class Target
					{
						type = "vector";
						source = "target";
						pos0[] = {0.5,0.5};
						pos10[] = {0.753,0.753};
					};
					class RadarContact
					{
						type = "fixed";
						pos[] = {0,0};
					};
				};
				class Draw
				{
					color[] = {0.18,1,0.18};
					alpha = 1;
					condition = "on";
					class PlaneMovementCrosshair
					{
						type = "line";
						width = 7;
						points[] = {{ "ForwardVec1",1,"Velocity",1,{ 0,-0.02 },1 },{ "ForwardVec1",1,"Velocity",1,{ 0.01,-0.01732 },1 },{ "ForwardVec1",1,"Velocity",1,{ 0.01732,-0.01 },1 },{ "ForwardVec1",1,"Velocity",1,{ 0.02,0 },1 },{ "ForwardVec1",1,"Velocity",1,{ 0.01732,0.01 },1 },{ "ForwardVec1",1,"Velocity",1,{ 0.01,0.01732 },1 },{ "ForwardVec1",1,"Velocity",1,{ 0,0.02 },1 },{ "ForwardVec1",1,"Velocity",1,{ -0.01,0.01732 },1 },{ "ForwardVec1",1,"Velocity",1,{ -0.01732,0.01 },1 },{ "ForwardVec1",1,"Velocity",1,{ -0.02,0 },1 },{ "ForwardVec1",1,"Velocity",1,{ -0.01732,-0.01 },1 },{ "ForwardVec1",1,"Velocity",1,{ -0.01,-0.01732 },1 },{ "ForwardVec1",1,"Velocity",1,{ 0,-0.02 },1 },{  },{ "ForwardVec1",1,"Velocity",1,{ 0.04,0 },1 },{ "ForwardVec1",1,"Velocity",1,{ 0.02,0 },1 },{  },{ "ForwardVec1",1,"Velocity",1,{ -0.04,0 },1 },{ "ForwardVec1",1,"Velocity",1,{ -0.02,0 },1 },{  },{ "ForwardVec1",1,"Velocity",1,{ 0,-0.04 },1 },{ "ForwardVec1",1,"Velocity",1,{ 0,-0.02 },1 }};
					};
					class GunCross
					{
						condition = "mgun";
						type = "group";
						class Circle
						{
							type = "line";
							width = 9;
							points[] = {{ "ForwardVec",1,"WeaponAim",1,{ 0,-0.05 },1 },{ "ForwardVec",1,"WeaponAim",1,{ 0,-0.015 },1 },{  },{ "ForwardVec",1,"WeaponAim",1,{ 0,0.015 },1 },{ "ForwardVec",1,"WeaponAim",1,{ 0,0.05 },1 },{  },{ "ForwardVec",1,"WeaponAim",1,{ -0.05,0 },1 },{ "ForwardVec",1,"WeaponAim",1,{ -0.015,0 },1 },{  },{ "ForwardVec",1,"WeaponAim",1,{ 0.015,0 },1 },{ "ForwardVec",1,"WeaponAim",1,{ 0.05,0 },1 },{  }};
						};
					};
					class Gunner_AIM
					{
						type = "group";
						class Circle
						{
							type = "line";
							width = 6;
							points[] = {{ "ForwardVec",1,"WeaponAim",1,{ 0,-0.015 },1 },{ "ForwardVec",1,"WeaponAim",1,{ 0,-0.03 },1 },{  },{ "ForwardVec",1,"WeaponAim",1,{ 0,-0.0325 },1 },{ "ForwardVec",1,"WeaponAim",1,{ 0,-0.0475 },1 },{  },{ "ForwardVec",1,"WeaponAim",1,{ 0,0.015 },1 },{ "ForwardVec",1,"WeaponAim",1,{ 0,0.03 },1 },{  },{ "ForwardVec",1,"WeaponAim",1,{ 0,0.0325 },1 },{ "ForwardVec",1,"WeaponAim",1,{ 0,0.0475 },1 },{  },{ "ForwardVec",1,"WeaponAim",1,{ -0.015,0 },1 },{ "ForwardVec",1,"WeaponAim",1,{ -0.03,0 },1 },{  },{ "ForwardVec",1,"WeaponAim",1,{ -0.0325,0 },1 },{ "ForwardVec",1,"WeaponAim",1,{ -0.0475,0 },1 },{  },{ "ForwardVec",1,"WeaponAim",1,{ 0.015,0 },1 },{ "ForwardVec",1,"WeaponAim",1,{ 0.03,0 },1 },{  },{ "ForwardVec",1,"WeaponAim",1,{ 0.0325,0 },1 },{ "ForwardVec",1,"WeaponAim",1,{ 0.0475,0 },1 }};
						};
					};
					class RocketCross
					{
						type = "group";
						class RocketSight
						{
							type = "line";
							width = 5.5;
							points[] = {{ "ForwardVec",1,"PlaneOrientation",1,{ 0.022,-0.03 },1 },{ "ForwardVec",1,"PlaneOrientation",1,{ -0.022,-0.03 },1 },{  },{ "ForwardVec",1,"PlaneOrientation",1,{ 0,-0.03 },1 },{ "ForwardVec",1,"PlaneOrientation",1,{ 0,-0.005 },1 },{  },{ "ForwardVec",1,"PlaneOrientation",1,{ 0,0.001 },1 },{ "ForwardVec",1,"PlaneOrientation",1,{ 0,-0.001 },1 },{  },{ "ForwardVec",1,"PlaneOrientation",1,{ 0.001,0 },1 },{ "ForwardVec",1,"PlaneOrientation",1,{ -0.001,0 },1 },{  },{ "ForwardVec",1,"PlaneOrientation",1,{ 0,0.005 },1 },{ "ForwardVec",1,"PlaneOrientation",1,{ 0,0.03 },1 },{  },{ "ForwardVec",1,"PlaneOrientation",1,{ 0.022,0.03 },1 },{ "ForwardVec",1,"PlaneOrientation",1,{ -0.022,0.03 },1 },{  }};
						};
					};
					class AT_Aim
					{
						condition = "ATmissile";
						type = "group";
						class Circle
						{
							type = "line";
							width = 2;
							points[] = {{ "ForwardVec",1,"WeaponAim",1,{ -0.15,-0.15 },1 },{ "ForwardVec",1,"WeaponAim",1,{ 0.15,-0.15 },1 },{ "ForwardVec",1,"WeaponAim",1,{ 0.15,0.15 },1 },{ "ForwardVec",1,"WeaponAim",1,{ -0.15,0.15 },1 },{ "ForwardVec",1,"WeaponAim",1,{ -0.15,-0.15 },1 }};
						};
					};
					class AA_aim
					{
						condition = "AAmissile";
						class Circle
						{
							type = "line";
							width = 2.5;
							points[] = {{ "ForwardVec",1,"WeaponAim",1,{ "0 / 4","-0.248559 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.0434 / 4","-0.244781 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.0855 / 4","-0.233571 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.125 / 4","-0.215252 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.1607 / 4","-0.190396 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.1915 / 4","-0.159774 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.2165 / 4","-0.12428 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.234925 / 4","-0.0850072 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.2462 / 4","-0.0431499 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.25 / 4","0 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.2462 / 4","0.0431499 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.234925 / 4","0.0850072 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.2165 / 4","0.12428 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.1915 / 4","0.159774 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.1607 / 4","0.190396 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.125 / 4","0.215252 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.0855 / 4","0.233571 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.0434 / 4","0.244781 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0 / 4","0.248559 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.0434 / 4","0.244781 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.0855 / 4","0.233571 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.125 / 4","0.215252 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.1607 / 4","0.190396 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.1915 / 4","0.159774 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.2165 / 4","0.12428 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.234925 / 4","0.0850072 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.2462 / 4","0.0431499 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.25 / 4","0 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.2462 / 4","-0.0431499 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.234925 / 4","-0.0850072 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.2165 / 4","-0.12428 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.1915 / 4","-0.159774 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.1607 / 4","-0.190396 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.125 / 4","-0.215252 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.0855 / 4","-0.233571 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.0434 / 4","-0.244781 / 4" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0 / 4","-0.248559 / 4" },1 },{  },{ "ForwardVec",1,"WeaponAim",1,{ "0 / 2","-0.248559 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.0434 / 2","-0.244781 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.0855 / 2","-0.233571 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.125 / 2","-0.215252 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.1607 / 2","-0.190396 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.1915 / 2","-0.159774 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.2165 / 2","-0.12428 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.234925 / 2","-0.0850072 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.2462 / 2","-0.0431499 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.25 / 2","0 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.2462 / 2","0.0431499 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.234925 / 2","0.0850072 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.2165 / 2","0.12428 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.1915 / 2","0.159774 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.1607 / 2","0.190396 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.125 / 2","0.215252 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.0855 / 2","0.233571 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0.0434 / 2","0.244781 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0 / 2","0.248559 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.0434 / 2","0.244781 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.0855 / 2","0.233571 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.125 / 2","0.215252 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.1607 / 2","0.190396 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.1915 / 2","0.159774 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.2165 / 2","0.12428 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.234925 / 2","0.0850072 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.2462 / 2","0.0431499 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.25 / 2","0 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.2462 / 2","-0.0431499 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.234925 / 2","-0.0850072 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.2165 / 2","-0.12428 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.1915 / 2","-0.159774 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.1607 / 2","-0.190396 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.125 / 2","-0.215252 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.0855 / 2","-0.233571 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "-0.0434 / 2","-0.244781 / 2" },1 },{ "ForwardVec",1,"WeaponAim",1,{ "0 / 2","-0.248559 / 2" },1 }};
						};
					};
					class TargetACQ
					{
						type = "line";
						width = 2;
						points[] = {{ "ForwardVec",1,"target",{ 0,-0.06 },1 },{ "ForwardVec",1,"target",{ 0,-0.055 },1 },{  },{ "ForwardVec",1,"target",{ 0,-0.05 },1 },{ "ForwardVec",1,"target",{ 0,-0.045 },1 },{  },{ "ForwardVec",1,"target",{ 0,-0.04 },1 },{ "ForwardVec",1,"target",{ 0,-0.035 },1 },{  },{ "ForwardVec",1,"target",{ 0,-0.03 },1 },{ "ForwardVec",1,"target",{ 0,-0.025 },1 },{  },{ "ForwardVec",1,"target",{ 0,-0.02 },1 },{ "ForwardVec",1,"target",{ 0,-0.015 },1 },{  },{ "ForwardVec",1,"target",{ 0,-0.01 },1 },{ "ForwardVec",1,"target",{ 0,-0.005 },1 },{  },{ "ForwardVec",1,"target",{ 0,0 },1 },{ "ForwardVec",1,"target",{ 0,0 },1 },{  },{ "ForwardVec",1,"target",{ 0,0.06 },1 },{ "ForwardVec",1,"target",{ 0,0.055 },1 },{  },{ "ForwardVec",1,"target",{ 0,0.05 },1 },{ "ForwardVec",1,"target",{ 0,0.045 },1 },{  },{ "ForwardVec",1,"target",{ 0,0.04 },1 },{ "ForwardVec",1,"target",{ 0,0.035 },1 },{  },{ "ForwardVec",1,"target",{ 0,0.03 },1 },{ "ForwardVec",1,"target",{ 0,0.025 },1 },{  },{ "ForwardVec",1,"target",{ 0,0.02 },1 },{ "ForwardVec",1,"target",{ 0,0.015 },1 },{  },{ "ForwardVec",1,"target",{ 0,0.01 },1 },{ "ForwardVec",1,"target",{ 0,0.005 },1 },{  },{ "ForwardVec",1,"target",{ -0.06,0 },1 },{ "ForwardVec",1,"target",{ -0.055,0 },1 },{  },{ "ForwardVec",1,"target",{ -0.05,0 },1 },{ "ForwardVec",1,"target",{ -0.045,0 },1 },{  },{ "ForwardVec",1,"target",{ -0.04,0 },1 },{ "ForwardVec",1,"target",{ -0.035,0 },1 },{  },{ "ForwardVec",1,"target",{ -0.03,0 },1 },{ "ForwardVec",1,"target",{ -0.025,0 },1 },{  },{ "ForwardVec",1,"target",{ -0.02,0 },1 },{ "ForwardVec",1,"target",{ -0.015,0 },1 },{  },{ "ForwardVec",1,"target",{ -0.01,0 },1 },{ "ForwardVec",1,"target",{ -0.005,0 },1 },{  },{ "ForwardVec",1,"target",{ 0.06,0 },1 },{ "ForwardVec",1,"target",{ 0.055,0 },1 },{  },{ "ForwardVec",1,"target",{ 0.05,0 },1 },{ "ForwardVec",1,"target",{ 0.045,0 },1 },{  },{ "ForwardVec",1,"target",{ 0.04,0 },1 },{ "ForwardVec",1,"target",{ 0.035,0 },1 },{  },{ "ForwardVec",1,"target",{ 0.03,0 },1 },{ "ForwardVec",1,"target",{ 0.025,0 },1 },{  },{ "ForwardVec",1,"target",{ 0.02,0 },1 },{ "ForwardVec",1,"target",{ 0.015,0 },1 },{  },{ "ForwardVec",1,"target",{ 0.01,0 },1 },{ "ForwardVec",1,"target",{ 0.005,0 },1 },{  }};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.035,0.035,0.1};
				helmetRight[] = {0.07,0,0};
				helmetDown[] = {0,-0.07,0};
			};
		};
		unitInfoType = "Rsc_LLW_AH64D_UI_01";
		unitInfoTypeRTD = "Rsc_LLW_AH64D_UI_01";
		viewCargoShadow = 1;
		liftForceCoef = 1;
		bodyFrictionCoef = 0.5;
		maxSpeed = 293;
		altFullForce = 3000;
		altNoForce = 5000;
		displayName = "AH-64";
		side = 1;
		driverCanEject = 0;
		driverCanSee = "2+4+8+32";
		gunnerCanSee = "2+4+8+32";
		gunnerHasFlares = 1;
		enableGPS = 1;
		IncomingMisslieDetectionSystem = 16;
		LockDetectionSystem = "8 + 4";
		incomingMissileDetectionSystem = 16;
		damageResistance = 0.00555;
		laserScanner = 1;
		MainRotorSpeed = -1;
		backRotorSpeed = 3;
		maxMainRotorDive = 7;
		minMainRotorDive = 7;
		neutralMainRotorDive = 0;
		neutralBackRotorDive = 1;
		fuelCapacity = 3600;
		fuelConsumptionRate = 1;
		driverRightHandAnimName = "stick";
		precisegetinout = 1;
		GetInAction = "pilot_Heli_Light_02_Enter";
		GetOutAction = "pilot_Heli_Light_02_Exit";
		weapons[] = {};
		magazines[] = {};
		availableForSupportTypes[] = {"CAS_Heli"};
		model = "\LLW_Apache\AH64_LLW.p3d";
		simulation = "helicopterrtd";
		mainBladeRadius = 5.9;
		mainBladeCenter = "rotor_center";
		tailBladeCenter = "rotor_02_center";
		tailBladeRadius = 1.4;
		washDownDiameter = "40.0f";
		washDownStrength = "1.0f";
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig = "A3\Air_F_Beta\Heli_Attack_01\RTD_Heli_Attack_01.xml";
			rtd_center = "rtd_center";
			defaultCollective = 0.675;
			autoHoverCorrection[] = {3.5,5.2,0};
			retreatBladeStallWarningSpeed = 72.778;
			maxTorque = 4500;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 100000;
			maxHorizontalStabilizerRightStress = 100000;
			maxVerticalStabilizerStress = 100000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 150000;
			maxTailRotorStress = 30000;
		};
		selectionHRotorStill = "velka vrtule staticka";
		selectionHRotorMove = "velka vrtule blur";
		selectionVRotorStill = "mala vrtule staticka";
		selectionVRotorMove = "mala vrtule blur";
		tf_RadioType_api = "tf_anarc210";
		tf_hasLRradio_api = 1;
		tf_isolatedAmount_api = 0.2;
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"LLW_Apache\Data\sounds\close",0.31622776,1};
		soundGetOut[] = {"LLW_Apache\Data\sounds\open",0.31622776,1,40};
		soundEngineOnInt[] = {"LLW_Apache\Data\sounds\AH64_start_int",0.1,1};
		soundEngineOnExt[] = {"LLW_Apache\Data\sounds\AH64_start_ext",0.56234133,1,800};
		soundEngineOffInt[] = {"LLW_Apache\Data\sounds\AH64_stop_int",0.1,1};
		soundEngineOffExt[] = {"LLW_Apache\Data\sounds\AH64_stop_ext",0.56234133,1,800};
		emptySound[] = {"",0,1};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",1,1,100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",1,1,100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",1,1,100};
		soundCrashes[] = {"soundGeneralCollision1",0.33,"soundGeneralCollision2",0.33,"soundGeneralCollision3",0.33};
		soundLandCrashes[] = {"emptySound",0};
		soundBuildingCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundArmorCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundWoodCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",1,1,100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",1,1,100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",1,1,100};
		soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
		soundWaterCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",1,1,100};
		soundWaterCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",1,1,100};
		soundWaterCrashes[] = {"soundWaterCollision1",0.5,"soundWaterCollision2",0.5};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",1,1};
		rotorDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_2",1,1};
		rotorDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_2",2.5118864,1,300};
		rotorDamage[] = {"rotorDamageInt","rotorDamageOut"};
		tailDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1,1};
		tailDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1,1,300};
		tailDamage[] = {"tailDamageInt","tailDamageOut"};
		landingSoundInt0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int1",1,1,100};
		landingSoundInt1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int2",1,1,100};
		landingSoundInt[] = {"landingSoundInt0",0.5,"landingSoundInt1",0.5};
		landingSoundOut0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",1.7782794,1,100};
		landingSoundOut1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",1.7782794,1,100};
		landingSoundOut[] = {"landingSoundOut0",0.5,"landingSoundOut1",0.5};
		slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",1,1};
		slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",1,1,80};
		slingCargoAttach[] = {"slingCargoAttach0","slingCargoAttach1"};
		slingCargoDetach0[] = {"A3\Sounds_F\dummysound",1,1};
		slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",1,1,80};
		slingCargoDetach[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",1,1};
		slingCargoDetachAir1[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",1,1,80};
		slingCargoDetachAir[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",1,1};
		slingCargoRopeBreak1[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",1,1,80};
		slingCargoRopeBreak[] = {"slingCargoDetach0","slingCargoDetach1"};
		gearUpExt[] = {"",1,1,1000};
		gearUpInt[] = {"",1,1,100};
		gearUp[] = {"gearUpInt","gearUpExt"};
		gearDownInt[] = {"",1,1,100};
		gearDownExt[] = {"","",1,1,1000};
		gearDown[] = {"gearDownInt","gearDownExt"};
		class Sounds
		{
			class EngineExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_ext_engine",2.2387211,1,600};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_ext_rotor_normal",1.4125376,1,1100};
				frequency = "rotorSpeed * (1 - rotorThrust/5)";
				volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class RotorSwist
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\swist",1,1,300};
				frequency = 1;
				volume = "camPos * (rotorThrust factor [0.7, 0.9])";
			};
			class EngineInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_int_engine",1,1};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_int_rotor",1.1220185,1};
				frequency = "rotorSpeed * (1 - rotorThrust/5)";
				volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.31622776,1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.2238721,1,20};
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.2238721,1,20};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1,1,100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
				frequency = 1;
				volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1,1,100};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",1,1,100};
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1,1,100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1,1,100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1,1,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1,1,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1,1,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1,1,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed",0.39810717,1,50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class GStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2b",0.35481337,1,50};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
		};
		class SoundsExt
		{
			class SoundEvents{};
			class Sounds
			{
				class EngineExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_ext_engine",2.2387211,1,600};
					frequency = "rotorSpeed";
					volume = "camPos*((rotorSpeed-0.72)*4)";
				};
				class RotorExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_ext_rotor_normal",1.4125376,1,1100};
					frequency = "rotorSpeed * (1 - rotorThrust/5)";
					volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class RotorSwist
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\swist",1,1,300};
					frequency = 1;
					volume = "camPos * (rotorThrust factor [0.7, 0.9])";
				};
				class EngineInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_int_engine",1,1};
					frequency = "rotorSpeed";
					volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
				};
				class RotorInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Attack_01\Heli_Attack_01_int_rotor",1.1220185,1};
					frequency = "rotorSpeed * (1 - rotorThrust/5)";
					volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class TransmissionDamageExt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1,1,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.31622776,1};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.2238721,1,20};
					frequency = 1;
					volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.2238721,1,20};
					frequency = 1;
					volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
					frequency = 1;
					volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[] = {"A3\Sounds_F\dummysound",1,1,100};
					frequency = 1;
					volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
					frequency = 1;
					volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[] = {"A3\Sounds_F\dummysound",1,1,100};
					frequency = 1;
					volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",1,1,100};
					frequency = 1;
					volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
					frequency = 1;
					volume = "camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1,1,100};
					frequency = 1;
					volume = "camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1,1,100};
					frequency = 1;
					volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1,1,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1,1,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1,1,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1,1,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed",0.39810717,1,50};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
				};
				class GStress
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2b",0.35481337,1,50};
					frequency = 1;
					volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
			};
		};
		mapSize = 15.5;
		driverAction = "pilot_Heli_Light_03";
		driverInAction = "pilot_Heli_Light_03";
		destrType = "DestructWreck";
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_2";
		selectionFireAnim = "zasleh";
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectHeliCom";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliCom";
			};
		};
		class MarkerLights
		{
			class WhiteStill
			{
				name = "bily pozicni";
				color[] = {1,1,1};
				ambient[] = {0.1,0.1,0.1};
				blinking = 1;
				intensity = 75;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class RedStill
			{
				name = "cerveny pozicni";
				color[] = {0.8,0,0};
				ambient[] = {0.08,0,0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class GreenStill
			{
				name = "zeleny pozicni";
				color[] = {0,0.8,0};
				ambient[] = {0,0.08,0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class RedBlinking
			{
				name = "bily pozicni blik";
				color[] = {0.9,0.15,0.1};
				ambient[] = {0.09,0.015,0.01};
				intensity = 75;
				blinking = 1;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = 0;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class WhiteBlinking
			{
				name = "cerveny pozicni blik";
				color[] = {0.9,0.15,0.1};
				intensity = 75;
				ambient[] = {0.09,0.015,0.01};
				blinking = 1;
				blinkingPattern[] = {0.2,1.3};
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
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
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
		class AnimationSources
		{
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = "HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
			class Gatling
			{
				source = "revolving";
				weapon = "LLW_M230_Weapon";
			};
			class HidePIPMFDPIAH
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class HidePIPMFDGUN
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			class Hide
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
		};
		class RenderTargets
		{
			class pilotmfd
			{
				renderTarget = "rendertarget3";
				class CameraView1
				{
					pointPosition = "gunnerview";
					pointDirection = "gunnerview1";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.02;
				};
			};
			class gunnermfd
			{
				renderTarget = "rendertarget4";
				class CameraView1
				{
					pointPosition = "gunnerview";
					pointDirection = "gunnerview1";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.02;
				};
			};
		};
		class UserActions
		{
			class Pimfdpip1ON
			{
				displayName = "<t color='#ffff00'>Turn On FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.6;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip12"" < 0.5 AND (player == (driver this) && (alive this)) ";
				statement = "this animate [""copip12"",1];";
				priority = 9;
			};
			class Pimfdpip1OFF
			{
				displayName = "<t color='#ffff00'>Turn Off FLIR MFD</t>";
				displayNameDefault = "";
				position = "";
				radius = 3.6;
				onlyForplayer = 1;
				condition = "this animationPhase ""copip12"" > 0.5 AND (player == (driver this) && (alive this))";
				statement = "this animate [""copip12"",0];";
				priority = 9;
			};
		};
		class HitPoints
		{
			class HitHull
			{
				armor = 999;
				material = 51;
				name = "NEtrup";
				visual = "zbytek";
				depends = "Total";
				explosionShielding = 0.4;
				radius = 0.01;
				passThrough = 0;
			};
			class HitEngine
			{
				armor = 0.6;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = 0;
			};
			class HitAvionics
			{
				armor = 0.5;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = 0;
			};
			class HitVRotor
			{
				armor = 0.6;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0;
			};
			class HitHRotor
			{
				armor = 1;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0;
			};
			class HitMissiles
			{
				armor = 0.1;
				material = 51;
				name = "munice";
				visual = "munice";
				passThrough = 0.5;
			};
			class HitRGlass
			{
				armor = 0.1;
				material = 51;
				name = "sklo predni P";
				visual = "sklo predni P";
				passThrough = 0;
			};
			class HitLGlass
			{
				armor = 0.1;
				material = 51;
				name = "sklo predni L";
				visual = "sklo predni L";
				passThrough = 0;
			};
			class HitWinch
			{
				armor = 0.1;
				material = 51;
				name = "slingLoad0";
				visual = "";
				passThrough = 0;
				radius = 0.1;
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class Explo
					{
						simulation = "particles";
						type = "WinchDestructionExplo";
						position = "slingLoad0";
						intensity = 1;
						interval = 1;
						lifeTime = 0.06;
					};
					class Sparks
					{
						simulation = "particles";
						type = "WinchDestructionSparks";
						position = "slingLoad0";
						intensity = 1;
						interval = 1;
						lifeTime = 0.1;
					};
				};
			};
			class HitTransmission
			{
				armor = 0.8;
				material = -1;
				name = "transmission";
				passThrough = 0;
			};
			class HitGlass1
			{
				armor = 2;
				material = -1;
				name = "glass1";
				convexComponent = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			class HitGlass2: HitGlass1
			{
				name = "glass2";
				convexComponent = "glass2";
				visual = "glass2";
			};
			class HitGlass3: HitGlass1
			{
				name = "glass3";
				convexComponent = "glass3";
				visual = "glass3";
			};
			class HitGlass4: HitGlass1
			{
				name = "glass4";
				convexComponent = "glass4";
				visual = "glass4";
			};
			class HitGlass5: HitGlass1
			{
				name = "glass5";
				convexComponent = "glass5";
				visual = "glass5";
			};
			class HitGlass6: HitGlass1
			{
				name = "glass6";
				convexComponent = "glass6";
				visual = "glass6";
			};
			class HitLight
			{
				armor = 0.1;
				material = -1;
				name = "light";
				passThrough = 0;
			};
			class HitHydraulics
			{
				armor = 0.8;
				material = -1;
				name = "hydraulics";
				passThrough = 0;
			};
			class HitGear
			{
				armor = 0.9;
				material = -1;
				name = "gear";
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 0.3;
				material = -1;
				name = "fuel tanks";
				passThrough = 0;
			};
			class HitHStabilizerL1
			{
				armor = 0.8;
				material = -1;
				name = "HStabilizerL1";
				passThrough = 1;
			};
			class HitHStabilizerR1
			{
				armor = 0.8;
				material = -1;
				name = "HStabilizerR1";
				passThrough = 0;
			};
			class HitVStabilizer1
			{
				armor = 0.8;
				material = -1;
				name = "VStabilizer1";
				passThrough = 1;
			};
			class HitTail
			{
				armor = 0.4;
				material = -1;
				name = "tail boom";
				passThrough = 1;
			};
			class HitPitotTube
			{
				armor = 0.5;
				material = -1;
				name = "pitot tube";
				passThrough = 0.2;
			};
			class HitStaticPort
			{
				armor = 0.1;
				material = -1;
				name = "static port";
				passThrough = 1;
			};
			class HitStarter1
			{
				armor = 0.1;
				material = -1;
				name = "starter1";
				passThrough = 0;
			};
			class HitStarter2
			{
				armor = 0.1;
				material = -1;
				name = "starter2";
				passThrough = 0;
			};
			class HitStarter3
			{
				armor = 0.1;
				material = -1;
				name = "starter3";
				passThrough = 0;
			};
			class HitTurret
			{
				armor = 0.8;
				material = -1;
				name = "main_turret_hit";
				visual = "gun1";
				passThrough = 0.3;
				radius = 0.2;
			};
			class HitGun
			{
				armor = 1;
				material = -1;
				name = "main_gun_hit";
				visual = "gun2";
				passThrough = 0.3;
				radius = 0.2;
			};
		};
		dammageHalf[] = {"\LLW_Apache\Data\AH64D_mfd_normal_co.paa","\LLW_Apache\Data\AH64D_mfd_malfc_co.paa"};
		dammageFull[] = {"\LLW_Apache\Data\AH64D_mfd_normal_co.paa","\LLW_Apache\Data\AH64D_mfd_malfc_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"LLW_Apache\Data\AH64D_body.rvmat","LLW_Apache\Data\AH64D_body_damage.rvmat","LLW_Apache\Data\AH64D_body_destruct.rvmat","LLW_Apache\Data\AH64D_details.rvmat","LLW_Apache\Data\AH64D_details_damage.rvmat","LLW_Apache\Data\AH64D_details_destruct.rvmat","LLW_Apache\Data\AH64D_inter.rvmat","LLW_Apache\Data\AH64D_inter_damage.rvmat","LLW_Apache\Data\AH64D_inter_destruct.rvmat","LLW_Apache\Data\AH64D_glass.rvmat","LLW_Apache\Data\AH64D_glass_damage.rvmat","LLW_Apache\Data\AH64D_glass_damage.rvmat","LLW_Apache\Data\AH64D_glass_in.rvmat","LLW_Apache\Data\AH64D_glass_in_damage.rvmat","LLW_Apache\Data\AH64D_glass_in_damage.rvmat","LLW_Apache\Data\default.rvmat","LLW_Apache\Data\default.rvmat","LLW_Apache\Data\default_destruct.rvmat"};
		};
		enableManualFire = 1;
		class ViewPilot: ViewPilot
		{
			initFov = 0.75;
			minFov = 0.375;
			maxFov = 1.1;
			initAngleX = 0;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
		class ViewOptics: ViewOptics
		{
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 0.1;
			minFov = 0.1;
			maxFov = 1.2;
		};
		class pilotCamera
		{
			turretFollowFreeLook = 1;
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "W";
					initAngleX = 0;
					minAngleX = -20;
					maxAngleX = 45;
					initAngleY = 0;
					minAngleY = -90;
					maxAngleY = 90;
					initFov = 0.5;
					minFov = 0.5;
					maxFov = 0.5;
					visionMode[] = {"Ti","NVG"};
					thermalMode[] = {2,3};
					gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					gunnerOpticsEffect[] = {"LLW_OpticsBlackWhite"};
				};
				showMiniMapInOptics = 1;
				showUAVViewpInOptics = 0;
				showSlingLoadManagerInOptics = 0;
			};
			minTurn = -90;
			maxTurn = 90;
			initTurn = 0;
			minElev = -20;
			maxElev = 45;
			initElev = 0;
			maxXRotSpeed = 1;
			maxYRotSpeed = 1;
			pilotOpticsShowCursor = 1;
			controllable = 1;
		};
		memoryPointDriverOptics = "slingCamera";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretFollowFreeLook = 0;
				usePip = 1;
				isCopilot = 1;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerAction = "Heli_Attack_02_Gunner_SettleIn";
				gunnerInAction = "Heli_Attack_02_Gunner_SettleIn";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				memoryPointGun = "mainGun";
				showHMD = 1;
				minElev = -80;
				maxElev = 20;
				initElev = 0;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",0.01,1};
				turretInfoType = "Rsc_LLW_AH64D_UI_Turret";
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex = 8;
				gunnerOpticsModel = "";
				class OpticsIn
				{
					class WideNGS
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -80;
						maxAngleX = 20;
						initAngleY = 0;
						minAngleY = -120;
						maxAngleY = 120;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {0.15,1,0.15,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
						directionStabilized = 0;
						stabilizedInAxes = 3;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -80;
						maxAngleX = 20;
						initAngleY = 0;
						minAngleY = -120;
						maxAngleY = 120;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {0.15,1,0.15,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_w_F.p3d";
						directionStabilized = 1;
						stabilizedInAxes = 3;
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
						gunnerOpticsEffect[] = {"TankCommanderOptics1"};
					};
					class WideL: Wide
					{
						opticsDisplayName = "WL";
						initFov = 0.2;
						minFov = 0.2;
						maxFov = 0.2;
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
						directionStabilized = 1;
						stabilizedInAxes = 3;
						gunnerOpticsColor[] = {1,0,0,1};
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.1;
						minFov = 0.1;
						maxFov = 0.1;
						directionStabilized = 1;
						stabilizedInAxes = 3;
						gunnerOpticsColor[] = {1,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = {1,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						stabilizedInAxes = 3;
						initFov = 0.02;
						minFov = 0.02;
						maxFov = 0.02;
					};
					class Narrower: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = {1,0,0,1};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						stabilizedInAxes = 3;
						initFov = 0.01;
						minFov = 0.01;
						maxFov = 0.01;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
			};
		};
	};
	class LLW_Apache_RNLAF: AH64_base_EP1
	{
		scope = 2;
		side = 1;
		faction = "NLD_Units";
		_generalMacro = "LLW_Apache_RNLAF";
		model = "\LLW_Apache\AH64_LLW.p3d";
		author = "Crielaard";
		picture = "\LLW_Apache\Data\UI\Picture_ah64d_CA.paa";
		icon = "\LLW_Apache\Data\UI\Icon_ah64d_CA.paa";
		displayname = "AH64D Apache";
		class Library
		{
			libTextDesc = "AH64";
		};
		accuracy = 0.5;
		weapons[] = {"LLW_Master_Arms_Safe","LLW_FFAR_Weapon_ALL","LLW_Flare_Launcher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","LLW_FFAR_24Rnd_Magazine_HEDP","LLW_FFAR_12Rnd_Magazine_MPSM"};
		enableManualFire = 1;
		unitInfoType = "Rsc_LLW_AH64D_UI_01";
		simulation = "helicopterrtd";
		mainBladeRadius = 5.9;
		mainBladeCenter = "rotor_center";
		tailBladeCenter = "rotor_02_center";
		tailBladeRadius = 1.4;
		washDownDiameter = "40.0f";
		washDownStrength = "1.0f";
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig = "A3\Air_F_Beta\Heli_Attack_01\RTD_Heli_Attack_01.xml";
			rtd_center = "rtd_center";
			defaultCollective = 0.675;
			autoHoverCorrection[] = {3.5,5.2,0};
			retreatBladeStallWarningSpeed = 92.778;
			maxTorque = 4500;
			stressDamagePerSec = 0.0033333332;
			maxHorizontalStabilizerLeftStress = 100000;
			maxHorizontalStabilizerRightStress = 100000;
			maxVerticalStabilizerStress = 100000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 150000;
			maxTailRotorStress = 40000;
		};
		memoryPointLMissile = "missile_1";
		memoryPointLMissileDir = "missile_1_dir";
		memoryPointRMissile = "missile_2";
		memoryPointRMissileDir = "missile_2_dir";
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";
		memoryPointCM[] = {"flare_launcher1","flare_launcher2","flare_launcher3","flare_launcher4"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir","flare_launcher3_dir","flare_launcher4_dir"};
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F","B_Helipilot_F"};
		vehicleClass = Air;
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "";
				memoryPointsGetInGunner = "pos cargo right";
				memoryPointsGetInGunnerDir = "pos cargo dir right";
				gunnerName = "Passenger (Right Jumpseat)";
				proxyIndex = 1;
				maxElev = 20;
				minElev = -55;
				maxTurn = 45;
				minTurn = -25;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "";
				memoryPointsGetInGunner = "pos cargo left";
				memoryPointsGetInGunnerDir = "pos cargo dir left";
				gunnerName = "Passenger (Left Jumpseat)";
				proxyIndex = 2;
				maxElev = 20;
				minElev = -55;
				maxTurn = 25;
				minTurn = -45;
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "";
				usepip = 0;
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				memoryPointGunnerOptics = "";
			};
			class MainTurret: MainTurret
			{
				turretFollowFreeLook = 0;
				usePip = 1;
				isCopilot = 1;
				gunnerCompartments = "Compartment1";
				gunnerAction = "Heli_Attack_02_Gunner_SettleIn";
				gunnerInAction = "Heli_Attack_02_Gunner_SettleIn";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				showHMD = 1;
				weapons[] = {"LLW_Master_Arms_Safe","LLW_M230_Weapon","LLW_Hellfire_Weapon_K","LLW_Hellfire_Weapon_N","LLW_Laser_Designator","LLW_Flare_Launcher"};
				magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","LLW_M230_1200Rnd_Magazine","LLW_Hellfire_4Rnd_Magazine_K","LLW_Hellfire_4Rnd_Magazine_N","Laserbatteries"};
				turretInfoType = "Rsc_LLW_AH64D_UI_Turret";
				soundServo[] = {"",0.01,1};
				memoryPointGun = "mainGun";
				gunnerOpticsModel = "";
				class OpticsIn
				{
					class WideNGS
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -80;
						maxAngleX = 20;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {1,0,0,0};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_03_w_F.p3d";
						gunnerOpticsEffect[] = {"LLW_OpticsBlackWhite"};
						directionStabilized = 0;
						opticsPPEffects[] = {"LLW_OpticsBlackWhite"};
					};
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -80;
						maxAngleX = 20;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsColor[] = {1,0,0,0};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_w_F.p3d";
						directionStabilized = 1;
						stabilizedInAxes = 3;
						opticsPPEffects[] = {};
						gunnerOpticsEffect[] = {"LLW_OpticsBlackWhite"};
					};
					class WideL: Wide
					{
						opticsDisplayName = "WL";
						initFov = 0.2;
						minFov = 0.2;
						maxFov = 0.2;
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
						gunnerOpticsColor[] = {1,0,0,0};
						directionStabilized = 1;
						stabilizedInAxes = 3;
						opticsPPEffects[] = {"LLW_OpticsBlackWhite"};
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.1;
						minFov = 0.1;
						maxFov = 0.1;
						directionStabilized = 1;
						stabilizedInAxes = 3;
						gunnerOpticsColor[] = {1,0,0,0};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_m_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = {1,0,0,0};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						stabilizedInAxes = 3;
						initFov = 0.02;
						minFov = 0.02;
						maxFov = 0.02;
					};
					class Narrower: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsColor[] = {1,0,0,0};
						gunnerOpticsModel = "A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						directionStabilized = 1;
						stabilizedInAxes = 3;
						initFov = 0.01;
						minFov = 0.01;
						maxFov = 0.01;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
			};
		};
		supplyRadius = 5;
	};
};
class CfgNonAIVehicles
{
	class ProxyDriver;
	class ProxyWeapon;
	class ProxyGunner;
	class ProxyAGM114Hellfire: ProxyWeapon
	{
		model = "\LLW_Apache\AGM114\AGM114Hellfire";
		simulation = "maverickweapon";
	};
};
class cfgMods
{
	author = "Crielaard";
	timepacked = "1427578626";
};
//};

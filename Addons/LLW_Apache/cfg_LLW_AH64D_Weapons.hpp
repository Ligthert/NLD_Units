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
		lockSeekRadius = 12000
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
	//======================================================================================================
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
		//explosive = 0.05;
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
		
		/*maxSpeed = 740;
		thrustTime = 1.1;
		thrust = 570;
		sideAirFriction = 0.2;*/
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
		//simulation = "maverickweapon";
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
		//effectsMissileInit = "";
		//effectsMissile = "";
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
	/*class LLW_Hydra_Ammo_MPSM: MissileBase
	{
		model = "\LLW_Apache\70mmRocket\70mmRocket.p3d";
		proxyShape = "\LLW_Apache\70mmRocket\70mmRocket_proxy";
		simulation = "shotSubmunitions";
		submunitionAmmo = "LLW_M261_Submunition_MPSM";
		submunitionCount = 9;
		submunitionConeType[] = {"randomcenter",12};
		submunitionConeAngle = 10;
		triggerDistance = 100;
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
		
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
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
	};*/
	class LLW_Hydra_Ammo_FL: SubmunitionBase
	{
		model = "\LLW_Apache\70mmRocket\70mmRocket.p3d";
		//submunitionAmmo = "B_762x51_Minigun_Tracer_Red_splash";
		//submunitionAmmo = "LLW_M255_Submunition_FL_1";
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
	//======================================================================================================
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
	//======================================================================================================
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
	/*class LLW_Hellfire_4Rnd_Magazine_N_AS: LLW_Hellfire_2Rnd_Magazine_K
	{
		displayName = "AGM-114N";
		displayNameShort = "SAL/Thermobaric";
		ammo = "LLW_Hellfire_Ammo_N_AS";
		displayNameMagazine = "AGM-114N";
		count = 4;
	};*/
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
	//======================================================================================================
	//	Rocket Pods Have 3 zones, one with 3 rounds, 4 and 12, making a total of 19.
	//	To load them symmetrically on both sides the zones should be 6, 8 and 24 respectively
	//======================================================================================================
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
	//======================================================================================================
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
	//======================================================================================================
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
	//======================================================================================================
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
	//======================================================================================================
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
	//======================================================================================================
	class LLW_FFAR_Weapon_ALL: RocketPods
	{
		magazines[] = 
		{
			"LLW_FFAR_3Rnd_Magazine_HEDP",
			"LLW_FFAR_4Rnd_Magazine_HEDP",
			"LLW_FFAR_6Rnd_Magazine_HEDP",
			"LLW_FFAR_8Rnd_Magazine_HEDP",
			"LLW_FFAR_12Rnd_Magazine_HEDP",
			"LLW_FFAR_19Rnd_Magazine_HEDP",
			"LLW_FFAR_24Rnd_Magazine_HEDP",
			"LLW_FFAR_38Rnd_Magazine_HEDP",
			"LLW_FFAR_3Rnd_Magazine_MPSM",
			"LLW_FFAR_4Rnd_Magazine_MPSM",
			"LLW_FFAR_6Rnd_Magazine_MPSM",
			"LLW_FFAR_8Rnd_Magazine_MPSM",
			"LLW_FFAR_12Rnd_Magazine_MPSM",
			"LLW_FFAR_19Rnd_Magazine_MPSM",
			"LLW_FFAR_24Rnd_Magazine_MPSM",
			"LLW_FFAR_38Rnd_Magazine_MPSM",
			"LLW_FFAR_3Rnd_Magazine_WP",
			"LLW_FFAR_4Rnd_Magazine_WP",
			"LLW_FFAR_6Rnd_Magazine_WP",
			"LLW_FFAR_8Rnd_Magazine_WP",
			"LLW_FFAR_12Rnd_Magazine_WP",
			"LLW_FFAR_19Rnd_Magazine_WP",
			"LLW_FFAR_24Rnd_Magazine_WP",
			"LLW_FFAR_38Rnd_Magazine_WP"
		};
		displayName = "Hydra 70";
		modes[] = {"Far_AI","Burst1","Burst2","Burst4"};
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		canLock = 0;
		magazineReloadTime=0.8;
		autoReload = false;
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
			reloadTime = 0.10;
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
			reloadTime = 0.10;
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
	
	//======================================================================================================
	class LLW_Hellfire_Weapon_K: MissileLauncher
	{
		displayName = "AGM-114K";
		magazines[] = 
		{
			"LLW_Hellfire_2Rnd_Magazine_K",
			"LLW_Hellfire_4Rnd_Magazine_K",
			"LLW_Hellfire_6Rnd_Magazine_K"
		};
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
		magazines[] = 
		{
			"LLW_Hellfire_2Rnd_Magazine_N",
			"LLW_Hellfire_4Rnd_Magazine_N",
			"LLW_Hellfire_6Rnd_Magazine_N"
		};
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
		magazines[] = 
		{
			"LLW_Hellfire_4Rnd_Magazine_L"
		};
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
	//======================================================================================================
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

#define ANIM_VERSION(cargo, version, varSpeed, varAfter1, varAfter2, varAfter3) \
	class cargo##_V##version##_EP1: cargo##_EP1 \
	{ \
		file = 	\ca\Air_E\Data\Anim\##cargo##_V##version##.rtm; \
		connectTo[] = {cargo##_EP1, 0.1}; \
		speed = varSpeed; \
		variantAfter[] = {varAfter1, varAfter2, varAfter3}; \
	};

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		AW159_Cargo_BAF="AW159_Cargo_BAF";
		AW159_Cargo01_BAF="AW159_Cargo01_BAF";
		AW159_Pilot_BAF="AW159_Pilot_BAF";
		Merlin_Cargo_BAF="Merlin_Cargo_BAF";
		Merlin_Cargo01_BAF="Merlin_Cargo01_BAF";
		Merlin_Pilot_BAF="Merlin_Pilot_BAF";
		AH64_gunner_EP1="AH64_gunner_EP1";
		AH64_pilot_EP1="AH64_pilot_EP1";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		
		class AH64_gunner_EP1: Crew
		{
			file="\DG_BRITISHHELIS\Data\Anim\AH64_gunner";
			connectTo[]=
			{
				"KIA_AH64_gunner_EP1",
				1
			};
			speed=1e+010;
		};
		class KIA_AH64_gunner_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\DG_BRITISHHELIS\Data\Anim\KIA_AH64_gunner";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class AH64_pilot_EP1: Crew
		{
			file="\DG_BRITISHHELIS\Data\Anim\AH64_pilot";
			connectTo[]=
			{
				"KIA_AH64_pilot_EP1",
				1
			};
			speed=1e+010;
		};
		class KIA_AH64_pilot_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\DG_BRITISHHELIS\Data\Anim\KIA_AH64_pilot";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};		
		
		class AW159_Cargo_BAF: Crew
		
		{
			file="\DG_BRITISHHELIS\Data\Anim\AW159_Cargo";
			connectTo[]=
			{
				"AW159_KIA_Cargo_BAF",
				1
			};
			speed=1e+010;
		};
		class AW159_KIA_Cargo_BAF: DefaultDie
		{
			actions="DeadActions";
			file="\DG_BRITISHHELIS\Data\Anim\AW159_KIA_Cargo";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		
		class AW159_Cargo01_BAF: Crew
		{
			file="\DG_BRITISHHELIS\Data\Anim\AW159_Cargo01";
			connectTo[]=
			{
				"AW159_KIA_Cargo_BAF",
				1
			};
			speed=1e+010;
		};
		
		class AW159_Pilot_BAF: Crew
		{
			file="\DG_BRITISHHELIS\Data\Anim\AW159_Pilot";
			connectTo[]=
			{
				"AW159_KIA_Pilot_BAF",
				1
			};
			speed=1e+010;
		};
		class AW159_KIA_Pilot_BAF: DefaultDie
		{
			actions="DeadActions";
			file="\DG_BRITISHHELIS\Data\Anim\AW159_Kia_Pilot";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		
		///Merlin Animations///
		
		class Merlin_Cargo_BAF: Crew
		{
			file="\DG_BRITISHHELIS\Data\Anim\Merlin_Cargo";
			connectTo[]=
			{
				"Merlin_KIA_Cargo_BAF",
				1
			};
			speed=1e+010;
		};
		class Merlin_KIA_Cargo_BAF: DefaultDie
		{
			actions="DeadActions";
			file="\DG_BRITISHHELIS\Data\Anim\Merlin_KIA_Cargo";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		
		class Merlin_Cargo01_BAF: Crew
		{
			file="\DG_BRITISHHELIS\Data\Anim\Merlin_Cargo01";
			connectTo[]=
			{
				"Merlin_KIA_Cargo_BAF",
				1
			};
			speed=1e+010;
		};
		
		class Merlin_Pilot_BAF: Crew
		{
			file="\DG_BRITISHHELIS\Data\Anim\Merlin_Pilot";
			connectTo[]=
			{
				"Merlin_KIA_Pilot_BAF",
				1
			};
			speed=1e+010;
		};
		class Merlin_KIA_Pilot_BAF: DefaultDie
		{
			actions="DeadActions";
			file="\DG_BRITISHHELIS\Data\Anim\Merlin_Kia_Pilot";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};		
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{	
		AW159_Cargo_BAF="crew";
		AW159_Cargo01_BAF="crew";
		AW159_Pilot_BAF="crew";
		Merlin_Cargo_BAF="crew";
		Merlin_Cargo01_BAF="crew";
		Merlin_Pilot_BAF="crew";
		AH64_gunner_EP1="";
		AH64_pilot_EP1="";		
	};
};
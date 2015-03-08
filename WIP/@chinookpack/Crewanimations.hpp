class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		CH47_Cargo_EP1 = "CH47_Cargo_EP1";
		CH47_Cargo01_EP1 = "CH47_Cargo01_EP1";
		CH47_Cargo02_EP1 = "CH47_Cargo02_EP1";
		CH47_Cargo03_EP1 = "CH47_Cargo03_EP1";
		CH47_Gunner_EP1 = "CH47_Gunner_EP1";
		CH47_Gunner01_EP1 = "CH47_Gunner01_EP1";
		CH47_Pilot_EP1 = "CH47_Pilot_EP1";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class CH47_Cargo_EP1: Crew
		{
			file = "chinookpack\chinook\data\anim\CH47_Cargo";
			interpolateTo[] = {"CH47_KIA_Cargo_EP1", 1};
			speed = 1e+010;
		};
		class CH47_KIA_Cargo_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "chinookpack\chinook\data\anim\CH47_KIA_Cargo";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class CH47_Cargo01_EP1: Crew
		{
			file = "chinookpack\chinook\data\anim\CH47_Cargo01";
			interpolateTo[] = {"CH47_KIA_Cargo01_EP1", 1};
			speed = 1e+010;
		};
		class CH47_KIA_Cargo01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "chinookpack\chinook\data\anim\CH47_KIA_Cargo01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class CH47_Cargo02_EP1: Crew
		{
			file = "chinookpack\chinook\data\anim\CH47_Cargo02";
			interpolateTo[] = {"CH47_KIA_Cargo02_EP1", 1};
			speed = 1e+010;
		};
		class CH47_KIA_Cargo02_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "chinookpack\chinook\data\anim\CH47_KIA_Cargo02";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class CH47_Cargo03_EP1: Crew
		{
			file = "chinookpack\chinook\data\anim\CH47_Cargo03";
			interpolateTo[] = {"CH47_KIA_Cargo03_EP1", 1};
			speed = 1e+010;
		};
		class CH47_KIA_Cargo03_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "chinookpack\chinook\data\anim\CH47_KIA_Cargo03";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class CH47_Pilot_EP1: Crew
		{
			file = "chinookpack\chinook\data\anim\CH47_Pilot";
			connectTo[] = {"CH47_KIA_Pilot_EP1", 1};
			speed = 1e+010;
		};
		class CH47_KIA_Pilot_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "chinookpack\chinook\data\anim\CH47_KIA_Pilot";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class CH47_Gunner_EP1: Crew
		{
			file = "chinookpack\chinook\data\anim\CH47_Gunner02";
			connectTo[] = {"CH47_KIA_Gunner01_EP1",	1};
			speed = 1e+010;
		};
		class CH47_KIA_Gunner_EP1: DefaultDie
		{
			actions="DeadActions";
			file="chinookpack\chinook\data\anim\CH47_KIA_Gunner";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class CH47_Gunner01_EP1: Crew
		{
			file = "chinookpack\chinook\data\anim\CH47_Gunner";
			connectTo[] = {"CH47_KIA_Gunner01_EP1",	1};
			speed = 1e+010;
		};
		class CH47_KIA_Gunner01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "chinookpack\chinook\data\anim\CH47_KIA_Gunner01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		CH47_Cargo_EP1 = "crew";
		CH47_Cargo01_EP1 = "crew";
		CH47_Cargo02_EP1 = "crew";
		CH47_Cargo03_EP1 = "crew";
		CH47_Gunner_EP1 = "";
		CH47_Gunner01_EP1 = "";
		CH47_Pilot_EP1 = "";
	};
};
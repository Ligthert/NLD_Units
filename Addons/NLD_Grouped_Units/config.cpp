 class CfgPatches {
	class NLD_Units_Groups {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
	};
};

class CfgGroups
{

	class West
	{

		class NLD_Units_WLD
		{
			name = "[NLD] Woodland";

			class Infantry
			{
				name = "Infantry";

				class NLD_WLD_InfSentry
				{
					name = "Sentry";
					side = 1;
					faction = "NLD_Units_WLD";
					rarityGroup = 0.3;
          icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "NLD_WLD_GL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "NLD_WLD_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_WLD_InfTeam
				{
					name = "Team";
					side = 1;
					faction = "NLD_Units_WLD";
					rarityGroup = 0.3;
          icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_Rifleman";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_AR";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_LAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_WLD_InfSquad
				{
					name = "Squad";
					side = 1;
					faction = "NLD_Units_WLD";
					rarityGroup = 0.3;
          icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_TL";
						rank = "CORPORAL";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_LAT";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_CLS";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class unit4
					{
						side = 1;
						vehicle="NLD_WLD_AR";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class unit5
					{
						side = 1;
						vehicle="NLD_WLD_AR";
						rank = "PRIVATE";
						position[] = {7.5,-7.5,0};
					};
					class unit6
					{
						side = 1;
						vehicle="NLD_WLD_GL";
						rank = "PRIVATE";
						position[] = {-7.5,-7.5,0};
					};
					class unit7
					{
						side = 1;
						vehicle="NLD_WLD_AMMO";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class NLD_WLD_InfCmdr
				{
					name = "Platoon Command";
					side = 1;
					faction = "NLD_Units_WLD";
					rarityGroup = 0.3;
          icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_OFF";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_SL";
						rank = "SERGEANT";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_CLS";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_WLD_InfAtTeam
				{
					name = "Anti-armor Team";
					side = 1;
					faction = "NLD_Units_WLD";
					rarityGroup = 0.3;
          icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_MAT";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_MAT";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_AMAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_WLD_InfAaTeam
				{
					name = "Anti-air Team";
					side = 1;
					faction = "NLD_Units_WLD";
					rarityGroup = 0.3;
          icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_AA";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_AA";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_AAA";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_WLD_InfLMGTeam
				{
					name = "LMG Team";
					side = 1;
					faction = "NLD_Units_WLD";
					rarityGroup = 0.3;
          icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_AR";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_AR";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_AAR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_WLD_InfMMGTeam
				{
					name = "MMG Team";
					side = 1;
					faction = "NLD_Units_WLD";
					rarityGroup = 0.3;
          icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_MMG";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_MMG";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_AMMG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
      };
      class Support
			{
				name = "Support";

				class NLD_WLD_InfClsTeam
				{
					name = "Medic Team";
					side = 1;
					faction = "NLD_Units_WLD";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_TL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_CLS";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_CLS";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_CLS";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_WLD_InfEngTeam
				{
					name = "Engineering Team";
					side = 1;
					faction = "NLD_Units_WLD";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_TL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_Engi";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_Engi";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_WLD_InfExplTeam
				{
					name = "EOD Team";
					side = 1;
					faction = "NLD_Units_WLD";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_TL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_Expl";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_Expl";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
      };

      class Armored
			{
				name = "Armor";

				class NLD_WLD_ArmorPlt
				{
					name = "Leopard2 Platoon";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_armor.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_Leo2";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_Leo2";
						rank = "LIEUTENANT";
						position[] = {-12.5,-12.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_Leo2";
						rank = "LIEUTENANT";
						position[] = {-25,-25,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_Leo2";
						rank = "LIEUTENANT";
						position[] = {-37.5,-37.5,0};
					};
				};

				class NLD_WLD_LeoSection
				{
					name = "Leopard2 Section";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_armor.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_Leo2";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_Leo2";
						rank = "LIEUTENANT";
						position[] = {-12.5,-12.5,0};
					};
				};
				class NLD_WLD_PzhPlt
				{
					name = "PzH 2000 NL Platoon";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_art.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_PzH2000NL";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_PzH2000NL";
						rank = "LIEUTENANT";
						position[] = {-12.5,-12.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_PzH2000NL";
						rank = "LIEUTENANT";
						position[] = {-25,-25,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_PzH2000NL";
						rank = "LIEUTENANT";
						position[] = {-7.5,-7.5,0};
					};
				};

				class NLD_WLD_PzhSection
				{
					name = "PzH 2000 NL Section";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_art.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_PzH2000NL";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_PzH2000NL";
						rank = "LIEUTENANT";
						position[] = {-12.5,-12.5,0};
					};
				};
				class NLD_WLD_MLRSPlt
				{
					name = "MLRS Platoon";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_art.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_M270MLRS";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_M270MLRS";
						rank = "LIEUTENANT";
						position[] = {-12.5,-12.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_M270MLRS";
						rank = "LIEUTENANT";
						position[] = {-25,-25,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_M270MLRS";
						rank = "LIEUTENANT";
						position[] = {-37.5,-37.5,0};
					};
				};

				class NLD_WLD_MLRSSection
				{
					name = "MLRS Section";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_art.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_M270MLRS";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_M270MLRS";
						rank = "LIEUTENANT";
						position[] = {-12.5,-12.5,0};
					};
				};
			};
    };

    class NLD_Units_DST
		{
			name = "[NLD] Desert";

			class Infantry
			{
				name = "Infantry";

				class NLD_DST_InfSentry
				{
					name = "Sentry";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "NLD_DST_GL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "NLD_DST_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_DST_InfTeam
				{
					name = "Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_DST_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_DST_Rifleman";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_DST_AR";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_DST_LAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_DST_InfSquad
				{
					name = "Squad";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_DST_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_DST_TL";
						rank = "CORPORAL";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_DST_LAT";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_DST_CLS";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class unit4
					{
						side = 1;
						vehicle="NLD_DST_AR";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class unit5
					{
						side = 1;
						vehicle="NLD_DST_AR";
						rank = "PRIVATE";
						position[] = {7.5,-7.5,0};
					};
					class unit6
					{
						side = 1;
						vehicle="NLD_DST_GL";
						rank = "PRIVATE";
						position[] = {-7.5,-7.5,0};
					};
					class unit7
					{
						side = 1;
						vehicle="NLD_DST_AMMO";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class NLD_DST_InfCmdr
				{
					name = "Platoon Command";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_DST_OFF";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_DST_SL";
						rank = "SERGEANT";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_DST_CLS";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_DST_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_DST_InfAtTeam
				{
					name = "Anti-armor Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_DST_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_DST_MAT";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_DST_MAT";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_DST_AMAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_DST_InfAaTeam
				{
					name = "Anti-air Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_DST_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_DST_AA";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_DST_AA";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_DST_AAA";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_DST_InfLMGTeam
				{
					name = "LMG Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_DST_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_DST_AR";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_DST_AR";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_DST_AAR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_DST_InfMMGTeam
				{
					name = "MMG Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_DST_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_DST_MMG";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_DST_MMG";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_DST_AMMG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
      };

      class Support
      {
        name = "Support";
        class NLD_DST_InfClsTeam
        {
          name = "Medic Team";
          side = 1;
          faction = "NLD_Units";
          rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
          class unit0
          {
            side = 1;
            vehicle="NLD_DST_TL";
            rank = "CORPORAL";
            position[] = {0,0,0};
          };
          class unit1
          {
            side = 1;
            vehicle="NLD_DST_CLS";
            rank = "PRIVATE";
            position[] = {2.5,-2.5,0};
          };
          class unit2
          {
            side = 1;
            vehicle="NLD_DST_CLS";
            rank = "PRIVATE";
            position[] = {-2.5,-2.5,0};
          };
          class unit3
          {
            side = 1;
            vehicle="NLD_DST_CLS";
            rank = "PRIVATE";
            position[] = {5,-5,0};
          };
        };
        class NLD_DST_InfEngTeam
        {
          name = "Engineering Team";
          side = 1;
          faction = "NLD_Units";
          rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
          class unit0
          {
            side = 1;
            vehicle="NLD_DST_TL";
            rank = "CORPORAL";
            position[] = {0,0,0};
          };
          class unit1
          {
            side = 1;
            vehicle="NLD_DST_Engi";
            rank = "PRIVATE";
            position[] = {2.5,-2.5,0};
          };
          class unit2
          {
            side = 1;
            vehicle="NLD_DST_Engi";
            rank = "PRIVATE";
            position[] = {-2.5,-2.5,0};
          };
          class unit3
          {
            side = 1;
            vehicle="NLD_DST_Rifleman";
            rank = "PRIVATE";
            position[] = {5,-5,0};
          };
        };
        class NLD_DST_InfExplTeam
        {
          name = "EOD Team";
          side = 1;
          faction = "NLD_Units";
          rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
          class unit0
          {
            side = 1;
            vehicle="NLD_DST_TL";
            rank = "CORPORAL";
            position[] = {0,0,0};
          };
          class unit1
          {
            side = 1;
            vehicle="NLD_DST_Expl";
            rank = "PRIVATE";
            position[] = {2.5,-2.5,0};
          };
          class unit2
          {
            side = 1;
            vehicle="NLD_DST_Expl";
            rank = "PRIVATE";
            position[] = {-2.5,-2.5,0};
          };
          class unit3
          {
            side = 1;
            vehicle="NLD_DST_Rifleman";
            rank = "PRIVATE";
            position[] = {5,-5,0};
          };
        };
      };

      class Armored
      {
        name = "Armor";

        class NLD_DST_ArmorPlt
        {
          name = "Leopard2 Platoon";
          side = 1;
          faction = "NLD_Units";
          rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_armor.paa";
          class unit0
          {
            side = 1;
            vehicle="NLD_DST_Leo2";
            rank = "CAPTAIN";
            position[] = {0,0,0};
          };
          class unit1
          {
            side = 1;
            vehicle="NLD_DST_Leo2";
            rank = "LIEUTENANT";
            position[] = {-12.5,-12.5,0};
          };
          class unit2
          {
            side = 1;
            vehicle="NLD_DST_Leo2";
            rank = "LIEUTENANT";
            position[] = {-25,-25,0};
          };
          class unit3
          {
            side = 1;
            vehicle="NLD_DST_Leo2";
            rank = "LIEUTENANT";
            position[] = {-37.5,-37.5,0};
          };
        };

        class NLD_DST_LeoSection
        {
          name = "Leopard2 Section";
          side = 1;
          faction = "NLD_Units";
          rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_armor.paa";
          class unit0
          {
            side = 1;
            vehicle="NLD_DST_Leo2";
            rank = "CAPTAIN";
            position[] = {0,0,0};
          };
          class unit1
          {
            side = 1;
            vehicle="NLD_DST_Leo2";
            rank = "LIEUTENANT";
            position[] = {-12.5,-12.5,0};
          };
        };
      };
    };

    class NLD_Units_UN_DST
    {
      name = "[NLD] UN Desert";

      class Infantry
      {
        name = "Infantry";
				class NLD_UN_DST_InfSentry
				{
					name = "Sentry";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "NLD_UN_DST_GL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "NLD_UN_DST_Rifleman";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
				};
				class NLD_UN_DST_InfTeam
				{
					name = "Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_UN_DST_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_UN_DST_Rifleman";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_UN_DST_AR";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_UN_DST_LAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_UN_DST_InfSquad
				{
					name = "Squad";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_UN_DST_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_UN_DST_TL";
						rank = "CORPORAL";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_UN_DST_LAT";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_UN_DST_CLS";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class unit4
					{
						side = 1;
						vehicle="NLD_UN_DST_AR";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class unit5
					{
						side = 1;
						vehicle="NLD_UN_DST_AR";
						rank = "PRIVATE";
						position[] = {7.5,-7.5,0};
					};
					class unit6
					{
						side = 1;
						vehicle="NLD_UN_DST_GL";
						rank = "PRIVATE";
						position[] = {-7.5,-7.5,0};
					};
					class unit7
					{
						side = 1;
						vehicle="NLD_UN_DST_AMMO";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class NLD_UN_DST_InfCmdr
				{
					name = "Platoon Command";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_UN_DST_OFF";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_UN_DST_SL";
						rank = "SERGEANT";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_UN_DST_CLS";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_UN_DST_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_UN_DST_InfAtTeam
				{
					name = "Anti-armor Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_UN_DST_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_UN_DST_MAT";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_UN_DST_MAT";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_UN_DST_AMAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_UN_DST_InfAaTeam
				{
					name = "Anti-air Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_UN_DST_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_UN_DST_AA";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_UN_DST_AA";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_UN_DST_AAA";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_UN_DST_InfLMGTeam
				{
					name = "LMG Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_UN_DST_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_UN_DST_AR";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_UN_DST_AR";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_UN_DST_AAR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_UN_DST_InfMMGTeam
				{
					name = "MMG Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_UN_DST_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_UN_DST_MMG";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_UN_DST_MMG";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_UN_DST_AMMG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
      };

      class Support
      {
        name = "Support";
        class NLD_UN_DST_InfClsTeam
				{
					name = "Medic Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_UN_DST_TL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_UN_DST_CLS";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_UN_DST_CLS";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_UN_DST_CLS";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_UN_DST_InfEngTeam
				{
					name = "Engineering Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_UN_DST_TL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_UN_DST_Engi";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_UN_DST_Engi";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_UN_DST_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_UN_DST_InfExplTeam
				{
					name = "EOD Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_UN_DST_TL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_UN_DST_Expl";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_UN_DST_Expl";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_UN_DST_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
      };

    };

    class NLD_Units_UN_WLD
    {
      name = "[NLD] UN Woodland";

      class Infantry
      {
        name = "Infantry";
				class NLD_UN_WLD_InfSentry
				{
					name = "Sentry";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "NLD_UN_WLD_GL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "NLD_UN_WLD_Rifleman";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
				};
				class NLD_UN_WLD_InfTeam
				{
					name = "Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_UN_WLD_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_UN_WLD_Rifleman";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_UN_WLD_AR";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_UN_WLD_LAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_UN_WLD_InfSquad
				{
					name = "Squad";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_UN_WLD_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_UN_WLD_TL";
						rank = "CORPORAL";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_UN_WLD_LAT";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_UN_WLD_CLS";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class unit4
					{
						side = 1;
						vehicle="NLD_UN_WLD_AR";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class unit5
					{
						side = 1;
						vehicle="NLD_UN_WLD_AR";
						rank = "PRIVATE";
						position[] = {7.5,-7.5,0};
					};
					class unit6
					{
						side = 1;
						vehicle="NLD_UN_WLD_GL";
						rank = "PRIVATE";
						position[] = {-7.5,-7.5,0};
					};
					class unit7
					{
						side = 1;
						vehicle="NLD_UN_WLD_AMMO";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class NLD_UN_WLD_InfCmdr
				{
					name = "Platoon Command";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_UN_WLD_OFF";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_UN_WLD_SL";
						rank = "SERGEANT";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_UN_WLD_CLS";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_UN_WLD_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
      };
      class Support
			{
				name = "Support";
				class NLD_UN_WLD_InfAtTeam
				{
					name = "Anti-armor Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_UN_WLD_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_UN_WLD_MAT";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_UN_WLD_MAT";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_UN_WLD_AMAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_UN_WLD_InfAaTeam
				{
					name = "Anti-air Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_UN_WLD_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_UN_WLD_AA";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_UN_WLD_AA";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_UN_WLD_AAA";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_UN_WLD_InfLMGTeam
				{
					name = "LMG Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_UN_WLD_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_UN_WLD_AR";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_UN_WLD_AR";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_UN_WLD_AAR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_UN_WLD_InfMMGTeam
				{
					name = "MMG Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_UN_WLD_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_UN_WLD_MMG";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_UN_WLD_MMG";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_UN_WLD_AMMG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
        class NLD_UN_WLD_InfClsTeam
        {
          name = "Medic Team";
          side = 1;
          faction = "NLD_Units";
          rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
          class unit0
          {
            side = 1;
            vehicle="NLD_UN_WLD_SL";
            rank = "CORPORAL";
            position[] = {0,0,0};
          };
          class unit1
          {
            side = 1;
            vehicle="NLD_UN_WLD_CLS";
            rank = "PRIVATE";
            position[] = {2.5,-2.5,0};
          };
          class unit2
          {
            side = 1;
            vehicle="NLD_UN_WLD_CLS";
            rank = "PRIVATE";
            position[] = {-2.5,-2.5,0};
          };
          class unit3
          {
            side = 1;
            vehicle="NLD_UN_WLD_CLS";
            rank = "PRIVATE";
            position[] = {5,-5,0};
          };
        };
        class NLD_UN_WLD_InfEngTeam
        {
          name = "Engineering Team";
          side = 1;
          faction = "NLD_Units";
          rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
          class unit0
          {
            side = 1;
            vehicle="NLD_UN_WLD_SL";
            rank = "CORPORAL";
            position[] = {0,0,0};
          };
          class unit1
          {
            side = 1;
            vehicle="NLD_UN_WLD_Engi";
            rank = "PRIVATE";
            position[] = {2.5,-2.5,0};
          };
          class unit2
          {
            side = 1;
            vehicle="NLD_UN_WLD_Engi";
            rank = "PRIVATE";
            position[] = {-2.5,-2.5,0};
          };
          class unit3
          {
            side = 1;
            vehicle="NLD_UN_WLD_Rifleman";
            rank = "PRIVATE";
            position[] = {5,-5,0};
          };
        };
        class NLD_UN_WLD_InfExplTeam
        {
          name = "EOD Team";
          side = 1;
          faction = "NLD_Units";
          rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
          class unit0
          {
            side = 1;
            vehicle="NLD_UN_WLD_TL";
            rank = "CORPORAL";
            position[] = {0,0,0};
          };
          class unit1
          {
            side = 1;
            vehicle="NLD_UN_WLD_Expl";
            rank = "PRIVATE";
            position[] = {2.5,-2.5,0};
          };
          class unit2
          {
            side = 1;
            vehicle="NLD_UN_WLD_Expl";
            rank = "PRIVATE";
            position[] = {-2.5,-2.5,0};
          };
          class unit3
          {
            side = 1;
            vehicle="NLD_UN_WLD_Rifleman";
            rank = "PRIVATE";
            position[] = {5,-5,0};
          };
        };
      };
    };

    class NLD_Units_WTR
    {
      name = "[NLD] Winter";

      class Infantry
      {
        name = "Infantry";

				class NLD_WTR_InfSentry
				{
					name = "Sentry";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "NLD_WTR_GL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "NLD_WTR_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_WTR_InfTeam
				{
					name = "Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WTR_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WTR_Rifleman";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WTR_AR";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WTR_LAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_WTR_InfSquad
				{
					name = "Squad";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WTR_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WTR_TL";
						rank = "CORPORAL";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WTR_LAT";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WTR_CLS";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class unit4
					{
						side = 1;
						vehicle="NLD_WTR_AR";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class unit5
					{
						side = 1;
						vehicle="NLD_WTR_AR";
						rank = "PRIVATE";
						position[] = {7.5,-7.5,0};
					};
					class unit6
					{
						side = 1;
						vehicle="NLD_WTR_GL";
						rank = "PRIVATE";
						position[] = {-7.5,-7.5,0};
					};
					class unit7
					{
						side = 1;
						vehicle="NLD_WTR_AMMO";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class NLD_WTR_InfCmdr
				{
					name = "Platoon Command";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WTR_OFF";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WTR_SL";
						rank = "SERGEANT";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WTR_CLS";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WTR_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_WTR_InfAtTeam
				{
					name = "Anti-armor Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WTR_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WTR_MAT";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WTR_MAT";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WTR_AMAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_WTR_InfAaTeam
				{
					name = "Anti-air Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WTR_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WTR_AA";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WTR_AA";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WTR_AAA";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_WTR_InfLMGTeam
				{
					name = "LMG Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WTR_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WTR_AR";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WTR_AR";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WTR_AAR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_WTR_InfMMGTeam
				{
					name = "MMG Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WTR_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WTR_MMG";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WTR_MMG";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WTR_AMMG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
      };

      class Support
      {
        name = "Support";

        class NLD_WTR_InfClsTeam
        {
          name = "Medic Team";
          side = 1;
          faction = "NLD_Units";
          rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
          class unit0
          {
            side = 1;
            vehicle="NLD_WTR_TL";
            rank = "CORPORAL";
            position[] = {0,0,0};
          };
          class unit1
          {
            side = 1;
            vehicle="NLD_WTR_CLS";
            rank = "PRIVATE";
            position[] = {2.5,-2.5,0};
          };
          class unit2
          {
            side = 1;
            vehicle="NLD_WTR_CLS";
            rank = "PRIVATE";
            position[] = {-2.5,-2.5,0};
          };
          class unit3
          {
            side = 1;
            vehicle="NLD_WTR_CLS";
            rank = "PRIVATE";
            position[] = {5,-5,0};
          };
        };
        class NLD_WTR_InfEngTeam
        {
          name = "Engineering Team";
          side = 1;
          faction = "NLD_Units";
          rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
          class unit0
          {
            side = 1;
            vehicle="NLD_WTR_TL";
            rank = "CORPORAL";
            position[] = {0,0,0};
          };
          class unit1
          {
            side = 1;
            vehicle="NLD_WTR_Engi";
            rank = "PRIVATE";
            position[] = {2.5,-2.5,0};
          };
          class unit2
          {
            side = 1;
            vehicle="NLD_WTR_Engi";
            rank = "PRIVATE";
            position[] = {-2.5,-2.5,0};
          };
          class unit3
          {
            side = 1;
            vehicle="NLD_WTR_Rifleman";
            rank = "PRIVATE";
            position[] = {5,-5,0};
          };
        };
        class NLD_WTR_InfExplTeam
        {
          name = "EOD Team";
          side = 1;
          faction = "NLD_Units";
          rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
          class unit0
          {
            side = 1;
            vehicle="NLD_WTR_TL";
            rank = "CORPORAL";
            position[] = {0,0,0};
          };
          class unit1
          {
            side = 1;
            vehicle="NLD_WTR_Expl";
            rank = "PRIVATE";
            position[] = {2.5,-2.5,0};
          };
          class unit2
          {
            side = 1;
            vehicle="NLD_WTR_Expl";
            rank = "PRIVATE";
            position[] = {-2.5,-2.5,0};
          };
          class unit3
          {
            side = 1;
            vehicle="NLD_WTR_Rifleman";
            rank = "PRIVATE";
            position[] = {5,-5,0};
          };
        };
      };
    };

    class NLD_Units_NFPT
    {
      name = "[NLD] NFP-Tan";

      class Infantry
      {
        name = "Infantry";
				class NLD_NFPT_InfSentry
				{
					name = "Sentry";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "NLD_NFPT_GL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "NLD_NFPT_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_NFPT_InfTeam
				{
					name = "Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPT_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPT_Rifleman";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPT_AR";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPT_LAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_NFPT_InfSquad
				{
					name = "Squad";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPT_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPT_TL";
						rank = "CORPORAL";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPT_LAT";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPT_CLS";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class unit4
					{
						side = 1;
						vehicle="NLD_NFPT_AR";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class unit5
					{
						side = 1;
						vehicle="NLD_NFPT_AR";
						rank = "PRIVATE";
						position[] = {7.5,-7.5,0};
					};
					class unit6
					{
						side = 1;
						vehicle="NLD_NFPT_GL";
						rank = "PRIVATE";
						position[] = {-7.5,-7.5,0};
					};
					class unit7
					{
						side = 1;
						vehicle="NLD_NFPT_AMMO";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class NLD_NFPT_InfCmdr
				{
					name = "Platoon Command";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPT_OFF";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPT_SL";
						rank = "SERGEANT";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPT_CLS";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPT_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_NFPT_InfAtTeam
				{
					name = "Anti-armor Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPT_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPT_MAT";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPT_MAT";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPT_AMAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_NFPT_InfAaTeam
				{
					name = "Anti-air Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPT_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPT_AA";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPT_AA";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPT_AAA";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_NFPT_InfLMGTeam
				{
					name = "LMG Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPT_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPT_AR";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPT_AR";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPT_AAR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_NFPT_InfMMGTeam
				{
					name = "MMG Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPT_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPT_MMG";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPT_MMG";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPT_AMMG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
      };
      class Support
      {
        name = "Support";

        class NLD_NFPT_InfClsTeam
        {
          name = "Medic Team";
          side = 1;
          faction = "NLD_Units";
          rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
          class unit0
          {
            side = 1;
            vehicle="NLD_NFPT_TL";
            rank = "CORPORAL";
            position[] = {0,0,0};
          };
          class unit1
          {
            side = 1;
            vehicle="NLD_NFPT_CLS";
            rank = "PRIVATE";
            position[] = {2.5,-2.5,0};
          };
          class unit2
          {
            side = 1;
            vehicle="NLD_NFPT_CLS";
            rank = "PRIVATE";
            position[] = {-2.5,-2.5,0};
          };
          class unit3
          {
            side = 1;
            vehicle="NLD_NFPT_CLS";
            rank = "PRIVATE";
            position[] = {5,-5,0};
          };
        };
        class NLD_NFPT_InfEngTeam
        {
          name = "Engineering Team";
          side = 1;
          faction = "NLD_Units";
          rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
          class unit0
          {
            side = 1;
            vehicle="NLD_NFPT_TL";
            rank = "CORPORAL";
            position[] = {0,0,0};
          };
          class unit1
          {
            side = 1;
            vehicle="NLD_NFPT_Engi";
            rank = "PRIVATE";
            position[] = {2.5,-2.5,0};
          };
          class unit2
          {
            side = 1;
            vehicle="NLD_NFPT_Engi";
            rank = "PRIVATE";
            position[] = {-2.5,-2.5,0};
          };
          class unit3
          {
            side = 1;
            vehicle="NLD_NFPT_Rifleman";
            rank = "PRIVATE";
            position[] = {5,-5,0};
          };
        };
        class NLD_NFPT_InfExplTeam
        {
          name = "EOD Team";
          side = 1;
          faction = "NLD_Units";
          rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
          class unit0
          {
            side = 1;
            vehicle="NLD_NFPT_TL";
            rank = "CORPORAL";
            position[] = {0,0,0};
          };
          class unit1
          {
            side = 1;
            vehicle="NLD_NFPT_Expl";
            rank = "PRIVATE";
            position[] = {2.5,-2.5,0};
          };
          class unit2
          {
            side = 1;
            vehicle="NLD_NFPT_Expl";
            rank = "PRIVATE";
            position[] = {-2.5,-2.5,0};
          };
          class unit3
          {
            side = 1;
            vehicle="NLD_NFPT_Rifleman";
            rank = "PRIVATE";
            position[] = {5,-5,0};
          };
        };
      };
    };

    class NLD_Units_NFPG
    {
      name = "[NLD] NFP-Green";

      class Infantry
      {
        name = "Infantry";

				class NLD_NFPG_InfSentry
				{
					name = "Sentry";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "NLD_NFPG_GL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "NLD_NFPG_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_NFPG_InfTeam
				{
					name = "Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPG_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPG_Rifleman";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPG_AR";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPG_LAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_NFPG_InfSquad
				{
					name = "Squad";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPG_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPG_TL";
						rank = "CORPORAL";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPG_LAT";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPG_CLS";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class unit4
					{
						side = 1;
						vehicle="NLD_NFPG_AR";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class unit5
					{
						side = 1;
						vehicle="NLD_NFPG_AR";
						rank = "PRIVATE";
						position[] = {7.5,-7.5,0};
					};
					class unit6
					{
						side = 1;
						vehicle="NLD_NFPG_GL";
						rank = "PRIVATE";
						position[] = {-7.5,-7.5,0};
					};
					class unit7
					{
						side = 1;
						vehicle="NLD_NFPG_AMMO";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class NLD_NFPG_InfCmdr
				{
					name = "Platoon Command";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPG_OFF";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPG_SL";
						rank = "SERGEANT";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPG_CLS";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPG_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_NFPG_InfAtTeam
				{
					name = "Anti-armor Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPG_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPG_MAT";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPG_MAT";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPG_AMAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_NFPG_InfAaTeam
				{
					name = "Anti-air Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPG_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPG_AA";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPG_AA";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPG_AAA";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_NFPG_InfLMGTeam
				{
					name = "LMG Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPG_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPG_AR";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPG_AR";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPG_AAR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_NFPG_InfMMGTeam
				{
					name = "MMG Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPG_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPG_MMG";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPG_MMG";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPG_AMMG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
      };

      class Support
      {
        name = "Support";
        class NLD_NFPG_InfClsTeam
				{
					name = "Medic Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPG_TL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPG_CLS";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPG_CLS";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPG_CLS";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_NFPG_InfEngTeam
				{
					name = "Engineering Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPG_TL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPG_Engi";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPG_Engi";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPG_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_NFPG_InfExplTeam
				{
					name = "EOD Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPG_TL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPG_Expl";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPG_Expl";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPG_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
      };
    };

    class NLD_Units_JGL
    {
      name = "[NLD] Jungle";

      class Infantry
      {
        name = "Infantry";

				class NLD_JGL_InfSentry
				{
					name = "Sentry";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "NLD_JGL_GL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "NLD_JGL_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_JGL_InfTeam
				{
					name = "Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_JGL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_JGL_Rifleman";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_JGL_AR";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_JGL_LAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_JGL_InfSquad
				{
					name = "Squad";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_JGL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_JGL_TL";
						rank = "CORPORAL";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_JGL_LAT";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_JGL_CLS";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class unit4
					{
						side = 1;
						vehicle="NLD_JGL_AR";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class unit5
					{
						side = 1;
						vehicle="NLD_JGL_AR";
						rank = "PRIVATE";
						position[] = {7.5,-7.5,0};
					};
					class unit6
					{
						side = 1;
						vehicle="NLD_JGL_GL";
						rank = "PRIVATE";
						position[] = {-7.5,-7.5,0};
					};
					class unit7
					{
						side = 1;
						vehicle="NLD_JGL_AMMO";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class NLD_JGL_InfCmdr
				{
					name = "Platoon Command";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_JGL_OFF";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_JGL_SL";
						rank = "SERGEANT";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_JGL_CLS";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_JGL_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_JGL_InfAtTeam
				{
					name = "Anti-armor Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_JGL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_JGL_MAT";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_JGL_MAT";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_JGL_AMAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_JGL_InfAaTeam
				{
					name = "Anti-air Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_JGL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_JGL_AA";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_JGL_AA";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_JGL_AAA";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_JGL_InfLMGTeam
				{
					name = "LMG Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_JGL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_JGL_AR";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_JGL_AR";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_JGL_AAR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_JGL_InfMMGTeam
				{
					name = "MMG Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_JGL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_JGL_MMG";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_JGL_MMG";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_JGL_AMMG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
      };
      class Support
      {
        name = "Support";

        class NLD_JGL_InfClsTeam
				{
					name = "Medic Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_JGL_TL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_JGL_CLS";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_JGL_CLS";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_JGL_CLS";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_JGL_InfEngTeam
				{
					name = "Engineering Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_JGL_TL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_JGL_Engi";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_JGL_Engi";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_JGL_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_JGL_InfExplTeam
				{
					name = "EOD Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_JGL_TL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_JGL_Expl";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_JGL_Expl";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_JGL_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
      };
    };

    class NLD_Units_80s
    {
      name = "[NLD] 80s Units";

      class Infantry
      {
        name = "Infantry";
				class NLD_Units_80_InfSentry
				{
					name = "Sentry";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "NLD_Units_80_rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "NLD_Units_80_ENG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_Units_80_InfTeam
				{
					name = "Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_Units_80_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_Units_80_rifleman";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_Units_80_MMG";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_Units_80_LAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_Units_80_InfSquad
				{
					name = "Squad";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_Units_80_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_Units_80_SL";
						rank = "CORPORAL";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_Units_80_LAT";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_Units_80_CLS";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class unit4
					{
						side = 1;
						vehicle="NLD_Units_80_MMG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class unit5
					{
						side = 1;
						vehicle="NLD_Units_80_MMG";
						rank = "PRIVATE";
						position[] = {7.5,-7.5,0};
					};
					class unit6
					{
						side = 1;
						vehicle="NLD_Units_80_grenadier";
						rank = "PRIVATE";
						position[] = {-7.5,-7.5,0};
					};
					class unit7
					{
						side = 1;
						vehicle="NLD_Units_80_ENG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class NLD_Units_80_InfCmdr
				{
					name = "Platoon Command";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_Units_80_TL";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_Units_80_SL";
						rank = "SERGEANT";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_Units_80_CLS";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_Units_80_RS";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_Units_80_InfAtTeam
				{
					name = "Anti-armor Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_Units_80_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_Units_80_MAT";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_Units_80_MAT";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_Units_80_LAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_Units_80_InfAaTeam
				{
					name = "Anti-air Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_Units_80_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_Units_80_AA";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_Units_80_AA";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_Units_80_AA";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_Units_80_InfMMGTeam
				{
					name = "MMG Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_Units_80_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_Units_80_MMG";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_Units_80_MMG";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_Units_80_MMG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
    };

    class NLD_Units_SF
    {
      name = "[NLD] Special Forces (Black)";
      class SpecOps
      {
        name = "Special Forces";
        class NLD_SF_InfReconTeam
  			{
  				name = "Recon Team";
  				side = 1;
  				faction = "NLD_Units";
  				rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_recon.paa";
  				class unit0
  				{
  					side = 1;
  					vehicle = "NLD_SF_TL";
  					faction = "NLD_Units";
  					rank = "LIEUTENANT";
  					position[] = {0,0,0};
  				};
  				class unit1
  				{
  					side = 1;
  					vehicle = "NLD_SF_TL";
  					faction = "NLD_Units";
  					rank = "SERGEANT";
  					position[] = {2.5,-2.5,0};
  				};
  				class unit2
  				{
  					side = 1;
  					vehicle = "NLD_SF_MEDIC";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-2.5,-2.5,0};
  				};
  				class unit3
  				{
  					side = 1;
  					vehicle = "NLD_SF_AT";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {5,-5,0};
  				};
  				class unit4
  				{
  					side = 1;
  					vehicle = "NLD_SF_TL";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-5,-5,0};
  				};
  				class unit5
  				{
  					side = 1;
  					vehicle = "NLD_SF_AR";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {7.5,-7.5,0};
  				};
  				class unit6
  				{
  					side = 1;
  					vehicle = "NLD_SF_COMSPEC";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-7.5,-7.5,0};
  				};
  				class unit7
  				{
  					side = 1;
  					vehicle = "NLD_SF_DEMSPEC";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {10,-10,0};
  				};
  			};
  			class NLD_SF_InfReconPatrol
  			{
  				name = "Recon Patrol";
  				side = 1;
  				faction = "NLD_Units";
  				rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_recon.paa";
  				class unit0
  				{
  					side = 1;
  					vehicle = "NLD_SF_TL";
  					faction = "NLD_Units";
  					rank = "SERGEANT";
  					position[] = {0,0,0};
  				};
  				class unit1
  				{
  					side = 1;
  					vehicle = "NLD_SF_MEDIC";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {2.5,-2.5,0};
  				};
  				class unit2
  				{
  					side = 1;
  					vehicle = "NLD_SF_AT";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-2.5,-2.5,0};
  				};
  				class unit3
  				{
  					side = 1;
  					vehicle = "NLD_SF_AR";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {5,-5,0};
  				};
  			};
  			class NLD_SF_InfReconSentry
  			{
  				name = "Recon Sentry";
  				side = 1;
  				faction = "NLD_Units";
  				rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_recon.paa";
  				class unit0
  				{
  					side = 1;
  					vehicle = "NLD_SF_Operator";
  					faction = "NLD_Units";
  					rank = "SERGEANT";
  					position[] = {0,0,0};
  				};
  				class unit1
  				{
  					side = 1;
  					vehicle = "NLD_SF_AR";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {2.5,-2.5,0};
  				};
  			};
      };
    };

    class NLD_Units_MTP
    {
      name = "[NLD] Special Forces (MTP)";
      class SpecOps
      {
        name = "Special Forces";
        class NLD_MTP_InfReconTeam
  			{
  				name = "Recon Team";
  				side = 1;
  				faction = "NLD_Units";
  				rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_recon.paa";
  				class unit0
  				{
  					side = 1;
  					vehicle = "NLD_MTP_TL";
  					faction = "NLD_Units";
  					rank = "LIEUTENANT";
  					position[] = {0,0,0};
  				};
  				class unit1
  				{
  					side = 1;
  					vehicle = "NLD_MTP_TL";
  					faction = "NLD_Units";
  					rank = "SERGEANT";
  					position[] = {2.5,-2.5,0};
  				};
  				class unit2
  				{
  					side = 1;
  					vehicle = "NLD_MTP_MEDIC";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-2.5,-2.5,0};
  				};
  				class unit3
  				{
  					side = 1;
  					vehicle = "NLD_MTP_AT";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {5,-5,0};
  				};
  				class unit4
  				{
  					side = 1;
  					vehicle = "NLD_MTP_TL";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-5,-5,0};
  				};
  				class unit5
  				{
  					side = 1;
  					vehicle = "NLD_MTP_AR";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {7.5,-7.5,0};
  				};
  				class unit6
  				{
  					side = 1;
  					vehicle = "NLD_MTP_COMSPEC";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-7.5,-7.5,0};
  				};
  				class unit7
  				{
  					side = 1;
  					vehicle = "NLD_MTP_DEMSPEC";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {10,-10,0};
  				};
  			};
  			class NLD_MTP_InfReconPatrol
  			{
  				name = "Recon Patrol";
  				side = 1;
  				faction = "NLD_Units";
  				rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_recon.paa";
  				class unit0
  				{
  					side = 1;
  					vehicle = "NLD_MTP_TL";
  					faction = "NLD_Units";
  					rank = "SERGEANT";
  					position[] = {0,0,0};
  				};
  				class unit1
  				{
  					side = 1;
  					vehicle = "NLD_MTP_MEDIC";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {2.5,-2.5,0};
  				};
  				class unit2
  				{
  					side = 1;
  					vehicle = "NLD_MTP_AT";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-2.5,-2.5,0};
  				};
  				class unit3
  				{
  					side = 1;
  					vehicle = "NLD_MTP_AR";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {5,-5,0};
  				};
  			};
  			class NLD_MTP_InfReconSentry
  			{
  				name = "Recon Sentry";
  				side = 1;
  				faction = "NLD_Units";
  				rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_recon.paa";
  				class unit0
  				{
  					side = 1;
  					vehicle = "NLD_MTP_Operator";
  					faction = "NLD_Units";
  					rank = "SERGEANT";
  					position[] = {0,0,0};
  				};
  				class unit1
  				{
  					side = 1;
  					vehicle = "NLD_MTP_AR";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {2.5,-2.5,0};
  				};
  			};
      };
    };

    // Koninklijke Mariniers
    class NLD_Units_KM
    {
      name = "[NLD] Special Forces (KM)";
      class SpecOps
      {
        name = "Special Forces";
        class NLD_KM_InfReconTeam
  			{
  				name = "Recon Team";
  				side = 1;
  				faction = "NLD_Units";
  				rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_recon.paa";
  				class unit0
  				{
  					side = 1;
  					vehicle = "NLD_KM_TL";
  					faction = "NLD_Units";
  					rank = "LIEUTENANT";
  					position[] = {0,0,0};
  				};
  				class unit1
  				{
  					side = 1;
  					vehicle = "NLD_KM_TL";
  					faction = "NLD_Units";
  					rank = "SERGEANT";
  					position[] = {2.5,-2.5,0};
  				};
  				class unit2
  				{
  					side = 1;
  					vehicle = "NLD_KM_MEDIC";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-2.5,-2.5,0};
  				};
  				class unit3
  				{
  					side = 1;
  					vehicle = "NLD_KM_AT";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {5,-5,0};
  				};
  				class unit4
  				{
  					side = 1;
  					vehicle = "NLD_KM_TL";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-5,-5,0};
  				};
  				class unit5
  				{
  					side = 1;
  					vehicle = "NLD_KM_AR";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {7.5,-7.5,0};
  				};
  				class unit6
  				{
  					side = 1;
  					vehicle = "NLD_KM_COMSPEC";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-7.5,-7.5,0};
  				};
  				class unit7
  				{
  					side = 1;
  					vehicle = "NLD_KM_DEMSPEC";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {10,-10,0};
  				};
  			};
  			class NLD_KM_InfReconPatrol
  			{
  				name = "Recon Patrol";
  				side = 1;
  				faction = "NLD_Units";
  				rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_recon.paa";
  				class unit0
  				{
  					side = 1;
  					vehicle = "NLD_KM_TL";
  					faction = "NLD_Units";
  					rank = "SERGEANT";
  					position[] = {0,0,0};
  				};
  				class unit1
  				{
  					side = 1;
  					vehicle = "NLD_KM_MEDIC";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {2.5,-2.5,0};
  				};
  				class unit2
  				{
  					side = 1;
  					vehicle = "NLD_KM_AT";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-2.5,-2.5,0};
  				};
  				class unit3
  				{
  					side = 1;
  					vehicle = "NLD_KM_AR";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {5,-5,0};
  				};
  			};
  			class NLD_KM_InfReconSentry
  			{
  				name = "Recon Sentry";
  				side = 1;
  				faction = "NLD_Units";
  				rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_recon.paa";
  				class unit0
  				{
  					side = 1;
  					vehicle = "NLD_KM_Operator";
  					faction = "NLD_Units";
  					rank = "SERGEANT";
  					position[] = {0,0,0};
  				};
  				class unit1
  				{
  					side = 1;
  					vehicle = "NLD_KM_AR";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {2.5,-2.5,0};
  				};
  			};
      };
    };

  }; // WEST
}; // cfgGroups

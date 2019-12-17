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

      class Mechanized
			{
				name = "Mechanized";

				class NLD_WLD_Boxerinf_m2
				{
					name = "Boxer M2 engineer group";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					icon = "\a3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_Boxer_m2";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_SL";
						rank = "LIEUTENANT";
						position[] = {-12.5,-12.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_TL";
						rank = "SERGEANT";
						position[] = {12.5,-12.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_AR";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class unit4
					{
						side = 1;
						vehicle="NLD_WLD_ENGI";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class unit5
					{
						side = 1;
						vehicle="NLD_WLD_ENGI";
						rank = "PRIVATE";
						position[] = {-17.5,-17.5,0};
					};
					class unit6
					{
						side = 1;
						vehicle="NLD_WLD_EXPL";
						rank = "PRIVATE";
						position[] = {17.5,-17.5,0};
					};
					class unit7
					{
						side = 1;
						vehicle="NLD_WLD_EXPL";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
					class unit8
					{
						side = 1;
						vehicle="NLD_WLD_LAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				
				class NLD_WLD_Boxerinf_mk19
				{
					name = "Boxer MK19 engineer group";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					icon = "\a3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_Boxer_mk19";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_SL";
						rank = "LIEUTENANT";
						position[] = {-12.5,-12.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_TL";
						rank = "SERGEANT";
						position[] = {12.5,-12.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_AR";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class unit4
					{
						side = 1;
						vehicle="NLD_WLD_ENGI";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class unit5
					{
						side = 1;
						vehicle="NLD_WLD_ENGI";
						rank = "PRIVATE";
						position[] = {-17.5,-17.5,0};
					};
					class unit6
					{
						side = 1;
						vehicle="NLD_WLD_EXPL";
						rank = "PRIVATE";
						position[] = {17.5,-17.5,0};
					};
					class unit7
					{
						side = 1;
						vehicle="NLD_WLD_EXPL";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
					class unit8
					{
						side = 1;
						vehicle="NLD_WLD_LAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
			
				
				class NLD_WLD_Boxerinf_amb
				{
					name = "Boxer medical group";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					icon = "\a3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_Boxer_amb";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_SL";
						rank = "LIEUTENANT";
						position[] = {-12.5,-12.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_TL";
						rank = "SERGEANT";
						position[] = {12.5,-12.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_AR";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class unit4
					{
						side = 1;
						vehicle="NLD_WLD_CLS";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class unit5
					{
						side = 1;
						vehicle="NLD_WLD_CLS";
						rank = "PRIVATE";
						position[] = {-17.5,-17.5,0};
					};
				};
				
				class NLD_WLD_YPR_inf
				{
					name = "YPR-765 Rifle Group";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					icon = "\a3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_YPR_765";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_SL";
						rank = "LIEUTENANT";
						position[] = {-12.5,-12.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_TL";
						rank = "SERGEANT";
						position[] = {12.5,-12.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_AR";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class unit4
					{
						side = 1;
						vehicle="NLD_WLD_GL";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class unit5
					{
						side = 1;
						vehicle="NLD_WLD_CLS";
						rank = "PRIVATE";
						position[] = {-17.5,-17.5,0};
					};
					class unit6
					{
						side = 1;
						vehicle="NLD_WLD_AR";
						rank = "PRIVATE";
						position[] = {17.5,-17.5,0};
					};
					class unit7
					{
						side = 1;
						vehicle="NLD_WLD_LAT";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
					class unit8
					{
						side = 1;
						vehicle="NLD_WLD_Ammo";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				
				class NLD_WLD_CV90inf
				{
					name = "CV90 rifle group";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					icon = "\a3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_CV9035NL";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_SL";
						rank = "LIEUTENANT";
						position[] = {-12.5,-12.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_TL";
						rank = "SERGEANT";
						position[] = {12.5,-12.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_AR";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class unit4
					{
						side = 1;
						vehicle="NLD_WLD_GL";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class unit5
					{
						side = 1;
						vehicle="NLD_WLD_CLS";
						rank = "PRIVATE";
						position[] = {-17.5,-17.5,0};
					};
					class unit6
					{
						side = 1;
						vehicle="NLD_WLD_AR";
						rank = "PRIVATE";
						position[] = {17.5,-17.5,0};
					};
					class unit7
					{
						side = 1;
						vehicle="NLD_WLD_LAT";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
					class unit8
					{
						side = 1;
						vehicle="NLD_WLD_Ammo";
						rank = "PRIVATE";
						position[] = {20,-20,0};
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
				
				class NLD_WLD_MLRSPlt_HE
				{
					name = "MLRS Platoon HE";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_art.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_MLRS_M270_HE";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_MLRS_M270_HE";
						rank = "LIEUTENANT";
						position[] = {-12.5,-12.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_MLRS_M270_HE";
						rank = "LIEUTENANT";
						position[] = {-25,-25,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_MLRS_M270_HE";
						rank = "LIEUTENANT";
						position[] = {-37.5,-37.5,0};
					};
				};

				class NLD_WLD_MLRSSection_HE
				{
					name = "MLRS Section HE";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_art.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_MLRS_M270_HE";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_MLRS_M270_HE";
						rank = "LIEUTENANT";
						position[] = {-12.5,-12.5,0};
					};
				};
				
				class NLD_WLD_MLRSPlt_DPICM
				{
					name = "MLRS Platoon DPICM";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_art.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_MLRS_M270_DPICM";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_MLRS_M270_DPICM";
						rank = "LIEUTENANT";
						position[] = {-12.5,-12.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_MLRS_M270_DPICM";
						rank = "LIEUTENANT";
						position[] = {-25,-25,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_MLRS_M270_DPICM";
						rank = "LIEUTENANT";
						position[] = {-37.5,-37.5,0};
					};
				};

				class NLD_WLD_MLRSSection_DPICM
				{
					name = "MLRS Section DPICM";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_art.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_MLRS_M270_DPICM";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_MLRS_M270_DPICM";
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
	  
		class Mechanized
		{
        name = "Mechanized";
	  
				class NLD_WLD_CV90inf
				{
					name = "Bushmaster rifle group";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					icon = "\a3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_Bushmaster_armed";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_DST_SL";
						rank = "LIEUTENANT";
						position[] = {-12.5,-12.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_DST_TL";
						rank = "SERGEANT";
						position[] = {12.5,-12.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_DST_AR";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class unit4
					{
						side = 1;
						vehicle="NLD_DST_GL";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class unit5
					{
						side = 1;
						vehicle="NLD_DST_CLS";
						rank = "PRIVATE";
						position[] = {-17.5,-17.5,0};
					};
					class unit6
					{
						side = 1;
						vehicle="NLD_DST_AR";
						rank = "PRIVATE";
						position[] = {17.5,-17.5,0};
					};
					class unit7
					{
						side = 1;
						vehicle="NLD_DST_LAT";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
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
      name = "[NLD] NFP-Arctic";

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

    class NLD_Units_KMI
    {
      name = "[NLD] Korps Mariniers";

      class Infantry
      {
        name = "Infantry";
				class NLD_KMI_InfSentry
				{
					name = "Sentry";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "NLD_KMI_GL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "NLD_KMI_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_KMI_InfTeam
				{
					name = "Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_KMI_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_KMI_Rifleman";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_KMI_AR";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_KMI_LAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_KMI_InfSquad
				{
					name = "Squad";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_KMI_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_KMI_TL";
						rank = "CORPORAL";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_KMI_LAT";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_KMI_CLS";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class unit4
					{
						side = 1;
						vehicle="NLD_KMI_AR";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class unit5
					{
						side = 1;
						vehicle="NLD_KMI_AR";
						rank = "PRIVATE";
						position[] = {7.5,-7.5,0};
					};
					class unit6
					{
						side = 1;
						vehicle="NLD_KMI_GL";
						rank = "PRIVATE";
						position[] = {-7.5,-7.5,0};
					};
					class unit7
					{
						side = 1;
						vehicle="NLD_KMI_AMMO";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class NLD_KMI_InfCmdr
				{
					name = "Platoon Command";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_KMI_OFF";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_KMI_SL";
						rank = "SERGEANT";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_KMI_CLS";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_KMI_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_KMI_InfAtTeam
				{
					name = "Anti-armor Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_KMI_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_KMI_MAT";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_KMI_MAT";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_KMI_AMAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_KMI_InfAaTeam
				{
					name = "Anti-air Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_KMI_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_KMI_AA";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_KMI_AA";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_KMI_AAA";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_KMI_InfLMGTeam
				{
					name = "LMG Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_KMI_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_KMI_AR";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_KMI_AR";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_KMI_AAR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_KMI_InfMMGTeam
				{
					name = "MMG Team";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class unit0
					{
						side = 1;
						vehicle="NLD_KMI_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_KMI_MMG";
						rank = "PRIVATE";
						position[] = {2.5,-2.5,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_KMI_MMG";
						rank = "PRIVATE";
						position[] = {-2.5,-2.5,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_KMI_AMMG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
      };
      class Support
      {
        name = "Support";

        class NLD_KMI_InfClsTeam
        {
          name = "Medic Team";
          side = 1;
          faction = "NLD_Units";
          rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
          class unit0
          {
            side = 1;
            vehicle="NLD_KMI_TL";
            rank = "CORPORAL";
            position[] = {0,0,0};
          };
          class unit1
          {
            side = 1;
            vehicle="NLD_KMI_CLS";
            rank = "PRIVATE";
            position[] = {2.5,-2.5,0};
          };
          class unit2
          {
            side = 1;
            vehicle="NLD_KMI_CLS";
            rank = "PRIVATE";
            position[] = {-2.5,-2.5,0};
          };
          class unit3
          {
            side = 1;
            vehicle="NLD_KMI_CLS";
            rank = "PRIVATE";
            position[] = {5,-5,0};
          };
        };
        class NLD_KMI_InfEngTeam
        {
          name = "Engineering Team";
          side = 1;
          faction = "NLD_Units";
          rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
          class unit0
          {
            side = 1;
            vehicle="NLD_KMI_TL";
            rank = "CORPORAL";
            position[] = {0,0,0};
          };
          class unit1
          {
            side = 1;
            vehicle="NLD_KMI_Engi";
            rank = "PRIVATE";
            position[] = {2.5,-2.5,0};
          };
          class unit2
          {
            side = 1;
            vehicle="NLD_KMI_Engi";
            rank = "PRIVATE";
            position[] = {-2.5,-2.5,0};
          };
          class unit3
          {
            side = 1;
            vehicle="NLD_KMI_Rifleman";
            rank = "PRIVATE";
            position[] = {5,-5,0};
          };
        };
        class NLD_KMI_InfExplTeam
        {
          name = "EOD Team";
          side = 1;
          faction = "NLD_Units";
          rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
          class unit0
          {
            side = 1;
            vehicle="NLD_KMI_TL";
            rank = "CORPORAL";
            position[] = {0,0,0};
          };
          class unit1
          {
            side = 1;
            vehicle="NLD_KMI_Expl";
            rank = "PRIVATE";
            position[] = {2.5,-2.5,0};
          };
          class unit2
          {
            side = 1;
            vehicle="NLD_KMI_Expl";
            rank = "PRIVATE";
            position[] = {-2.5,-2.5,0};
          };
          class unit3
          {
            side = 1;
            vehicle="NLD_KMI_Rifleman";
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

    class NLD_Units_SF
    {
      name = "[NLD] MARSOF Divers";
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
      name = "[NLD] Korps Commando Troepen";
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
      name = "[NLD] MARSOF";
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
	
	// DSI
   class NLD_Units_DSI
   {
      name = "[NLD] DSI";
      class SpecOps
      {
        name = "DSI";
        class NLD_DSI_Heavy_MRAP
	    {
  				name = "Bearcat heavy infantry group";
  				side = 1;
  				faction = "NLD_Units";
  				rarityGroup = 0.3;
				icon = "\a3\ui_f\data\map\markers\nato\b_motor_inf.paa";
  				class unit0
  				{
  					side = 1;
  					vehicle = "NLD_DSI_TL";
  					faction = "NLD_Units";
  					rank = "LIEUTENANT";
  					position[] = {0,0,0};
  				};
  				class unit1
  				{
  					side = 1;
  					vehicle = "NLD_DSI_Medic";
  					faction = "NLD_Units";
  					rank = "SERGEANT";
  					position[] = {2.5,-2.5,0};
  				};
  				class unit2
  				{
  					side = 1;
  					vehicle = "NLD_DSI_MG";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-2.5,-2.5,0};
  				};
				class unit3
  				{
  					side = 1;
  					vehicle = "NLD_DSI_Bearcat";
  					faction = "NLD_Units";
  					rank = "PRIVATE";
  					position[] = {5,-5,0};
  				};
			};	
			class NLD_DSI_Van_attacksqd
			{
  				name = "Police Van Squad";
  				side = 1;
  				faction = "NLD_Units";
  				rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_motor_inf.paa";
  				class unit0
  				{
  					side = 1;
  					vehicle = "NLD_DSI_TL";
  					faction = "NLD_Units";
  					rank = "SERGEANT";
  					position[] = {0,0,0};
  				};
  				class unit1
  				{
  					side = 1;
  					vehicle = "NLD_DSI_TL";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {2.5,-2.5,0};
  				};
  				class unit2
  				{
  					side = 1;
  					vehicle = "NLD_DSI_Breach";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-2.5,-2.5,0};
  				};
  				class unit3
  				{
  					side = 1;
  					vehicle = "NLD_DSI_Medic";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {5,-5,0};
  				};
				class unit4
  				{
  					side = 1;
  					vehicle = "NLD_DSI_MG";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-5,-5,0};
  				};
				class unit5
  				{
  					side = 1;
  					vehicle = "NLD_DSI_AT";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {7.5,-7.5,0};
  				};
				class unit6
  				{
  					side = 1;
  					vehicle = "NLD_DSI_assault_mp5";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-7.5,-7.5,0};
  				};
				class unit7
  				{
  					side = 1;
  					vehicle = "NLD_DSI_assault_mp5";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {10,-10,0};
  				};
				class unit8
  				{
  					side = 1;
  					vehicle = "NLD_DSI_assault";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-10,-10,0};
  				};
				class unit9
  				{
  					side = 1;
  					vehicle = "NLD_DSI_SLA";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {12.5,-12.5,0};
  				};
				class unit10
  				{
  					side = 1;
  					vehicle = "NLD_DSI_EOD";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-12.5,-12.5,0};
  				};
				class unit11
  				{
  					side = 1;
  					vehicle = "NLD_VWCrafter";
  					faction = "NLD_Units";
  					rank = "Private";
  					position[] = {15,-15,0};
  				};
  			};
			class NLD_DSI_BMW_ATteam
			{
  				name = "BMW AT Team";
  				side = 1;
  				faction = "NLD_Units";
  				rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_motor_inf.paa";
  				class unit0
  				{
  					side = 1;
  					vehicle = "NLD_AT_TL";
  					faction = "NLD_Units";
  					rank = "SERGEANT";
  					position[] = {0,0,0};
  				};
  				class unit1
  				{
  					side = 1;
  					vehicle = "NLD_AT_Breach";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {2.5,-2.5,0};
  				};
  				class unit2
  				{
  					side = 1;
  					vehicle = "NLD_AT_assault_p90";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-2.5,-2.5,0};
  				};
  				class unit3
  				{
  					side = 1;
  					vehicle = "NLD_DSI_BMW";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {5,-5,0};
  				};
			};
			
			class NLD_DSI_ATteam
			{
  				name = "AT Team";
  				side = 1;
  				faction = "NLD_Units";
  				rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
  				class unit0
  				{
  					side = 1;
  					vehicle = "NLD_AT_TL";
  					faction = "NLD_Units";
  					rank = "SERGEANT";
  					position[] = {0,0,0};
  				};
  				class unit1
  				{
  					side = 1;
  					vehicle = "NLD_AT_Breach";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {2.5,-2.5,0};
  				};
  				class unit2
  				{
  					side = 1;
  					vehicle = "NLD_AT_assault";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-2.5,-2.5,0};
  				};
  				class unit3
  				{
  					side = 1;
  					vehicle = "NLD_AT_Medic";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {5,-5,0};
  				};
			};	
			class NLD_DSI_team
			{
  				name = "DSI Team";
  				side = 1;
  				faction = "NLD_Units";
  				rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
  				class unit0
  				{
  					side = 1;
  					vehicle = "NLD_DSI_TL";
  					faction = "NLD_Units";
  					rank = "SERGEANT";
  					position[] = {0,0,0};
  				};
  				class unit1
  				{
  					side = 1;
  					vehicle = "NLD_DSI_Breach";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {2.5,-2.5,0};
  				};
  				class unit2
  				{
  					side = 1;
  					vehicle = "NLD_DSI_assault";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-2.5,-2.5,0};
  				};
  				class unit3
  				{
  					side = 1;
  					vehicle = "NLD_DSI_Medic";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {5,-5,0};
  				};
			};	
			class NLD_DSI_sniperteam
			{
  				name = "DSI SniperTeam";
  				side = 1;
  				faction = "NLD_Units";
  				rarityGroup = 0.3;
          icon = "\a3\ui_f\data\map\markers\nato\b_inf.paa";
  				class unit0
  				{
  					side = 1;
  					vehicle = "NLD_DSI_SLA";
  					faction = "NLD_Units";
  					rank = "SERGEANT";
  					position[] = {0,0,0};
  				};
  				class unit1
  				{
  					side = 1;
  					vehicle = "NLD_DSI_HSLA";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {2.5,-2.5,0};
  				};
			};	
  			class NLD_AT_CBRN
  			{
  				name = "AT CBRN Team";
  				side = 1;
  				faction = "NLD_Units";
  				rarityGroup = 0.3;
				icon = "\a3\ui_f\data\map\markers\nato\b_support.paa";
  				class unit0
  				{
  					side = 1;
  					vehicle = "NLD_AT_CBRN";
  					faction = "NLD_Units";
  					rank = "SERGEANT";
  					position[] = {0,0,0};
  				};
  				class unit1
  				{
  					side = 1;
  					vehicle = "NLD_AT_CBRN";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {2.5,-2.5,0};
  				};
				class unit2
  				{
  					side = 1;
  					vehicle = "NLD_AT_CBRN";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {-2.5,-2.5,0};
  				};
				class unit3
  				{
  					side = 1;
  					vehicle = "NLD_AT_CBRN";
  					faction = "NLD_Units";
  					rank = "CORPORAL";
  					position[] = {5,-5,0};
  				};
  			};
       };
    };
  };// WEST
}; // cfgGroups

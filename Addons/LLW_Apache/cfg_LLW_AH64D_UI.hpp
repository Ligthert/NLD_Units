class RscControlsGroup;
class RscText;
class RangeText: RscText {};
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
		idd=300;
		controls[]=
		{
			//"WeaponInfoControlsGroupRight",
			"CA_Zeroing",
			/*"CA_Speed",
			"CA_Alt",*/
			"CA_IGUI_elements_group",
			//"CA_Compass",
			"CA_VehicleToggles"
			//"CA_HMDs_Kimi_Autohover"
			//"CA_Radar"
		};
		class VScrollbar;
		class HScrollbar;
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc=170;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance: RscText
				{
					idc=151;
					style=2;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					//text="2456";
					x="24.78 * 		(0.01875 * SafezoneH)";
					y="30.88 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				
				/*class CA_BallRange: RscOpticsValue
				{
					idc = 164;
					shadow=0;
					x = 0.626;
					y = 0.908;
					w = 0.3;
				};
				class CA_BalisticComputer: RscOpticsText
				{
					idc = 165;
					shadow=0;
					x = 0.594;
					y = 0.908;
					text = "*";
					sizeEx = 0.06;
				};*/
				
				/*class Target_unit: RscText
				{
					idc=181;
					style=2;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text = "$STR_A3_RscDisplayAVTerminal_AVT_Value_Target";
					x="24.78 * 		(0.01875 * SafezoneH)";
					y="28.88 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};*/
				
				//181 target unit
				//174 arty time
				/*class CA_Autohover: RscText
				{
					idc=157;
					style=2;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					//text="2456";
					x="24.78 * 		(0.01875 * SafezoneH)";
					y="34.88 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_ballenabled: RscText
				{
					idc=159;
					style=2;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					//text="2456";
					x="38.78 * 		(0.01875 * SafezoneH)";
					y="25.88 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_ballrange: RscText
				{
					idc=164;
					style=2;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					//text="2456";
					x="38.78 * 		(0.01875 * SafezoneH)";
					y="27.88 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_ballcomp: RscText
				{
					idc=165;
					style=2;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					//text="2456";
					x="38.78 * 		(0.01875 * SafezoneH)";
					y="29.88 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};*/
				class CA_Speed: RangeText
				{
					//idc=530;
					idc = 188; // metric=188, imp=606?
					style=2;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text = "120";
					x="14.78 * 		(0.01875 * SafezoneH)";
					y="30.88 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Alt: RangeText
				{
					//idc=507;
					idc = 189; // metric = 189, imp=616?
					style=2;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text = "3825";
					x="34.78 * 		(0.01875 * SafezoneH)";
					y="30.88 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc=152;
					style=0;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="VIS";
					x="12.58 * 		(0.01875 * SafezoneH)";
					y="8 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc=153;
					style=0;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="BHOT";
					x="15.78 * 		(0.01875 * SafezoneH)";
					//y="15.34 * 		(0.025 * SafezoneH)";
					y="8 * 		(0.025 * SafezoneH)";
					w="4.5 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				/*class TextGrid: RangeText
				{
					idc=1005;
					text="LL/";
					font="EtelkaMonospacePro";
					style=2;
					//sizeEx="0.0295*SafezoneH";
					shadow=0;
					x="16.5 * 		(0.01875 * SafezoneH)";
					y="32.8 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};*/
				class ValueGrid: RangeText
				{
					idc=172; //6-digit
					//idc=504; //arty
					//text="38295461";
					font="EtelkaMonospacePro";
					style=2;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					x="12.20 * 		(0.01875 * SafezoneH)";
					y="3.5 * 		(0.025 * SafezoneH)";
					w="6 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				
				/*class TextWeapon: RscText
				{
					idc=118;
					//text="38295461";
					font="EtelkaMonospacePro";
					//colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					x="33 * 		(0.01875 * SafezoneH)";
					y="32.8 * 		(0.025 * SafezoneH)";
					w="6 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class TextAmmo: RscText
				{
					idc=184;
					//text="20:28:35";
					font="EtelkaMonospacePro";
					//colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					x="33 * 		(0.01875 * SafezoneH)";
					y="34.8 * 		(0.025 * SafezoneH)";
					w="6 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};*/
				
				/*class TextTime: RangeText
				{
					idc=1010;
					text="TIME[UTC]:";
					font="EtelkaMonospacePro";
					style=2;
					//sizeEx="0.0295*SafezoneH";
					shadow=0;
					x="14 * 		(0.01875 * SafezoneH)";
					y="34.8 * 		(0.025 * SafezoneH)";
					w="6 * 		(0.01875 * SafezoneH)";
					h="1.0 * 		(0.025 * SafezoneH)";
				};*/
				
				class TextTADS: RangeText
				{
					idc=1010;
					text="TADS";
					font="EtelkaMonospacePro";
					style=2;
					//sizeEx="0.0295*SafezoneH";
					shadow=0;
					x="12.30 * 		(0.01875 * SafezoneH)";
					y="5 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				class ValueTime: RangeText
				{
					idc=190;
					text="20:28:35";
					font="EtelkaMonospacePro";
					style=2;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					x="12.1 * 		(0.01875 * SafezoneH)";
					y="6.5 * 		(0.025 * SafezoneH)";
					w="6 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					idc=158;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="\LLW_Apache\Data\Apache_LaserOn.paa";
					x="20.45 * 		(0.01875 * SafezoneH)";
					y="14.1 * 		(0.025 * SafezoneH)";
					w="12.5 * 		(0.01875 * SafezoneH)";
					h="12 * 		(0.025 * SafezoneH)";
				};
				
				/*class Gunsight: RscText
				{
					idc=170;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					//colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					//text="\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					//text="A3\weapons_f\acc\Data\reticle_mk6_outofrange_CA.paa";
					text="\Kimi_UI\data\Apache_Gunsight.paa";
					//x="31.1 * 		(0.01875 * SafezoneH)";
					//y="12.85 * 		(0.025 * SafezoneH)";
					//w="3.5 * 		(0.01875 * SafezoneH)";
					//h="1.5 * 		(0.025 * SafezoneH)";
					x="20.45 * 		(0.01875 * SafezoneH)";
					y="14 * 		(0.025 * SafezoneH)";
					w="12.5 * 		(0.01875 * SafezoneH)";
					h="12 * 		(0.025 * SafezoneH)";
				};*/
				
				class CA_Heading: RscText
				{
					idc=156;
					style=0;
					sizeEx="0.038*SafezoneH";
					//colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="023";
					x="24.83 * 		(0.01875 * SafezoneH)";
					y="6 * 		(0.025 * SafezoneH)";
					w="4 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
				
				/*class CA_Compass: RscOpticsText
				{
					idc = 155;
					x = 0;
					y = 0.7;
					w = 0.3;
					h = 0.05;
				};*/
				
				/*class CA_Autohover: RscOpticsText
				{
					idc = 157;
					x = 0.664;
					y = 0.248;
					font="EtelkaMonospacePro";
					style=2;
					sizeEx="0.0295*SafezoneH";
					shadow=0;
					text = "ATT HOLD";
				};*/
				
				/*class CA_ValueReload: RscIGProgress
				{
					idc = 154;
					colorBar[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",0.25};
					colorFrame[] = {0,0,0,0};
					style = 0;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Weapon: RscText
				{
					idc = 118;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					style = 1;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_ModeTexture: RscPicture
				{
					idc = 187;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_Mode: RscText
				{
					idc = 149;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					y = -1;
					x = "-5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_AmmoCount: RscText
				{
					idc = 184;
					style = 1;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					x = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_MagCount: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					idc = 185;
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_AmmoType: RscText
				{
					idc = 155;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GrenadeType: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					style = 2;
					idc = 152;
					x = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GrenadeCount: RscText
				{
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					style = 1;
					idc = 151;
					x = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GunnerWeapon: RscText
				{
					idc = 150;
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
					colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
					style = 1;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				*/
			};
		};
	};
	class Rsc_LLW_AH64D_UI_01: RscUnitInfo
	{
		controls[]=
		{
			"WeaponInfoControlsGroupRight",
			//"CA_BackgroundVehicle",
			//"CA_BackgroundVehicleTitle",
			//"CA_BackgroundVehicleTitleDark",
			//"CA_BackgroundFuel",
			//"CA_Vehicle",
			//"CA_VehicleRole",
			"CA_HitZones",
			//"CA_SpeedBackground",
			//"CA_SpeedUnits",
			//"CA_Speed",
			//"CA_ValueFuel",
			//"CA_AltBackground",
			//"CA_AltUnits",
			//"CA_Alt",
			"CA_TextFlaresMode",
			"CA_TextFlares",
			//"CA_Stabilize",
			//"CA_HMDs_Kimi_Autohover",
			"CA_VehicleToggles",
			//"CA_Radar"
		};
	};
};
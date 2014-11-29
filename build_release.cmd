REM @echo off

REM First, the great cleanup
RD /S /Q C:\BUILD\@NLD_Units
DEL /S /Q C:\BUILD\*.7z


REM define some variables
SET MODN="@NLD_Units"
SET DEST="C:\BUILD\@NLD_Units"
SET AddB="C:\Program Files (x86)\Steam\SteamApps\common\Arma 3 Tools\AddonBuilder\AddonBuilder.exe"
SET CfgC="C:\Program Files (x86)\Steam\SteamApps\common\Arma 3 Tools\CfgConvert\CfgConvert.exe"


REM Create the subdir
MKDIR %DEST%


REM copy all the necesary files
xcopy *.* %DEST% /E


REM Delete what we didn't need
DEL /S /Q %DEST%\*.md %DEST%\*.cmd %DEST%\*.gitignore
RD /S /Q %DEST%\NLD_Units_Showcase.VR


REM Compile all the .cpps
%CfgC% -bin -dst C:\BUILD\\@NLD_Units\Addons\NLD_Grouped_Units\config.bin C:\BUILD\\@NLD_Units\Addons\NLD_Grouped_Units\config.cpp
%CfgC% -bin -dst C:\BUILD\\@NLD_Units\Addons\NLD_Infantry_Units\config.bin C:\BUILD\\@NLD_Units\Addons\NLD_Infantry_Units\config.cpp
%CfgC% -bin -dst C:\BUILD\\@NLD_Units\Addons\NLD_Infantry_Units\Units\Beret\config.bin C:\BUILD\\@NLD_Units\Addons\NLD_Infantry_Units\Units\Beret\config.cpp
%CfgC% -bin -dst C:\BUILD\\@NLD_Units\Addons\NLD_Vehicle_Units\Air\config.bin C:\BUILD\\@NLD_Units\Addons\NLD_Vehicle_Units\Air\config.cpp
%CfgC% -bin -dst C:\BUILD\\@NLD_Units\Addons\NLD_Vehicle_Units\Armored\config.bin C:\BUILD\\@NLD_Units\Addons\NLD_Vehicle_Units\Armored\config.cpp
%CfgC% -bin -dst C:\BUILD\\@NLD_Units\Addons\NLD_Vehicle_Units\Wheeled\config.bin C:\BUILD\\@NLD_Units\Addons\NLD_Vehicle_Units\Wheeled\config.cpp

%CfgC% -bin -dst C:\BUILD\\@NLD_Units\Addons\hafm_arma2_helis\config.bin C:\BUILD\\@NLD_Units\Addons\hafm_arma2_helis\config.cpp
%CfgC% -bin -dst C:\BUILD\\@NLD_Units\Addons\US_helos_HMDs_Kimi\config.bin C:\BUILD\\@NLD_Units\Addons\US_helos_HMDs_Kimi\config.cpp
%CfgC% -bin -dst C:\BUILD\\@NLD_Units\Addons\US_helos_Kimi_UI\config.bin C:\BUILD\\@NLD_Units\Addons\US_helos_Kimi_UI\config.cpp
%CfgC% -bin -dst C:\BUILD\\@NLD_Units\Addons\US_helos_Kimi_UI_OPT\config.bin C:\BUILD\\@NLD_Units\Addons\US_helos_Kimi_UI_OPT\config.cpp
%CfgC% -bin -dst C:\BUILD\\@NLD_Units\Addons\US_helos_weapons_Kimi\config.bin C:\BUILD\\@NLD_Units\Addons\US_helos_weapons_Kimi\config.cpp

DEL /S /Q C:\BUILD\\@NLD_Units\Addons\NLD_Grouped_Units\config.cpp
DEL /S /Q C:\BUILD\\@NLD_Units\Addons\NLD_Infantry_Units\config.cpp
DEL /S /Q C:\BUILD\\@NLD_Units\Addons\NLD_Infantry_Units\Units\Beret\config.cpp
DEL /S /Q C:\BUILD\\@NLD_Units\Addons\NLD_Vehicle_Units\Air\config.cpp
DEL /S /Q C:\BUILD\\@NLD_Units\Addons\NLD_Vehicle_Units\Armored\config.cpp
DEL /S /Q C:\BUILD\\@NLD_Units\Addons\NLD_Vehicle_Units\Wheeled\config.cpp

DEL /S /Q C:\BUILD\\@NLD_Units\Addons\hafm_arma2_helis\config.cpp
DEL /S /Q C:\BUILD\\@NLD_Units\Addons\US_helos_HMDs_Kimi\config.cpp
DEL /S /Q C:\BUILD\\@NLD_Units\Addons\US_helos_Kimi_UI\config.cpp
DEL /S /Q C:\BUILD\\@NLD_Units\Addons\US_helos_Kimi_UI_OPT\config.cpp
DEL /S /Q C:\BUILD\\@NLD_Units\Addons\US_helos_weapons_Kimi\config.cpp


REM Build all the directories and then remove them
FOR /F %%D in ('dir /b /o:n /ad C:\BUILD\@NLD_Units\Addons\') DO %AddB% "C:\BUILD\@NLD_Units\Addons\%%D" C:\BUILD\@NLD_Units\Addons\ -packonly -sign=C:\BUILD\@NLD_Units\Keys\LowTac.biprivatekey
FOR /F %%D in ('dir /b /o:n /ad C:\BUILD\@NLD_Units\Addons\') DO RD /S /Q "C:\BUILD\@NLD_Units\Addons\%%D"


REM Remove our private key
DEL /S /Q %DEST%\Keys\*.biprivatekey


REM Compress through 7zip
"C:\Program Files\7-Zip\7z" a -t7z C:\BUILD\@NLD_Units.7z C:\BUILD\@NLD_Units\


REM Remove our working directory
RD /S /Q C:\BUILD\@NLD_Units
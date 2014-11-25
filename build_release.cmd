@echo off

REM First, the great cleanup
RD /S /Q C:\BUILD\@NLD_Units


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


REM Build all the directories
REM %AddB% "C:\BUILD\@NLD_Units\Addons\NLD_Grouped_Units" C:\BUILD\@NLD_Units\Addons\ -packonly 

FOR /F %%D in ('dir /b /o:n /ad C:\BUILD\@NLD_Units\Addons\') DO %AddB% "C:\BUILD\@NLD_Units\Addons\%%D" C:\BUILD\@NLD_Units\Addons\ -packonly -sign=C:\BUILD\@NLD_Units\Keys\LowTac.biprivatekey
FOR /F %%D in ('dir /b /o:n /ad C:\BUILD\@NLD_Units\Addons\') DO RD /S /Q "C:\BUILD\@NLD_Units\Addons\%%D"


REM Remove our private key
DEL /S /Q %DEST%\Keys\*.biprivatekey


REM Compress through 7zip

"C:\Program Files\7-Zip\7z" a -t7z C:\BUILD\@NLD_Units.7z C:\BUILD\@NLD_Units\


# Remove our working directory
RD /S /Q C:\BUILD\@NLD_Units
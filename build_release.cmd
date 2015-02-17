@echo off

REM First, the great cleanup
RD /S /Q C:\BUILD\@NLD_Units
DEL /S /Q C:\BUILD\*.7z


REM define some variables
SET MODN="@NLD_Units"
SET DEST="C:\BUILD\@NLD_Units"


REM Create the subdir
MKDIR %DEST%


REM copy all the necesary files
xcopy *.* %DEST% /E


REM Delete what we didn't need
DEL /S /Q %DEST%\*.md %DEST%\*.cmd %DEST%\*.gitignore %DEST%\Addons\x_makepbo.bat %DEST%\.synqinfo
RD /S /Q %DEST%\NLD_Units_Showcase.VR


REM Build all the directories and then remove them
FOR /F %%D in ('dir /b /o:n /ad C:\BUILD\@NLD_Units\Addons\') DO "C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP "C:\BUILD\@NLD_Units\Addons\%%D"
FOR /F %%D in ('dir /b /o:n /ad C:\BUILD\@NLD_Units\Addons\') DO RD /S /Q "C:\BUILD\@NLD_Units\Addons\%%D"

move C:\BUILD\@NLD_Units\External_Addons\*.pbo C:\BUILD\@NLD_Units\Addons\
RD /S /Q C:\BUILD\@NLD_Units\External_Addons

REM Now sign the stuff
cd C:\BUILD\@NLD_Units\Addons\
FOR /F %%G in ('dir /b /o:n C:\BUILD\@NLD_Units\Addons\') do "C:\Users\Sacha Ligthert\Desktop\DSUtils2\DSSignFile.exe" C:\BUILD\@NLD_Units\Keys\LowTac.biprivatekey %%G

cd C:\

REM Remove our private key
DEL /S /Q %DEST%\Keys\*.biprivatekey


REM Compress through 7zip
"C:\Program Files\7-Zip\7z" a -t7z C:\BUILD\@NLD_Units.7z C:\BUILD\@NLD_Units\


REM Remove our working directory
RD /S /Q C:\BUILD\@NLD_Units
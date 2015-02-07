@echo off

REM cleanup
DEL /S /Q *.pbo

REM Compiling CUP
REM "C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP CUP_Weapons_Ammunition
REM "C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP CUP_Weapons_Compatibility
REM "C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP CUP_Weapons_Glock17
REM "C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP CUP_Weapons_M16
REM "C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP CUP_Weapons_WeaponsCore
REM "C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP CUP_Weapons_West_Attachments


REM Compiling @NLD_Units
"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP NLD_Grouped_Units

REM pause

"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP NLD_Infantry_Units

REM pause

"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP NLD_Vehicle_Units

REM pause

"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP NLD_Main

REM pause
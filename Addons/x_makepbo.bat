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
"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP NLD_Infantry_Units
"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP NLD_Vehicle_Units


REM Compiling US Helos
REM "C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP hafm_arma2_helis
REM "C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP US_helos_HMDs_Kimi
REM "C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP US_helos_Kimi_UI
REM "C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP US_helos_Kimi_UI_OPT
REM "C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP US_helos_weapons_Kimi


rem pause
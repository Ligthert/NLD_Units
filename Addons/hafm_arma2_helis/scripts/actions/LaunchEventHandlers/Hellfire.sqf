//hellfire
//Args: (0) Shooter, (1) Weapon, (2) Muzzle, (3) Mode, (4) Ammo, (5) Magazine, (6) Projectile
//Actions: Guides hellfire to target
//Set scope
private ["_shooter","_ammo","_projectile"];
//Get arguments
_shooter = _this select 0;
_ammo = _this select 4;
_projectile = _this select 6;

[_shooter,_ammo,_projectile] execVM "\RWCO_Main\scripts\actions\LaunchEventHandlers\Hellfire1.sqf";
/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
class CfgPatches
{
	class exile_server_config
	{
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};

// Lythium Loot Positions
#include "LythiumLootPos.cpp"
// Lythium Loot Positions

class CfgExileEscapeLootServer
{
	class LootTables
	{

		/*
			Percental Item Group Spawn Chances of CivillianLowerClass:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		CivillianLowerClass[] = {"Rangefinders", "ShittyUniforms", "ShittyScopes", "GoodMedical", "ShittyUniforms", "OkayHeadgear", "UsefulBackpacks", "ShittyMedical", "OkayUniforms", "ShittyHandGrenades", "OkayHeadgear", "GoodPistols", "UselessVests", "NiceWeapons", "OkayVests", "ShittyHandGrenades", "ShittyScopes", "GrenadeTube3Rnd", "ShittyScopes", "OkayBackpacks", "UselessUniforms", "ShittyBackpacks", "GoodPistols", "ShittyPistols", "OkayHeadgear", "GoodBackpacks", "UsefulWeapons", "ShittyPistols", "OkayWeapons", "UselessHeadgear", "ShittyVests", "UsefulBackpacks", "GoodMedical", "UsefulVests", "SmokeTube1Rnd", "UselessBackpacks", "UselessVests", "ShittyPistols", "UselessUniforms", "ShittyVests", "GrenadeTube1Rnd", "OkayScopes", "ShittyScopes", "NiceHeadgear", "UselessUniforms", "NiceMedical", "OkayWeapons", "ShittyWeapons", "Binoculars", "WeaponBipods", "OkayScopes", "UselessBackpacks", "ShittyPistols", "WeaponSupressors", "ShittyUniforms", "OkayWeapons", "UsefulScopes", "OkayBackpacks", "GoodWeapons", "GoodScopes", "ShittyPistols", "NightVisionGoggles", "ShittyPistols", "SmokeTube3Rnd", "UselessHeadgear", "UselessVests", "ShittyWeapons", "ShittyMedical", "SmokeGrenades", "ShittyPistols", "SmokeTube1Rnd", "UselessUniforms", "GoodHandGrenades", "ShittyHandGrenades", "UselessWeapons", "WeaponItems", "GoodPistols", "UselessWeapons", "ShittyBackpacks", "UsefulScopes", "UselessWeapons", "ShittyMedical", "GoodWeapons", "ShittyMedical", "GrenadeTube1Rnd", "GoodVests", "GoodHeadgear", "UselessHeadgear", "GoodPistols", "GoodHeadgear", "SmokeGrenades", "SmokeTube1Rnd", "OkayVests", "UselessHeadgear", "UselessBackpacks", "OkayUniforms", "UsefulScopes", "OkayScopes", "ShittyBackpacks", "UselessVests", "ShittyUniforms", "SmokeGrenades", "ShittyPistols", "GoodMedical", "NiceBackpacks", "UselessWeapons", "ShittyWeapons", "OkayScopes", "SmokeGrenades", "UsefulWeapons"};

		/*
			Percental Item Group Spawn Chances of CivillianUpperClass:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		CivillianUpperClass[] = {"ShittyHandGrenades", "Rangefinders", "OkayHeadgear", "ShittyScopes", "UselessWeapons", "UsefulScopes", "ShittyVests", "ShittyUniforms", "GoodPistols", "ShittyMedical", "ShittyBackpacks", "ShittyUniforms", "OkayScopes", "GoodPistols", "GoodHeadgear", "OkayUniforms", "GrenadeTube1Rnd", "UselessBackpacks", "GoodMedical", "UsefulWeapons", "GrenadeTube3Rnd", "ShittyPistols", "ShittyPistols", "UsefulVests", "OkayHeadgear", "SmokeTube1Rnd", "NiceWeapons", "GoodMedical", "UsefulBackpacks", "UselessHeadgear", "OkayVests", "ShittyScopes", "GoodWeapons", "ShittyPistols", "GoodMedical", "ShittyWeapons", "ShittyMedical", "NiceHeadgear", "UselessWeapons", "OkayWeapons", "UselessHeadgear", "WeaponSupressors", "ShittyPistols", "ShittyWeapons", "SmokeGrenades", "UselessUniforms", "UsefulBackpacks", "GoodScopes", "UselessVests", "GoodPistols", "ShittyPistols", "ShittyVests", "GrenadeTube1Rnd", "SmokeGrenades", "NiceMedical", "ShittyWeapons", "UselessBackpacks", "ShittyPistols", "UsefulScopes", "OkayBackpacks", "OkayWeapons", "Binoculars", "OkayVests", "UsefulWeapons", "ShittyMedical", "SmokeGrenades", "WeaponBipods", "OkayWeapons", "ShittyScopes", "OkayScopes", "UselessVests", "SmokeTube3Rnd", "GoodWeapons", "ShittyUniforms", "SmokeGrenades", "OkayScopes", "ShittyBackpacks", "ShittyPistols", "GoodPistols", "GoodBackpacks", "ShittyBackpacks", "GoodHeadgear", "OkayScopes", "OkayHeadgear", "ShittyUniforms", "GoodHandGrenades", "ShittyScopes", "UselessBackpacks", "UselessVests", "ShittyPistols", "UsefulScopes", "WeaponItems", "UselessVests", "UselessWeapons", "NiceBackpacks", "OkayUniforms", "UselessUniforms", "SmokeTube1Rnd", "UselessHeadgear", "SmokeTube1Rnd", "GoodVests", "ShittyMedical", "UselessUniforms", "UselessHeadgear", "ShittyHandGrenades", "NightVisionGoggles", "OkayBackpacks", "UselessWeapons", "UselessUniforms", "ShittyHandGrenades"};

		/*
			Percental Item Group Spawn Chances of Shop:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		Shop[] = {"GoodWeapons", "GoodMedical", "UsefulScopes", "SmokeTube1Rnd", "UselessWeapons", "GoodBackpacks", "OkayHeadgear", "GoodMedical", "SmokeGrenades", "ShittyVests", "GrenadeTube1Rnd", "ShittyMedical", "UselessBackpacks", "UselessVests", "UselessHeadgear", "UselessVests", "UsefulScopes", "OkayBackpacks", "SmokeTube3Rnd", "ShittyPistols", "ShittyPistols", "GoodHeadgear", "GoodHeadgear", "UselessVests", "UselessWeapons", "Binoculars", "SmokeTube1Rnd", "OkayHeadgear", "WeaponItems", "ShittyPistols", "OkayScopes", "UselessWeapons", "NiceWeapons", "UselessBackpacks", "ShittyWeapons", "ShittyPistols", "NiceMedical", "ShittyPistols", "GoodPistols", "ShittyUniforms", "ShittyMedical", "UselessUniforms", "ShittyHandGrenades", "UselessWeapons", "OkayVests", "ShittyMedical", "GoodPistols", "GoodPistols", "OkayWeapons", "UselessUniforms", "ShittyPistols", "UsefulWeapons", "ShittyScopes", "GoodHandGrenades", "UsefulVests", "SmokeTube1Rnd", "ShittyVests", "ShittyMedical", "OkayScopes", "SmokeGrenades", "NiceBackpacks", "OkayUniforms", "ShittyWeapons", "ShittyBackpacks", "GoodVests", "UsefulScopes", "GrenadeTube3Rnd", "UselessHeadgear", "UselessUniforms", "NightVisionGoggles", "WeaponSupressors", "SmokeGrenades", "UselessHeadgear", "GoodScopes", "OkayScopes", "OkayVests", "GrenadeTube1Rnd", "OkayWeapons", "ShittyPistols", "UselessHeadgear", "ShittyUniforms", "GoodWeapons", "UsefulWeapons", "ShittyWeapons", "ShittyPistols", "UselessUniforms", "ShittyScopes", "OkayWeapons", "UselessBackpacks", "ShittyScopes", "WeaponBipods", "UsefulBackpacks", "ShittyScopes", "UsefulBackpacks", "ShittyUniforms", "ShittyBackpacks", "OkayBackpacks", "OkayHeadgear", "GoodMedical", "UselessVests", "OkayScopes", "OkayUniforms", "Rangefinders", "ShittyHandGrenades", "ShittyUniforms", "ShittyHandGrenades", "NiceHeadgear", "SmokeGrenades", "GoodPistols", "ShittyBackpacks"};

		/*
			Percental Item Group Spawn Chances of Industrial:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		Industrial[] = {"ShittyScopes", "ShittyPistols", "GoodMedical", "UselessHeadgear", "GoodPistols", "SmokeTube1Rnd", "SmokeGrenades", "NightVisionGoggles", "OkayUniforms", "OkayBackpacks", "OkayWeapons", "OkayScopes", "GrenadeTube3Rnd", "UselessWeapons", "UsefulBackpacks", "ShittyMedical", "ShittyWeapons", "UselessUniforms", "OkayVests", "Rangefinders", "NiceBackpacks", "GoodPistols", "UselessVests", "OkayScopes", "SmokeGrenades", "UselessVests", "GoodVests", "GoodWeapons", "UselessUniforms", "ShittyBackpacks", "ShittyPistols", "UselessUniforms", "UsefulScopes", "SmokeTube3Rnd", "ShittyScopes", "ShittyWeapons", "UselessHeadgear", "UsefulVests", "SmokeTube1Rnd", "OkayVests", "ShittyUniforms", "ShittyScopes", "OkayBackpacks", "ShittyPistols", "GoodMedical", "UselessHeadgear", "OkayScopes", "UselessBackpacks", "ShittyUniforms", "ShittyVests", "UselessBackpacks", "UsefulScopes", "WeaponBipods", "NiceMedical", "ShittyMedical", "SmokeGrenades", "ShittyWeapons", "ShittyUniforms", "GoodHeadgear", "UselessBackpacks", "UselessWeapons", "GoodPistols", "ShittyMedical", "NiceWeapons", "ShittyMedical", "GrenadeTube1Rnd", "OkayWeapons", "UsefulScopes", "WeaponSupressors", "OkayUniforms", "ShittyBackpacks", "UselessWeapons", "GoodBackpacks", "ShittyUniforms", "OkayWeapons", "UsefulWeapons", "GoodHandGrenades", "GoodMedical", "ShittyPistols", "UselessUniforms", "ShittyVests", "GoodHeadgear", "SmokeTube1Rnd", "UselessVests", "GoodPistols", "OkayHeadgear", "ShittyPistols", "ShittyHandGrenades", "GoodWeapons", "OkayHeadgear", "Binoculars", "ShittyBackpacks", "ShittyPistols", "GoodScopes", "UselessVests", "SmokeGrenades", "UsefulWeapons", "OkayHeadgear", "ShittyHandGrenades", "ShittyScopes", "OkayScopes", "NiceHeadgear", "ShittyPistols", "UselessHeadgear", "GrenadeTube1Rnd", "ShittyPistols", "ShittyHandGrenades", "WeaponItems", "UselessWeapons", "UsefulBackpacks"};

		/*
			Percental Item Group Spawn Chances of Factories:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		Factories[] = {"OkayWeapons", "ShittyScopes", "SmokeGrenades", "OkayScopes", "ShittyPistols", "WeaponSupressors", "UselessHeadgear", "UsefulBackpacks", "UselessVests", "GrenadeTube3Rnd", "UselessWeapons", "SmokeGrenades", "UsefulWeapons", "ShittyScopes", "WeaponItems", "GrenadeTube1Rnd", "Rangefinders", "NiceWeapons", "UselessWeapons", "OkayScopes", "GoodWeapons", "ShittyMedical", "NiceBackpacks", "SmokeTube1Rnd", "OkayWeapons", "ShittyMedical", "ShittyMedical", "ShittyVests", "ShittyMedical", "OkayVests", "NiceMedical", "ShittyPistols", "NightVisionGoggles", "OkayBackpacks", "SmokeTube1Rnd", "ShittyHandGrenades", "UsefulBackpacks", "GoodScopes", "OkayUniforms", "ShittyBackpacks", "OkayBackpacks", "ShittyPistols", "UselessVests", "UsefulVests", "GrenadeTube1Rnd", "ShittyPistols", "ShittyPistols", "ShittyBackpacks", "ShittyHandGrenades", "GoodVests", "SmokeGrenades", "GoodPistols", "ShittyPistols", "GoodWeapons", "ShittyScopes", "ShittyUniforms", "UselessUniforms", "UselessUniforms", "GoodMedical", "GoodBackpacks", "UsefulWeapons", "UselessBackpacks", "OkayHeadgear", "UselessWeapons", "ShittyVests", "OkayUniforms", "ShittyScopes", "ShittyUniforms", "WeaponBipods", "SmokeTube3Rnd", "ShittyUniforms", "ShittyWeapons", "OkayWeapons", "GoodHeadgear", "GoodMedical", "GoodHandGrenades", "ShittyPistols", "UselessUniforms", "ShittyHandGrenades", "OkayScopes", "ShittyPistols", "UselessVests", "ShittyBackpacks", "ShittyUniforms", "UselessHeadgear", "UselessWeapons", "SmokeGrenades", "OkayHeadgear", "UselessUniforms", "GoodPistols", "OkayScopes", "GoodPistols", "SmokeTube1Rnd", "UselessHeadgear", "ShittyWeapons", "UselessBackpacks", "ShittyWeapons", "Binoculars", "GoodMedical", "NiceHeadgear", "UsefulScopes", "OkayHeadgear", "GoodPistols", "UsefulScopes", "GoodHeadgear", "UselessVests", "UsefulScopes", "UselessHeadgear", "UselessBackpacks", "OkayVests"};

		/*
			Percental Item Group Spawn Chances of VehicleService:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		VehicleService[] = {"ShittyPistols", "WeaponSupressors", "GoodHandGrenades", "UselessHeadgear", "OkayWeapons", "UselessUniforms", "ShittyPistols", "GoodHeadgear", "ShittyMedical", "UselessVests", "OkayUniforms", "ShittyUniforms", "UselessVests", "GoodScopes", "UsefulScopes", "SmokeTube1Rnd", "GoodVests", "UselessHeadgear", "OkayBackpacks", "OkayUniforms", "UselessUniforms", "ShittyHandGrenades", "UsefulBackpacks", "UselessUniforms", "ShittyBackpacks", "ShittyPistols", "GoodMedical", "ShittyHandGrenades", "UsefulScopes", "ShittyScopes", "ShittyBackpacks", "OkayHeadgear", "ShittyScopes", "GoodHeadgear", "OkayVests", "GoodBackpacks", "GoodMedical", "ShittyVests", "ShittyVests", "OkayWeapons", "UselessWeapons", "UsefulWeapons", "ShittyPistols", "WeaponItems", "ShittyUniforms", "GrenadeTube1Rnd", "NightVisionGoggles", "OkayScopes", "SmokeGrenades", "GrenadeTube3Rnd", "GoodPistols", "ShittyUniforms", "ShittyWeapons", "NiceHeadgear", "ShittyPistols", "ShittyPistols", "SmokeGrenades", "OkayBackpacks", "UselessWeapons", "ShittyMedical", "SmokeTube1Rnd", "NiceBackpacks", "UselessUniforms", "GoodPistols", "ShittyBackpacks", "UsefulWeapons", "OkayScopes", "OkayWeapons", "UsefulScopes", "OkayHeadgear", "ShittyUniforms", "ShittyWeapons", "Binoculars", "GoodPistols", "ShittyHandGrenades", "UselessHeadgear", "ShittyScopes", "SmokeGrenades", "UselessWeapons", "SmokeTube3Rnd", "ShittyMedical", "OkayVests", "WeaponBipods", "NiceWeapons", "GoodMedical", "ShittyPistols", "UsefulBackpacks", "GoodPistols", "NiceMedical", "ShittyWeapons", "GoodWeapons", "OkayScopes", "UselessWeapons", "SmokeGrenades", "Rangefinders", "UselessVests", "OkayHeadgear", "UsefulVests", "OkayScopes", "UselessBackpacks", "ShittyPistols", "UselessVests", "UselessBackpacks", "UselessHeadgear", "ShittyScopes", "UselessBackpacks", "GrenadeTube1Rnd", "SmokeTube1Rnd", "ShittyMedical", "GoodWeapons"};

		/*
			Percental Item Group Spawn Chances of Military:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		Military[] = {"OkayUniforms", "OkayBackpacks", "OkayHeadgear", "SmokeGrenades", "UselessUniforms", "ShittyHandGrenades", "NiceWeapons", "GoodMedical", "OkayUniforms", "GoodPistols", "GoodScopes", "ShittyScopes", "UsefulBackpacks", "ShittyBackpacks", "GoodHandGrenades", "UselessBackpacks", "Rangefinders", "OkayWeapons", "SmokeGrenades", "ShittyScopes", "UsefulScopes", "SmokeTube1Rnd", "GoodWeapons", "OkayWeapons", "GrenadeTube1Rnd", "UsefulScopes", "ShittyScopes", "OkayVests", "GoodPistols", "ShittyHandGrenades", "UselessBackpacks", "UselessWeapons", "ShittyUniforms", "OkayScopes", "ShittyPistols", "SmokeTube1Rnd", "UselessVests", "UsefulBackpacks", "OkayBackpacks", "WeaponSupressors", "UselessVests", "UselessVests", "SmokeGrenades", "ShittyWeapons", "ShittyVests", "ShittyBackpacks", "ShittyPistols", "GrenadeTube3Rnd", "OkayHeadgear", "ShittyMedical", "SmokeTube3Rnd", "ShittyMedical", "UselessWeapons", "ShittyBackpacks", "UsefulWeapons", "ShittyWeapons", "ShittyPistols", "GoodBackpacks", "GoodMedical", "SmokeTube1Rnd", "WeaponBipods", "OkayScopes", "NiceMedical", "GoodPistols", "OkayScopes", "OkayScopes", "NightVisionGoggles", "GoodPistols", "UselessHeadgear", "UselessHeadgear", "UselessVests", "OkayWeapons", "ShittyMedical", "SmokeGrenades", "UselessHeadgear", "ShittyPistols", "ShittyWeapons", "ShittyPistols", "UsefulScopes", "GoodVests", "OkayHeadgear", "UselessWeapons", "ShittyVests", "ShittyScopes", "UselessUniforms", "UselessBackpacks", "UselessWeapons", "UselessUniforms", "Binoculars", "ShittyMedical", "UsefulVests", "ShittyPistols", "GoodMedical", "GrenadeTube1Rnd", "ShittyPistols", "GoodWeapons", "WeaponItems", "GoodHeadgear", "UselessHeadgear", "NiceHeadgear", "ShittyUniforms", "ShittyPistols", "ShittyUniforms", "ShittyHandGrenades", "NiceBackpacks", "UsefulWeapons", "GoodHeadgear", "OkayVests", "UselessUniforms", "ShittyUniforms"};

		/*
			Percental Item Group Spawn Chances of Medical:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		Medical[] = {"ShittyScopes", "GoodHeadgear", "UsefulWeapons", "ShittyUniforms", "ShittyScopes", "OkayVests", "ShittyVests", "GrenadeTube3Rnd", "UselessHeadgear", "OkayUniforms", "ShittyPistols", "GoodMedical", "ShittyHandGrenades", "UselessUniforms", "ShittyVests", "UsefulScopes", "GoodMedical", "UsefulWeapons", "SmokeTube3Rnd", "SmokeTube1Rnd", "GrenadeTube1Rnd", "NiceBackpacks", "WeaponItems", "OkayHeadgear", "ShittyHandGrenades", "NiceMedical", "ShittyWeapons", "ShittyUniforms", "GoodMedical", "GoodHandGrenades", "GoodHeadgear", "GoodPistols", "OkayWeapons", "ShittyPistols", "OkayBackpacks", "WeaponSupressors", "OkayScopes", "UselessWeapons", "ShittyPistols", "UselessWeapons", "ShittyPistols", "ShittyScopes", "OkayHeadgear", "UselessHeadgear", "UselessVests", "OkayVests", "UselessVests", "OkayUniforms", "UselessVests", "ShittyBackpacks", "UselessVests", "NightVisionGoggles", "ShittyBackpacks", "GoodPistols", "UselessWeapons", "SmokeGrenades", "SmokeGrenades", "ShittyMedical", "ShittyPistols", "ShittyPistols", "UsefulScopes", "OkayWeapons", "OkayHeadgear", "ShittyUniforms", "OkayScopes", "UsefulBackpacks", "UselessBackpacks", "UsefulScopes", "UselessBackpacks", "NiceHeadgear", "GoodPistols", "ShittyWeapons", "ShittyPistols", "OkayScopes", "ShittyScopes", "OkayWeapons", "WeaponBipods", "UselessBackpacks", "OkayScopes", "ShittyWeapons", "SmokeGrenades", "Binoculars", "GoodBackpacks", "SmokeGrenades", "UselessWeapons", "UselessUniforms", "ShittyMedical", "ShittyUniforms", "UselessUniforms", "UselessUniforms", "UsefulBackpacks", "OkayBackpacks", "GrenadeTube1Rnd", "UsefulVests", "ShittyPistols", "SmokeTube1Rnd", "GoodWeapons", "NiceWeapons", "ShittyHandGrenades", "SmokeTube1Rnd", "ShittyBackpacks", "UselessHeadgear", "ShittyMedical", "GoodScopes", "ShittyMedical", "UselessHeadgear", "Rangefinders", "GoodVests", "GoodPistols", "GoodWeapons"};

		/*
			Percental Item Group Spawn Chances of Tourist:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		Tourist[] = {"GoodMedical", "NiceMedical", "ShittyPistols", "ShittyWeapons", "UselessVests", "GoodScopes", "GoodHandGrenades", "UsefulWeapons", "OkayVests", "ShittyMedical", "GoodPistols", "ShittyPistols", "SmokeTube3Rnd", "UselessWeapons", "ShittyWeapons", "Rangefinders", "UselessUniforms", "SmokeGrenades", "NightVisionGoggles", "ShittyBackpacks", "ShittyScopes", "ShittyMedical", "ShittyHandGrenades", "GrenadeTube1Rnd", "ShittyUniforms", "UselessWeapons", "GoodBackpacks", "UselessHeadgear", "UsefulScopes", "UselessHeadgear", "ShittyHandGrenades", "GrenadeTube3Rnd", "SmokeGrenades", "NiceHeadgear", "ShittyMedical", "OkayWeapons", "OkayWeapons", "ShittyUniforms", "ShittyPistols", "Binoculars", "ShittyUniforms", "UsefulScopes", "ShittyPistols", "UselessBackpacks", "UselessUniforms", "WeaponBipods", "SmokeTube1Rnd", "UselessHeadgear", "WeaponItems", "GoodVests", "ShittyScopes", "GoodHeadgear", "UsefulScopes", "UselessVests", "GoodMedical", "OkayVests", "SmokeGrenades", "ShittyScopes", "UsefulBackpacks", "OkayUniforms", "ShittyScopes", "ShittyMedical", "UsefulBackpacks", "OkayScopes", "GoodMedical", "ShittyPistols", "GrenadeTube1Rnd", "GoodWeapons", "UselessVests", "UselessWeapons", "GoodWeapons", "UsefulWeapons", "UsefulVests", "WeaponSupressors", "UselessBackpacks", "SmokeTube1Rnd", "GoodHeadgear", "UselessHeadgear", "ShittyWeapons", "ShittyBackpacks", "NiceWeapons", "ShittyHandGrenades", "SmokeTube1Rnd", "ShittyPistols", "UselessUniforms", "UselessBackpacks", "OkayHeadgear", "OkayScopes", "GoodPistols", "UselessUniforms", "OkayWeapons", "OkayBackpacks", "OkayUniforms", "OkayBackpacks", "ShittyUniforms", "ShittyVests", "ShittyVests", "UselessWeapons", "ShittyPistols", "OkayHeadgear", "SmokeGrenades", "UselessVests", "OkayScopes", "GoodPistols", "GoodPistols", "ShittyPistols", "OkayHeadgear", "NiceBackpacks", "ShittyBackpacks", "OkayScopes"};

		/*
			Percental Item Group Spawn Chances of Radiation:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		Radiation[] = {"ShittyUniforms", "UselessWeapons", "UselessBackpacks", "ShittyPistols", "ShittyPistols", "OkayBackpacks", "UselessUniforms", "UsefulScopes", "SmokeTube3Rnd", "ShittyHandGrenades", "UsefulScopes", "NiceMedical", "UselessVests", "ShittyScopes", "NightVisionGoggles", "ShittyPistols", "GoodVests", "ShittyMedical", "OkayWeapons", "ShittyScopes", "OkayScopes", "UselessBackpacks", "ShittyBackpacks", "ShittyUniforms", "ShittyHandGrenades", "UsefulVests", "OkayScopes", "OkayVests", "ShittyScopes", "SmokeTube1Rnd", "UselessHeadgear", "UsefulScopes", "OkayHeadgear", "ShittyPistols", "SmokeTube1Rnd", "UsefulBackpacks", "OkayScopes", "UselessUniforms", "WeaponSupressors", "UselessHeadgear", "OkayBackpacks", "GoodWeapons", "ShittyMedical", "SmokeGrenades", "OkayVests", "UselessHeadgear", "GoodMedical", "UselessHeadgear", "ShittyPistols", "SmokeTube1Rnd", "GrenadeTube1Rnd", "GoodScopes", "ShittyPistols", "UselessBackpacks", "ShittyUniforms", "NiceHeadgear", "UselessUniforms", "ShittyUniforms", "SmokeGrenades", "ShittyWeapons", "SmokeGrenades", "OkayWeapons", "ShittyVests", "Binoculars", "UselessWeapons", "GoodHeadgear", "GoodMedical", "GrenadeTube3Rnd", "UsefulWeapons", "OkayHeadgear", "GoodPistols", "ShittyPistols", "GoodPistols", "UselessWeapons", "OkayUniforms", "ShittyWeapons", "ShittyWeapons", "ShittyHandGrenades", "GrenadeTube1Rnd", "OkayHeadgear", "ShittyBackpacks", "OkayScopes", "UselessVests", "ShittyScopes", "WeaponBipods", "UselessUniforms", "UsefulBackpacks", "ShittyMedical", "UselessVests", "GoodMedical", "WeaponItems", "GoodHeadgear", "UselessWeapons", "ShittyMedical", "NiceBackpacks", "GoodBackpacks", "OkayWeapons", "NiceWeapons", "GoodWeapons", "OkayUniforms", "GoodHandGrenades", "ShittyPistols", "UsefulWeapons", "Rangefinders", "UselessVests", "GoodPistols", "SmokeGrenades", "ShittyBackpacks", "ShittyVests", "GoodPistols"};
	};

	class ItemGroups
	{

		/*
			Percental Item Spawn Chances of UselessWeapons:

			Exile_Weapon_CZ550      = 33.33%
			Exile_Weapon_M1014      = 33.33%
			Exile_Weapon_LeeEnfield = 33.33%
		*/
		UselessWeapons[] = {"Exile_Weapon_LeeEnfield", "Exile_Weapon_CZ550", "Exile_Weapon_M1014"};

		/*
			Percental Item Spawn Chances of ShittyWeapons:

			hgun_PDW2000_F = 25.00%
			SMG_01_F       = 25.00%
			SMG_02_F       = 25.00%
			SMG_05_F       = 25.00%
		*/
		ShittyWeapons[] = {"SMG_02_F", "SMG_01_F", "hgun_PDW2000_F", "SMG_05_F"};

		/*
			Percental Item Spawn Chances of OkayWeapons:

			arifle_Mk20_F     = 14.29%
			arifle_Mk20_GL_F  = 14.29%
			arifle_Mk20C_F    = 14.29%
			arifle_SDAR_F     = 14.29%
			arifle_TRG20_F    = 14.29%
			arifle_TRG21_F    = 14.29%
			arifle_TRG21_GL_F = 14.29%
		*/
		OkayWeapons[] = {"arifle_SDAR_F", "arifle_Mk20_GL_F", "arifle_Mk20_F", "arifle_TRG20_F", "arifle_Mk20C_F", "arifle_TRG21_GL_F", "arifle_TRG21_F"};

		/*
			Percental Item Spawn Chances of GoodWeapons:

			arifle_SPAR_01_blk_F    = 16.67%
			arifle_SPAR_01_GL_blk_F = 16.67%
			arifle_SPAR_01_GL_khk_F = 16.67%
			arifle_SPAR_01_GL_snd_F = 16.67%
			arifle_SPAR_01_khk_F    = 16.67%
			arifle_SPAR_01_snd_F    = 16.67%
		*/
		GoodWeapons[] = {"arifle_SPAR_01_GL_snd_F", "arifle_SPAR_01_khk_F", "arifle_SPAR_01_snd_F", "arifle_SPAR_01_GL_khk_F", "arifle_SPAR_01_GL_blk_F", "arifle_SPAR_01_blk_F"};

		/*
			Percental Item Spawn Chances of UsefulWeapons:

			arifle_AKS_F          = 7.69%
			arifle_Katiba_F       = 7.69%
			arifle_Katiba_GL_F    = 7.69%
			arifle_MX_Black_F     = 7.69%
			arifle_MX_F           = 7.69%
			arifle_MX_GL_Black_F  = 7.69%
			arifle_MX_GL_F        = 7.69%
			arifle_MX_GL_khk_F    = 7.69%
			arifle_MX_khk_F       = 7.69%
			arifle_MXC_Black_F    = 7.69%
			arifle_MXC_F          = 7.69%
			arifle_MXC_khk_F      = 7.69%
			Exile_Weapon_AKS_Gold = 7.69%
		*/
		UsefulWeapons[] = {"arifle_MX_F", "arifle_MX_GL_F", "arifle_Katiba_GL_F", "arifle_AKS_F", "arifle_MX_khk_F", "arifle_MXC_F", "arifle_MX_Black_F", "Exile_Weapon_AKS_Gold", "arifle_MXC_khk_F", "arifle_Katiba_F", "arifle_MXC_Black_F", "arifle_MX_GL_Black_F", "arifle_MX_GL_khk_F"};

		/*
			Percental Item Spawn Chances of NiceWeapons:

			arifle_SPAR_02_blk_F  = 4.35%
			arifle_SPAR_02_khk_F  = 4.35%
			arifle_SPAR_02_snd_F  = 4.35%
			arifle_AK12_F         = 4.35%
			arifle_AK12_GL_F      = 4.35%
			arifle_CTAR_blk_F     = 4.35%
			arifle_CTAR_ghex_F    = 4.35%
			arifle_CTAR_GL_blk_F  = 4.35%
			arifle_CTAR_hex_F     = 4.35%
			arifle_CTARS_blk_F    = 4.35%
			arifle_CTARS_ghex_F   = 4.35%
			arifle_CTARS_hex_F    = 4.35%
			arifle_MXM_Black_F    = 4.35%
			arifle_MXM_F          = 4.35%
			arifle_MXM_khk_F      = 4.35%
			arifle_SPAR_03_blk_F  = 4.35%
			arifle_SPAR_03_khk_F  = 4.35%
			arifle_SPAR_03_snd_F  = 4.35%
			Exile_Weapon_AK107    = 4.35%
			Exile_Weapon_AK107_GL = 4.35%
			Exile_Weapon_AK47     = 4.35%
			Exile_Weapon_AK74     = 4.35%
			Exile_Weapon_AK74_GL  = 4.35%
		*/
		NiceWeapons[] = {"Exile_Weapon_AK107_GL", "arifle_MXM_khk_F", "arifle_CTARS_blk_F", "arifle_AK12_F", "arifle_AK12_GL_F", "Exile_Weapon_AK107", "arifle_MXM_Black_F", "arifle_SPAR_02_khk_F", "Exile_Weapon_AK74_GL", "Exile_Weapon_AK47", "Exile_Weapon_AK74", "arifle_CTAR_hex_F", "arifle_MXM_F", "arifle_CTAR_blk_F", "arifle_CTARS_ghex_F", "arifle_SPAR_03_khk_F", "arifle_CTARS_hex_F", "arifle_SPAR_03_snd_F", "arifle_CTAR_GL_blk_F", "arifle_SPAR_03_blk_F", "arifle_SPAR_02_snd_F", "arifle_CTAR_ghex_F", "arifle_SPAR_02_blk_F"};

		/*
			Percental Item Spawn Chances of EpicWeapons:

			arifle_MX_SW_Black_F     = 2.63%
			arifle_MX_SW_F           = 2.63%
			Exile_Weapon_DMR         = 2.63%
			Exile_Weapon_PK          = 2.63%
			Exile_Weapon_PKP         = 2.63%
			Exile_Weapon_RPK         = 2.63%
			Exile_Weapon_SVD         = 2.63%
			Exile_Weapon_SVDCamo     = 2.63%
			Exile_Weapon_VSSVintorez = 2.63%
			LMG_03_F                 = 2.63%
			LMG_Mk200_F              = 2.63%
			LMG_Zafir_F              = 2.63%
			srifle_DMR_01_F          = 2.63%
			srifle_DMR_02_camo_F     = 2.63%
			srifle_DMR_02_F          = 2.63%
			srifle_DMR_02_sniper_F   = 2.63%
			srifle_DMR_03_F          = 2.63%
			srifle_DMR_03_khaki_F    = 2.63%
			srifle_DMR_03_tan_F      = 2.63%
			srifle_DMR_03_woodland_F = 2.63%
			srifle_DMR_04_F          = 2.63%
			srifle_DMR_04_Tan_F      = 2.63%
			srifle_DMR_05_blk_F      = 2.63%
			srifle_DMR_05_hex_F      = 2.63%
			srifle_DMR_05_tan_F      = 2.63%
			srifle_DMR_06_camo_F     = 2.63%
			srifle_DMR_06_olive_F    = 2.63%
			srifle_DMR_07_blk_F      = 2.63%
			srifle_DMR_07_ghex_F     = 2.63%
			srifle_DMR_07_hex_F      = 2.63%
			srifle_EBR_F             = 2.63%
			srifle_GM6_F             = 2.63%
			srifle_GM6_ghex_F        = 2.63%
			srifle_LRR_F             = 2.63%
			srifle_LRR_tna_F         = 2.63%
			arifle_ARX_blk_F         = 2.63%
			arifle_ARX_ghex_F        = 2.63%
			arifle_ARX_hex_F         = 2.63%
		*/
		EpicWeapons[] = {"srifle_LRR_tna_F", "srifle_DMR_05_hex_F", "srifle_DMR_01_F", "srifle_DMR_02_camo_F", "srifle_LRR_F", "arifle_MX_SW_F", "Exile_Weapon_SVD", "LMG_Zafir_F", "srifle_DMR_06_olive_F", "Exile_Weapon_RPK", "srifle_DMR_07_ghex_F", "LMG_Mk200_F", "Exile_Weapon_PKP", "srifle_DMR_07_hex_F", "arifle_ARX_blk_F", "srifle_DMR_06_camo_F", "Exile_Weapon_PK", "srifle_DMR_03_khaki_F", "srifle_DMR_04_F", "arifle_MX_SW_Black_F", "Exile_Weapon_VSSVintorez", "srifle_DMR_03_F", "Exile_Weapon_DMR", "srifle_DMR_05_blk_F", "Exile_Weapon_SVDCamo", "srifle_EBR_F", "srifle_DMR_03_woodland_F", "srifle_DMR_05_tan_F", "srifle_DMR_02_F", "srifle_DMR_07_blk_F", "arifle_ARX_hex_F", "arifle_ARX_ghex_F", "srifle_DMR_04_Tan_F", "LMG_03_F", "srifle_GM6_F", "srifle_GM6_ghex_F", "srifle_DMR_03_tan_F", "srifle_DMR_02_sniper_F"};

		/*
			Percental Item Spawn Chances of ShittyScopes:

			optic_Holosight           = 20.00%
			optic_Holosight_blk_F     = 20.00%
			optic_Holosight_khk_F     = 20.00%
			optic_Holosight_smg       = 20.00%
			optic_Holosight_smg_blk_F = 20.00%
		*/
		ShittyScopes[] = {"optic_Holosight_blk_F", "optic_Holosight_smg", "optic_Holosight", "optic_Holosight_smg_blk_F", "optic_Holosight_khk_F"};

		/*
			Percental Item Spawn Chances of OkayScopes:

			optic_ACO         = 25.00%
			optic_ACO_grn     = 25.00%
			optic_ACO_grn_smg = 25.00%
			optic_Aco_smg     = 25.00%
		*/
		OkayScopes[] = {"optic_Aco_smg", "optic_ACO_grn_smg", "optic_ACO_grn", "optic_ACO"};

		/*
			Percental Item Spawn Chances of UsefulScopes:

			optic_Arco        = 14.29%
			optic_Arco_blk_F  = 14.29%
			optic_Arco_ghex_F = 14.29%
			optic_ERCO_blk_F  = 14.29%
			optic_ERCO_khk_F  = 14.29%
			optic_ERCO_snd_F  = 14.29%
			optic_MRCO        = 14.29%
		*/
		UsefulScopes[] = {"optic_ERCO_khk_F", "optic_Arco_blk_F", "optic_Arco", "optic_Arco_ghex_F", "optic_ERCO_blk_F", "optic_MRCO", "optic_ERCO_snd_F"};

		/*
			Percental Item Spawn Chances of GoodScopes:

			optic_DMS        = 25.00%
			optic_DMS_ghex_F = 25.00%
			optic_Hamr       = 25.00%
			optic_Hamr_khk_F = 25.00%
		*/
		GoodScopes[] = {"optic_DMS", "optic_Hamr", "optic_Hamr_khk_F", "optic_DMS_ghex_F"};

		/*
			Percental Item Spawn Chances of NiceScopes:

			optic_AMS       = 11.11%
			optic_AMS_khk   = 11.11%
			optic_AMS_snd   = 11.11%
			optic_KHS_blk   = 11.11%
			optic_KHS_hex   = 11.11%
			optic_KHS_old   = 11.11%
			optic_KHS_tan   = 11.11%
			optic_SOS       = 11.11%
			optic_SOS_khk_F = 11.11%
		*/
		NiceScopes[] = {"optic_AMS", "optic_SOS_khk_F", "optic_AMS_snd", "optic_KHS_tan", "optic_SOS", "optic_KHS_blk", "optic_AMS_khk", "optic_KHS_old", "optic_KHS_hex"};

		/*
			Percental Item Spawn Chances of WeaponSupressors:

			muzzle_snds_58_blk_F     = 5.00%
			muzzle_snds_58_wdm_F     = 5.00%
			muzzle_snds_65_TI_blk_F  = 5.00%
			muzzle_snds_65_TI_ghex_F = 5.00%
			muzzle_snds_65_TI_hex_F  = 5.00%
			muzzle_snds_93mmg        = 5.00%
			muzzle_snds_93mmg_tan    = 5.00%
			muzzle_snds_acp          = 5.00%
			muzzle_snds_B            = 5.00%
			muzzle_snds_B_khk_F      = 5.00%
			muzzle_snds_B_snd_F      = 5.00%
			muzzle_snds_H            = 5.00%
			muzzle_snds_H_khk_F      = 5.00%
			muzzle_snds_H_MG_blk_F   = 5.00%
			muzzle_snds_H_MG_khk_F   = 5.00%
			muzzle_snds_H_snd_F      = 5.00%
			muzzle_snds_L            = 5.00%
			muzzle_snds_M            = 5.00%
			muzzle_snds_m_khk_F      = 5.00%
			muzzle_snds_m_snd_F      = 5.00%
		*/
		WeaponSupressors[] = {"muzzle_snds_H_khk_F", "muzzle_snds_B", "muzzle_snds_L", "muzzle_snds_58_blk_F", "muzzle_snds_H", "muzzle_snds_m_snd_F", "muzzle_snds_B_khk_F", "muzzle_snds_acp", "muzzle_snds_m_khk_F", "muzzle_snds_B_snd_F", "muzzle_snds_65_TI_blk_F", "muzzle_snds_H_MG_blk_F", "muzzle_snds_93mmg", "muzzle_snds_65_TI_ghex_F", "muzzle_snds_93mmg_tan", "muzzle_snds_H_MG_khk_F", "muzzle_snds_58_wdm_F", "muzzle_snds_H_snd_F", "muzzle_snds_M", "muzzle_snds_65_TI_hex_F"};

		/*
			Percental Item Spawn Chances of ZipTies:

			Exile_Item_ZipTie = 100.00%
		*/
		ZipTies[] = {"Exile_Item_ZipTie"};

		/*
			Percental Item Spawn Chances of WeaponItems:

			acc_flashlight = 50.00%
			acc_pointer_IR = 50.00%
		*/
		WeaponItems[] = {"acc_flashlight", "acc_pointer_IR"};

		/*
			Percental Item Spawn Chances of WeaponBipods:

			bipod_01_F_blk = 11.11%
			bipod_01_F_khk = 11.11%
			bipod_01_F_mtp = 11.11%
			bipod_01_F_snd = 11.11%
			bipod_02_F_blk = 11.11%
			bipod_02_F_hex = 11.11%
			bipod_02_F_tan = 11.11%
			bipod_03_F_blk = 11.11%
			bipod_03_F_oli = 11.11%
		*/
		WeaponBipods[] = {"bipod_02_F_hex", "bipod_03_F_oli", "bipod_01_F_mtp", "bipod_03_F_blk", "bipod_02_F_blk", "bipod_01_F_snd", "bipod_02_F_tan", "bipod_01_F_blk", "bipod_01_F_khk"};

		/*
			Percental Item Spawn Chances of UselessVests:

			V_BandollierB_blk    = 4.55%
			V_BandollierB_cbr    = 4.55%
			V_BandollierB_ghex_F = 4.55%
			V_BandollierB_khk    = 4.55%
			V_BandollierB_oli    = 4.55%
			V_BandollierB_rgr    = 4.55%
			V_Chestrig_blk       = 4.55%
			V_Chestrig_khk       = 4.55%
			V_Chestrig_oli       = 4.55%
			V_Chestrig_rgr       = 4.55%
			V_HarnessO_brn       = 4.55%
			V_HarnessO_ghex_F    = 4.55%
			V_HarnessO_gry       = 4.55%
			V_HarnessOGL_brn     = 4.55%
			V_HarnessOGL_ghex_F  = 4.55%
			V_HarnessOGL_gry     = 4.55%
			V_HarnessOSpec_brn   = 4.55%
			V_HarnessOSpec_gry   = 4.55%
			V_Rangemaster_belt   = 4.55%
			V_TacChestrig_cbr_F  = 4.55%
			V_TacChestrig_grn_F  = 4.55%
			V_TacChestrig_oli_F  = 4.55%
		*/
		UselessVests[] = {"V_Chestrig_blk", "V_HarnessO_ghex_F", "V_BandollierB_blk", "V_Chestrig_rgr", "V_HarnessOGL_gry", "V_BandollierB_cbr", "V_HarnessOGL_brn", "V_Chestrig_khk", "V_Rangemaster_belt", "V_BandollierB_oli", "V_TacChestrig_oli_F", "V_HarnessOSpec_gry", "V_HarnessO_brn", "V_Chestrig_oli", "V_TacChestrig_cbr_F", "V_HarnessOGL_ghex_F", "V_BandollierB_rgr", "V_HarnessO_gry", "V_TacChestrig_grn_F", "V_BandollierB_khk", "V_BandollierB_ghex_F", "V_HarnessOSpec_brn"};

		/*
			Percental Item Spawn Chances of ShittyVests:

			V_I_G_resistanceLeader_F = 33.33%
			V_TacVest_blk_POLICE     = 33.33%
			V_TacVest_gen_F          = 33.33%
		*/
		ShittyVests[] = {"V_TacVest_gen_F", "V_I_G_resistanceLeader_F", "V_TacVest_blk_POLICE"};

		/*
			Percental Item Spawn Chances of OkayVests:

			V_PlateCarrier1_blk          = 14.29%
			V_PlateCarrier1_rgr          = 14.29%
			V_PlateCarrier1_rgr_noflag_F = 14.29%
			V_PlateCarrier1_tna_F        = 14.29%
			V_PlateCarrierIA1_dgtl       = 14.29%
			V_PlateCarrierL_CTRG         = 14.29%
			V_Press_F                    = 14.29%
		*/
		OkayVests[] = {"V_PlateCarrierL_CTRG", "V_PlateCarrier1_tna_F", "V_PlateCarrier1_blk", "V_PlateCarrier1_rgr_noflag_F", "V_Press_F", "V_PlateCarrierIA1_dgtl", "V_PlateCarrier1_rgr"};

		/*
			Percental Item Spawn Chances of UsefulVests:

			V_PlateCarrier2_rgr          = 16.67%
			V_PlateCarrier2_rgr_noflag_F = 16.67%
			V_PlateCarrier2_tna_F        = 16.67%
			V_PlateCarrier3_rgr          = 16.67%
			V_PlateCarrierH_CTRG         = 16.67%
			V_PlateCarrierIA2_dgtl       = 16.67%
		*/
		UsefulVests[] = {"V_PlateCarrierH_CTRG", "V_PlateCarrierIA2_dgtl", "V_PlateCarrier2_tna_F", "V_PlateCarrier3_rgr", "V_PlateCarrier2_rgr", "V_PlateCarrier2_rgr_noflag_F"};

		/*
			Percental Item Spawn Chances of GoodVests:

			V_PlateCarrierSpec_blk   = 25.00%
			V_PlateCarrierSpec_mtp   = 25.00%
			V_PlateCarrierSpec_rgr   = 25.00%
			V_PlateCarrierSpec_tna_F = 25.00%
		*/
		GoodVests[] = {"V_PlateCarrierSpec_mtp", "V_PlateCarrierSpec_tna_F", "V_PlateCarrierSpec_blk", "V_PlateCarrierSpec_rgr"};

		/*
			Percental Item Spawn Chances of EpicVests:

			V_PlateCarrierGL_blk    = 16.67%
			V_PlateCarrierGL_mtp    = 16.67%
			V_PlateCarrierGL_rgr    = 16.67%
			V_PlateCarrierGL_tna_F  = 16.67%
			V_PlateCarrierIAGL_dgtl = 16.67%
			V_PlateCarrierIAGL_oli  = 16.67%
		*/
		EpicVests[] = {"V_PlateCarrierIAGL_oli", "V_PlateCarrierGL_tna_F", "V_PlateCarrierGL_mtp", "V_PlateCarrierGL_rgr", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrierGL_blk"};

		/*
			Percental Item Spawn Chances of UselessUniforms:

			U_C_HunterBody_grn      = 4.17%
			U_C_Journalist          = 4.17%
			U_C_Man_casual_1_F      = 4.17%
			U_C_Man_casual_2_F      = 4.17%
			U_C_Man_casual_3_F      = 4.17%
			U_C_Man_casual_4_F      = 4.17%
			U_C_Man_casual_5_F      = 4.17%
			U_C_Man_casual_6_F      = 4.17%
			U_C_man_sport_1_F       = 4.17%
			U_C_man_sport_2_F       = 4.17%
			U_C_man_sport_3_F       = 4.17%
			U_C_Poloshirt_blue      = 4.17%
			U_C_Poloshirt_burgundy  = 4.17%
			U_C_Poloshirt_salmon    = 4.17%
			U_C_Poloshirt_stripped  = 4.17%
			U_C_Poloshirt_tricolour = 4.17%
			U_C_Poor_1              = 4.17%
			U_C_Poor_2              = 4.17%
			U_C_Poor_shorts_1       = 4.17%
			U_C_Scientist           = 4.17%
			U_NikosAgedBody         = 4.17%
			U_NikosBody             = 4.17%
			U_OrestesBody           = 4.17%
			U_Rangemaster           = 4.17%
		*/
		UselessUniforms[] = {"U_NikosBody", "U_C_Poloshirt_salmon", "U_C_Poloshirt_tricolour", "U_C_HunterBody_grn", "U_C_Poloshirt_burgundy", "U_C_Poor_2", "U_C_Poloshirt_stripped", "U_C_man_sport_3_F", "U_C_Poor_shorts_1", "U_C_Man_casual_5_F", "U_C_Scientist", "U_C_man_sport_2_F", "U_C_Man_casual_6_F", "U_C_Journalist", "U_C_Man_casual_1_F", "U_OrestesBody", "U_C_man_sport_1_F", "U_C_Man_casual_3_F", "U_C_Poor_1", "U_NikosAgedBody", "U_C_Man_casual_2_F", "U_C_Poloshirt_blue", "U_Rangemaster", "U_C_Man_casual_4_F"};

		/*
			Percental Item Spawn Chances of ShittyUniforms:

			U_B_GEN_Commander_F      = 4.76%
			U_B_GEN_Soldier_F        = 4.76%
			U_I_C_Soldier_Bandit_1_F = 4.76%
			U_I_C_Soldier_Bandit_2_F = 4.76%
			U_I_C_Soldier_Bandit_3_F = 4.76%
			U_I_C_Soldier_Bandit_4_F = 4.76%
			U_I_C_Soldier_Bandit_5_F = 4.76%
			U_I_C_Soldier_Camo_F     = 4.76%
			U_I_C_Soldier_Para_1_F   = 4.76%
			U_I_C_Soldier_Para_2_F   = 4.76%
			U_I_C_Soldier_Para_3_F   = 4.76%
			U_I_C_Soldier_Para_4_F   = 4.76%
			U_I_C_Soldier_Para_5_F   = 4.76%
			U_I_G_resistanceLeader_F = 4.76%
			U_IG_Guerilla1_1         = 4.76%
			U_IG_Guerilla2_1         = 4.76%
			U_IG_Guerilla2_2         = 4.76%
			U_IG_Guerilla2_3         = 4.76%
			U_IG_Guerilla3_1         = 4.76%
			U_IG_Guerilla3_2         = 4.76%
			U_IG_leader              = 4.76%
		*/
		ShittyUniforms[] = {"U_I_C_Soldier_Camo_F", "U_I_C_Soldier_Para_1_F", "U_IG_Guerilla3_1", "U_I_C_Soldier_Bandit_5_F", "U_I_G_resistanceLeader_F", "U_B_GEN_Commander_F", "U_I_C_Soldier_Bandit_3_F", "U_IG_Guerilla3_2", "U_IG_Guerilla1_1", "U_B_GEN_Soldier_F", "U_IG_Guerilla2_3", "U_I_C_Soldier_Para_2_F", "U_I_C_Soldier_Bandit_2_F", "U_I_C_Soldier_Para_3_F", "U_I_C_Soldier_Bandit_1_F", "U_I_C_Soldier_Bandit_4_F", "U_I_C_Soldier_Para_4_F", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla2_2", "U_IG_Guerilla2_1", "U_IG_leader"};

		/*
			Percental Item Spawn Chances of OkayUniforms:

			U_B_CombatUniform_mcam        = 4.35%
			U_B_CombatUniform_mcam_tshirt = 4.35%
			U_B_CombatUniform_mcam_vest   = 4.35%
			U_B_CombatUniform_mcam_worn   = 4.35%
			U_B_CTRG_1                    = 4.35%
			U_B_CTRG_2                    = 4.35%
			U_B_CTRG_3                    = 4.35%
			U_B_CTRG_Soldier_2_F          = 4.35%
			U_B_CTRG_Soldier_3_F          = 4.35%
			U_B_CTRG_Soldier_F            = 4.35%
			U_B_CTRG_Soldier_urb_1_F      = 4.35%
			U_B_CTRG_Soldier_urb_2_F      = 4.35%
			U_B_CTRG_Soldier_urb_3_F      = 4.35%
			U_B_SpecopsUniform_sgg        = 4.35%
			U_B_T_Soldier_AR_F            = 4.35%
			U_B_T_Soldier_SL_F            = 4.35%
			U_B_Wetsuit                   = 4.35%
			U_I_CombatUniform             = 4.35%
			U_I_CombatUniform_shortsleeve = 4.35%
			U_I_CombatUniform_tshirt      = 4.35%
			U_I_OfficerUniform            = 4.35%
			U_I_Wetsuit                   = 4.35%
			U_O_Wetsuit                   = 4.35%
		*/
		OkayUniforms[] = {"U_I_CombatUniform_shortsleeve", "U_B_CTRG_Soldier_3_F", "U_B_CTRG_Soldier_urb_3_F", "U_O_Wetsuit", "U_B_T_Soldier_AR_F", "U_B_CombatUniform_mcam_tshirt", "U_I_Wetsuit", "U_I_CombatUniform_tshirt", "U_B_CTRG_1", "U_B_CTRG_3", "U_I_CombatUniform", "U_B_CombatUniform_mcam_worn", "U_B_CTRG_Soldier_2_F", "U_B_SpecopsUniform_sgg", "U_B_CTRG_Soldier_F", "U_B_CTRG_Soldier_urb_2_F", "U_I_OfficerUniform", "U_B_CTRG_Soldier_urb_1_F", "U_B_CTRG_2", "U_B_T_Soldier_SL_F", "U_B_CombatUniform_mcam_vest", "U_B_Wetsuit", "U_B_CombatUniform_mcam"};

		/*
			Percental Item Spawn Chances of EpicUniforms:

			U_B_HeliPilotCoveralls    = 7.14%
			U_B_PilotCoveralls        = 7.14%
			U_I_HeliPilotCoveralls    = 7.14%
			U_I_pilotCoveralls        = 7.14%
			U_O_CombatUniform_ocamo   = 7.14%
			U_O_CombatUniform_oucamo  = 7.14%
			U_O_OfficerUniform_ocamo  = 7.14%
			U_O_PilotCoveralls        = 7.14%
			U_O_SpecopsUniform_blk    = 7.14%
			U_O_SpecopsUniform_ocamo  = 7.14%
			U_O_T_Officer_F           = 7.14%
			U_O_T_Soldier_F           = 7.14%
			U_O_V_Soldier_Viper_F     = 7.14%
			U_O_V_Soldier_Viper_hex_F = 7.14%
		*/
		EpicUniforms[] = {"U_O_V_Soldier_Viper_hex_F", "U_I_pilotCoveralls", "U_O_PilotCoveralls", "U_O_T_Officer_F", "U_O_V_Soldier_Viper_F", "U_B_HeliPilotCoveralls", "U_O_SpecopsUniform_blk", "U_O_OfficerUniform_ocamo", "U_B_PilotCoveralls", "U_O_CombatUniform_ocamo", "U_I_HeliPilotCoveralls", "U_O_CombatUniform_oucamo", "U_O_SpecopsUniform_ocamo", "U_O_T_Soldier_F"};

		/*
			Percental Item Spawn Chances of ShittyHandGrenades:

			MiniGrenade = 100.00%
		*/
		ShittyHandGrenades[] = {"MiniGrenade"};

		/*
			Percental Item Spawn Chances of GoodHandGrenades:

			HandGrenade = 100.00%
		*/
		GoodHandGrenades[] = {"HandGrenade"};

		/*
			Percental Item Spawn Chances of SmokeGrenades:

			SmokeShell       = 14.29%
			SmokeShellRed    = 14.29%
			SmokeShellGreen  = 14.29%
			SmokeShellYellow = 14.29%
			SmokeShellPurple = 14.29%
			SmokeShellBlue   = 14.29%
			SmokeShellOrange = 14.29%
		*/
		SmokeGrenades[] = {"SmokeShellBlue", "SmokeShellGreen", "SmokeShellPurple", "SmokeShellOrange", "SmokeShell", "SmokeShellYellow", "SmokeShellRed"};

		/*
			Percental Item Spawn Chances of Rebreathers:

			V_RebreatherB  = 33.33%
			V_RebreatherIR = 33.33%
			V_RebreatherIA = 33.33%
		*/
		Rebreathers[] = {"V_RebreatherIA", "V_RebreatherB", "V_RebreatherIR"};

		/*
			Percental Item Spawn Chances of Rangefinders:

			Rangefinder = 100.00%
		*/
		Rangefinders[] = {"Rangefinder"};

		/*
			Percental Item Spawn Chances of ShittyPistols:

			hgun_Rook40_F         = 16.67%
			hgun_P07_F            = 16.67%
			hgun_P07_khk_F        = 16.67%
			hgun_Pistol_01_F      = 16.67%
			Exile_Weapon_Colt1911 = 16.67%
			Exile_Weapon_Makarov  = 16.67%
		*/
		ShittyPistols[] = {"Exile_Weapon_Makarov", "Exile_Weapon_Colt1911", "hgun_Pistol_01_F", "hgun_Rook40_F", "hgun_P07_F", "hgun_P07_khk_F"};

		/*
			Percental Item Spawn Chances of GoodPistols:

			hgun_Pistol_heavy_01_F  = 20.00%
			hgun_Pistol_heavy_02_F  = 20.00%
			Exile_Weapon_Taurus     = 20.00%
			Exile_Weapon_TaurusGold = 20.00%
			hgun_ACPC2_F            = 20.00%
		*/
		GoodPistols[] = {"Exile_Weapon_TaurusGold", "hgun_ACPC2_F", "Exile_Weapon_Taurus", "hgun_Pistol_heavy_01_F", "hgun_Pistol_heavy_02_F"};

		/*
			Percental Item Spawn Chances of PistolScopes:

			optic_Yorris = 50.00%
			optic_MRD    = 50.00%
		*/
		PistolScopes[] = {"optic_MRD", "optic_Yorris"};

		/*
			Percental Item Spawn Chances of SmokeTube1Rnd:

			1Rnd_Smoke_Grenade_shell       = 14.29%
			1Rnd_SmokeBlue_Grenade_shell   = 14.29%
			1Rnd_SmokeGreen_Grenade_shell  = 14.29%
			1Rnd_SmokeOrange_Grenade_shell = 14.29%
			1Rnd_SmokePurple_Grenade_shell = 14.29%
			1Rnd_SmokeRed_Grenade_shell    = 14.29%
			1Rnd_SmokeYellow_Grenade_shell = 14.29%
		*/
		SmokeTube1Rnd[] = {"1Rnd_SmokeYellow_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell"};

		/*
			Percental Item Spawn Chances of SmokeTube3Rnd:

			3Rnd_Smoke_Grenade_shell       = 14.29%
			3Rnd_SmokeBlue_Grenade_shell   = 14.29%
			3Rnd_SmokeGreen_Grenade_shell  = 14.29%
			3Rnd_SmokeOrange_Grenade_shell = 14.29%
			3Rnd_SmokePurple_Grenade_shell = 14.29%
			3Rnd_SmokeRed_Grenade_shell    = 14.29%
			3Rnd_SmokeYellow_Grenade_shell = 14.29%
		*/
		SmokeTube3Rnd[] = {"3Rnd_SmokePurple_Grenade_shell", "3Rnd_SmokeGreen_Grenade_shell", "3Rnd_SmokeBlue_Grenade_shell", "3Rnd_SmokeOrange_Grenade_shell", "3Rnd_SmokeRed_Grenade_shell", "3Rnd_SmokeYellow_Grenade_shell", "3Rnd_Smoke_Grenade_shell"};

		/*
			Percental Item Spawn Chances of GrenadeTube1Rnd:

			1Rnd_HE_Grenade_shell = 100.00%
		*/
		GrenadeTube1Rnd[] = {"1Rnd_HE_Grenade_shell"};

		/*
			Percental Item Spawn Chances of GrenadeTube3Rnd:

			3Rnd_HE_Grenade_shell = 100.00%
		*/
		GrenadeTube3Rnd[] = {"3Rnd_HE_Grenade_shell"};

		/*
			Percental Item Spawn Chances of NightVisionGoggles:

			NVGoggles          = 20.00%
			NVGoggles_tna_F    = 20.00%
			O_NVGoggles_ghex_F = 20.00%
			O_NVGoggles_hex_F  = 20.00%
			O_NVGoggles_urb_F  = 20.00%
		*/
		NightVisionGoggles[] = {"O_NVGoggles_urb_F", "NVGoggles", "NVGoggles_tna_F", "O_NVGoggles_ghex_F", "O_NVGoggles_hex_F"};

		/*
			Percental Item Spawn Chances of ShittyMedical:

			Exile_Item_Bandage = 100.00%
		*/
		ShittyMedical[] = {"Exile_Item_Bandage"};

		/*
			Percental Item Spawn Chances of GoodMedical:

			Exile_Item_Vishpirin = 100.00%
		*/
		GoodMedical[] = {"Exile_Item_Vishpirin"};

		/*
			Percental Item Spawn Chances of NiceMedical:

			Exile_Item_InstaDoc = 100.00%
		*/
		NiceMedical[] = {"Exile_Item_InstaDoc"};

		/*
			Percental Item Spawn Chances of UselessHeadgear:

			H_Bandanna_camo           = 1.32%
			H_Bandanna_cbr            = 1.32%
			H_Bandanna_gry            = 1.32%
			H_Bandanna_khk            = 1.32%
			H_Bandanna_khk_hs         = 1.32%
			H_Bandanna_mcamo          = 1.32%
			H_Bandanna_sgg            = 1.32%
			H_Bandanna_surfer         = 1.32%
			H_Beret_02                = 1.32%
			H_Beret_blk               = 1.32%
			H_Beret_blk_POLICE        = 1.32%
			H_Beret_brn_SF            = 1.32%
			H_Beret_Colonel           = 1.32%
			H_Beret_grn               = 1.32%
			H_Beret_grn_SF            = 1.32%
			H_Beret_ocamo             = 1.32%
			H_Beret_red               = 1.32%
			H_Booniehat_tna_F         = 1.32%
			H_Cap_blk                 = 1.32%
			H_Cap_blk_Raven           = 1.32%
			H_Cap_blk_Syndikat_F      = 1.32%
			H_Cap_blu                 = 1.32%
			H_Cap_grn                 = 1.32%
			H_Cap_grn_Syndikat_F      = 1.32%
			H_Cap_headphones          = 1.32%
			H_Cap_oli                 = 1.32%
			H_Cap_oli_Syndikat_F      = 1.32%
			H_Cap_press               = 1.32%
			H_Cap_red                 = 1.32%
			H_Cap_tan                 = 1.32%
			H_Cap_tan_Syndikat_F      = 1.32%
			H_FakeHeadgear_Syndikat_F = 1.32%
			H_Hat_blue                = 1.32%
			H_Hat_brown               = 1.32%
			H_Hat_checker             = 1.32%
			H_Hat_grey                = 1.32%
			H_Hat_tan                 = 1.32%
			H_MilCap_gen_F            = 1.32%
			H_MilCap_ghex_F           = 1.32%
			H_MilCap_tna_F            = 1.32%
			H_Shemag_khk              = 1.32%
			H_Shemag_olive            = 1.32%
			H_Shemag_olive_hs         = 1.32%
			H_Shemag_tan              = 1.32%
			H_ShemagOpen_khk          = 1.32%
			H_ShemagOpen_tan          = 1.32%
			H_StrawHat                = 1.32%
			H_StrawHat_dark           = 1.32%
			H_TurbanO_blk             = 1.32%
			H_Watchcap_camo           = 1.32%
			H_Watchcap_sgg            = 1.32%
			H_BandMask_blk            = 1.32%
			H_Cap_brn_SPECOPS         = 1.32%
			H_Cap_khaki_specops_UK    = 1.32%
			H_Cap_tan_specops_US      = 1.32%
			H_Hat_camo                = 1.32%
			H_Watchcap_blk            = 1.32%
			H_Watchcap_khk            = 1.32%
			H_Booniehat_dgtl          = 1.32%
			H_Booniehat_dirty         = 1.32%
			H_Booniehat_grn           = 1.32%
			H_Booniehat_indp          = 1.32%
			H_Booniehat_khk           = 1.32%
			H_Booniehat_khk_hs        = 1.32%
			H_Booniehat_mcamo         = 1.32%
			H_Booniehat_tan           = 1.32%
			H_BandMask_demon          = 1.32%
			H_BandMask_khk            = 1.32%
			H_BandMask_reaper         = 1.32%
			H_Beret_gen_F             = 1.32%
			H_MilCap_blue             = 1.32%
			H_MilCap_dgtl             = 1.32%
			H_MilCap_mcamo            = 1.32%
			H_MilCap_ocamo            = 1.32%
			H_MilCap_oucamo           = 1.32%
			H_MilCap_rucamo           = 1.32%
		*/
		UselessHeadgear[] = {"H_Watchcap_blk", "H_Beret_ocamo", "H_Watchcap_camo", "H_Shemag_olive", "H_MilCap_oucamo", "H_Hat_blue", "H_MilCap_ocamo", "H_Booniehat_khk", "H_Booniehat_dgtl", "H_FakeHeadgear_Syndikat_F", "H_BandMask_reaper", "H_StrawHat", "H_TurbanO_blk", "H_Bandanna_sgg", "H_Cap_headphones", "H_BandMask_blk", "H_Beret_blk", "H_Cap_oli", "H_Shemag_khk", "H_Beret_02", "H_Booniehat_indp", "H_Watchcap_khk", "H_Bandanna_camo", "H_Bandanna_khk", "H_Bandanna_gry", "H_Beret_blk_POLICE", "H_ShemagOpen_tan", "H_Bandanna_mcamo", "H_Bandanna_cbr", "H_Beret_brn_SF", "H_Bandanna_khk_hs", "H_Beret_gen_F", "H_Booniehat_mcamo", "H_Beret_grn_SF", "H_Hat_tan", "H_BandMask_demon", "H_Beret_Colonel", "H_Cap_tan_Syndikat_F", "H_Shemag_tan", "H_ShemagOpen_khk", "H_Cap_blk_Raven", "H_MilCap_gen_F", "H_Cap_oli_Syndikat_F", "H_Cap_press", "H_Cap_blu", "H_MilCap_rucamo", "H_Cap_blk_Syndikat_F", "H_MilCap_ghex_F", "H_Booniehat_grn", "H_Bandanna_surfer", "H_StrawHat_dark", "H_Beret_grn", "H_Shemag_olive_hs", "H_Cap_tan_specops_US", "H_Beret_red", "H_Hat_camo", "H_Hat_brown", "H_Cap_grn", "H_BandMask_khk", "H_Booniehat_tan", "H_Cap_red", "H_MilCap_tna_F", "H_MilCap_mcamo", "H_Watchcap_sgg", "H_Booniehat_khk_hs", "H_Cap_tan", "H_MilCap_dgtl", "H_Hat_checker", "H_Booniehat_tna_F", "H_Cap_brn_SPECOPS", "H_MilCap_blue", "H_Hat_grey", "H_Booniehat_dirty", "H_Cap_blk", "H_Cap_khaki_specops_UK", "H_Cap_grn_Syndikat_F"};

		/*
			Percental Item Spawn Chances of OkayHeadgear:

			H_Helmet_Skate            = 12.50%
			H_HelmetB_light_black     = 12.50%
			H_HelmetB_light_desert    = 12.50%
			H_HelmetB_light_grass     = 12.50%
			H_HelmetB_light_sand      = 12.50%
			H_HelmetB_light_snakeskin = 12.50%
			H_HelmetB_Light_tna_F     = 12.50%
			H_HelmetB_light           = 12.50%
		*/
		OkayHeadgear[] = {"H_HelmetB_light", "H_HelmetB_light_grass", "H_HelmetB_light_black", "H_Helmet_Skate", "H_HelmetB_light_sand", "H_HelmetB_light_desert", "H_HelmetB_Light_tna_F", "H_HelmetB_light_snakeskin"};

		/*
			Percental Item Spawn Chances of GoodHeadgear:

			H_HelmetB_camo      = 6.25%
			H_PilotHelmetHeli_B = 6.25%
			H_PilotHelmetHeli_I = 6.25%
			H_PilotHelmetHeli_O = 6.25%
			H_HelmetB_black     = 6.25%
			H_HelmetB_desert    = 6.25%
			H_HelmetB_grass     = 6.25%
			H_HelmetB_sand      = 6.25%
			H_HelmetB_snakeskin = 6.25%
			H_HelmetB_tna_F     = 6.25%
			H_HelmetIA_camo     = 6.25%
			H_HelmetIA_net      = 6.25%
			H_HelmetB           = 6.25%
			H_HelmetB_paint     = 6.25%
			H_HelmetB_plain_blk = 6.25%
			H_HelmetIA          = 6.25%
		*/
		GoodHeadgear[] = {"H_HelmetB", "H_HelmetB_black", "H_HelmetIA_net", "H_PilotHelmetHeli_I", "H_PilotHelmetHeli_B", "H_HelmetB_tna_F", "H_HelmetB_sand", "H_HelmetB_paint", "H_HelmetB_snakeskin", "H_HelmetIA_camo", "H_HelmetIA", "H_PilotHelmetHeli_O", "H_HelmetB_desert", "H_HelmetB_camo", "H_HelmetB_plain_blk", "H_HelmetB_grass"};

		/*
			Percental Item Spawn Chances of NiceHeadgear:

			H_HelmetCrew_B        = 14.29%
			H_HelmetCrew_I        = 14.29%
			H_HelmetCrew_O        = 14.29%
			H_HelmetO_ocamo       = 14.29%
			H_HelmetO_oucamo      = 14.29%
			H_HelmetO_ghex_F      = 14.29%
			H_HelmetCrew_O_ghex_F = 14.29%
		*/
		NiceHeadgear[] = {"H_HelmetCrew_I", "H_HelmetCrew_O_ghex_F", "H_HelmetCrew_B", "H_HelmetO_ocamo", "H_HelmetO_ghex_F", "H_HelmetO_oucamo", "H_HelmetCrew_O"};

		/*
			Percental Item Spawn Chances of EpicHeadgear:

			H_CrewHelmetHeli_B     = 5.56%
			H_CrewHelmetHeli_I     = 5.56%
			H_CrewHelmetHeli_O     = 5.56%
			H_PilotHelmetFighter_B = 5.56%
			H_PilotHelmetFighter_I = 5.56%
			H_PilotHelmetFighter_O = 5.56%
			H_HelmetSpecO_ghex_F   = 5.56%
			H_HelmetSpecB          = 5.56%
			H_HelmetSpecB_blk      = 5.56%
			H_HelmetSpecB_paint1   = 5.56%
			H_HelmetSpecB_paint2   = 5.56%
			H_HelmetB_TI_tna_F     = 5.56%
			H_HelmetSpecO_blk      = 5.56%
			H_HelmetSpecO_ocamo    = 5.56%
			H_HelmetB_Enh_tna_F    = 5.56%
			H_HelmetLeaderO_ocamo  = 5.56%
			H_HelmetLeaderO_oucamo = 5.56%
			H_HelmetLeaderO_ghex_F = 5.56%
		*/
		EpicHeadgear[] = {"H_HelmetSpecO_blk", "H_HelmetLeaderO_oucamo", "H_HelmetSpecO_ghex_F", "H_CrewHelmetHeli_O", "H_HelmetSpecB", "H_HelmetSpecB_blk", "H_HelmetLeaderO_ghex_F", "H_PilotHelmetFighter_B", "H_HelmetB_TI_tna_F", "H_HelmetSpecB_paint1", "H_HelmetSpecO_ocamo", "H_PilotHelmetFighter_I", "H_HelmetB_Enh_tna_F", "H_CrewHelmetHeli_I", "H_PilotHelmetFighter_O", "H_HelmetSpecB_paint2", "H_HelmetLeaderO_ocamo", "H_CrewHelmetHeli_B"};

		/*
			Percental Item Spawn Chances of Explosives:

			APERSTripMine_Wire_Mag = 100.00%
		*/
		Explosives[] = {"APERSTripMine_Wire_Mag"};

		/*
			Percental Item Spawn Chances of Binoculars:

			Binocular = 100.00%
		*/
		Binoculars[] = {"Binocular"};

		/*
			Percental Item Spawn Chances of UselessBackpacks:

			B_HuntingBackpack = 25.00%
			B_OutdoorPack_blk = 25.00%
			B_OutdoorPack_blu = 25.00%
			B_OutdoorPack_tan = 25.00%
		*/
		UselessBackpacks[] = {"B_HuntingBackpack", "B_OutdoorPack_blk", "B_OutdoorPack_tan", "B_OutdoorPack_blu"};

		/*
			Percental Item Spawn Chances of ShittyBackpacks:

			B_AssaultPack_blk   = 12.50%
			B_AssaultPack_cbr   = 12.50%
			B_AssaultPack_dgtl  = 12.50%
			B_AssaultPack_khk   = 12.50%
			B_AssaultPack_mcamo = 12.50%
			B_AssaultPack_rgr   = 12.50%
			B_AssaultPack_sgg   = 12.50%
			B_AssaultPack_tna_F = 12.50%
		*/
		ShittyBackpacks[] = {"B_AssaultPack_sgg", "B_AssaultPack_mcamo", "B_AssaultPack_tna_F", "B_AssaultPack_dgtl", "B_AssaultPack_khk", "B_AssaultPack_rgr", "B_AssaultPack_blk", "B_AssaultPack_cbr"};

		/*
			Percental Item Spawn Chances of OkayBackpacks:

			B_FieldPack_blk    = 20.00%
			B_FieldPack_cbr    = 20.00%
			B_FieldPack_ghex_F = 20.00%
			B_FieldPack_ocamo  = 20.00%
			B_FieldPack_oucamo = 20.00%
		*/
		OkayBackpacks[] = {"B_FieldPack_oucamo", "B_FieldPack_blk", "B_FieldPack_cbr", "B_FieldPack_ghex_F", "B_FieldPack_ocamo"};

		/*
			Percental Item Spawn Chances of UsefulBackpacks:

			B_ViperLightHarness_blk_F  = 20.00%
			B_ViperLightHarness_ghex_F = 20.00%
			B_ViperLightHarness_hex_F  = 20.00%
			B_ViperLightHarness_khk_F  = 20.00%
			B_ViperLightHarness_oli_F  = 20.00%
		*/
		UsefulBackpacks[] = {"B_ViperLightHarness_khk_F", "B_ViperLightHarness_hex_F", "B_ViperLightHarness_blk_F", "B_ViperLightHarness_oli_F", "B_ViperLightHarness_ghex_F"};

		/*
			Percental Item Spawn Chances of GoodBackpacks:

			B_Bergen_blk          = 8.33%
			B_Bergen_mcamo        = 8.33%
			B_Bergen_rgr          = 8.33%
			B_Bergen_sgg          = 8.33%
			B_Kitbag_cbr          = 8.33%
			B_Kitbag_mcamo        = 8.33%
			B_Kitbag_sgg          = 8.33%
			B_ViperHarness_blk_F  = 8.33%
			B_ViperHarness_ghex_F = 8.33%
			B_ViperHarness_hex_F  = 8.33%
			B_ViperHarness_khk_F  = 8.33%
			B_ViperHarness_oli_F  = 8.33%
		*/
		GoodBackpacks[] = {"B_Kitbag_sgg", "B_Kitbag_mcamo", "B_Bergen_sgg", "B_Bergen_rgr", "B_ViperHarness_hex_F", "B_ViperHarness_khk_F", "B_ViperHarness_blk_F", "B_ViperHarness_ghex_F", "B_Bergen_mcamo", "B_ViperHarness_oli_F", "B_Kitbag_cbr", "B_Bergen_blk"};

		/*
			Percental Item Spawn Chances of NiceBackpacks:

			B_Carryall_cbr    = 14.29%
			B_Carryall_ghex_F = 14.29%
			B_Carryall_khk    = 14.29%
			B_Carryall_mcamo  = 14.29%
			B_Carryall_ocamo  = 14.29%
			B_Carryall_oli    = 14.29%
			B_Carryall_oucamo = 14.29%
		*/
		NiceBackpacks[] = {"B_Carryall_mcamo", "B_Carryall_ocamo", "B_Carryall_oucamo", "B_Carryall_ghex_F", "B_Carryall_khk", "B_Carryall_cbr", "B_Carryall_oli"};

		/*
			Percental Item Spawn Chances of EpicBackpacks:

			B_Bergen_dgtl_F  = 25.00%
			B_Bergen_hex_F   = 25.00%
			B_Bergen_mcamo_F = 25.00%
			B_Bergen_tna_F   = 25.00%
		*/
		EpicBackpacks[] = {"B_Bergen_tna_F", "B_Bergen_mcamo_F", "B_Bergen_hex_F", "B_Bergen_dgtl_F"};
	};
};

class CfgExileLootServer
{
	class LootTables
	{

		/*
			Percental Item Group Spawn Chances of CivillianLowerClass:

			Restraints        = 0.53%
			PistolAttachments = 1.60%
			ShotgunAmmo       = 1.60%
			SMGAmmo           = 1.60%
			SMGAttachments    = 1.60%
			Shotguns          = 2.13%
			SMG               = 2.13%
			CivilianVests     = 2.66%
			PistolAmmo        = 2.66%
			Pistols           = 4.26%
			Chemlights        = 5.32%
			CivilianItems     = 5.32%
			Drinks            = 5.32%
			RoadFlares        = 5.32%
			CivilianBackpacks = 5.85%
			CivilianClothing  = 10.64%
			CivilianHeadgear  = 10.64%
			Food              = 14.89%
			Trash             = 15.96%
		*/
		CivillianLowerClass[] = {"Trash", "SMGAttachments", "CivilianItems", "CivilianItems", "Pistols", "Trash", "CivilianItems", "Food", "Food", "Trash", "CivilianBackpacks", "Pistols", "Drinks", "Food", "Pistols", "RoadFlares", "Trash", "Trash", "CivilianClothing", "Food", "CivilianClothing", "PistolAttachments", "CivilianClothing", "CivilianClothing", "PistolAmmo", "CivilianClothing", "CivilianBackpacks", "Chemlights", "Trash", "Trash", "Chemlights", "CivilianHeadgear", "CivilianBackpacks", "Food", "Chemlights", "CivilianHeadgear", "Food", "Drinks", "CivilianVests", "ShotgunAmmo", "CivilianClothing", "CivilianVests", "CivilianClothing", "Drinks", "Pistols", "ShotgunAmmo", "RoadFlares", "SMG", "CivilianClothing", "CivilianHeadgear", "CivilianHeadgear", "Drinks", "Trash", "CivilianBackpacks", "Shotguns", "SMGAmmo", "Trash", "Trash", "Trash", "RoadFlares", "Food", "CivilianHeadgear", "Food", "Trash", "CivilianBackpacks", "Food", "Food", "CivilianHeadgear", "CivilianClothing", "CivilianHeadgear", "CivilianItems", "CivilianVests", "CivilianHeadgear", "PistolAttachments", "Chemlights", "Restraints", "CivilianClothing", "SMGAttachments", "CivilianVests", "Pistols", "Trash", "Food", "Food", "SMG", "CivilianHeadgear", "CivilianItems", "Drinks", "CivilianClothing", "PistolAmmo", "Trash", "CivilianClothing", "CivilianHeadgear", "SMGAmmo", "CivilianVests", "Trash", "CivilianHeadgear", "Trash", "CivilianItems", "Food", "Shotguns", "CivilianItems", "PistolAmmo", "CivilianHeadgear", "Drinks", "SMG", "ShotgunAmmo", "CivilianBackpacks", "RoadFlares", "Pistols", "RoadFlares", "PistolAttachments", "CivilianBackpacks", "Trash", "CivilianClothing", "SMG", "RoadFlares", "Trash", "Pistols", "Food", "PistolAmmo", "Food", "CivilianItems", "SMGAttachments", "Chemlights", "RoadFlares", "Trash", "Food", "Chemlights", "CivilianBackpacks", "CivilianHeadgear", "CivilianBackpacks", "Pistols", "CivilianHeadgear", "Trash", "Chemlights", "SMGAmmo", "CivilianHeadgear", "Trash", "Trash", "Shotguns", "CivilianHeadgear", "Chemlights", "RoadFlares", "Drinks", "Trash", "Trash", "Food", "Food", "Trash", "CivilianHeadgear", "Drinks", "Chemlights", "CivilianHeadgear", "CivilianClothing", "Food", "Food", "CivilianItems", "RoadFlares", "CivilianClothing", "CivilianClothing", "PistolAmmo", "Trash", "Food", "Food", "Shotguns", "CivilianItems", "Food", "CivilianClothing", "Drinks", "Food", "CivilianBackpacks", "RoadFlares", "CivilianClothing", "Trash", "Trash", "CivilianClothing", "Drinks", "CivilianBackpacks", "Food", "Chemlights", "Trash", "CivilianClothing", "Trash", "CivilianHeadgear", "Food", "Food", "CivilianHeadgear", "Food"};

		/*
			Percental Item Group Spawn Chances of CivillianUpperClass:

			Restraints        = 0.51%
			PistolAttachments = 1.52%
			RifleAmmo         = 1.52%
			RifleAttachments  = 1.52%
			Rifles            = 1.52%
			ShotgunAmmo       = 1.52%
			SMGAmmo           = 1.52%
			SMGAttachments    = 1.52%
			Shotguns          = 2.03%
			SMG               = 2.03%
			CivilianVests     = 2.54%
			PistolAmmo        = 2.54%
			Pistols           = 4.06%
			Chemlights        = 5.08%
			CivilianItems     = 5.08%
			Drinks            = 5.08%
			RoadFlares        = 5.08%
			CivilianBackpacks = 5.58%
			CivilianClothing  = 10.15%
			CivilianHeadgear  = 10.15%
			Food              = 14.21%
			Trash             = 15.23%
		*/
		CivillianUpperClass[] = {"Food", "Trash", "Chemlights", "RoadFlares", "Food", "Food", "CivilianClothing", "Shotguns", "CivilianItems", "CivilianHeadgear", "CivilianHeadgear", "RifleAttachments", "Food", "Trash", "CivilianBackpacks", "Trash", "CivilianHeadgear", "CivilianClothing", "Food", "RifleAttachments", "Trash", "RifleAmmo", "CivilianClothing", "CivilianHeadgear", "Trash", "CivilianHeadgear", "CivilianVests", "Trash", "CivilianBackpacks", "RifleAttachments", "Pistols", "RifleAmmo", "CivilianHeadgear", "Trash", "CivilianHeadgear", "PistolAmmo", "SMG", "CivilianHeadgear", "Drinks", "Pistols", "Trash", "Trash", "Food", "CivilianClothing", "SMGAmmo", "RoadFlares", "Food", "CivilianClothing", "CivilianClothing", "Chemlights", "SMGAmmo", "Chemlights", "CivilianVests", "CivilianClothing", "Trash", "Trash", "RifleAmmo", "Drinks", "CivilianClothing", "CivilianHeadgear", "Trash", "Chemlights", "Trash", "CivilianClothing", "Food", "Food", "Food", "Trash", "Chemlights", "Trash", "Food", "PistolAttachments", "Chemlights", "Trash", "CivilianItems", "CivilianClothing", "Drinks", "Trash", "Chemlights", "CivilianItems", "CivilianHeadgear", "Trash", "CivilianItems", "Food", "CivilianBackpacks", "Pistols", "Trash", "Trash", "CivilianItems", "Shotguns", "Trash", "CivilianHeadgear", "RoadFlares", "CivilianHeadgear", "Food", "Food", "RoadFlares", "PistolAmmo", "Trash", "Rifles", "Drinks", "Food", "Chemlights", "Drinks", "CivilianClothing", "SMG", "Food", "CivilianBackpacks", "CivilianVests", "Trash", "PistolAttachments", "CivilianItems", "CivilianBackpacks", "CivilianItems", "CivilianClothing", "CivilianHeadgear", "CivilianClothing", "Food", "CivilianClothing", "SMGAmmo", "Rifles", "CivilianVests", "Rifles", "Trash", "Food", "CivilianHeadgear", "Trash", "CivilianHeadgear", "Food", "ShotgunAmmo", "Drinks", "CivilianHeadgear", "CivilianClothing", "Drinks", "Chemlights", "CivilianHeadgear", "Food", "CivilianClothing", "CivilianBackpacks", "CivilianHeadgear", "CivilianBackpacks", "PistolAmmo", "Shotguns", "CivilianClothing", "RoadFlares", "SMGAttachments", "CivilianItems", "CivilianVests", "SMGAttachments", "Food", "Pistols", "Drinks", "Pistols", "Food", "Food", "ShotgunAmmo", "CivilianItems", "Shotguns", "Drinks", "CivilianClothing", "SMG", "Food", "Trash", "RoadFlares", "Trash", "CivilianBackpacks", "CivilianClothing", "Pistols", "CivilianHeadgear", "RoadFlares", "CivilianBackpacks", "Pistols", "Food", "Chemlights", "SMGAttachments", "CivilianHeadgear", "CivilianItems", "Trash", "Drinks", "SMG", "Trash", "RoadFlares", "Food", "Trash", "CivilianClothing", "ShotgunAmmo", "CivilianBackpacks", "RoadFlares", "Food", "PistolAmmo", "RoadFlares", "Pistols", "Restraints", "CivilianBackpacks", "PistolAmmo", "Food", "PistolAttachments"};

		/*
			Percental Item Group Spawn Chances of Shop:

			CivilianClothing  = 0.80%
			CivilianVests     = 0.80%
			PistolAttachments = 0.80%
			ShotgunAmmo       = 0.80%
			SMGAmmo           = 0.80%
			SMGAttachments    = 0.80%
			PistolAmmo        = 1.60%
			CivilianHeadgear  = 2.40%
			IndustrialItems   = 2.40%
			MedicalItems      = 2.40%
			Restraints        = 2.40%
			Shotguns          = 3.20%
			SmokeGrenades     = 3.20%
			Chemlights        = 4.00%
			CivilianBackpacks = 4.00%
			RoadFlares        = 4.00%
			SMG               = 4.00%
			CivilianItems     = 5.60%
			Pistols           = 8.00%
			Drinks            = 12.00%
			Food              = 12.00%
			Trash             = 24.00%
		*/
		Shop[] = {"CivilianVests", "CivilianClothing", "PistolAttachments", "SMGAttachments", "CivilianBackpacks", "RoadFlares", "CivilianHeadgear", "Shotguns", "Pistols", "Food", "Food", "Restraints", "Drinks", "PistolAmmo", "ShotgunAmmo", "Pistols", "PistolAmmo", "Trash", "Food", "CivilianItems", "CivilianBackpacks", "Trash", "Trash", "Trash", "Chemlights", "Drinks", "CivilianItems", "Food", "SMG", "CivilianItems", "Trash", "Trash", "Drinks", "Pistols", "Drinks", "Food", "CivilianItems", "Drinks", "CivilianItems", "Trash", "Trash", "RoadFlares", "Trash", "Trash", "CivilianBackpacks", "Shotguns", "Chemlights", "Trash", "SMG", "Chemlights", "Trash", "Shotguns", "RoadFlares", "Trash", "Pistols", "Food", "MedicalItems", "Trash", "Food", "Drinks", "Pistols", "Trash", "RoadFlares", "Food", "Pistols", "SmokeGrenades", "Drinks", "Trash", "RoadFlares", "Trash", "Trash", "CivilianItems", "Trash", "Food", "Chemlights", "CivilianBackpacks", "IndustrialItems", "Drinks", "Drinks", "Food", "Drinks", "Trash", "IndustrialItems", "Drinks", "Drinks", "Food", "Drinks", "Shotguns", "Trash", "Food", "Food", "SMG", "MedicalItems", "Trash", "Pistols", "Food", "Trash", "SMG", "Trash", "Drinks", "Drinks", "Trash", "CivilianBackpacks", "CivilianHeadgear", "Pistols", "Restraints", "MedicalItems", "Pistols", "Trash", "Trash", "SmokeGrenades", "SmokeGrenades", "Trash", "SMG", "Food", "Pistols", "SmokeGrenades", "CivilianHeadgear", "Trash", "SMGAmmo", "Restraints", "CivilianItems", "IndustrialItems", "Trash", "Chemlights"};

		/*
			Percental Item Group Spawn Chances of Industrial:

			Restraints      = 4.35%
			RoadFlares      = 13.04%
			Vehicle         = 21.74%
			Trash           = 26.09%
			IndustrialItems = 34.78%
		*/
		Industrial[] = {"Trash", "Trash", "Vehicle", "IndustrialItems", "IndustrialItems", "RoadFlares", "Trash", "Trash", "IndustrialItems", "Vehicle", "IndustrialItems", "RoadFlares", "IndustrialItems", "IndustrialItems", "Trash", "Restraints", "Vehicle", "IndustrialItems", "Trash", "Vehicle", "Vehicle", "IndustrialItems", "RoadFlares"};

		/*
			Percental Item Group Spawn Chances of Factories:

			Electronics     = 10.00%
			Trash           = 40.00%
			IndustrialItems = 50.00%
		*/
		Factories[] = {"IndustrialItems", "Trash", "Trash", "IndustrialItems", "IndustrialItems", "Trash", "Electronics", "IndustrialItems", "Trash", "IndustrialItems"};

		/*
			Percental Item Group Spawn Chances of VehicleService:

			Restraints      = 4.35%
			RoadFlares      = 13.04%
			IndustrialItems = 21.74%
			Trash           = 26.09%
			Vehicle         = 34.78%
		*/
		VehicleService[] = {"Trash", "Vehicle", "Vehicle", "IndustrialItems", "IndustrialItems", "Trash", "RoadFlares", "Vehicle", "Trash", "Trash", "Vehicle", "Vehicle", "Vehicle", "Restraints", "IndustrialItems", "IndustrialItems", "RoadFlares", "Trash", "Vehicle", "Vehicle", "RoadFlares", "Trash", "IndustrialItems"};

		/*
			Percental Item Group Spawn Chances of Military:

			DLCGhillies       = 0.50%
			Ghillies          = 0.50%
			Rebreathers       = 0.50%
			Bipods            = 0.99%
			DLCAmmo           = 0.99%
			DLCOptics         = 0.99%
			DLCSupressor      = 0.99%
			LMGAmmo           = 0.99%
			MedicalItems      = 0.99%
			Restraints        = 0.99%
			SniperAmmo        = 0.99%
			SniperAttachments = 0.99%
			DLCRifles         = 1.49%
			DLCVests          = 1.49%
			GuerillaHeadgear  = 1.49%
			GuerillaVests     = 1.49%
			HandGrenades      = 1.49%
			HEGrenades        = 1.49%
			MilitaryBackpacks = 1.49%
			MilitaryHeadgear  = 1.49%
			MilitaryVests     = 1.49%
			RifleAmmo         = 1.49%
			RifleAttachments  = 1.49%
			SmokeGrenades     = 1.49%
			Snipers           = 1.49%
			UGLFlares         = 1.49%
			UGLSmokes         = 1.49%
			CivilianItems     = 1.98%
			GuerillaBackpacks = 1.98%
			GuerillaItems     = 1.98%
			LMG               = 1.98%
			Explosives        = 2.48%
			GuerillaClothing  = 2.48%
			MilitaryClothing  = 2.48%
			Rifles            = 2.48%
			Trash             = 49.50%
		*/
		Military[] = {"Trash", "Trash", "MilitaryClothing", "Trash", "LMGAmmo", "Trash", "DLCOptics", "MedicalItems", "Trash", "MilitaryHeadgear", "Trash", "Explosives", "Trash", "Restraints", "Trash", "Ghillies", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "RifleAmmo", "Trash", "MilitaryVests", "Trash", "Trash", "Trash", "DLCGhillies", "GuerillaClothing", "Trash", "Trash", "GuerillaClothing", "GuerillaClothing", "Trash", "Trash", "Trash", "Trash", "LMG", "DLCVests", "Trash", "Explosives", "Trash", "Trash", "Bipods", "Trash", "Explosives", "Trash", "Trash", "MilitaryClothing", "DLCRifles", "Trash", "SmokeGrenades", "Trash", "Trash", "Trash", "Trash", "MilitaryVests", "Trash", "DLCAmmo", "MilitaryClothing", "GuerillaItems", "Snipers", "HandGrenades", "Trash", "Trash", "HandGrenades", "DLCVests", "MilitaryVests", "GuerillaBackpacks", "HEGrenades", "RifleAttachments", "Trash", "Trash", "MilitaryHeadgear", "Trash", "Trash", "Trash", "Trash", "UGLFlares", "Rifles", "Trash", "SniperAttachments", "Trash", "Rifles", "Trash", "Trash", "SniperAmmo", "Trash", "RifleAttachments", "GuerillaVests", "UGLFlares", "LMG", "HEGrenades", "Trash", "RifleAmmo", "Trash", "Trash", "DLCRifles", "Trash", "SniperAmmo", "Rifles", "GuerillaHeadgear", "MilitaryClothing", "Trash", "MedicalItems", "UGLFlares", "Rifles", "Trash", "GuerillaVests", "Trash", "UGLSmokes", "Trash", "RifleAmmo", "Snipers", "Trash", "DLCVests", "Trash", "LMGAmmo", "Restraints", "Trash", "Explosives", "Trash", "Trash", "LMG", "RifleAttachments", "Trash", "MilitaryBackpacks", "Trash", "CivilianItems", "HandGrenades", "DLCRifles", "Trash", "Trash", "Trash", "Trash", "GuerillaHeadgear", "Trash", "MilitaryBackpacks", "Trash", "Trash", "Trash", "Trash", "GuerillaVests", "GuerillaBackpacks", "Trash", "DLCSupressor", "Trash", "Trash", "Snipers", "DLCAmmo", "Trash", "Trash", "CivilianItems", "SmokeGrenades", "UGLSmokes", "Trash", "GuerillaItems", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Explosives", "MilitaryBackpacks", "MilitaryClothing", "GuerillaClothing", "GuerillaHeadgear", "HEGrenades", "GuerillaClothing", "MilitaryHeadgear", "DLCOptics", "Trash", "Rifles", "LMG", "SniperAttachments", "DLCSupressor", "GuerillaBackpacks", "Trash", "Trash", "Trash", "Trash", "CivilianItems", "CivilianItems", "Trash", "GuerillaItems", "Trash", "GuerillaBackpacks", "GuerillaItems", "Trash", "Trash", "Trash", "UGLSmokes", "Trash", "Trash", "Bipods", "Rebreathers", "SmokeGrenades", "Trash", "Trash"};

		/*
			Percental Item Group Spawn Chances of Medical:

			Trash        = 30.00%
			MedicalItems = 70.00%
		*/
		Medical[] = {"MedicalItems", "MedicalItems", "Trash", "MedicalItems", "MedicalItems", "Trash", "MedicalItems", "MedicalItems", "Trash", "MedicalItems"};

		/*
			Percental Item Group Spawn Chances of Tourist:

			DLCAmmo           = 2.22%
			DLCOptics         = 2.22%
			DLCSupressor      = 2.22%
			SniperAmmo        = 2.22%
			SniperAttachments = 2.22%
			CivilianItems     = 4.44%
			Explosives        = 4.44%
			HandGrenades      = 4.44%
			MedicalItems      = 4.44%
			Restraints        = 4.44%
			DLCGhillies       = 6.67%
			Ghillies          = 6.67%
			MilitaryBackpacks = 8.89%
			MilitaryHeadgear  = 8.89%
			DLCRifles         = 17.78%
			Snipers           = 17.78%
		*/
		Tourist[] = {"MedicalItems", "Ghillies", "DLCRifles", "Snipers", "CivilianItems", "MilitaryHeadgear", "Explosives", "Snipers", "MilitaryHeadgear", "HandGrenades", "MilitaryHeadgear", "DLCSupressor", "Explosives", "Snipers", "Snipers", "DLCGhillies", "SniperAttachments", "DLCAmmo", "Restraints", "DLCRifles", "DLCOptics", "MilitaryBackpacks", "DLCRifles", "Snipers", "DLCRifles", "MedicalItems", "Ghillies", "DLCRifles", "MilitaryBackpacks", "DLCGhillies", "Restraints", "Ghillies", "MilitaryHeadgear", "DLCRifles", "DLCGhillies", "Snipers", "DLCRifles", "MilitaryBackpacks", "Snipers", "SniperAmmo", "Snipers", "DLCRifles", "CivilianItems", "MilitaryBackpacks", "HandGrenades"};

		/*
			Percental Item Group Spawn Chances of Radiation:

			DLCAmmo           = 2.27%
			DLCOptics         = 2.27%
			DLCSupressor      = 2.27%
			SniperAmmo        = 2.27%
			SniperAttachments = 2.27%
			EpicWeapons       = 4.55%
			HandGrenades      = 4.55%
			MedicalItems      = 4.55%
			Restraints        = 4.55%
			DLCGhillies       = 6.82%
			Ghillies          = 6.82%
			Explosives        = 11.36%
			MilitaryBackpacks = 11.36%
			MilitaryHeadgear  = 11.36%
			DLCRifles         = 11.36%
			Snipers           = 11.36%
		*/
		Radiation[] = {"SniperAmmo", "DLCRifles", "Snipers", "DLCRifles", "DLCGhillies", "Snipers", "DLCRifles", "SniperAttachments", "MilitaryBackpacks", "MilitaryHeadgear", "Explosives", "MilitaryHeadgear", "Explosives", "DLCRifles", "DLCOptics", "Explosives", "Snipers", "MilitaryHeadgear", "MilitaryBackpacks", "DLCRifles", "Restraints", "Ghillies", "MilitaryHeadgear", "DLCAmmo", "Explosives", "MilitaryBackpacks", "Snipers", "HandGrenades", "Snipers", "MilitaryBackpacks", "MedicalItems", "Ghillies", "DLCGhillies", "MilitaryBackpacks", "MedicalItems", "Restraints", "DLCGhillies", "Ghillies", "HandGrenades", "DLCSupressor", "Explosives", "EpicWeapons", "MilitaryHeadgear", "EpicWeapons"};
	};

	class ItemGroups
	{

		/*
			Percental Item Spawn Chances of Food:

			Exile_Item_CookingPot        = 2.08%
			Exile_Item_CanOpener         = 3.47%
			Exile_Item_Matches           = 3.47%
			Exile_Item_EMRE              = 2.08%
			Exile_Item_GloriousKnakworst = 4.17%
			Exile_Item_Surstromming      = 4.86%
			Exile_Item_SausageGravy      = 4.86%
			Exile_Item_ChristmasTinner   = 4.86%
			Exile_Item_MacasCheese       = 4.86%
			Exile_Item_BBQSandwich       = 4.86%
			Exile_Item_CatFood           = 4.86%
			Exile_Item_Dogfood           = 4.86%
			Exile_Item_BeefParts         = 4.86%
			Exile_Item_Cheathas          = 4.86%
			Exile_Item_DsNuts            = 4.86%
			Exile_Item_Noodles           = 4.86%
			Exile_Item_CockONut          = 5.56%
			Exile_Item_SeedAstics        = 5.56%
			Exile_Item_Raisins           = 6.25%
			Exile_Item_Moobar            = 6.25%
			Exile_Item_InstantCoffee     = 7.64%
		*/
		Food[] = {"Exile_Item_ChristmasTinner", "Exile_Item_Noodles", "Exile_Item_Raisins", "Exile_Item_BBQSandwich", "Exile_Item_BeefParts", "Exile_Item_Raisins", "Exile_Item_Surstromming", "Exile_Item_Surstromming", "Exile_Item_CatFood", "Exile_Item_Cheathas", "Exile_Item_Matches", "Exile_Item_GloriousKnakworst", "Exile_Item_Matches", "Exile_Item_CanOpener", "Exile_Item_GloriousKnakworst", "Exile_Item_BBQSandwich", "Exile_Item_Moobar", "Exile_Item_Matches", "Exile_Item_Moobar", "Exile_Item_Raisins", "Exile_Item_BBQSandwich", "Exile_Item_Cheathas", "Exile_Item_CatFood", "Exile_Item_Cheathas", "Exile_Item_Matches", "Exile_Item_MacasCheese", "Exile_Item_Cheathas", "Exile_Item_Surstromming", "Exile_Item_Dogfood", "Exile_Item_CatFood", "Exile_Item_CanOpener", "Exile_Item_CockONut", "Exile_Item_InstantCoffee", "Exile_Item_CockONut", "Exile_Item_ChristmasTinner", "Exile_Item_Matches", "Exile_Item_SausageGravy", "Exile_Item_Moobar", "Exile_Item_BeefParts", "Exile_Item_CockONut", "Exile_Item_SausageGravy", "Exile_Item_InstantCoffee", "Exile_Item_DsNuts", "Exile_Item_Raisins", "Exile_Item_BeefParts", "Exile_Item_InstantCoffee", "Exile_Item_BBQSandwich", "Exile_Item_DsNuts", "Exile_Item_Noodles", "Exile_Item_SeedAstics", "Exile_Item_GloriousKnakworst", "Exile_Item_CanOpener", "Exile_Item_CookingPot", "Exile_Item_CookingPot", "Exile_Item_ChristmasTinner", "Exile_Item_Cheathas", "Exile_Item_MacasCheese", "Exile_Item_CatFood", "Exile_Item_InstantCoffee", "Exile_Item_Noodles", "Exile_Item_Noodles", "Exile_Item_Moobar", "Exile_Item_CanOpener", "Exile_Item_MacasCheese", "Exile_Item_Moobar", "Exile_Item_CatFood", "Exile_Item_DsNuts", "Exile_Item_Dogfood", "Exile_Item_CockONut", "Exile_Item_InstantCoffee", "Exile_Item_Noodles", "Exile_Item_BeefParts", "Exile_Item_DsNuts", "Exile_Item_MacasCheese", "Exile_Item_GloriousKnakworst", "Exile_Item_ChristmasTinner", "Exile_Item_BeefParts", "Exile_Item_GloriousKnakworst", "Exile_Item_SeedAstics", "Exile_Item_Moobar", "Exile_Item_Moobar", "Exile_Item_SausageGravy", "Exile_Item_BBQSandwich", "Exile_Item_EMRE", "Exile_Item_SeedAstics", "Exile_Item_Moobar", "Exile_Item_EMRE", "Exile_Item_SeedAstics", "Exile_Item_CatFood", "Exile_Item_SeedAstics", "Exile_Item_Raisins", "Exile_Item_SeedAstics", "Exile_Item_Surstromming", "Exile_Item_SausageGravy", "Exile_Item_MacasCheese", "Exile_Item_Moobar", "Exile_Item_SeedAstics", "Exile_Item_InstantCoffee", "Exile_Item_DsNuts", "Exile_Item_ChristmasTinner", "Exile_Item_Surstromming", "Exile_Item_InstantCoffee", "Exile_Item_CockONut", "Exile_Item_Dogfood", "Exile_Item_Dogfood", "Exile_Item_BBQSandwich", "Exile_Item_CockONut", "Exile_Item_Surstromming", "Exile_Item_SausageGravy", "Exile_Item_MacasCheese", "Exile_Item_Raisins", "Exile_Item_DsNuts", "Exile_Item_ChristmasTinner", "Exile_Item_Surstromming", "Exile_Item_EMRE", "Exile_Item_Raisins", "Exile_Item_Cheathas", "Exile_Item_InstantCoffee", "Exile_Item_Cheathas", "Exile_Item_Dogfood", "Exile_Item_SausageGravy", "Exile_Item_CanOpener", "Exile_Item_DsNuts", "Exile_Item_SausageGravy", "Exile_Item_ChristmasTinner", "Exile_Item_GloriousKnakworst", "Exile_Item_InstantCoffee", "Exile_Item_BeefParts", "Exile_Item_CockONut", "Exile_Item_InstantCoffee", "Exile_Item_Raisins", "Exile_Item_Noodles", "Exile_Item_CookingPot", "Exile_Item_CockONut", "Exile_Item_BeefParts", "Exile_Item_SeedAstics", "Exile_Item_BBQSandwich", "Exile_Item_InstantCoffee", "Exile_Item_Noodles", "Exile_Item_Raisins", "Exile_Item_Dogfood", "Exile_Item_Dogfood", "Exile_Item_MacasCheese", "Exile_Item_CatFood"};

		/*
			Percental Item Spawn Chances of Drinks:

			Exile_Item_Beer                    = 7.14%
			Exile_Item_EnergyDrink             = 7.14%
			Exile_Item_PlasticBottleFreshWater = 7.14%
			Exile_Item_PowerDrink              = 7.14%
			Exile_Item_MountainDupe            = 14.29%
			Exile_Item_ChocolateMilk           = 21.43%
			Exile_Item_PlasticBottleDirtyWater = 35.71%
		*/
		Drinks[] = {"Exile_Item_MountainDupe", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_ChocolateMilk", "Exile_Item_EnergyDrink", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleFreshWater", "Exile_Item_Beer", "Exile_Item_PowerDrink", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_ChocolateMilk", "Exile_Item_ChocolateMilk", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_MountainDupe"};

		/*
			Percental Item Spawn Chances of Pistols:

			Exile_Weapon_Colt1911   = 5.88%
			Exile_Weapon_Makarov    = 5.88%
			Exile_Weapon_Taurus     = 5.88%
			Exile_Weapon_TaurusGold = 5.88%
			hgun_P07_khk_F          = 5.88%
			hgun_Pistol_01_F        = 5.88%
			hgun_Pistol_heavy_01_F  = 5.88%
			hgun_Pistol_heavy_02_F  = 5.88%
			hgun_Pistol_Signal_F    = 5.88%
			hgun_ACPC2_F            = 11.76%
			hgun_P07_F              = 11.76%
			hgun_Rook40_F           = 11.76%
			Exile_Weapon_SA61       = 11.76%
		*/
		Pistols[] = {"hgun_Pistol_heavy_02_F", "Exile_Weapon_SA61", "hgun_P07_F", "hgun_ACPC2_F", "hgun_P07_F", "Exile_Weapon_Taurus", "hgun_Rook40_F", "hgun_ACPC2_F", "hgun_Pistol_01_F", "hgun_Pistol_heavy_01_F", "hgun_Rook40_F", "Exile_Weapon_Makarov", "Exile_Weapon_TaurusGold", "Exile_Weapon_SA61", "hgun_Pistol_Signal_F", "Exile_Weapon_Colt1911", "hgun_P07_khk_F"};

		/*
			Percental Item Spawn Chances of PistolAmmo:

			6Rnd_GreenSignal_F               = 2.44%
			6Rnd_RedSignal_F                 = 2.44%
			16Rnd_9x21_Mag                   = 2.44%
			6Rnd_45ACP_Cylinder              = 4.88%
			10Rnd_9x21_Mag                   = 9.76%
			11Rnd_45ACP_Mag                  = 9.76%
			30Rnd_9x21_Mag                   = 9.76%
			9Rnd_45ACP_Mag                   = 9.76%
			Exile_Magazine_6Rnd_45ACP        = 9.76%
			Exile_Magazine_7Rnd_45ACP        = 9.76%
			Exile_Magazine_8Rnd_9x18         = 9.76%
			Exile_Magazine_10Rnd_765x17_SA61 = 9.76%
			Exile_Magazine_20Rnd_765x17_SA61 = 9.76%
		*/
		PistolAmmo[] = {"Exile_Magazine_20Rnd_765x17_SA61", "9Rnd_45ACP_Mag", "6Rnd_45ACP_Cylinder", "10Rnd_9x21_Mag", "6Rnd_45ACP_Cylinder", "9Rnd_45ACP_Mag", "Exile_Magazine_10Rnd_765x17_SA61", "Exile_Magazine_10Rnd_765x17_SA61", "Exile_Magazine_6Rnd_45ACP", "16Rnd_9x21_Mag", "Exile_Magazine_7Rnd_45ACP", "9Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "6Rnd_RedSignal_F", "Exile_Magazine_7Rnd_45ACP", "Exile_Magazine_20Rnd_765x17_SA61", "10Rnd_9x21_Mag", "Exile_Magazine_10Rnd_765x17_SA61", "30Rnd_9x21_Mag", "Exile_Magazine_6Rnd_45ACP", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "Exile_Magazine_8Rnd_9x18", "30Rnd_9x21_Mag", "Exile_Magazine_20Rnd_765x17_SA61", "11Rnd_45ACP_Mag", "Exile_Magazine_8Rnd_9x18", "Exile_Magazine_6Rnd_45ACP", "30Rnd_9x21_Mag", "Exile_Magazine_8Rnd_9x18", "6Rnd_GreenSignal_F", "Exile_Magazine_20Rnd_765x17_SA61", "Exile_Magazine_7Rnd_45ACP", "Exile_Magazine_6Rnd_45ACP", "Exile_Magazine_8Rnd_9x18", "30Rnd_9x21_Mag", "Exile_Magazine_7Rnd_45ACP", "11Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "Exile_Magazine_10Rnd_765x17_SA61", "11Rnd_45ACP_Mag"};

		/*
			Percental Item Spawn Chances of PistolAttachments:

			optic_MRD       = 16.67%
			optic_Yorris    = 16.67%
			muzzle_snds_acp = 33.33%
			muzzle_snds_L   = 33.33%
		*/
		PistolAttachments[] = {"muzzle_snds_acp", "muzzle_snds_L", "optic_Yorris", "muzzle_snds_acp", "muzzle_snds_L", "optic_MRD"};

		/*
			Percental Item Spawn Chances of Shotguns:

			Exile_Weapon_M1014 = 100.00%
		*/
		Shotguns[] = {"Exile_Weapon_M1014"};

		/*
			Percental Item Spawn Chances of ShotgunAmmo:

			Exile_Magazine_8Rnd_74Slug = 100.00%
		*/
		ShotgunAmmo[] = {"Exile_Magazine_8Rnd_74Slug"};

		/*
			Percental Item Spawn Chances of SMG:

			SMG_01_F       = 25.00%
			SMG_02_F       = 25.00%
			SMG_05_F       = 25.00%
			hgun_PDW2000_F = 25.00%
		*/
		SMG[] = {"SMG_05_F", "SMG_02_F", "hgun_PDW2000_F", "SMG_01_F"};

		/*
			Percental Item Spawn Chances of SMGAmmo:

			30Rnd_45ACP_Mag_SMG_01              = 16.67%
			30Rnd_45ACP_Mag_SMG_01_Tracer_Green = 16.67%
			30Rnd_9x21_Mag_SMG_02               = 16.67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Red    = 16.67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Yellow = 16.67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Green  = 16.67%
		*/
		SMGAmmo[] = {"30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_45ACP_Mag_SMG_01"};

		/*
			Percental Item Spawn Chances of SMGAttachments:

			optic_Holosight_smg       = 16.67%
			optic_Holosight_smg_blk_F = 16.67%
			optic_ACO_grn_smg         = 16.67%
			optic_Aco_smg             = 16.67%
			optic_ACO_grn             = 16.67%
			optic_Aco                 = 16.67%
		*/
		SMGAttachments[] = {"optic_ACO_grn_smg", "optic_Holosight_smg_blk_F", "optic_Holosight_smg", "optic_ACO_grn", "optic_Aco", "optic_Aco_smg"};

		/*
			Percental Item Spawn Chances of Rifles:

			arifle_Katiba_GL_F       = 0.71%
			arifle_Mk20_GL_F         = 0.71%
			arifle_MX_GL_Black_F     = 0.71%
			arifle_MX_GL_F           = 0.71%
			arifle_MXM_F             = 0.71%
			arifle_TRG21_GL_F        = 0.71%
			Exile_Weapon_AK107_GL    = 0.71%
			Exile_Weapon_AK74_GL     = 0.71%
			arifle_AK12_GL_F         = 1.43%
			arifle_AKM_F             = 1.43%
			arifle_AKM_FL_F          = 1.43%
			arifle_AKS_F             = 1.43%
			arifle_ARX_blk_F         = 1.43%
			arifle_ARX_ghex_F        = 1.43%
			arifle_ARX_hex_F         = 1.43%
			arifle_CTAR_blk_F        = 1.43%
			arifle_CTAR_ghex_F       = 1.43%
			arifle_CTAR_GL_blk_F     = 1.43%
			arifle_CTAR_hex_F        = 1.43%
			arifle_CTARS_blk_F       = 1.43%
			arifle_CTARS_ghex_F      = 1.43%
			arifle_CTARS_hex_F       = 1.43%
			arifle_Katiba_F          = 1.43%
			arifle_Mk20_F            = 1.43%
			arifle_Mk20C_F           = 1.43%
			arifle_MX_Black_F        = 1.43%
			arifle_MX_F              = 1.43%
			arifle_MXC_Black_F       = 1.43%
			arifle_MXC_F             = 1.43%
			arifle_MXM_Black_F       = 1.43%
			arifle_SDAR_F            = 1.43%
			arifle_SPAR_01_blk_F     = 1.43%
			arifle_SPAR_01_GL_blk_F  = 1.43%
			arifle_SPAR_01_GL_khk_F  = 1.43%
			arifle_SPAR_01_GL_snd_F  = 1.43%
			arifle_SPAR_01_khk_F     = 1.43%
			arifle_SPAR_01_snd_F     = 1.43%
			arifle_SPAR_02_blk_F     = 1.43%
			arifle_SPAR_02_khk_F     = 1.43%
			arifle_SPAR_02_snd_F     = 1.43%
			arifle_SPAR_03_blk_F     = 1.43%
			arifle_SPAR_03_khk_F     = 1.43%
			arifle_SPAR_03_snd_F     = 1.43%
			arifle_TRG20_F           = 1.43%
			arifle_TRG21_F           = 1.43%
			Exile_Weapon_AK107       = 1.43%
			Exile_Weapon_AK74        = 1.43%
			Exile_Weapon_DMR         = 1.43%
			arifle_MXM_khk_F         = 2.14%
			Exile_Weapon_AK47        = 2.14%
			Exile_Weapon_AKS_Gold    = 2.14%
			Exile_Weapon_SVD         = 2.14%
			Exile_Weapon_SVDCamo     = 2.14%
			Exile_Weapon_VSSVintorez = 2.14%
			arifle_MX_GL_khk_F       = 2.14%
			arifle_AK12_F            = 2.14%
			Exile_Weapon_CZ550       = 2.14%
			arifle_MX_khk_F          = 2.14%
			arifle_MXC_khk_F         = 2.14%
			Exile_Weapon_M4          = 2.14%
			Exile_Weapon_M16A4       = 2.14%
			Exile_Weapon_M16A2       = 2.14%
			Exile_Weapon_LeeEnfield  = 7.14%
		*/
		Rifles[] = {"arifle_ARX_ghex_F", "Exile_Weapon_SVD", "arifle_Katiba_F", "arifle_MXM_Black_F", "arifle_SPAR_02_snd_F", "arifle_MX_Black_F", "arifle_MX_F", "arifle_AK12_F", "Exile_Weapon_DMR", "arifle_SPAR_02_blk_F", "Exile_Weapon_DMR", "arifle_MXC_khk_F", "arifle_SPAR_01_GL_khk_F", "arifle_SPAR_03_snd_F", "arifle_MXC_Black_F", "Exile_Weapon_VSSVintorez", "Exile_Weapon_M16A4", "Exile_Weapon_M4", "arifle_TRG21_F", "Exile_Weapon_SVD", "arifle_MX_khk_F", "arifle_AKM_FL_F", "arifle_SPAR_02_khk_F", "arifle_MXC_khk_F", "arifle_SPAR_03_khk_F", "Exile_Weapon_M4", "arifle_MXM_F", "arifle_CTAR_GL_blk_F", "arifle_SPAR_01_blk_F", "Exile_Weapon_AK47", "arifle_SPAR_01_khk_F", "Exile_Weapon_LeeEnfield", "Exile_Weapon_LeeEnfield", "arifle_TRG21_F", "arifle_SPAR_01_snd_F", "Exile_Weapon_AK74", "Exile_Weapon_LeeEnfield", "arifle_MXC_F", "arifle_MXC_khk_F", "arifle_Katiba_GL_F", "arifle_Mk20C_F", "arifle_SPAR_03_blk_F", "Exile_Weapon_M16A2", "arifle_CTAR_hex_F", "arifle_ARX_blk_F", "arifle_ARX_ghex_F", "arifle_SPAR_01_GL_khk_F", "Exile_Weapon_M16A2", "arifle_SPAR_03_khk_F", "Exile_Weapon_LeeEnfield", "arifle_SPAR_01_GL_snd_F", "Exile_Weapon_LeeEnfield", "Exile_Weapon_AKS_Gold", "arifle_MXM_khk_F", "arifle_MX_GL_F", "Exile_Weapon_M16A4", "Exile_Weapon_AK107", "arifle_CTAR_hex_F", "arifle_CTARS_ghex_F", "arifle_MX_khk_F", "arifle_CTARS_ghex_F", "Exile_Weapon_CZ550", "Exile_Weapon_M16A4", "arifle_CTAR_GL_blk_F", "arifle_CTAR_blk_F", "arifle_MXM_khk_F", "arifle_CTARS_blk_F", "arifle_CTAR_ghex_F", "Exile_Weapon_M16A2", "arifle_AK12_F", "arifle_CTARS_blk_F", "Exile_Weapon_CZ550", "Exile_Weapon_LeeEnfield", "Exile_Weapon_LeeEnfield", "arifle_MXC_Black_F", "arifle_MX_khk_F", "arifle_AK12_GL_F", "Exile_Weapon_VSSVintorez", "Exile_Weapon_LeeEnfield", "arifle_SPAR_02_blk_F", "arifle_TRG20_F", "Exile_Weapon_AKS_Gold", "arifle_SPAR_02_snd_F", "arifle_SPAR_03_blk_F", "arifle_Katiba_F", "Exile_Weapon_AKS_Gold", "arifle_TRG21_GL_F", "arifle_ARX_hex_F", "arifle_CTAR_blk_F", "arifle_Mk20_F", "arifle_MXC_F", "arifle_Mk20C_F", "Exile_Weapon_AK74", "arifle_SPAR_01_khk_F", "arifle_MXM_Black_F", "arifle_Mk20_GL_F", "arifle_SPAR_01_GL_blk_F", "Exile_Weapon_AK47", "arifle_CTARS_hex_F", "arifle_SDAR_F", "arifle_MX_GL_khk_F", "arifle_AKM_F", "arifle_Mk20_F", "arifle_AKM_FL_F", "arifle_SPAR_03_snd_F", "arifle_SDAR_F", "arifle_CTAR_ghex_F", "arifle_MX_GL_Black_F", "Exile_Weapon_M4", "arifle_CTARS_hex_F", "arifle_AK12_F", "Exile_Weapon_AK74_GL", "Exile_Weapon_LeeEnfield", "arifle_SPAR_01_blk_F", "Exile_Weapon_AK47", "Exile_Weapon_AK107_GL", "Exile_Weapon_LeeEnfield", "arifle_MX_GL_khk_F", "arifle_MX_F", "Exile_Weapon_AK107", "arifle_AKS_F", "arifle_MXM_khk_F", "arifle_SPAR_01_GL_blk_F", "arifle_ARX_blk_F", "arifle_TRG20_F", "arifle_ARX_hex_F", "arifle_AK12_GL_F", "arifle_SPAR_01_GL_snd_F", "arifle_SPAR_02_khk_F", "Exile_Weapon_SVD", "arifle_SPAR_01_snd_F", "arifle_AKS_F", "Exile_Weapon_SVDCamo", "arifle_AKM_F", "arifle_MX_Black_F", "Exile_Weapon_VSSVintorez", "Exile_Weapon_SVDCamo", "Exile_Weapon_SVDCamo", "arifle_MX_GL_khk_F", "Exile_Weapon_CZ550"};

		/*
			Percental Item Spawn Chances of RifleAmmo:

			20Rnd_556x45_UW_mag                    = 2.20%
			30Rnd_556x45_Stanag                    = 2.20%
			30Rnd_556x45_Stanag_green              = 2.20%
			30Rnd_556x45_Stanag_red                = 2.20%
			30Rnd_556x45_Stanag_Tracer_Green       = 2.20%
			30Rnd_556x45_Stanag_Tracer_Red         = 2.20%
			30Rnd_556x45_Stanag_Tracer_Yellow      = 2.20%
			30Rnd_65x39_caseless_green             = 2.20%
			30Rnd_65x39_caseless_green_mag_Tracer  = 2.20%
			30Rnd_65x39_caseless_mag               = 2.20%
			30Rnd_65x39_caseless_mag_Tracer        = 2.20%
			Exile_Magazine_10Rnd_303               = 10.99%
			Exile_Magazine_30Rnd_762x39_AK         = 2.20%
			Exile_Magazine_30Rnd_545x39_AK         = 2.20%
			Exile_Magazine_30Rnd_545x39_AK_Green   = 2.20%
			Exile_Magazine_30Rnd_545x39_AK_Red     = 2.20%
			Exile_Magazine_30Rnd_545x39_AK_White   = 2.20%
			Exile_Magazine_30Rnd_545x39_AK_Yellow  = 2.20%
			Exile_Magazine_20Rnd_762x51_DMR        = 1.10%
			Exile_Magazine_20Rnd_762x51_DMR_Yellow = 1.10%
			Exile_Magazine_20Rnd_762x51_DMR_Red    = 1.10%
			Exile_Magazine_20Rnd_762x51_DMR_Green  = 1.10%
			Exile_Magazine_20Rnd_762x51_DMR_White  = 1.10%
			Exile_Magazine_5Rnd_22LR               = 2.20%
			Exile_Magazine_10Rnd_762x54            = 2.20%
			Exile_Magazine_10Rnd_9x39              = 2.20%
			Exile_Magazine_20Rnd_9x39              = 2.20%
			30Rnd_762x39_Mag_F                     = 2.20%
			30Rnd_762x39_Mag_Green_F               = 2.20%
			30Rnd_762x39_Mag_Tracer_F              = 2.20%
			30Rnd_762x39_Mag_Tracer_Green_F        = 2.20%
			30Rnd_762x39_AK47_M                    = 2.20%
			30Rnd_545x39_Mag_F                     = 2.20%
			30Rnd_545x39_Mag_Green_F               = 2.20%
			30Rnd_545x39_Mag_Tracer_F              = 2.20%
			30Rnd_545x39_Mag_Tracer_Green_F        = 2.20%
			10Rnd_50BW_Mag_F                       = 2.20%
			30Rnd_580x42_Mag_F                     = 2.20%
			30Rnd_580x42_Mag_Tracer_F              = 2.20%
			100Rnd_580x42_Mag_F                    = 2.20%
			100Rnd_580x42_Mag_Tracer_F             = 2.20%
			150Rnd_556x45_Drum_Mag_F               = 2.20%
			150Rnd_556x45_Drum_Mag_Tracer_F        = 2.20%
			20Rnd_762x51_Mag                       = 2.20%
		*/
		RifleAmmo[] = {"30Rnd_762x39_Mag_Green_F", "30Rnd_762x39_Mag_F", "30Rnd_545x39_Mag_Green_F", "Exile_Magazine_5Rnd_22LR", "Exile_Magazine_30Rnd_545x39_AK_Green", "30Rnd_545x39_Mag_Tracer_Green_F", "30Rnd_556x45_Stanag_green", "150Rnd_556x45_Drum_Mag_F", "150Rnd_556x45_Drum_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_762x39_AK47_M", "20Rnd_762x51_Mag", "Exile_Magazine_30Rnd_545x39_AK", "20Rnd_556x45_UW_mag", "Exile_Magazine_10Rnd_762x54", "30Rnd_762x39_Mag_Tracer_Green_F", "Exile_Magazine_10Rnd_9x39", "30Rnd_762x39_Mag_Tracer_F", "30Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_Tracer_F", "30Rnd_545x39_Mag_Tracer_Green_F", "30Rnd_545x39_Mag_Green_F", "Exile_Magazine_10Rnd_303", "30Rnd_65x39_caseless_green_mag_Tracer", "Exile_Magazine_30Rnd_545x39_AK_Green", "30Rnd_762x39_Mag_Green_F", "Exile_Magazine_20Rnd_9x39", "100Rnd_580x42_Mag_F", "Exile_Magazine_20Rnd_762x51_DMR_Yellow", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_556x45_Stanag_red", "30Rnd_65x39_caseless_green", "30Rnd_762x39_AK47_M", "30Rnd_556x45_Stanag_Tracer_Red", "100Rnd_580x42_Mag_Tracer_F", "Exile_Magazine_10Rnd_9x39", "100Rnd_580x42_Mag_F", "Exile_Magazine_20Rnd_762x51_DMR_Green", "20Rnd_556x45_UW_mag", "Exile_Magazine_30Rnd_762x39_AK", "30Rnd_545x39_Mag_F", "Exile_Magazine_5Rnd_22LR", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_65x39_caseless_mag_Tracer", "Exile_Magazine_30Rnd_545x39_AK_White", "Exile_Magazine_20Rnd_762x51_DMR", "Exile_Magazine_10Rnd_303", "30Rnd_545x39_Mag_F", "20Rnd_762x51_Mag", "10Rnd_50BW_Mag_F", "Exile_Magazine_10Rnd_303", "30Rnd_556x45_Stanag", "30Rnd_545x39_Mag_Tracer_F", "10Rnd_50BW_Mag_F", "30Rnd_762x39_Mag_F", "Exile_Magazine_30Rnd_545x39_AK_Red", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "Exile_Magazine_30Rnd_545x39_AK_White", "Exile_Magazine_10Rnd_303", "30Rnd_580x42_Mag_F", "Exile_Magazine_10Rnd_303", "30Rnd_545x39_Mag_Tracer_F", "30Rnd_65x39_caseless_green_mag_Tracer", "150Rnd_556x45_Drum_Mag_F", "Exile_Magazine_20Rnd_762x51_DMR_Red", "Exile_Magazine_30Rnd_545x39_AK_Yellow", "Exile_Magazine_20Rnd_9x39", "Exile_Magazine_10Rnd_303", "30Rnd_762x39_Mag_Tracer_Green_F", "Exile_Magazine_30Rnd_762x39_AK", "Exile_Magazine_30Rnd_545x39_AK", "Exile_Magazine_10Rnd_762x54", "Exile_Magazine_10Rnd_303", "30Rnd_65x39_caseless_mag_Tracer", "Exile_Magazine_30Rnd_545x39_AK_Red", "30Rnd_762x39_Mag_Tracer_F", "30Rnd_556x45_Stanag_Tracer_Yellow", "Exile_Magazine_10Rnd_303", "150Rnd_556x45_Drum_Mag_Tracer_F", "Exile_Magazine_10Rnd_303", "Exile_Magazine_10Rnd_303", "30Rnd_556x45_Stanag_green", "Exile_Magazine_20Rnd_762x51_DMR_White", "Exile_Magazine_30Rnd_545x39_AK_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_65x39_caseless_green", "30Rnd_580x42_Mag_Tracer_F"};

		/*
			Percental Item Spawn Chances of RifleAttachments:

			muzzle_snds_M            = 3.39%
			muzzle_snds_H            = 3.39%
			muzzle_snds_H_khk_F      = 3.39%
			muzzle_snds_H_snd_F      = 3.39%
			muzzle_snds_58_blk_F     = 3.39%
			muzzle_snds_m_khk_F      = 3.39%
			muzzle_snds_m_snd_F      = 3.39%
			muzzle_snds_58_wdm_F     = 3.39%
			muzzle_snds_65_TI_blk_F  = 3.39%
			muzzle_snds_65_TI_hex_F  = 3.39%
			muzzle_snds_65_TI_ghex_F = 3.39%
			muzzle_snds_H_MG_blk_F   = 3.39%
			muzzle_snds_H_MG_khk_F   = 3.39%
			optic_Arco               = 3.39%
			optic_Arco_blk_F         = 3.39%
			optic_Arco_ghex_F        = 3.39%
			optic_Hamr               = 3.39%
			optic_Hamr_khk_F         = 3.39%
			optic_Holosight          = 3.39%
			optic_Holosight_blk_F    = 3.39%
			optic_Holosight_khk_F    = 3.39%
			acc_flashlight           = 3.39%
			acc_pointer_IR           = 3.39%
			optic_MRCO               = 3.39%
			optic_DMS                = 3.39%
			optic_DMS_ghex_F         = 3.39%
			optic_ERCO_blk_F         = 3.39%
			optic_ERCO_khk_F         = 3.39%
			optic_ERCO_snd_F         = 3.39%
			optic_NVS                = 1.69%
		*/
		RifleAttachments[] = {"muzzle_snds_H", "optic_ERCO_khk_F", "optic_Holosight_blk_F", "muzzle_snds_65_TI_ghex_F", "muzzle_snds_H_MG_khk_F", "muzzle_snds_H_snd_F", "optic_DMS_ghex_F", "muzzle_snds_65_TI_hex_F", "optic_Arco", "optic_Holosight_khk_F", "muzzle_snds_65_TI_hex_F", "optic_Arco_ghex_F", "muzzle_snds_65_TI_ghex_F", "muzzle_snds_H_MG_khk_F", "muzzle_snds_M", "muzzle_snds_M", "muzzle_snds_58_wdm_F", "optic_ERCO_blk_F", "optic_DMS_ghex_F", "muzzle_snds_m_khk_F", "muzzle_snds_m_snd_F", "optic_ERCO_blk_F", "optic_Hamr_khk_F", "optic_NVS", "optic_Hamr", "muzzle_snds_H_khk_F", "muzzle_snds_H_MG_blk_F", "optic_ERCO_snd_F", "acc_pointer_IR", "muzzle_snds_H_khk_F", "optic_ERCO_snd_F", "muzzle_snds_H", "optic_Holosight", "muzzle_snds_65_TI_blk_F", "optic_Holosight_khk_F", "muzzle_snds_58_wdm_F", "muzzle_snds_H_MG_blk_F", "acc_flashlight", "muzzle_snds_58_blk_F", "optic_MRCO", "optic_ERCO_khk_F", "optic_DMS", "muzzle_snds_m_khk_F", "optic_Arco_blk_F", "optic_Arco_blk_F", "muzzle_snds_m_snd_F", "optic_Hamr", "muzzle_snds_65_TI_blk_F", "optic_Holosight", "optic_Holosight_blk_F", "acc_flashlight", "optic_Hamr_khk_F", "muzzle_snds_H_snd_F", "optic_Arco_ghex_F", "acc_pointer_IR", "optic_DMS", "optic_MRCO", "muzzle_snds_58_blk_F", "optic_Arco"};

		/*
			Percental Item Spawn Chances of LMG:

			arifle_MX_SW_Black_F = 12.50%
			arifle_MX_SW_F       = 12.50%
			LMG_Mk200_F          = 12.50%
			LMG_Zafir_F          = 12.50%
			Exile_Weapon_RPK     = 12.50%
			Exile_Weapon_PK      = 12.50%
			Exile_Weapon_PKP     = 12.50%
			LMG_03_F             = 12.50%
		*/
		LMG[] = {"LMG_Zafir_F", "Exile_Weapon_RPK", "Exile_Weapon_PKP", "arifle_MX_SW_F", "LMG_03_F", "Exile_Weapon_PK", "LMG_Mk200_F", "arifle_MX_SW_Black_F"};

		/*
			Percental Item Spawn Chances of LMGAmmo:

			100Rnd_65x39_caseless_mag             = 7.69%
			100Rnd_65x39_caseless_mag_Tracer      = 11.54%
			150Rnd_762x54_Box                     = 11.54%
			150Rnd_762x54_Box_Tracer              = 3.85%
			130Rnd_338_Mag                        = 19.23%
			150Rnd_93x64_Mag                      = 19.23%
			Exile_Magazine_45Rnd_545x39_RPK_Green = 3.85%
			Exile_Magazine_75Rnd_545x39_RPK_Green = 3.85%
			Exile_Magazine_100Rnd_762x54_PK_Green = 3.85%
			200Rnd_556x45_Box_F                   = 3.85%
			200Rnd_556x45_Box_Red_F               = 3.85%
			200Rnd_556x45_Box_Tracer_F            = 3.85%
			200Rnd_556x45_Box_Tracer_Red_F        = 3.85%
		*/
		LMGAmmo[] = {"150Rnd_93x64_Mag", "150Rnd_93x64_Mag", "200Rnd_556x45_Box_F", "130Rnd_338_Mag", "150Rnd_93x64_Mag", "Exile_Magazine_100Rnd_762x54_PK_Green", "200Rnd_556x45_Box_Tracer_Red_F", "Exile_Magazine_45Rnd_545x39_RPK_Green", "130Rnd_338_Mag", "130Rnd_338_Mag", "100Rnd_65x39_caseless_mag", "150Rnd_93x64_Mag", "100Rnd_65x39_caseless_mag_Tracer", "150Rnd_762x54_Box", "200Rnd_556x45_Box_Red_F", "130Rnd_338_Mag", "Exile_Magazine_75Rnd_545x39_RPK_Green", "150Rnd_762x54_Box", "150Rnd_762x54_Box", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag", "150Rnd_93x64_Mag", "150Rnd_762x54_Box_Tracer", "200Rnd_556x45_Box_Tracer_F", "130Rnd_338_Mag", "100Rnd_65x39_caseless_mag_Tracer"};

		/*
			Percental Item Spawn Chances of Snipers:

			srifle_DMR_01_F      = 9.09%
			srifle_EBR_F         = 9.09%
			srifle_GM6_F         = 9.09%
			srifle_LRR_F         = 9.09%
			srifle_LRR_tna_F     = 9.09%
			srifle_GM6_ghex_F    = 9.09%
			srifle_DMR_07_blk_F  = 9.09%
			srifle_DMR_07_hex_F  = 9.09%
			srifle_DMR_07_ghex_F = 9.09%
			Exile_Weapon_m107    = 9.09%
			Exile_Weapon_ksvk    = 9.09%
		*/
		Snipers[] = {"srifle_LRR_F", "Exile_Weapon_m107", "srifle_DMR_07_hex_F", "srifle_DMR_07_ghex_F", "srifle_GM6_ghex_F", "srifle_DMR_07_blk_F", "Exile_Weapon_ksvk", "srifle_GM6_F", "srifle_DMR_01_F", "srifle_EBR_F", "srifle_LRR_tna_F"};

		/*
			Percental Item Spawn Chances of SniperAmmo:

			Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag      = 0.74%
			Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag = 0.74%
			Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag      = 1.48%
			Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag           = 1.48%
			Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag      = 2.22%
			Exile_Magazine_7Rnd_408_Bullet_Cam_Mag               = 2.22%
			Exile_Magazine_10Rnd_338_Bullet_Cam_Mag              = 3.70%
			Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag     = 3.70%
			Exile_Magazine_5Rnd_127x108_APDS_KSVK                = 5.93%
			5Rnd_127x108_APDS_Mag                                = 5.93%
			5Rnd_127x108_Mag                                     = 7.41%
			Exile_Magazine_10Rnd_127x99_m107                     = 7.41%
			Exile_Magazine_5Rnd_127x108_KSVK                     = 7.41%
			7Rnd_408_Mag                                         = 7.41%
			10Rnd_762x54_Mag                                     = 12.59%
			20Rnd_762x51_Mag                                     = 14.07%
			20Rnd_650x39_Cased_Mag_F                             = 15.56%
		*/
		SniperAmmo[] = {"Exile_Magazine_5Rnd_127x108_APDS_KSVK", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "10Rnd_762x54_Mag", "5Rnd_127x108_Mag", "Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag", "10Rnd_762x54_Mag", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_127x99_m107", "10Rnd_762x54_Mag", "20Rnd_762x51_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "10Rnd_762x54_Mag", "20Rnd_762x51_Mag", "10Rnd_762x54_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "5Rnd_127x108_Mag", "10Rnd_762x54_Mag", "5Rnd_127x108_APDS_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "5Rnd_127x108_APDS_Mag", "10Rnd_762x54_Mag", "5Rnd_127x108_APDS_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag", "7Rnd_408_Mag", "Exile_Magazine_10Rnd_127x99_m107", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_127x99_m107", "20Rnd_762x51_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag", "10Rnd_762x54_Mag", "7Rnd_408_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "Exile_Magazine_10Rnd_127x99_m107", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_10Rnd_127x99_m107", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_10Rnd_127x99_m107", "20Rnd_762x51_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "10Rnd_762x54_Mag", "7Rnd_408_Mag", "10Rnd_762x54_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "5Rnd_127x108_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "5Rnd_127x108_Mag", "Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag", "20Rnd_762x51_Mag", "5Rnd_127x108_APDS_Mag", "7Rnd_408_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "5Rnd_127x108_APDS_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "Exile_Magazine_5Rnd_127x108_KSVK", "7Rnd_408_Mag", "20Rnd_762x51_Mag", "10Rnd_762x54_Mag", "5Rnd_127x108_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "Exile_Magazine_5Rnd_127x108_KSVK", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_127x99_m107", "5Rnd_127x108_Mag", "10Rnd_762x54_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "20Rnd_650x39_Cased_Mag_F", "5Rnd_127x108_Mag", "7Rnd_408_Mag", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_127x99_m107", "10Rnd_762x54_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "7Rnd_408_Mag", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag", "20Rnd_762x51_Mag", "5Rnd_127x108_Mag", "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag", "10Rnd_762x54_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "7Rnd_408_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_127x99_m107", "Exile_Magazine_10Rnd_127x99_m107", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F"};

		/*
			Percental Item Spawn Chances of SniperAttachments:

			muzzle_snds_B_khk_F = 11.11%
			muzzle_snds_B_snd_F = 11.11%
			muzzle_snds_B       = 11.11%
			optic_LRPS          = 11.11%
			optic_LRPS_ghex_F   = 11.11%
			optic_LRPS_tna_F    = 11.11%
			optic_SOS           = 11.11%
			optic_SOS_khk_F     = 11.11%
			optic_DMS           = 11.11%
		*/
		SniperAttachments[] = {"muzzle_snds_B_khk_F", "optic_SOS_khk_F", "optic_DMS", "muzzle_snds_B_snd_F", "optic_SOS", "optic_LRPS_ghex_F", "muzzle_snds_B", "optic_LRPS", "optic_LRPS_tna_F"};

		/*
			Percental Item Spawn Chances of DLCRifles:

			srifle_DMR_03_F          = 4.05%
			srifle_DMR_03_khaki_F    = 4.05%
			srifle_DMR_03_tan_F      = 4.05%
			srifle_DMR_03_woodland_F = 4.05%
			srifle_DMR_06_camo_F     = 4.05%
			srifle_DMR_06_olive_F    = 4.05%
			srifle_DMR_02_camo_F     = 8.11%
			srifle_DMR_02_F          = 8.11%
			srifle_DMR_02_sniper_F   = 8.11%
			srifle_DMR_04_F          = 9.46%
			srifle_DMR_04_Tan_F      = 9.46%
			srifle_DMR_05_blk_F      = 10.81%
			srifle_DMR_05_hex_F      = 10.81%
			srifle_DMR_05_tan_F      = 10.81%
		*/
		DLCRifles[] = {"srifle_DMR_05_tan_F", "srifle_DMR_05_hex_F", "srifle_DMR_03_tan_F", "srifle_DMR_03_tan_F", "srifle_DMR_05_blk_F", "srifle_DMR_06_olive_F", "srifle_DMR_05_hex_F", "srifle_DMR_02_sniper_F", "srifle_DMR_04_F", "srifle_DMR_06_olive_F", "srifle_DMR_02_sniper_F", "srifle_DMR_02_camo_F", "srifle_DMR_05_tan_F", "srifle_DMR_05_hex_F", "srifle_DMR_04_F", "srifle_DMR_06_camo_F", "srifle_DMR_05_hex_F", "srifle_DMR_02_sniper_F", "srifle_DMR_03_F", "srifle_DMR_04_Tan_F", "srifle_DMR_02_F", "srifle_DMR_02_sniper_F", "srifle_DMR_03_khaki_F", "srifle_DMR_02_camo_F", "srifle_DMR_05_blk_F", "srifle_DMR_06_olive_F", "srifle_DMR_04_Tan_F", "srifle_DMR_05_hex_F", "srifle_DMR_06_camo_F", "srifle_DMR_04_F", "srifle_DMR_05_blk_F", "srifle_DMR_02_F", "srifle_DMR_03_woodland_F", "srifle_DMR_04_Tan_F", "srifle_DMR_02_F", "srifle_DMR_03_F", "srifle_DMR_03_khaki_F", "srifle_DMR_02_camo_F", "srifle_DMR_04_F", "srifle_DMR_05_tan_F", "srifle_DMR_02_sniper_F", "srifle_DMR_05_blk_F", "srifle_DMR_04_Tan_F", "srifle_DMR_02_camo_F", "srifle_DMR_05_tan_F", "srifle_DMR_02_camo_F", "srifle_DMR_05_blk_F", "srifle_DMR_04_F", "srifle_DMR_05_tan_F", "srifle_DMR_03_woodland_F", "srifle_DMR_05_blk_F", "srifle_DMR_05_blk_F", "srifle_DMR_04_Tan_F", "srifle_DMR_04_F", "srifle_DMR_05_tan_F", "srifle_DMR_02_F", "srifle_DMR_02_F", "srifle_DMR_04_Tan_F", "srifle_DMR_02_F", "srifle_DMR_05_blk_F", "srifle_DMR_05_tan_F", "srifle_DMR_02_camo_F", "srifle_DMR_05_hex_F", "srifle_DMR_03_khaki_F", "srifle_DMR_04_Tan_F", "srifle_DMR_05_hex_F", "srifle_DMR_05_tan_F", "srifle_DMR_02_sniper_F", "srifle_DMR_03_woodland_F", "srifle_DMR_05_hex_F", "srifle_DMR_03_tan_F", "srifle_DMR_06_camo_F", "srifle_DMR_04_F", "srifle_DMR_03_F"};

		/*
			Percental Item Spawn Chances of DLCAmmo:

			10Rnd_127x54_Mag       = 20.00%
			20Rnd_762x51_Mag       = 20.00%
			10Rnd_338_Mag          = 30.00%
			10Rnd_93x64_DMR_05_Mag = 30.00%
		*/
		DLCAmmo[] = {"10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_338_Mag", "20Rnd_762x51_Mag", "10Rnd_127x54_Mag", "10Rnd_338_Mag", "10Rnd_127x54_Mag", "20Rnd_762x51_Mag", "10Rnd_338_Mag", "10Rnd_93x64_DMR_05_Mag"};

		/*
			Percental Item Spawn Chances of DLCOptics:

			optic_AMS     = 14.29%
			optic_AMS_khk = 14.29%
			optic_AMS_snd = 14.29%
			optic_KHS_blk = 14.29%
			optic_KHS_hex = 14.29%
			optic_KHS_old = 14.29%
			optic_KHS_tan = 14.29%
		*/
		DLCOptics[] = {"optic_KHS_hex", "optic_KHS_old", "optic_AMS_snd", "optic_AMS_khk", "optic_AMS", "optic_KHS_blk", "optic_KHS_tan"};

		/*
			Percental Item Spawn Chances of DLCSupressor:

			muzzle_snds_338_black = 16.67%
			muzzle_snds_338_green = 16.67%
			muzzle_snds_338_sand  = 16.67%
			muzzle_snds_93mmg     = 16.67%
			muzzle_snds_93mmg_tan = 16.67%
			muzzle_snds_B         = 16.67%
		*/
		DLCSupressor[] = {"muzzle_snds_93mmg_tan", "muzzle_snds_338_black", "muzzle_snds_338_green", "muzzle_snds_B", "muzzle_snds_338_sand", "muzzle_snds_93mmg"};

		/*
			Percental Item Spawn Chances of EpicWeapons:

			MMG_01_hex_F   = 20.00%
			MMG_01_tan_F   = 20.00%
			MMG_02_black_F = 20.00%
			MMG_02_camo_F  = 20.00%
			MMG_02_sand_F  = 20.00%
		*/
		EpicWeapons[] = {"MMG_02_black_F", "MMG_01_hex_F", "MMG_02_camo_F", "MMG_01_tan_F", "MMG_02_sand_F"};

		/*
			Percental Item Spawn Chances of Bipods:

			bipod_03_F_oli = 11.11%
			bipod_03_F_blk = 11.11%
			bipod_02_F_tan = 11.11%
			bipod_02_F_hex = 11.11%
			bipod_02_F_blk = 11.11%
			bipod_01_F_snd = 11.11%
			bipod_01_F_mtp = 11.11%
			bipod_01_F_blk = 11.11%
			bipod_01_F_khk = 11.11%
		*/
		Bipods[] = {"bipod_01_F_blk", "bipod_01_F_snd", "bipod_02_F_tan", "bipod_01_F_mtp", "bipod_02_F_blk", "bipod_03_F_oli", "bipod_02_F_hex", "bipod_03_F_blk", "bipod_01_F_khk"};

		/*
			Percental Item Spawn Chances of HEGrenades:

			3Rnd_HE_Grenade_shell = 25.00%
			1Rnd_HE_Grenade_shell = 75.00%
		*/
		HEGrenades[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell"};

		/*
			Percental Item Spawn Chances of UGLFlares:

			3Rnd_UGL_FlareGreen_F  = 6.25%
			3Rnd_UGL_FlareRed_F    = 6.25%
			3Rnd_UGL_FlareWhite_F  = 6.25%
			3Rnd_UGL_FlareYellow_F = 6.25%
			UGL_FlareGreen_F       = 18.75%
			UGL_FlareRed_F         = 18.75%
			UGL_FlareWhite_F       = 18.75%
			UGL_FlareYellow_F      = 18.75%
		*/
		UGLFlares[] = {"UGL_FlareYellow_F", "3Rnd_UGL_FlareYellow_F", "UGL_FlareWhite_F", "3Rnd_UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareRed_F", "UGL_FlareGreen_F", "UGL_FlareWhite_F", "3Rnd_UGL_FlareRed_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareYellow_F", "UGL_FlareWhite_F", "3Rnd_UGL_FlareGreen_F"};

		/*
			Percental Item Spawn Chances of UGLSmokes:

			3Rnd_Smoke_Grenade_shell       = 3.57%
			3Rnd_SmokeBlue_Grenade_shell   = 3.57%
			3Rnd_SmokeGreen_Grenade_shell  = 3.57%
			3Rnd_SmokeOrange_Grenade_shell = 3.57%
			3Rnd_SmokePurple_Grenade_shell = 3.57%
			3Rnd_SmokeRed_Grenade_shell    = 3.57%
			3Rnd_SmokeYellow_Grenade_shell = 3.57%
			1Rnd_Smoke_Grenade_shell       = 10.71%
			1Rnd_SmokeBlue_Grenade_shell   = 10.71%
			1Rnd_SmokeGreen_Grenade_shell  = 10.71%
			1Rnd_SmokeOrange_Grenade_shell = 10.71%
			1Rnd_SmokePurple_Grenade_shell = 10.71%
			1Rnd_SmokeRed_Grenade_shell    = 10.71%
			1Rnd_SmokeYellow_Grenade_shell = 10.71%
		*/
		UGLSmokes[] = {"1Rnd_SmokeRed_Grenade_shell", "3Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "3Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "3Rnd_SmokeOrange_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "3Rnd_SmokeGreen_Grenade_shell", "3Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "3Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell"};

		/*
			Percental Item Spawn Chances of HandGrenades:

			HandGrenade = 50.00%
			MiniGrenade = 50.00%
		*/
		HandGrenades[] = {"HandGrenade", "MiniGrenade"};

		/*
			Percental Item Spawn Chances of Explosives:

			SatchelCharge_Remote_Mag    = 5.26%
			APERSBoundingMine_Range_Mag = 15.79%
			APERSMine_Range_Mag         = 15.79%
			APERSTripMine_Wire_Mag      = 15.79%
			DemoCharge_Remote_Mag       = 15.79%
			IEDLandSmall_Remote_Mag     = 15.79%
			IEDUrbanSmall_Remote_Mag    = 15.79%
		*/
		Explosives[] = {"IEDLandSmall_Remote_Mag", "IEDLandSmall_Remote_Mag", "APERSBoundingMine_Range_Mag", "APERSTripMine_Wire_Mag", "APERSMine_Range_Mag", "IEDUrbanSmall_Remote_Mag", "SatchelCharge_Remote_Mag", "APERSMine_Range_Mag", "IEDLandSmall_Remote_Mag", "IEDUrbanSmall_Remote_Mag", "APERSTripMine_Wire_Mag", "IEDUrbanSmall_Remote_Mag", "APERSBoundingMine_Range_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "APERSMine_Range_Mag", "APERSBoundingMine_Range_Mag", "APERSTripMine_Wire_Mag"};

		/*
			Percental Item Spawn Chances of CivilianItems:

			Exile_Item_MobilePhone = 2.78%
			Binocular              = 11.11%
			ItemGPS                = 11.11%
			ItemRadio              = 16.67%
			ItemWatch              = 16.67%
			ItemMap                = 19.44%
			Exile_Item_Heatpack    = 22.22%
		*/
		CivilianItems[] = {"ItemMap", "ItemGPS", "Exile_Item_Heatpack", "Binocular", "Exile_Item_MobilePhone", "Exile_Item_Heatpack", "ItemMap", "Exile_Item_Heatpack", "ItemGPS", "ItemWatch", "Binocular", "ItemWatch", "ItemWatch", "ItemRadio", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "ItemMap", "ItemWatch", "Exile_Item_Heatpack", "ItemGPS", "ItemRadio", "ItemRadio", "ItemRadio", "ItemMap", "ItemMap", "ItemRadio", "Exile_Item_Heatpack", "ItemWatch", "Binocular", "ItemGPS", "ItemMap", "Binocular", "ItemMap", "ItemWatch", "ItemRadio"};

		/*
			Percental Item Spawn Chances of CivilianClothing:

			U_NikosAgedBody          = 0.58%
			U_NikosBody              = 0.58%
			U_OrestesBody            = 0.58%
			U_C_Man_casual_1_F       = 2.92%
			U_C_Man_casual_2_F       = 2.92%
			U_C_Man_casual_3_F       = 2.92%
			U_C_Man_casual_4_F       = 2.92%
			U_C_Man_casual_5_F       = 2.92%
			U_C_Man_casual_6_F       = 2.92%
			U_C_man_sport_1_F        = 2.92%
			U_C_man_sport_2_F        = 2.92%
			U_C_man_sport_3_F        = 2.92%
			U_I_C_Soldier_Bandit_1_F = 2.92%
			U_I_C_Soldier_Bandit_2_F = 2.92%
			U_I_C_Soldier_Bandit_3_F = 2.92%
			U_I_C_Soldier_Bandit_4_F = 2.92%
			U_I_C_Soldier_Bandit_5_F = 2.92%
			U_C_Poloshirt_blue       = 4.09%
			U_C_Poloshirt_burgundy   = 4.09%
			U_C_Poloshirt_salmon     = 4.09%
			U_C_Poloshirt_stripped   = 4.09%
			U_C_Poloshirt_tricolour  = 4.09%
			U_C_HunterBody_grn       = 5.26%
			U_C_Journalist           = 5.26%
			U_C_Poor_1               = 5.26%
			U_C_Poor_2               = 5.26%
			U_C_Poor_shorts_1        = 5.26%
			U_C_Scientist            = 5.26%
			U_Rangemaster            = 5.26%
		*/
		CivilianClothing[] = {"U_C_Poor_1", "U_C_Man_casual_1_F", "U_C_Journalist", "U_C_Man_casual_3_F", "U_I_C_Soldier_Bandit_3_F", "U_I_C_Soldier_Bandit_4_F", "U_C_Poor_1", "U_C_Man_casual_2_F", "U_C_Poloshirt_blue", "U_C_Poloshirt_burgundy", "U_C_Man_casual_1_F", "U_C_Poloshirt_blue", "U_C_Poor_shorts_1", "U_C_Man_casual_6_F", "U_I_C_Soldier_Bandit_2_F", "U_I_C_Soldier_Bandit_5_F", "U_C_man_sport_3_F", "U_C_Journalist", "U_C_Poloshirt_salmon", "U_C_Poloshirt_tricolour", "U_C_Poor_shorts_1", "U_C_Man_casual_3_F", "U_C_Poor_1", "U_OrestesBody", "U_I_C_Soldier_Bandit_5_F", "U_C_Man_casual_5_F", "U_C_Man_casual_5_F", "U_C_Man_casual_6_F", "U_Rangemaster", "U_C_Poor_shorts_1", "U_I_C_Soldier_Bandit_1_F", "U_C_Scientist", "U_I_C_Soldier_Bandit_2_F", "U_I_C_Soldier_Bandit_2_F", "U_C_HunterBody_grn", "U_C_man_sport_2_F", "U_I_C_Soldier_Bandit_5_F", "U_I_C_Soldier_Bandit_2_F", "U_C_man_sport_1_F", "U_C_Man_casual_1_F", "U_C_Man_casual_1_F", "U_C_Poor_shorts_1", "U_C_Poloshirt_salmon", "U_C_Poloshirt_burgundy", "U_I_C_Soldier_Bandit_4_F", "U_C_Man_casual_4_F", "U_C_Poloshirt_salmon", "U_C_Man_casual_6_F", "U_C_Man_casual_2_F", "U_C_Man_casual_3_F", "U_C_Poloshirt_stripped", "U_C_Poor_shorts_1", "U_C_Poloshirt_blue", "U_C_man_sport_2_F", "U_C_HunterBody_grn", "U_C_Man_casual_2_F", "U_Rangemaster", "U_C_Man_casual_2_F", "U_C_Poloshirt_blue", "U_C_Journalist", "U_C_Poloshirt_stripped", "U_C_Poloshirt_salmon", "U_C_Man_casual_3_F", "U_C_HunterBody_grn", "U_C_Poor_1", "U_I_C_Soldier_Bandit_1_F", "U_I_C_Soldier_Bandit_4_F", "U_C_man_sport_3_F", "U_C_Poloshirt_stripped", "U_C_Poloshirt_tricolour", "U_C_Poor_1", "U_C_Scientist", "U_I_C_Soldier_Bandit_1_F", "U_C_Poloshirt_burgundy", "U_C_HunterBody_grn", "U_C_Poloshirt_tricolour", "U_I_C_Soldier_Bandit_4_F", "U_C_Man_casual_3_F", "U_C_HunterBody_grn", "U_C_Scientist", "U_I_C_Soldier_Bandit_5_F", "U_C_Man_casual_6_F", "U_C_Man_casual_4_F", "U_Rangemaster", "U_C_Poor_2", "U_C_Poor_2", "U_I_C_Soldier_Bandit_1_F", "U_C_Poor_2", "U_C_Poor_2", "U_C_Poor_2", "U_C_Poloshirt_stripped", "U_C_Poor_2", "U_C_HunterBody_grn", "U_C_Poloshirt_tricolour", "U_Rangemaster", "U_C_Poloshirt_salmon", "U_C_Poloshirt_blue", "U_C_man_sport_1_F", "U_C_Poloshirt_burgundy", "U_Rangemaster", "U_C_Scientist", "U_C_Man_casual_6_F", "U_C_Poor_2", "U_C_man_sport_3_F", "U_C_Scientist", "U_C_Poloshirt_stripped", "U_C_Poloshirt_tricolour", "U_C_Poloshirt_salmon", "U_NikosAgedBody", "U_C_man_sport_3_F", "U_I_C_Soldier_Bandit_3_F", "U_C_man_sport_1_F", "U_Rangemaster", "U_C_Journalist", "U_I_C_Soldier_Bandit_5_F", "U_C_Poloshirt_stripped", "U_C_Poloshirt_stripped", "U_C_Journalist", "U_C_Man_casual_4_F", "U_C_Poloshirt_burgundy", "U_C_man_sport_3_F", "U_C_Poor_2", "U_NikosBody", "U_C_Poloshirt_salmon", "U_C_HunterBody_grn", "U_C_man_sport_1_F", "U_C_Poor_2", "U_C_Poor_shorts_1", "U_C_Poor_shorts_1", "U_C_HunterBody_grn", "U_C_Poloshirt_tricolour", "U_C_Scientist", "U_I_C_Soldier_Bandit_4_F", "U_I_C_Soldier_Bandit_3_F", "U_C_man_sport_1_F", "U_Rangemaster", "U_C_Man_casual_5_F", "U_C_Man_casual_2_F", "U_C_Scientist", "U_I_C_Soldier_Bandit_3_F", "U_C_Journalist", "U_C_Poor_1", "U_C_Poor_shorts_1", "U_C_Poloshirt_tricolour", "U_C_Man_casual_4_F", "U_C_Journalist", "U_C_man_sport_2_F", "U_C_man_sport_2_F", "U_C_man_sport_2_F", "U_C_Scientist", "U_Rangemaster", "U_C_Poloshirt_burgundy", "U_C_Scientist", "U_I_C_Soldier_Bandit_1_F", "U_C_Man_casual_1_F", "U_C_Journalist", "U_C_Journalist", "U_Rangemaster", "U_C_Poloshirt_burgundy", "U_C_Man_casual_5_F", "U_I_C_Soldier_Bandit_2_F", "U_C_Poor_1", "U_C_Poor_1", "U_C_Poor_1", "U_C_Man_casual_5_F", "U_C_HunterBody_grn", "U_C_Man_casual_4_F", "U_C_Poloshirt_blue", "U_C_Poloshirt_blue", "U_C_Poor_shorts_1", "U_I_C_Soldier_Bandit_3_F"};

		/*
			Percental Item Spawn Chances of CivilianBackpacks:

			B_Kitbag_cbr        = 6.67%
			B_Kitbag_mcamo      = 6.67%
			B_Kitbag_sgg        = 6.67%
			B_AssaultPack_blk   = 6.67%
			B_AssaultPack_cbr   = 6.67%
			B_AssaultPack_dgtl  = 6.67%
			B_AssaultPack_khk   = 6.67%
			B_AssaultPack_mcamo = 6.67%
			B_AssaultPack_rgr   = 6.67%
			B_AssaultPack_sgg   = 6.67%
			B_AssaultPack_tna_F = 6.67%
			B_HuntingBackpack   = 6.67%
			B_OutdoorPack_blu   = 6.67%
			B_OutdoorPack_tan   = 6.67%
			B_OutdoorPack_blk   = 6.67%
		*/
		CivilianBackpacks[] = {"B_AssaultPack_mcamo", "B_Kitbag_mcamo", "B_OutdoorPack_tan", "B_Kitbag_cbr", "B_AssaultPack_tna_F", "B_AssaultPack_blk", "B_AssaultPack_cbr", "B_OutdoorPack_blk", "B_AssaultPack_khk", "B_Kitbag_sgg", "B_HuntingBackpack", "B_OutdoorPack_blu", "B_AssaultPack_dgtl", "B_AssaultPack_sgg", "B_AssaultPack_rgr"};

		/*
			Percental Item Spawn Chances of CivilianVests:

			V_Press_F            = 25.00%
			V_TacVest_blk_POLICE = 25.00%
			V_Rangemaster_belt   = 50.00%
		*/
		CivilianVests[] = {"V_TacVest_blk_POLICE", "V_Press_F", "V_Rangemaster_belt", "V_Rangemaster_belt"};

		/*
			Percental Item Spawn Chances of CivilianHeadgear:

			H_Bandanna_surfer  = 5.56%
			H_Beret_blk_POLICE = 5.56%
			H_Cap_blk          = 5.56%
			H_Cap_blk_Raven    = 5.56%
			H_Cap_blu          = 5.56%
			H_Cap_grn          = 5.56%
			H_Cap_headphones   = 5.56%
			H_Cap_oli          = 5.56%
			H_Cap_press        = 5.56%
			H_Cap_red          = 5.56%
			H_Cap_tan          = 5.56%
			H_Hat_blue         = 5.56%
			H_Hat_brown        = 5.56%
			H_Hat_checker      = 5.56%
			H_Hat_grey         = 5.56%
			H_Hat_tan          = 5.56%
			H_StrawHat         = 5.56%
			H_StrawHat_dark    = 5.56%
		*/
		CivilianHeadgear[] = {"H_Hat_blue", "H_Beret_blk_POLICE", "H_Hat_checker", "H_Hat_grey", "H_Hat_tan", "H_Cap_blu", "H_Cap_tan", "H_StrawHat", "H_Hat_brown", "H_StrawHat_dark", "H_Cap_blk_Raven", "H_Cap_press", "H_Cap_red", "H_Cap_headphones", "H_Cap_blk", "H_Cap_grn", "H_Cap_oli", "H_Bandanna_surfer"};

		/*
			Percental Item Spawn Chances of GuerillaItems:

			Rangefinder        = 6.25%
			ItemCompass        = 62.50%
			NVGoggles          = 6.25%
			NVGoggles_tna_F    = 6.25%
			O_NVGoggles_ghex_F = 6.25%
			O_NVGoggles_hex_F  = 6.25%
			O_NVGoggles_urb_F  = 6.25%
		*/
		GuerillaItems[] = {"ItemCompass", "Rangefinder", "NVGoggles_tna_F", "ItemCompass", "O_NVGoggles_urb_F", "ItemCompass", "O_NVGoggles_ghex_F", "ItemCompass", "NVGoggles", "ItemCompass", "ItemCompass", "ItemCompass", "ItemCompass", "ItemCompass", "O_NVGoggles_hex_F", "ItemCompass"};

		/*
			Percental Item Spawn Chances of GuerillaClothing:

			U_I_G_resistanceLeader_F = 1.75%
			U_I_C_Soldier_Camo_F     = 5.26%
			U_I_C_Soldier_Para_1_F   = 5.26%
			U_I_C_Soldier_Para_2_F   = 5.26%
			U_I_C_Soldier_Para_3_F   = 5.26%
			U_I_C_Soldier_Para_4_F   = 5.26%
			U_I_C_Soldier_Para_5_F   = 5.26%
			U_IG_leader              = 7.02%
			U_IG_Guerilla3_1         = 8.77%
			U_IG_Guerilla3_2         = 8.77%
			U_IG_Guerilla1_1         = 10.53%
			U_IG_Guerilla2_1         = 10.53%
			U_IG_Guerilla2_2         = 10.53%
			U_IG_Guerilla2_3         = 10.53%
		*/
		GuerillaClothing[] = {"U_IG_Guerilla2_1", "U_IG_Guerilla2_3", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla1_1", "U_IG_Guerilla2_2", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla2_2", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla2_1", "U_I_C_Soldier_Camo_F", "U_IG_Guerilla3_1", "U_IG_leader", "U_IG_Guerilla3_2", "U_IG_Guerilla2_1", "U_IG_Guerilla3_1", "U_IG_Guerilla2_1", "U_IG_Guerilla3_2", "U_I_C_Soldier_Para_1_F", "U_I_C_Soldier_Camo_F", "U_IG_Guerilla3_1", "U_I_C_Soldier_Para_5_F", "U_I_C_Soldier_Para_3_F", "U_I_C_Soldier_Para_5_F", "U_IG_leader", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla2_3", "U_IG_Guerilla1_1", "U_IG_Guerilla1_1", "U_I_C_Soldier_Camo_F", "U_I_G_resistanceLeader_F", "U_IG_leader", "U_IG_Guerilla2_3", "U_IG_Guerilla3_2", "U_IG_Guerilla3_1", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla2_1", "U_IG_Guerilla3_2", "U_IG_Guerilla3_1", "U_IG_Guerilla2_3", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla2_2", "U_IG_Guerilla3_2", "U_IG_Guerilla2_3", "U_I_C_Soldier_Para_3_F", "U_IG_Guerilla2_2", "U_I_C_Soldier_Para_2_F", "U_IG_leader", "U_I_C_Soldier_Para_1_F", "U_IG_Guerilla1_1", "U_IG_Guerilla2_2", "U_I_C_Soldier_Para_1_F", "U_IG_Guerilla1_1", "U_IG_Guerilla2_1", "U_IG_Guerilla1_1", "U_IG_Guerilla2_3", "U_I_C_Soldier_Para_3_F", "U_IG_Guerilla2_2"};

		/*
			Percental Item Spawn Chances of GuerillaBackpacks:

			B_Bergen_blk               = 1.82%
			B_Bergen_mcamo             = 1.82%
			B_Bergen_rgr               = 1.82%
			B_Bergen_sgg               = 1.82%
			B_FieldPack_ghex_F         = 1.82%
			B_ViperHarness_base_F      = 3.64%
			B_ViperHarness_blk_F       = 3.64%
			B_ViperHarness_ghex_F      = 3.64%
			B_ViperHarness_hex_F       = 3.64%
			B_ViperHarness_khk_F       = 3.64%
			B_ViperHarness_oli_F       = 3.64%
			B_ViperLightHarness_base_F = 5.45%
			B_ViperLightHarness_blk_F  = 5.45%
			B_ViperLightHarness_ghex_F = 5.45%
			B_ViperLightHarness_hex_F  = 5.45%
			B_ViperLightHarness_khk_F  = 5.45%
			B_ViperLightHarness_oli_F  = 5.45%
			B_FieldPack_blk            = 9.09%
			B_FieldPack_cbr            = 9.09%
			B_FieldPack_ocamo          = 9.09%
			B_FieldPack_oucamo         = 9.09%
		*/
		GuerillaBackpacks[] = {"B_ViperHarness_blk_F", "B_ViperLightHarness_base_F", "B_ViperHarness_base_F", "B_ViperHarness_ghex_F", "B_FieldPack_ocamo", "B_FieldPack_blk", "B_ViperLightHarness_khk_F", "B_ViperHarness_ghex_F", "B_FieldPack_ocamo", "B_FieldPack_cbr", "B_ViperLightHarness_ghex_F", "B_FieldPack_ocamo", "B_ViperLightHarness_blk_F", "B_Bergen_blk", "B_ViperLightHarness_oli_F", "B_FieldPack_oucamo", "B_ViperLightHarness_base_F", "B_ViperHarness_khk_F", "B_FieldPack_oucamo", "B_ViperHarness_hex_F", "B_FieldPack_cbr", "B_FieldPack_oucamo", "B_ViperHarness_hex_F", "B_ViperLightHarness_oli_F", "B_FieldPack_oucamo", "B_ViperLightHarness_hex_F", "B_ViperLightHarness_khk_F", "B_Bergen_rgr", "B_FieldPack_ocamo", "B_ViperHarness_oli_F", "B_ViperHarness_base_F", "B_ViperLightHarness_base_F", "B_ViperLightHarness_hex_F", "B_FieldPack_blk", "B_ViperHarness_oli_F", "B_FieldPack_oucamo", "B_ViperLightHarness_ghex_F", "B_ViperLightHarness_hex_F", "B_Bergen_sgg", "B_ViperHarness_blk_F", "B_FieldPack_blk", "B_ViperLightHarness_blk_F", "B_ViperLightHarness_ghex_F", "B_FieldPack_cbr", "B_ViperLightHarness_khk_F", "B_ViperLightHarness_oli_F", "B_Bergen_mcamo", "B_FieldPack_cbr", "B_FieldPack_cbr", "B_FieldPack_ghex_F", "B_FieldPack_ocamo", "B_ViperLightHarness_blk_F", "B_FieldPack_blk", "B_ViperHarness_khk_F", "B_FieldPack_blk"};

		/*
			Percental Item Spawn Chances of GuerillaVests:

			V_I_G_resistanceLeader_F = 3.23%
			V_BandollierB_blk        = 6.45%
			V_BandollierB_cbr        = 6.45%
			V_BandollierB_khk        = 6.45%
			V_BandollierB_oli        = 6.45%
			V_BandollierB_rgr        = 6.45%
			V_Chestrig_blk           = 6.45%
			V_Chestrig_khk           = 6.45%
			V_Chestrig_oli           = 6.45%
			V_Chestrig_rgr           = 6.45%
			V_HarnessO_brn           = 6.45%
			V_HarnessO_gry           = 6.45%
			V_HarnessOGL_brn         = 6.45%
			V_HarnessOGL_gry         = 6.45%
			V_HarnessOSpec_brn       = 6.45%
			V_HarnessOSpec_gry       = 6.45%
		*/
		GuerillaVests[] = {"V_HarnessO_gry", "V_HarnessOSpec_gry", "V_I_G_resistanceLeader_F", "V_BandollierB_blk", "V_HarnessOGL_brn", "V_HarnessOGL_gry", "V_Chestrig_rgr", "V_BandollierB_rgr", "V_HarnessOGL_brn", "V_BandollierB_cbr", "V_Chestrig_oli", "V_BandollierB_oli", "V_HarnessOSpec_brn", "V_Chestrig_oli", "V_HarnessO_gry", "V_BandollierB_cbr", "V_HarnessOSpec_brn", "V_HarnessOGL_gry", "V_BandollierB_oli", "V_HarnessO_brn", "V_BandollierB_rgr", "V_HarnessO_brn", "V_Chestrig_khk", "V_HarnessOSpec_gry", "V_Chestrig_khk", "V_Chestrig_blk", "V_BandollierB_khk", "V_BandollierB_khk", "V_Chestrig_blk", "V_Chestrig_rgr", "V_BandollierB_blk"};

		/*
			Percental Item Spawn Chances of GuerillaHeadgear:

			H_Beret_02                = 0.82%
			H_Beret_blk               = 0.82%
			H_Beret_brn_SF            = 0.82%
			H_Beret_Colonel           = 0.82%
			H_Beret_grn               = 0.82%
			H_Beret_grn_SF            = 0.82%
			H_Beret_ocamo             = 0.82%
			H_Beret_red               = 0.82%
			H_Booniehat_tna_F         = 1.64%
			H_Cap_blk_Syndikat_F      = 1.64%
			H_Cap_grn_Syndikat_F      = 1.64%
			H_Cap_oli_Syndikat_F      = 1.64%
			H_Cap_tan_Syndikat_F      = 1.64%
			H_FakeHeadgear_Syndikat_F = 1.64%
			H_MilCap_gen_F            = 1.64%
			H_MilCap_ghex_F           = 1.64%
			H_MilCap_tna_F            = 1.64%
			H_Shemag_khk              = 1.64%
			H_Shemag_olive            = 1.64%
			H_Shemag_olive_hs         = 1.64%
			H_Shemag_tan              = 1.64%
			H_ShemagOpen_khk          = 1.64%
			H_ShemagOpen_tan          = 1.64%
			H_TurbanO_blk             = 1.64%
			H_Watchcap_camo           = 1.64%
			H_Watchcap_sgg            = 1.64%
			H_Bandanna_camo           = 2.46%
			H_Bandanna_cbr            = 2.46%
			H_Bandanna_gry            = 2.46%
			H_Bandanna_khk            = 2.46%
			H_Bandanna_khk_hs         = 2.46%
			H_Bandanna_mcamo          = 2.46%
			H_Bandanna_sgg            = 2.46%
			H_BandMask_blk            = 2.46%
			H_Cap_brn_SPECOPS         = 2.46%
			H_Cap_khaki_specops_UK    = 2.46%
			H_Cap_tan_specops_US      = 2.46%
			H_Hat_camo                = 2.46%
			H_Watchcap_blk            = 2.46%
			H_Watchcap_khk            = 2.46%
			Exile_Headgear_GasMask    = 3.28%
			H_Booniehat_dgtl          = 3.28%
			H_Booniehat_dirty         = 3.28%
			H_Booniehat_grn           = 3.28%
			H_Booniehat_indp          = 3.28%
			H_Booniehat_khk           = 3.28%
			H_Booniehat_khk_hs        = 3.28%
			H_Booniehat_mcamo         = 3.28%
			H_Booniehat_tan           = 3.28%
		*/
		GuerillaHeadgear[] = {"H_Cap_brn_SPECOPS", "H_Booniehat_indp", "H_Booniehat_tan", "H_Beret_02", "H_Cap_khaki_specops_UK", "H_Booniehat_khk", "H_Shemag_tan", "H_Watchcap_khk", "H_Booniehat_dirty", "H_Booniehat_khk_hs", "H_Bandanna_gry", "H_Bandanna_mcamo", "H_Booniehat_indp", "H_Booniehat_grn", "H_ShemagOpen_khk", "H_TurbanO_blk", "H_Bandanna_sgg", "H_Booniehat_khk_hs", "H_Cap_brn_SPECOPS", "H_ShemagOpen_tan", "H_Hat_camo", "H_MilCap_ghex_F", "H_Watchcap_blk", "H_ShemagOpen_tan", "H_Watchcap_khk", "H_Watchcap_sgg", "H_Bandanna_khk", "H_Beret_grn", "H_FakeHeadgear_Syndikat_F", "H_Cap_grn_Syndikat_F", "H_Bandanna_khk_hs", "H_Booniehat_mcamo", "H_Beret_grn_SF", "H_TurbanO_blk", "H_Cap_tan_Syndikat_F", "H_Booniehat_indp", "H_Bandanna_khk", "H_Beret_ocamo", "H_Booniehat_tna_F", "H_Booniehat_grn", "H_Bandanna_mcamo", "H_Booniehat_khk", "H_Booniehat_khk_hs", "H_Booniehat_khk", "H_Shemag_olive_hs", "H_Booniehat_dirty", "H_Bandanna_mcamo", "H_Shemag_olive", "H_Shemag_olive_hs", "H_Watchcap_blk", "H_Booniehat_mcamo", "H_Booniehat_tan", "H_Booniehat_dgtl", "H_ShemagOpen_khk", "H_Hat_camo", "H_Watchcap_camo", "H_Booniehat_mcamo", "Exile_Headgear_GasMask", "H_Cap_blk_Syndikat_F", "H_Booniehat_khk_hs", "H_Booniehat_dgtl", "H_Cap_tan_specops_US", "Exile_Headgear_GasMask", "H_Bandanna_sgg", "H_Booniehat_grn", "H_MilCap_gen_F", "H_Watchcap_camo", "H_Cap_blk_Syndikat_F", "H_Cap_oli_Syndikat_F", "H_Shemag_olive", "H_Bandanna_cbr", "H_Booniehat_tna_F", "H_Beret_red", "H_Booniehat_mcamo", "H_MilCap_ghex_F", "H_Booniehat_dgtl", "H_Booniehat_dirty", "H_Shemag_khk", "H_Booniehat_khk", "H_BandMask_blk", "H_Cap_tan_specops_US", "H_Cap_grn_Syndikat_F", "H_Bandanna_camo", "H_Cap_oli_Syndikat_F", "H_Booniehat_dgtl", "H_Bandanna_cbr", "H_Cap_khaki_specops_UK", "H_Cap_brn_SPECOPS", "H_Watchcap_khk", "H_BandMask_blk", "Exile_Headgear_GasMask", "H_Bandanna_camo", "H_Booniehat_grn", "H_Shemag_tan", "H_BandMask_blk", "H_Booniehat_indp", "H_Bandanna_sgg", "H_Beret_Colonel", "H_Booniehat_tan", "H_Shemag_khk", "H_Bandanna_khk_hs", "H_Bandanna_khk", "H_Watchcap_blk", "H_FakeHeadgear_Syndikat_F", "H_MilCap_tna_F", "Exile_Headgear_GasMask", "H_Hat_camo", "H_Cap_tan_specops_US", "H_Bandanna_cbr", "H_Bandanna_camo", "H_Bandanna_gry", "H_Watchcap_sgg", "H_Booniehat_dirty", "H_Bandanna_khk_hs", "H_Beret_brn_SF", "H_Cap_tan_Syndikat_F", "H_MilCap_tna_F", "H_Booniehat_tan", "H_Beret_blk", "H_Bandanna_gry", "H_Cap_khaki_specops_UK", "H_MilCap_gen_F"};

		/*
			Percental Item Spawn Chances of MilitaryClothing:

			U_B_Wetsuit                   = 1.32%
			U_I_OfficerUniform            = 1.32%
			U_I_Wetsuit                   = 1.32%
			U_O_CombatUniform_ocamo       = 1.32%
			U_O_CombatUniform_oucamo      = 1.32%
			U_O_OfficerUniform_ocamo      = 1.32%
			U_O_SpecopsUniform_blk        = 1.32%
			U_O_SpecopsUniform_ocamo      = 1.32%
			U_O_V_Soldier_Viper_F         = 1.32%
			U_O_V_Soldier_Viper_hex_F     = 1.32%
			U_O_Wetsuit                   = 1.32%
			U_B_SpecopsUniform_sgg        = 1.97%
			U_B_HeliPilotCoveralls        = 2.63%
			U_B_PilotCoveralls            = 2.63%
			U_I_CombatUniform             = 2.63%
			U_I_CombatUniform_shortsleeve = 2.63%
			U_I_CombatUniform_tshirt      = 2.63%
			U_I_HeliPilotCoveralls        = 2.63%
			U_I_pilotCoveralls            = 2.63%
			U_O_PilotCoveralls            = 2.63%
			U_B_CombatUniform_mcam        = 3.29%
			U_B_CombatUniform_mcam_tshirt = 3.29%
			U_B_CombatUniform_mcam_vest   = 3.29%
			U_B_CombatUniform_mcam_worn   = 3.29%
			U_B_CTRG_1                    = 3.29%
			U_B_CTRG_2                    = 3.29%
			U_B_CTRG_3                    = 3.29%
			U_B_CTRG_Soldier_2_F          = 3.29%
			U_B_CTRG_Soldier_3_F          = 3.29%
			U_B_CTRG_Soldier_F            = 3.29%
			U_B_CTRG_Soldier_urb_1_F      = 3.29%
			U_B_CTRG_Soldier_urb_2_F      = 3.29%
			U_B_CTRG_Soldier_urb_3_F      = 3.29%
			U_B_GEN_Commander_F           = 3.29%
			U_B_GEN_Soldier_F             = 3.29%
			U_B_T_Soldier_AR_F            = 3.29%
			U_B_T_Soldier_SL_F            = 3.29%
			U_O_T_Officer_F               = 3.29%
			U_O_T_Soldier_F               = 3.29%
		*/
		MilitaryClothing[] = {"U_B_CombatUniform_mcam", "U_O_SpecopsUniform_blk", "U_O_SpecopsUniform_ocamo", "U_B_GEN_Commander_F", "U_I_CombatUniform_shortsleeve", "U_B_CTRG_Soldier_urb_3_F", "U_B_GEN_Soldier_F", "U_O_SpecopsUniform_ocamo", "U_B_GEN_Soldier_F", "U_B_CTRG_1", "U_B_CombatUniform_mcam_worn", "U_O_T_Soldier_F", "U_B_Wetsuit", "U_B_CTRG_Soldier_urb_3_F", "U_O_SpecopsUniform_blk", "U_B_CTRG_Soldier_2_F", "U_B_CTRG_Soldier_urb_2_F", "U_O_V_Soldier_Viper_hex_F", "U_O_V_Soldier_Viper_hex_F", "U_I_CombatUniform_tshirt", "U_B_T_Soldier_AR_F", "U_O_CombatUniform_ocamo", "U_B_CTRG_2", "U_B_CTRG_1", "U_B_CTRG_Soldier_urb_2_F", "U_O_CombatUniform_ocamo", "U_B_CombatUniform_mcam_vest", "U_I_OfficerUniform", "U_B_SpecopsUniform_sgg", "U_B_CTRG_1", "U_B_CTRG_Soldier_urb_1_F", "U_B_CombatUniform_mcam", "U_B_T_Soldier_AR_F", "U_O_PilotCoveralls", "U_B_CTRG_Soldier_urb_1_F", "U_B_CTRG_Soldier_3_F", "U_I_pilotCoveralls", "U_I_Wetsuit", "U_B_CTRG_Soldier_urb_2_F", "U_B_HeliPilotCoveralls", "U_B_CTRG_Soldier_urb_1_F", "U_I_OfficerUniform", "U_B_CTRG_Soldier_urb_1_F", "U_O_V_Soldier_Viper_F", "U_O_T_Officer_F", "U_B_CombatUniform_mcam_vest", "U_B_CTRG_Soldier_3_F", "U_B_CTRG_3", "U_B_CombatUniform_mcam_vest", "U_I_CombatUniform", "U_B_CTRG_3", "U_B_HeliPilotCoveralls", "U_B_CTRG_Soldier_urb_1_F", "U_B_T_Soldier_AR_F", "U_B_CTRG_3", "U_O_OfficerUniform_ocamo", "U_B_CTRG_Soldier_F", "U_B_CombatUniform_mcam_tshirt", "U_O_T_Officer_F", "U_B_T_Soldier_AR_F", "U_B_T_Soldier_SL_F", "U_O_Wetsuit", "U_I_HeliPilotCoveralls", "U_O_PilotCoveralls", "U_B_CTRG_2", "U_I_Wetsuit", "U_I_pilotCoveralls", "U_B_CTRG_Soldier_2_F", "U_B_CTRG_2", "U_B_CTRG_Soldier_3_F", "U_O_CombatUniform_oucamo", "U_O_T_Soldier_F", "U_I_pilotCoveralls", "U_B_T_Soldier_SL_F", "U_O_T_Soldier_F", "U_B_T_Soldier_SL_F", "U_I_CombatUniform_shortsleeve", "U_O_T_Soldier_F", "U_B_CTRG_1", "U_B_CombatUniform_mcam_worn", "U_B_GEN_Soldier_F", "U_B_CombatUniform_mcam_tshirt", "U_I_CombatUniform", "U_O_T_Soldier_F", "U_B_CTRG_Soldier_F", "U_B_CombatUniform_mcam", "U_B_CTRG_3", "U_B_GEN_Soldier_F", "U_B_CTRG_2", "U_B_CTRG_Soldier_3_F", "U_B_CombatUniform_mcam", "U_B_GEN_Commander_F", "U_O_PilotCoveralls", "U_I_CombatUniform_tshirt", "U_B_GEN_Commander_F", "U_O_T_Officer_F", "U_B_PilotCoveralls", "U_B_T_Soldier_SL_F", "U_I_CombatUniform", "U_B_T_Soldier_AR_F", "U_B_GEN_Commander_F", "U_B_PilotCoveralls", "U_B_CTRG_3", "U_B_CombatUniform_mcam_tshirt", "U_B_PilotCoveralls", "U_I_HeliPilotCoveralls", "U_B_SpecopsUniform_sgg", "U_O_T_Officer_F", "U_B_HeliPilotCoveralls", "U_B_CTRG_Soldier_urb_3_F", "U_B_PilotCoveralls", "U_O_Wetsuit", "U_B_CTRG_1", "U_I_HeliPilotCoveralls", "U_B_CTRG_Soldier_2_F", "U_O_V_Soldier_Viper_F", "U_B_CTRG_Soldier_2_F", "U_O_CombatUniform_oucamo", "U_O_T_Officer_F", "U_B_CTRG_2", "U_B_CombatUniform_mcam_worn", "U_B_CTRG_Soldier_F", "U_B_CTRG_Soldier_urb_2_F", "U_I_HeliPilotCoveralls", "U_B_CTRG_Soldier_3_F", "U_O_PilotCoveralls", "U_B_CTRG_Soldier_urb_3_F", "U_B_CTRG_Soldier_urb_2_F", "U_I_CombatUniform_shortsleeve", "U_B_T_Soldier_SL_F", "U_B_CTRG_Soldier_urb_3_F", "U_B_CTRG_Soldier_F", "U_B_SpecopsUniform_sgg", "U_B_CombatUniform_mcam_tshirt", "U_I_CombatUniform_tshirt", "U_B_CombatUniform_mcam_vest", "U_B_GEN_Commander_F", "U_B_HeliPilotCoveralls", "U_B_CTRG_Soldier_2_F", "U_I_CombatUniform_shortsleeve", "U_B_CombatUniform_mcam", "U_O_OfficerUniform_ocamo", "U_I_CombatUniform_tshirt", "U_B_GEN_Soldier_F", "U_B_CombatUniform_mcam_vest", "U_B_CombatUniform_mcam_tshirt", "U_B_Wetsuit", "U_B_CombatUniform_mcam_worn", "U_I_pilotCoveralls", "U_B_CombatUniform_mcam_worn", "U_B_CTRG_Soldier_F", "U_I_CombatUniform"};

		/*
			Percental Item Spawn Chances of MilitaryBackpacks:

			B_Bergen_Base_F   = 5.26%
			B_Bergen_dgtl_F   = 5.26%
			B_Bergen_hex_F    = 5.26%
			B_Bergen_mcamo_F  = 5.26%
			B_Bergen_tna_F    = 5.26%
			B_Carryall_mcamo  = 10.53%
			B_Carryall_ocamo  = 10.53%
			B_Carryall_oucamo = 10.53%
			B_Carryall_khk    = 10.53%
			B_Carryall_oli    = 10.53%
			B_Carryall_cbr    = 10.53%
			B_Carryall_ghex_F = 10.53%
		*/
		MilitaryBackpacks[] = {"B_Carryall_ghex_F", "B_Bergen_tna_F", "B_Carryall_oucamo", "B_Carryall_mcamo", "B_Carryall_cbr", "B_Carryall_khk", "B_Carryall_mcamo", "B_Carryall_ocamo", "B_Bergen_Base_F", "B_Carryall_ghex_F", "B_Bergen_mcamo_F", "B_Carryall_oli", "B_Carryall_oli", "B_Carryall_khk", "B_Bergen_dgtl_F", "B_Carryall_cbr", "B_Bergen_hex_F", "B_Carryall_ocamo", "B_Carryall_oucamo"};

		/*
			Percental Item Spawn Chances of MilitaryVests:

			V_PlateCarrierH_CTRG    = 5.00%
			V_PlateCarrierL_CTRG    = 5.00%
			V_PlateCarrier1_blk     = 10.00%
			V_PlateCarrier1_rgr     = 10.00%
			V_PlateCarrier2_rgr     = 10.00%
			V_PlateCarrier3_rgr     = 10.00%
			V_PlateCarrierGL_rgr    = 10.00%
			V_PlateCarrierIA1_dgtl  = 10.00%
			V_PlateCarrierIA2_dgtl  = 10.00%
			V_PlateCarrierIAGL_dgtl = 10.00%
			V_PlateCarrierSpec_rgr  = 10.00%
		*/
		MilitaryVests[] = {"V_PlateCarrier3_rgr", "V_PlateCarrier1_blk", "V_PlateCarrier2_rgr", "V_PlateCarrier2_rgr", "V_PlateCarrierGL_rgr", "V_PlateCarrierIA1_dgtl", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrierIA1_dgtl", "V_PlateCarrierIA2_dgtl", "V_PlateCarrier1_blk", "V_PlateCarrierGL_rgr", "V_PlateCarrierIA2_dgtl", "V_PlateCarrier1_rgr", "V_PlateCarrierH_CTRG", "V_PlateCarrierSpec_rgr", "V_PlateCarrierSpec_rgr", "V_PlateCarrier1_rgr", "V_PlateCarrier3_rgr", "V_PlateCarrierL_CTRG", "V_PlateCarrierIAGL_dgtl"};

		/*
			Percental Item Spawn Chances of MilitaryHeadgear:

			H_CrewHelmetHeli_B        = 0.81%
			H_CrewHelmetHeli_I        = 0.81%
			H_CrewHelmetHeli_O        = 0.81%
			H_HelmetB_camo            = 0.81%
			H_HelmetCrew_B            = 0.81%
			H_HelmetCrew_I            = 0.81%
			H_HelmetCrew_O            = 0.81%
			H_HelmetLeaderO_ocamo     = 0.81%
			H_HelmetLeaderO_oucamo    = 0.81%
			H_HelmetO_ghex_F          = 0.81%
			H_HelmetO_ocamo           = 0.81%
			H_HelmetO_oucamo          = 0.81%
			H_HelmetSpecO_blk         = 0.81%
			H_HelmetSpecO_ocamo       = 0.81%
			H_PilotHelmetFighter_B    = 0.81%
			H_PilotHelmetFighter_I    = 0.81%
			H_PilotHelmetFighter_O    = 0.81%
			H_PilotHelmetHeli_B       = 0.81%
			H_PilotHelmetHeli_I       = 0.81%
			H_PilotHelmetHeli_O       = 0.81%
			H_BandMask_demon          = 1.63%
			H_BandMask_khk            = 1.63%
			H_BandMask_reaper         = 1.63%
			H_Beret_gen_F             = 1.63%
			H_Helmet_Skate            = 1.63%
			H_HelmetB_black           = 1.63%
			H_HelmetB_desert          = 1.63%
			H_HelmetB_Enh_tna_F       = 1.63%
			H_HelmetB_grass           = 1.63%
			H_HelmetB_light_black     = 1.63%
			H_HelmetB_light_desert    = 1.63%
			H_HelmetB_light_grass     = 1.63%
			H_HelmetB_light_sand      = 1.63%
			H_HelmetB_light_snakeskin = 1.63%
			H_HelmetB_Light_tna_F     = 1.63%
			H_HelmetB_sand            = 1.63%
			H_HelmetB_snakeskin       = 1.63%
			H_HelmetB_TI_tna_F        = 1.63%
			H_HelmetB_tna_F           = 1.63%
			H_HelmetCrew_O_ghex_F     = 1.63%
			H_HelmetIA_camo           = 1.63%
			H_HelmetIA_net            = 1.63%
			H_HelmetLeaderO_ghex_F    = 1.63%
			H_HelmetSpecO_ghex_F      = 1.63%
			H_HelmetB                 = 2.44%
			H_HelmetB_light           = 2.44%
			H_HelmetB_paint           = 2.44%
			H_HelmetB_plain_blk       = 2.44%
			H_HelmetIA                = 2.44%
			H_HelmetSpecB             = 2.44%
			H_HelmetSpecB_blk         = 2.44%
			H_HelmetSpecB_paint1      = 2.44%
			H_HelmetSpecB_paint2      = 2.44%
			Exile_Headgear_GasMask    = 3.25%
			H_MilCap_blue             = 3.25%
			H_MilCap_dgtl             = 3.25%
			H_MilCap_mcamo            = 3.25%
			H_MilCap_ocamo            = 3.25%
			H_MilCap_oucamo           = 3.25%
			H_MilCap_rucamo           = 3.25%
		*/
		MilitaryHeadgear[] = {"H_BandMask_reaper", "Exile_Headgear_GasMask", "H_HelmetB_light_sand", "H_HelmetSpecB_paint1", "H_MilCap_blue", "H_HelmetB_snakeskin", "H_PilotHelmetFighter_B", "H_HelmetO_ghex_F", "H_HelmetB_plain_blk", "H_HelmetIA", "H_HelmetB_light_black", "H_MilCap_ocamo", "H_MilCap_blue", "H_HelmetB_light", "H_HelmetSpecB", "H_HelmetCrew_O", "H_Helmet_Skate", "H_HelmetB_light_sand", "H_HelmetB_light_grass", "H_HelmetB_Light_tna_F", "H_HelmetB_light_desert", "H_MilCap_rucamo", "H_HelmetLeaderO_oucamo", "Exile_Headgear_GasMask", "H_HelmetLeaderO_ghex_F", "H_MilCap_ocamo", "H_BandMask_demon", "H_PilotHelmetHeli_I", "H_MilCap_blue", "H_MilCap_rucamo", "H_HelmetB_paint", "H_PilotHelmetHeli_B", "H_HelmetIA_camo", "H_MilCap_mcamo", "H_HelmetIA", "H_PilotHelmetFighter_O", "H_HelmetB_light_desert", "H_HelmetB_desert", "H_HelmetB_paint", "H_MilCap_mcamo", "H_MilCap_oucamo", "H_MilCap_rucamo", "H_HelmetLeaderO_ocamo", "H_HelmetB", "H_HelmetSpecO_ghex_F", "H_HelmetIA_net", "H_MilCap_dgtl", "H_HelmetSpecB_blk", "H_HelmetSpecB_blk", "H_HelmetB_camo", "H_HelmetB_light_black", "H_MilCap_mcamo", "H_HelmetSpecB_blk", "H_BandMask_reaper", "H_MilCap_ocamo", "H_HelmetO_oucamo", "H_HelmetB_grass", "H_MilCap_dgtl", "H_BandMask_demon", "H_MilCap_blue", "H_HelmetB_sand", "H_MilCap_oucamo", "H_HelmetSpecO_ocamo", "H_MilCap_mcamo", "H_HelmetB_paint", "H_HelmetIA", "H_BandMask_khk", "H_HelmetSpecB", "H_HelmetB", "H_CrewHelmetHeli_B", "H_HelmetB_black", "H_HelmetB_tna_F", "H_HelmetB_Enh_tna_F", "H_HelmetB_grass", "H_HelmetB_light_snakeskin", "H_HelmetB_sand", "H_MilCap_dgtl", "H_CrewHelmetHeli_O", "H_PilotHelmetFighter_I", "H_HelmetB_desert", "H_HelmetSpecB_paint2", "H_HelmetSpecB", "H_HelmetB_snakeskin", "H_PilotHelmetHeli_O", "H_HelmetSpecB_paint2", "H_HelmetB_light_snakeskin", "H_Helmet_Skate", "H_HelmetB_Light_tna_F", "H_BandMask_khk", "H_Beret_gen_F", "H_HelmetB_light_grass", "H_HelmetB_TI_tna_F", "H_MilCap_rucamo", "H_MilCap_oucamo", "H_HelmetLeaderO_ghex_F", "H_HelmetSpecO_ghex_F", "H_HelmetB_plain_blk", "H_HelmetSpecB_paint1", "H_HelmetB_light", "H_HelmetB", "H_HelmetB_light", "Exile_Headgear_GasMask", "H_MilCap_oucamo", "H_HelmetO_ocamo", "H_HelmetB_black", "H_HelmetB_tna_F", "H_HelmetIA_camo", "Exile_Headgear_GasMask", "H_CrewHelmetHeli_I", "H_HelmetSpecB_paint1", "H_HelmetB_TI_tna_F", "H_HelmetSpecO_blk", "H_MilCap_dgtl", "H_MilCap_ocamo", "H_HelmetB_Enh_tna_F", "H_HelmetCrew_O_ghex_F", "H_HelmetB_plain_blk", "H_HelmetCrew_B", "H_HelmetSpecB_paint2", "H_HelmetIA_net", "H_HelmetCrew_O_ghex_F", "H_HelmetCrew_I", "H_Beret_gen_F"};

		/*
			Percental Item Spawn Chances of Ghillies:

			U_B_GhillieSuit = 33.33%
			U_O_GhillieSuit = 33.33%
			U_I_GhillieSuit = 33.33%
		*/
		Ghillies[] = {"U_B_GhillieSuit", "U_O_GhillieSuit", "U_I_GhillieSuit"};

		/*
			Percental Item Spawn Chances of DLCGhillies:

			U_B_FullGhillie_ard     = 2.94%
			U_B_FullGhillie_lsh     = 2.94%
			U_B_FullGhillie_sard    = 2.94%
			U_O_FullGhillie_ard     = 2.94%
			U_O_FullGhillie_lsh     = 2.94%
			U_O_FullGhillie_sard    = 2.94%
			U_I_FullGhillie_ard     = 2.94%
			U_I_FullGhillie_lsh     = 2.94%
			U_I_FullGhillie_sard    = 2.94%
			U_B_T_Sniper_F          = 14.71%
			U_B_T_Soldier_F         = 14.71%
			U_B_T_FullGhillie_tna_F = 14.71%
			U_O_T_Sniper_F          = 14.71%
			U_O_T_FullGhillie_tna_F = 14.71%
		*/
		DLCGhillies[] = {"U_B_T_FullGhillie_tna_F", "U_O_T_FullGhillie_tna_F", "U_B_T_Sniper_F", "U_O_FullGhillie_lsh", "U_B_T_Sniper_F", "U_O_FullGhillie_ard", "U_O_T_FullGhillie_tna_F", "U_O_T_Sniper_F", "U_O_T_Sniper_F", "U_O_T_FullGhillie_tna_F", "U_I_FullGhillie_lsh", "U_B_T_Sniper_F", "U_B_FullGhillie_sard", "U_B_T_Soldier_F", "U_B_T_Soldier_F", "U_O_T_Sniper_F", "U_B_T_Sniper_F", "U_O_T_Sniper_F", "U_B_T_FullGhillie_tna_F", "U_O_FullGhillie_sard", "U_B_T_Soldier_F", "U_O_T_FullGhillie_tna_F", "U_B_T_Soldier_F", "U_O_T_FullGhillie_tna_F", "U_B_T_Soldier_F", "U_I_FullGhillie_ard", "U_B_T_FullGhillie_tna_F", "U_B_T_FullGhillie_tna_F", "U_B_T_FullGhillie_tna_F", "U_B_FullGhillie_lsh", "U_O_T_Sniper_F", "U_B_T_Sniper_F", "U_B_FullGhillie_ard", "U_I_FullGhillie_sard"};

		/*
			Percental Item Spawn Chances of DLCVests:

			V_PlateCarrierGL_blk         = 4.76%
			V_PlateCarrierGL_mtp         = 4.76%
			V_PlateCarrierGL_rgr         = 4.76%
			V_PlateCarrierIAGL_dgtl      = 4.76%
			V_PlateCarrierIAGL_oli       = 4.76%
			V_PlateCarrierSpec_blk       = 4.76%
			V_PlateCarrierSpec_mtp       = 4.76%
			V_PlateCarrierSpec_rgr       = 4.76%
			V_TacChestrig_grn_F          = 4.76%
			V_TacChestrig_oli_F          = 4.76%
			V_TacChestrig_cbr_F          = 4.76%
			V_PlateCarrier1_tna_F        = 4.76%
			V_PlateCarrier2_tna_F        = 4.76%
			V_PlateCarrierSpec_tna_F     = 4.76%
			V_PlateCarrierGL_tna_F       = 4.76%
			V_HarnessO_ghex_F            = 4.76%
			V_HarnessOGL_ghex_F          = 4.76%
			V_BandollierB_ghex_F         = 4.76%
			V_TacVest_gen_F              = 4.76%
			V_PlateCarrier1_rgr_noflag_F = 4.76%
			V_PlateCarrier2_rgr_noflag_F = 4.76%
		*/
		DLCVests[] = {"V_PlateCarrierIAGL_oli", "V_PlateCarrierGL_tna_F", "V_PlateCarrierGL_mtp", "V_HarnessO_ghex_F", "V_PlateCarrier2_tna_F", "V_HarnessOGL_ghex_F", "V_PlateCarrierSpec_mtp", "V_TacChestrig_grn_F", "V_PlateCarrierGL_blk", "V_PlateCarrierSpec_tna_F", "V_PlateCarrierSpec_rgr", "V_TacChestrig_oli_F", "V_PlateCarrier1_rgr_noflag_F", "V_TacChestrig_cbr_F", "V_PlateCarrier2_rgr_noflag_F", "V_PlateCarrierSpec_blk", "V_PlateCarrierGL_rgr", "V_PlateCarrierIAGL_dgtl", "V_BandollierB_ghex_F", "V_TacVest_gen_F", "V_PlateCarrier1_tna_F"};

		/*
			Percental Item Spawn Chances of Rebreathers:

			V_RebreatherB  = 33.33%
			V_RebreatherIR = 33.33%
			V_RebreatherIA = 33.33%
		*/
		Rebreathers[] = {"V_RebreatherIA", "V_RebreatherIR", "V_RebreatherB"};

		/*
			Percental Item Spawn Chances of MedicalItems:

			Exile_Item_InstaDoc  = 9.09%
			Exile_Item_Bandage   = 18.18%
			Exile_Item_Vishpirin = 36.36%
			Exile_Item_Heatpack  = 36.36%
		*/
		MedicalItems[] = {"Exile_Item_Heatpack", "Exile_Item_Vishpirin", "Exile_Item_Bandage", "Exile_Item_Bandage", "Exile_Item_Vishpirin", "Exile_Item_Vishpirin", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "Exile_Item_Vishpirin", "Exile_Item_Heatpack", "Exile_Item_InstaDoc"};

		/*
			Percental Item Spawn Chances of IndustrialItems:

			Exile_Item_ThermalScannerPro    = 0.66%
			Exile_Item_Knife                = 1.32%
			Exile_Item_Cement               = 1.97%
			Exile_Item_FloodLightKit        = 1.97%
			Exile_Item_PortableGeneratorKit = 1.97%
			Exile_Item_CamoTentKit          = 2.63%
			Exile_Item_MetalBoard           = 2.63%
			Exile_Item_Foolbox              = 2.63%
			Exile_Item_Sand                 = 2.63%
			Exile_Item_Grinder              = 3.29%
			Exile_Item_MetalScrews          = 3.29%
			Exile_Melee_SledgeHammer        = 3.29%
			Exile_Item_ExtensionCord        = 5.26%
			Exile_Item_LightBulb            = 5.92%
			Exile_Item_WaterCanisterEmpty   = 6.58%
			Exile_Melee_Shovel              = 6.58%
			Exile_Item_JunkMetal            = 7.24%
			Exile_Item_Handsaw              = 8.55%
			Exile_Item_Pliers               = 8.55%
			Exile_Item_ScrewDriver          = 8.55%
			Exile_Melee_Axe                 = 14.47%
		*/
		IndustrialItems[] = {"Exile_Item_Pliers", "Exile_Item_Sand", "Exile_Item_Pliers", "Exile_Melee_Shovel", "Exile_Melee_Axe", "Exile_Item_ScrewDriver", "Exile_Melee_SledgeHammer", "Exile_Item_Handsaw", "Exile_Item_JunkMetal", "Exile_Item_Knife", "Exile_Item_ExtensionCord", "Exile_Melee_Axe", "Exile_Melee_Shovel", "Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Item_ExtensionCord", "Exile_Item_LightBulb", "Exile_Item_LightBulb", "Exile_Item_JunkMetal", "Exile_Item_Pliers", "Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Melee_SledgeHammer", "Exile_Melee_Axe", "Exile_Item_Foolbox", "Exile_Item_ExtensionCord", "Exile_Item_ScrewDriver", "Exile_Item_FloodLightKit", "Exile_Melee_Shovel", "Exile_Melee_Axe", "Exile_Melee_Axe", "Exile_Item_FloodLightKit", "Exile_Item_ExtensionCord", "Exile_Item_ThermalScannerPro", "Exile_Item_MetalScrews", "Exile_Item_CamoTentKit", "Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Item_MetalScrews", "Exile_Item_Grinder", "Exile_Item_JunkMetal", "Exile_Item_ScrewDriver", "Exile_Item_ExtensionCord", "Exile_Item_LightBulb", "Exile_Item_Handsaw", "Exile_Item_ScrewDriver", "Exile_Item_Pliers", "Exile_Item_ExtensionCord", "Exile_Item_Sand", "Exile_Item_MetalBoard", "Exile_Item_ScrewDriver", "Exile_Melee_Shovel", "Exile_Item_Handsaw", "Exile_Item_PortableGeneratorKit", "Exile_Item_MetalScrews", "Exile_Melee_SledgeHammer", "Exile_Melee_Axe", "Exile_Item_MetalScrews", "Exile_Item_LightBulb", "Exile_Item_LightBulb", "Exile_Item_ScrewDriver", "Exile_Item_ExtensionCord", "Exile_Melee_Shovel", "Exile_Item_Cement", "Exile_Item_CamoTentKit", "Exile_Item_Grinder", "Exile_Melee_Axe", "Exile_Item_Grinder", "Exile_Melee_Axe", "Exile_Item_JunkMetal", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Handsaw", "Exile_Melee_Axe", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Axe", "Exile_Item_JunkMetal", "Exile_Item_JunkMetal", "Exile_Melee_Axe", "Exile_Item_WaterCanisterEmpty", "Exile_Item_LightBulb", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Axe", "Exile_Item_JunkMetal", "Exile_Item_Handsaw", "Exile_Item_ScrewDriver", "Exile_Item_Grinder", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Shovel", "Exile_Melee_SledgeHammer", "Exile_Item_JunkMetal", "Exile_Item_Foolbox", "Exile_Item_Grinder", "Exile_Item_MetalBoard", "Exile_Item_PortableGeneratorKit", "Exile_Item_LightBulb", "Exile_Melee_SledgeHammer", "Exile_Melee_Axe", "Exile_Item_WaterCanisterEmpty", "Exile_Item_JunkMetal", "Exile_Melee_Axe", "Exile_Item_JunkMetal", "Exile_Item_Handsaw", "Exile_Item_ScrewDriver", "Exile_Melee_Axe", "Exile_Melee_Shovel", "Exile_Item_Foolbox", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Pliers", "Exile_Item_Pliers", "Exile_Item_PortableGeneratorKit", "Exile_Item_Pliers", "Exile_Item_Pliers", "Exile_Item_Pliers", "Exile_Item_Cement", "Exile_Item_Knife", "Exile_Item_WaterCanisterEmpty", "Exile_Item_CamoTentKit", "Exile_Item_WaterCanisterEmpty", "Exile_Item_ScrewDriver", "Exile_Item_FloodLightKit", "Exile_Melee_Axe", "Exile_Item_MetalBoard", "Exile_Item_JunkMetal", "Exile_Item_Sand", "Exile_Item_LightBulb", "Exile_Melee_Shovel", "Exile_Item_MetalBoard", "Exile_Item_Pliers", "Exile_Item_Pliers", "Exile_Melee_Axe", "Exile_Item_ScrewDriver", "Exile_Item_MetalScrews", "Exile_Item_Pliers", "Exile_Item_Handsaw", "Exile_Item_Handsaw", "Exile_Item_Pliers", "Exile_Item_ScrewDriver", "Exile_Item_CamoTentKit", "Exile_Item_ScrewDriver", "Exile_Melee_Shovel", "Exile_Item_LightBulb", "Exile_Item_Handsaw", "Exile_Item_Cement", "Exile_Item_Sand", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Handsaw", "Exile_Item_ScrewDriver", "Exile_Item_ExtensionCord", "Exile_Melee_Axe", "Exile_Melee_Shovel", "Exile_Melee_Axe", "Exile_Item_Foolbox"};

		/*
			Percental Item Spawn Chances of Vehicle:

			Exile_Item_FuelCanisterFull  = 40.00%
			Exile_Item_FuelCanisterEmpty = 50.00%
			Exile_Item_DuctTape          = 10.00%
		*/
		Vehicle[] = {"Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterFull", "Exile_Item_DuctTape", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterEmpty"};

		/*
			Percental Item Spawn Chances of Chemlights:

			Chemlight_blue   = 25.00%
			Chemlight_green  = 25.00%
			Chemlight_red    = 25.00%
			Chemlight_yellow = 25.00%
		*/
		Chemlights[] = {"Chemlight_yellow", "Chemlight_blue", "Chemlight_green", "Chemlight_red"};

		/*
			Percental Item Spawn Chances of RoadFlares:

			FlareGreen_F  = 25.00%
			FlareRed_F    = 25.00%
			FlareWhite_F  = 25.00%
			FlareYellow_F = 25.00%
		*/
		RoadFlares[] = {"FlareRed_F", "FlareGreen_F", "FlareWhite_F", "FlareYellow_F"};

		/*
			Percental Item Spawn Chances of SmokeGrenades:

			SmokeShell       = 14.29%
			SmokeShellRed    = 14.29%
			SmokeShellGreen  = 14.29%
			SmokeShellYellow = 14.29%
			SmokeShellPurple = 14.29%
			SmokeShellBlue   = 14.29%
			SmokeShellOrange = 14.29%
		*/
		SmokeGrenades[] = {"SmokeShellBlue", "SmokeShell", "SmokeShellOrange", "SmokeShellGreen", "SmokeShellPurple", "SmokeShellRed", "SmokeShellYellow"};

		/*
			Percental Item Spawn Chances of Restraints:

			Exile_Item_ZipTie = 100.00%
		*/
		Restraints[] = {"Exile_Item_ZipTie"};

		/*
			Percental Item Spawn Chances of Electronics:

			Exile_Item_Laptop        = 50.00%
			Exile_Item_BaseCameraKit = 50.00%
		*/
		Electronics[] = {"Exile_Item_BaseCameraKit", "Exile_Item_Laptop"};

		/*
			Percental Item Spawn Chances of Trash:

			Exile_Item_Magazine01         = 6.25%
			Exile_Item_Magazine02         = 6.25%
			Exile_Item_Magazine03         = 6.25%
			Exile_Item_Magazine04         = 6.25%
			Exile_Item_Can_Empty          = 25.00%
			Exile_Item_PlasticBottleEmpty = 25.00%
			Exile_Item_ToiletPaper        = 25.00%
		*/
		Trash[] = {"Exile_Item_PlasticBottleEmpty", "Exile_Item_Magazine03", "Exile_Item_ToiletPaper", "Exile_Item_Can_Empty", "Exile_Item_Magazine04", "Exile_Item_ToiletPaper", "Exile_Item_PlasticBottleEmpty", "Exile_Item_Can_Empty", "Exile_Item_PlasticBottleEmpty", "Exile_Item_ToiletPaper", "Exile_Item_ToiletPaper", "Exile_Item_Magazine02", "Exile_Item_PlasticBottleEmpty", "Exile_Item_Can_Empty", "Exile_Item_Can_Empty", "Exile_Item_Magazine01"};

		/*
			Percental Item Spawn Chances of Unused:

			Exile_Item_CordlessScrewdriver = 11.11%
			Exile_Item_FireExtinguisher    = 11.11%
			Exile_Item_Rope                = 11.11%
			Exile_Item_Carwheel            = 11.11%
			Exile_Item_Defibrillator       = 11.11%
			Exile_Item_SleepingMat         = 11.11%
			Exile_Item_Wrench              = 11.11%
			Exile_Item_OilCanister         = 11.11%
			Exile_Item_Hammer              = 11.11%
		*/
		Unused[] = {"Exile_Item_Hammer", "Exile_Item_Carwheel", "Exile_Item_OilCanister", "Exile_Item_Rope", "Exile_Item_CordlessScrewdriver", "Exile_Item_FireExtinguisher", "Exile_Item_Wrench", "Exile_Item_SleepingMat", "Exile_Item_Defibrillator"};
	};
};

class CfgSettings
{
	///////////////////////////////////////////////////////////////////////
	// Community Base Addons
	///////////////////////////////////////////////////////////////////////
	class CBA 
	{
		// Set this to 1 if you want to have CBA support
		useStackedEH = 0;

		// If you set this to 1 ...........................................
		iReallyWantToGetHackedAndImRetarded = 0;
	};

	///////////////////////////////////////////////////////////////////////
	// GARBAGE COLLECTOR
	///////////////////////////////////////////////////////////////////////
	class GarbageCollector
	{
		/*
			Remark: 
			In 0.9.35 and below, Exile has checked if a player was nearby and then delayed
			the deletion. This check has been removed to save server performance.

			Do NOT touch these if you are not 10000% sure what you do!	
		*/
		class Ingame 
		{
			// Dropped items without fissix
			class GroundWeaponHolder
			{
				lifeTime = 10;
				interval = 5;
			};

			// Dropped items with fissix
			class WeaponHolderSimulated
			{
				lifeTime = 10;
				interval = 5;
			};

			// Corpses and wrecks
			class AllDead 
			{
				lifeTime = 15;
				interval = 5;
			};

			// Loot spawned inside a building
			class Loot 
			{
				lifeTime = 8;
				interval = 1;
			};

			// Never touch this or you will break your sever!
			class Groups 
			{
				interval = 0.5;
			};
		};

		class Database 
		{
			// Remove all deleted items from the database after X days
			permanentlyDeleteTime = 3;
			
			// Remove all territories (and contructions + containers in it) that were not paid after X days
			territoryLifeTime = 7;

			// Remove all containers outside of territories that have not been used for X days
			// Example: Tents
			containerLifeTime = 10;

			// Remove all constructions outside of territories that are older than X days or not moved for X days 
			// Example: Work Benches
			constructionLifeTime = 2;

			// Remove all vehicles that were not moved/used for X days
			vehicleLifeTime = 3;
			
			// Set safe as abandoned
			abandonedTime = 7;
			
			// Deletes a base X days after the flag is stolen if the ransom money isn't paid
			stolenFlagLifeTime = 3;
			
			// Sets door & safe pins to 0000 and marks safes to abandoned X days after the flag is stolen if the ransom money isn't paid
			unlockLifeTime = 2;
		};
	};

	///////////////////////////////////////////////////////////////////////
	// RESPECT, YO
	///////////////////////////////////////////////////////////////////////
	class Respect
	{
		/**
		* Defines the factor of respect you gain for every pop tab in revenue
		*
		* Default: Get 1 respect for every 10 pop tabs 
		*/
		tradingRespectFactor = 0.1;
		
		/**
		* Defines the the minimum amount of Respect earned/lost for a kill
		*/
		minRespectTransfer = 50;

		/**
		* Defines the amount of respect earned/lost for certain types of frags
		*/
		class Frags
		{
			domination = 80;			// Keeps killing the same guy
			letItRain = 150;			// MG, also vehicle MGs
			humiliation = 300;			// Axe
			passenger = 400;			// Out of car/chopper/boat
			roadKill = 200;				// :)
			bigBird = 600;				// Roadkill, but with chopper/plane
			chuteGreaterChopper = 1000;	// Someone flies into chute and chopper/plane explodes	
		};

		class Percentages 
		{
			unlucky = 1; // Dying for an unknown reason costs you 1% respect
			crash = 1; // Crashing your car costs you 1% respect
			suicide = 2; // Comitting suicide costs you 2% of your respect
			friendyFire = 3; // Friendly fire costs you 3% 
			npc = 4; // Being killed by an NPC costs you 4%
			bambiKill = 5; // Killing a bambi costs you 5%
			frag = 5; // Killing someone will get you 5% and remove 5% from the victim
		};

		class Handcuffs 
		{
			trapping = -50;					// A handcuffs B
			breakingFree = 100; 			// B broke free
			releasedByHero = 100; 			// C releases B
			releasedByHostageTaker = 50; 	// A releases B	
		};

		class Bonus
		{
			// Bonus per full 100m 
			per100mDistance = 10;

			// First blood after server restart
			firstBlood = 100;

			// If you kill someone while you are in your own territory
			homie = 20;

			// If you kill someone who is in his own territory
			raid = 20;

			/*
				Example with killstreak = 50

				Frag  Factor   Bonus
				2    * 50      +100
				3    * 50      +150
				4    * 50      +200
				5    * 50      +250
			*/
			killStreak = 50;

			// Kills within this amount of seconds stack (default: 2 minutes)
			killStreakTimeout = 120;
		};
	};

	///////////////////////////////////////////////////////////////////////
	// KILLFEED MAN!
	///////////////////////////////////////////////////////////////////////

	class KillFeed
	{
		// Shows a kill feed for well kills
		showKillFeed = 1;
	};

	///////////////////////////////////////////////////////////////////////
	// PLAYER SPAWN CONFIGURATION
	///////////////////////////////////////////////////////////////////////
	class BambiSettings
	{
		/**
		 * Loadout of new bambi players
		 *
		 * (They will always spawn with a bambi overall - you cannot 
		 * change the loadout uniform)
		 */
		loadOut[] = 
		{
			"ItemCompass",
			"ItemMap", // Because why not
			"Exile_Item_XM8",
			"ItemRadio",
			"Exile_Item_PlasticBottleFreshWater"
		};

		/**
		 * Enables or disables parachute spawning.
		 *
		 * 1 = On
		 * 0 = Off
		 */
		parachuteSpawning = 1;

		/**
		 * Enables or disables halo jumping. Only applies 
		 * if parachute spawning is enabled.
		 *
		 * Remember that if you enable halo jump, it is adviced
		 * to adjust the parachuteDropHeight to something around
		 * 1km or so.
		 *
		 * 1 = On
		 * 0 = Off
		 */
		haloJump = 1;

		/**
		 * Parachute drop height in meters. 
		 */
		parachuteDropHeight = 1000;

		/**
		 * Number of minutes where a fresh spawned player remains in the
		 * bambi state. It will end the bambi state after this timeout
		 * expired or when they pick up their first weapon. Whatever
		 * happens first.
		 */
		protectionDuration = 5;

		/**
		 * Radius of spawn zones around the center of spawn zone markers.
		 */
		spawnZoneRadius = 500;

		/**
		 * These vehicles spawn on server restart close to spawn zones.
		 * They are non-persistent and will despawn on server restart.
		 * Basically they are just used to get away from the spawn zone
		 * faster.
		 *
		 * {Number of vehicles *per* spawn zone, vehicle class name}
		 */
		spawnZoneVehicles[] =
		{
			{5, "Exile_Bike_OldBike"},
			{5, "Exile_Bike_MountainBike"}
		};
	};

	///////////////////////////////////////////////////////////////////////
	// VEHICLE SPAWN CONFIGURATION
	///////////////////////////////////////////////////////////////////////

	class VehicleSpawn
	{
		/**
		* Grid Size for vehicle spawning,
		* smaller the number more vehicles,
		* you get the point
		*/
		vehiclesGridSize = 2200;

		/**
		* Vehicle ammount per grid
		* kinda self explanitory
		*/
		vehiclesGridAmount = 2;

		/**
		* Creates global markers for vehicle spawn tweeking,
		* after you are satisfied with vehicle ammount and spread set this to 0.
		*/
		vehiclesDebugMarkers = 0;

		/**
		* The server will apply random damage up to this value when spawning a vehicle.
		*/
		damageChance = 20; // 20% chance for a vehicle HITPOINT to be damaged
		maximumDamage = 0.9;

		/**
		 * If "randmizeFuel" is set to 1, vehicles will spawn with randomized
		 * fuel. In this case, "fuel" controls the percentage of fuel that
		 * can be in the vehicle at a maximum. For example, if you set this to
		 * 0.5, then vehicles will spawn with something random between 0% and 50%.
		 *
		 * If "randomizeFuel" is set to 0, all vehicles will spawn exactly the 
		 * fuel percentage defined in "fuel". For example, setting this to 0.5
		 * will spawn all vehicles with 50% fuel. Setting it to 0 would spawn
		 * all vehicles without fuel.
		 */
		randomizeFuel = 1;
		fuel = 1;

		/**
		 * Works exactly the same as the fuel setting ^
		 */
		randomizeAmmo = 1;
		ammo = 1;

		// Stuff to spawn on water
		water[] = 
		{
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey"
		};

		// Stuff to spawn on roads
		ground[] = 
		{
			"Exile_Bike_QuadBike_Black",
			"Exile_Bike_QuadBike_Blue",
			"Exile_Bike_QuadBike_Red",
			"Exile_Bike_QuadBike_White",
			"Exile_Bike_QuadBike_Nato",
			"Exile_Bike_QuadBike_Csat",
			"Exile_Bike_QuadBike_Fia",
			"Exile_Bike_QuadBike_Guerilla01",
			"Exile_Bike_QuadBike_Guerilla02",
			"Exile_Car_Volha_Blue",
			"Exile_Car_Volha_White",
			"Exile_Car_Lada_Green",
			"Exile_Car_Lada_Taxi",
			"Exile_Car_TowTractor_White",
			"Exile_Car_UAZ_Open_Green",
			"Exile_Car_UAZ_Green",
			"Exile_Car_LandRover_Ambulance_Desert",
			"Exile_Car_Tractor_Red",
			"Exile_Car_OldTractor_Red",
			"Exile_Car_Octavius_White"
		};

		/**
		 * Enables or disables nightvision optics on ALL vehicles
		 *
		 * 0 = off
		 * 1 = on
		 */
		nightVision = 1;

		/**
		 * Enables or disables thermal optics on ALL vehicles
		 *
		 * 0 = off
		 * 1 = on
		 */
		thermalVision = 0;

		/**
		 * Set this to 1 to unlock vehicles on server boot if they are in safe zones
		 *
		 * 0 = off
		 * 1 = on
		 */
		unlockInSafeZonesAfterRestart = 1;	
	};

	class Weather
	{
		/*
			You can define multiple "keyframes" for the weather to change. The server will pick
			a keyframe randomly to simulate the weather. It will change the weather-keyframes
			based on the following interval
		*/
		interval = 30;

		/*
			Add the keyframes here. The server will pick one random, so if you want one 
			weather type of be more dominant compared to others, add it multiple times
		*/
		//keyframes[] = {"Sunny", "Cloudy", "Thunderstorm"}; 
		keyframes[] = {"Sunny", "Cloudy", "Thunderstorm"}; 

		/*
			This is a keyframe. Look up the BIKI to get more details about the parameters

			Be sure to design the fog settings at a view distance of 1,600m as this is the
			limit in multiplayer by default

			https://community.bistudio.com/wiki/fogParams
			https://community.bistudio.com/wiki/overcast
			https://community.bistudio.com/wiki/setWaves
			https://community.bistudio.com/wiki/setWindStr
			https://community.bistudio.com/wiki/setGusts
			https://community.bistudio.com/wiki/setRain
			https://community.bistudio.com/wiki/setLightnings
			https://community.bistudio.com/wiki/setRainbow
		*/
		class Sunny
		{
			fogValue = 0.1;
			fogDecay = 0.2;
			fogBase = 5;
			overcast = 0.2;
			waves = 0.2;
			wind = 0.25;
			gusts = 0.1;
			rain = 0;
			lightnings = 0;
			rainbows = 0;
		};

		class Cloudy
		{
			fogValue = 0.2;
			fogDecay = 0.1;
			fogBase = 5;
			overcast = 0.4;
			waves = 0.4;
			wind = 0.25;
			gusts = 0.5;
			rain = 0.1;
			lightnings = 0.1;
			rainbows = 1;
		};

		class Thunderstorm
		{
			fogValue = 0.7;
			fogDecay = 0.2;
			fogBase = 5;
			overcast = 1;
			waves = 1;
			wind = 0.25;
			gusts = 0.5;
			rain = 1;
			lightnings = 1;
			rainbows = 0.5;
		};
	};

	class Time
	{
		// Uses Dedicated Server time as ingame Time
		useRealTime = 0;

		// Will overide RealTime
		useStaticTime = 1;

		// time in ARMA FORMAT << CONFIG
		// https://community.bistudio.com/wiki/setDate

		staticTime[] = {2039,10,24,15,30};
	};


	class RCON
	{
		/*
			Note that for this to work you need to have serverCommandPassowrd defined in config.cfg and BE enabled
		*/

		// This needs to match config.cfg serverCommandPassword
		serverPassword = "";

		// Autolocks server until its ready to accept players
		useAutoLock = 0;

		// Server will autoLock at that time before restart (minutes)
		restartAutoLock = 3;

		/*
			Number of hours and minutes of your restart period.

			Examples:

			{4, 0} = Every 4 hours
			{1, 30} = Every one and a half hour (who the hell would do this?)
		*/
		restartTimer[] = {3, 0};

		/*
			Kicks players before restart to prevent gear loss.
			We strongely recommend to use this!

			0 = off
			1 = on
		*/
		useAutoKick = 0;

		/*
			Number of minutes before the server kicks players that did
			not disconnect before the restart. Should at least be two
			minutes!
		*/
		kickTime = 2;

		/*
			Self-explanatory

			0 = off
			1 = on
		*/
		useRestartMessages = 0;

		/*
			Number of minutes before the restart to inform your players.

			Only use full minutes here. Value like 5.5 have not been tested.
		*/
		restartWarningTime[] = {15, 10, 5, 3}; 

		/* 
			If set to 1 server will execute '#shutdown',
			to try to shutdown the server. 
			If set to 0, it will execute '#restart'
		*/

		useShutdown = 0;
	};

	class ServerSettings
	{
		/*
			Support for custom server FSM if wanted
		*/
		serverFSM = "exile_server\fsm\main.fsm";

		/*
			If this is enabled, Exile developers will spawn with a ton of pop tabs.
			We will have a hard time debugging things if you disable this.
		*/
		devFriendyMode = 1;

		devs[] = 
		{
			{"76561197985241690","[EXILE|DEV] Eichi"},
			{"76561198022879703","[EXILE|DEV] Grim"},
			{"76561198075905447","[EXILE|DEV] Vishpala"},
			{"76561197968613061","[EXILE|DEV] Niuva"},
			{"76561198027700602","[EXILE|DEV] Eraser1"},
			{"76561198048317094","[EXILE|DEV] HappyDayZ"},
			{"76561198105900802","[EXILE|DEV] Psycho"},
			{"76561198004111275","[EXILE|DEV] Maca134"},
			{"76561198037177305","[EXILE|DEV] Wolfkill"}
		};
	};

	class Events 
	{
		/*
			A list of events that are active
		*/
		enabledEvents[] = {"SupplyBox", "AbandonedSafe", "AmbientFlyOver"}; 
		enabledEscapeEvents[] = {"EscapeSupplyBox", "AmbientFlyOver", "EarthQuake"}; 

		class EarthQuake 
		{
			type = "spawn";
			function = "ExileServer_system_event_earthQuake_start";
			minTime = 60;
			maxTime = 180;
			minimumPlayersOnline = 1;
		};

		class SupplyBox 
		{
			/*
				Drops a supply box on a parachute next to a random airport on the map.
				The box may contain items. The box can be transported to a territory
				and installed to become a normal storage container.
			*/
			type = "spawn";
			function = "ExileServer_system_event_supplyBox_start";
			minTime = 60; // minutes
			maxTime = 180; // minutes
			minimumPlayersOnline = 10;
			dropRadius = 500; // 500m around an airport (including the main airport on Altis!)
			dropAltitude = 100; // altitude of the drop
			markerTime = 10; // minutes

			/*
				These are different types of boxes can be dropped.
				You can specify the cargo a box should contain.
				The type of box is chosen randomly from the following list.
				Add a type multiple times to increase the chance of being used.
			*/
			types[] = {"Beer", "Beer", "Tools", "Food", "Food", "RepairParts"};

			class BoxTypes
			{
				class Beer 
				{
					items[] = 
					{
						{"Exile_Item_Beer", 24}
					};
				};

				class Food 
				{
					items[] = 
					{
						{"Exile_Item_BBQSandwich", 5},
						{"Exile_Item_Catfood", 5},
						{"Exile_Item_ChristmasTinner", 5},
						{"Exile_Item_GloriousKnakworst", 5},
						{"Exile_Item_SausageGravy", 5},
						{"Exile_Item_Surstromming", 5},
						{"Exile_Item_CanOpener", 1},
						{"Exile_Item_CookingPot", 1},
						{"Exile_Item_Matches", 1}
					};
				};

				class Tools 
				{
					items[] = 
					{
						{"Exile_Item_Wrench", 1},
						{"Exile_Item_Shovel", 1},
						{"Exile_Item_Screwdriver", 1},
						{"Exile_Item_Pliers", 1},
						{"Exile_Item_Handsaw", 1},
						{"Exile_Item_FireExtinguisher", 1},
						{"Exile_Item_DuctTape", 1}
					};
				};

				class RepairParts 
				{
					items[] = 
					{
						{"Exile_Item_CarWheel", 8},
						{"Exile_Item_FuelCanisterFull", 4},
						{"Exile_Item_OilCanister", 1},
						{"Exile_Item_Grinder", 1},
						{"Exile_Item_CordlessScrewdriver", 1}
					};
				};
			};
		};

		class EscapeSupplyBox 
		{
			/*
				Drops a supply box on a parachute next to a random airport on the map.
				The box may contain items. The box can be transported to a territory
				and installed to become a normal storage container.
			*/
			type = "spawn";
			function = "ExileServer_system_event_escapeSupplyBox_start";
			minTime = 3; // minutes
			maxTime = 6; // minutes
			minimumPlayersOnline = 1;
			dropAltitude = 100; // altitude of the drop
			markerTime = 5; // minutes

			/*
				These are different types of boxes can be dropped.
				You can specify the cargo a box should contain.
				The type of box is chosen randomly from the following list.
				Add a type multiple times to increase the chance of being used.
			*/
			types[] = {"CyrusBulletCam","LynxBulletCam","LRRBulletCam","MAR10BulletCam","Rahim","MkIEMR","ASP1Kir","Mk14","CMR","EBR","MXSW","Mk200"};

			class BoxTypes
			{
				class CyrusBulletCam 
				{
					items[] = 
					{
						{"Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", 1},
						{"10Rnd_93x64_DMR_05_Mag", 3},
						{"srifle_DMR_05_blk_F", 1}
					};
				};
				class LynxBulletCam 
				{
					items[] = 
					{
						{"Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag", 1},
						{"5Rnd_127x108_Mag", 3},
						{"srifle_GM6_F", 1}
					};
				};
				class LRRBulletCam 
				{
					items[] = 
					{
						{"Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", 1},
						{"7Rnd_408_Mag", 3},
						{"srifle_LRR_F", 1}
					};
				};
				class MAR10BulletCam 
				{
					items[] = 
					{
						{"Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", 1},
						{"10Rnd_338_Mag", 3},
						{"srifle_DMR_02_F", 1}
					};
				};
				class Rahim 
				{
					items[] = 
					{
						{"srifle_DMR_01_F", 1},
						{"10Rnd_762x54_Mag", 3}
					};
				};
				class MkIEMR 
				{
					items[] = 
					{
						{"srifle_DMR_03_woodland_F", 1},
						{"20Rnd_762x51_Mag", 2}
					};
				};
				class ASP1Kir 
				{
					items[] = 
					{
						{"srifle_DMR_04_F", 1},
						{"10Rnd_127x54_Mag", 3}
					};
				};
				class Mk14 
				{
					items[] = 
					{
						{"srifle_DMR_06_camo_F", 1},
						{"20Rnd_762x51_Mag", 2}
					};
				};
				class CMR 
				{
					items[] = 
					{
						{"srifle_DMR_07_ghex_F", 1},
						{"20Rnd_650x39_Cased_Mag_F", 2}
					};
				};
				class EBR 
				{
					items[] = 
					{
						{"srifle_EBR_F", 1},
						{"20Rnd_762x51_Mag", 2}
					};
				};
				class MXSW 
				{
					items[] = 
					{
						{"arifle_MX_SW_Black_F", 1},
						{"30Rnd_65x39_caseless_mag", 2}
					};
				};
				class Mk200 
				{
					items[] = 
					{
						{"LMG_Mk200_F", 1},
						{"200Rnd_65x39_cased_Box", 1}
					};
				};
			};
		};

		class AbandonedSafe
		{
			type = "spawn";
			function = "ExileServer_system_event_abandonedSafe_start";
			minTime = 60; // minutes
			maxTime = 120; // minutes
			minimumPlayersOnline = 0;
			markerTime = 15; // minutes
		};

		class AmbientFlyOver
		{
			type = "call";
			function = "ExileServer_system_event_ambientFlyOver_start";
			minTime = 30; // minutes
			maxTime = 90; // minutes
			minimumPlayersOnline = 1;
		};
	};
	
	class Logging
	{
		/*
			If logging is enabled separate logs will be made in the sql logs folder for each type
		*/
		traderLogging = 1;
		deathLogging = 1;
		territoryLogging = 1;
	};


	///////////////////////////////////////////////////////////////////////
	// EXILE ESCAPE CONFIGURATION
	// NOTE: REQUIRES ExileEscape.MAPNAME MISSION FILE TO BE LOADED!
	///////////////////////////////////////////////////////////////////////
	class Escape
	{
		/*
			A very simple option with powerful consequences
			Set to 1 to enable Exile Escape!
		*/
		enableEscape = 0;
		
		/*
			Map Configs
		*/
		class Tanoa 
		{
			//Starting Position and radius
			startingLocation[] = {1277.18,560.44,0.00142193};
			startingAreaRadius = 100;
		};
		
		class Altis
		{
			//Starting Position and radius
			startingLocation[] = {8452.87, 25086.9, 0};
			startingAreaRadius = 200;
		};

		// Which players are allowed to spectate after they are dead.
		// Useful for admins/mods and streamers
		spectatorUIDs[] = 
		{
			"76561197985241690",	// Eichi
			"76561198022879703",	// Grim
			"76561198075905447",	// Vish
			"76561198037177305"		// WolfkillArcadia
		};
		
		//Number of players needed before the game initializes
		minimumPlayersOnline = 10;
		
		//Radius of the circle for each round
		roundZoneRadius[] = {1000, 500, 250};
		
		//Final shrink size of last round. To prevent shrinking make finalZoneRadius equal to last roundZoneRadius
		finalZoneRadius = 100;
		
		//Time in minutes after minimumPlayersOnline met before game begins
		timeBeforeStart = 5;
		
		//Total Round Minutes
		minutesPerRound = 10;
		
		//Minutes after round starts before new preview
		minutesBeforePreview = 7;

		// How much do ppl get when they win?
		respectWinKill = 1000;
		respectWinGetIn = 500;
		respectWinSuicide = 500;
		
		//Number of weapon boxes to spawn
		numberOfBoxes = 10;
	};
};
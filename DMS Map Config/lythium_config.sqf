/*
	Custom configs for Lythium.
	Created by Kurewe
*/

// These configs are the default values from the main config. Just included here as an example.
DMS_PlayerNearBlacklist				= 2000;
DMS_SpawnZoneNearBlacklist		= 2500;
DMS_TraderZoneNearBlacklist		= 2500;
DMS_MissionNearBlacklist			= 2500;
DMS_WaterNearBlacklist				= 500;

// Lythium has a lot of hills and mountains, so we allow a tolerance of up to a 30 degree slope.
DMS_MinSurfaceNormal					= 0.85;

// Making these configs below as strict as possible will help in reducing the number of attempts taken to find a valid position, and as a result, improve performance.
DMS_MinDistFromWestBorder			= 1000;	// There's no ocean, so setting a "minimal" value to avoid getting missions at the Western edge.
DMS_MinDistFromEastBorder			= 1000;	// There's no ocean, so setting a "minimal" value to avoid getting missions at the Eastern edge.
DMS_MinDistFromSouthBorder		= 1000;	// There's no ocean, so setting a "minimal" value to avoid getting missions at the Southern edge.
DMS_MinDistFromNorthBorder		= 1000;	// There's no ocean, so setting a "minimal" value to avoid getting missions at the Northern edge.

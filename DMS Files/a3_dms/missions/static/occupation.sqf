/*
	"Occupation" static mission for Altis, Chernarus, Namalsk and Taviana
	Created by second_coming
	Multi-map positions help from Diamond
*/

private["_wp","_wp2","_wp3","_pos","_missionName","_msgStart","_msgWIN","_msgLOSE"];

// For logging purposes
private _num = DMS_MissionCount;


// Set mission side (only "bandit" is supported for now)
_side = "bandit";

switch (toLower worldName) do
{
	case "taviana":
	{
		_pos = [14000,12220,0];
		_missionName = "Solibor Occupation";
		_msgStart = ['#FFFF00',"Solibor is under martial law! There are reports they have a large weapon cache..."];
		_msgWIN = ['#0080FF',"Convicts have successfully assaulted the town of Solibor and secured the cache!"];
		_msgLOSE = ['#FF0000',"The troops have left Solibor, taking the cache with them..."];
	};

	case "namalsk":
	{
		_pos = [3926,7523,0];
		_missionName = "Norinsk Occupation";
		_msgStart = ['#FFFF00',"Norinsk is under martial law! There are reports they have a large weapon cache..."];
		_msgWIN = ['#0080FF',"Convicts have successfully assaulted the town of Norinsk and secured the cache!"];
		_msgLOSE = ['#FF0000',"The troops have left Norinsk, taking the cache with them..."];
	};

	case "napf":
	{
        _chance = floor(random 2);
        switch (_chance) do
		{
            case 0:
            {
			    _pos = [8846,16066,0];
			    _missionName = "Lenzburg Occupation";
			    _msgStart = ['#FFFF00',"Lenzburg is under martial law! There are reports they have a large weapon cache..."];
		    	_msgWIN = ['#0080FF',"Convicts have successfully assaulted the town of Lenzburg and secured the cache!"];
		    	_msgLOSE = ['#FF0000',"The troops have left Lenzburg, taking the cache with them..."];
            };
            case 1:
            {
		      	_pos = [2426,7712,0];
		    	_missionName = "Worb Occupation";
		    	_msgStart = ['#FFFF00',"Worb is under martial law! There are reports they have a large weapon cache..."];
		    	_msgWIN = ['#0080FF',"Convicts have successfully assaulted the town of Worb and secured the cache!"];
		    	_msgLOSE = ['#FF0000',"The troops have left Worb, taking the cache with them..."];
            };
        };
    };
	
	case "chernarus":
    {
        _chance = floor(random 6);
        switch (_chance) do
        {
            case 0:
            {
		        _pos = [3810,8887,0];
	            _missionName = "Vybor Occupation";
		        _msgStart = ['#FFFF00',"Vybor is under martial law! There are reports they have a large weapon cache..."];
	         	_msgWIN = ['#0080FF',"Convicts have successfully assaulted the town of Vybor and secured the cache!"];
	         	_msgLOSE = ['#FF0000',"The troops have left Vybor, taking the cache with them..."];
            };
            case 1:
            {
                _pos = [12024,9083,0];
                _missionName = "Berezino Occupation";
		        _msgStart = ['#FFFF00',"Berezino is under martial law! There are reports they have a large weapon cache..."];
	         	_msgWIN = ['#0080FF',"Convicts have successfully assaulted the town of Berezino and secured the cache!"];
	         	_msgLOSE = ['#FF0000',"The troops have left Berezino, taking the cache with them..."];
            };
            case 2:
            {
                _pos = [6773,2365,0];
                _missionName = "Chernogorsk Occupation";
		        _msgStart = ['#FFFF00',"Chernogorsk is under martial law! There are reports they have a large weapon cache..."];
	         	_msgWIN = ['#0080FF',"Convicts have successfully assaulted the town of Chernogorsk and secured the cache!"];
	         	_msgLOSE = ['#FF0000',"The troops have left Chernogorsk, taking the cache with them..."];
            };
            case 3:
            {
                _pos = [6080,7789,0];
                _missionName = "Stary Sobor Occupation";
		        _msgStart = ['#FFFF00',"Stary Sobor is under martial law! There are reports they have a large weapon cache..."];
	         	_msgWIN = ['#0080FF',"Convicts have successfully assaulted the town of Stary Sobor and secured the cache!"];
	         	_msgLOSE = ['#FF0000',"The troops have left Stary Sobor, taking the cache with them..."];
            };
            case 4:
            {
                _pos = [12063,3554,0];
                _missionName = "Kamyshovo Occupation";
		        _msgStart = ['#FFFF00',"Kamyshovo is under martial law! There are reports they have a large weapon cache..."];
	         	_msgWIN = ['#0080FF',"Convicts have successfully assaulted the town of Kamyshovo and secured the cache!"];
	         	_msgLOSE = ['#FF0000',"The troops have left Kamyshovo, taking the cache with them..."];
            };
            case 5:
            {
                _pos = [2763,5234,0];
                _missionName = "Zelenogorsk Occupation";
		        _msgStart = ['#FFFF00',"Zelenogorsk is under martial law! There are reports they have a large weapon cache..."];
	         	_msgWIN = ['#0080FF',"Convicts have successfully assaulted the town of Zelenogorsk and secured the cache!"];
	         	_msgLOSE = ['#FF0000',"The troops have left Zelenogorsk, taking the cache with them..."];
            };
        };
    };
	
	case "altis":
    {
        _chance = floor(random 5);
        switch (_chance) do
        {
            case 0:
            {
	        	_pos = [12571,14337,0];
	         	_missionName = "Neochori Occupation";
	        	_msgStart = ['#FFFF00',"Neochori is under martial law! There are reports they have a large weapon cache..."];
	        	_msgWIN = ['#0080FF',"Convicts have successfully assaulted the town of Neochori and secured the cache!"];
	         	_msgLOSE = ['#FF0000',"The troops have left Neochori, taking the cache with them..."];
            };
            case 1:
            {
                _pos = [3679,13048,0];
                _missionName = "Kavala Occupation";
		        _msgStart = ['#FFFF00',"Kavala is under martial law! There are reports they have a large weapon cache..."];
	         	_msgWIN = ['#0080FF',"Convicts have successfully assaulted the town of Kavala and secured the cache!"];
	         	_msgLOSE = ['#FF0000',"The troops have left Kavala, taking the cache with them..."];
            };
            case 2:
            {
                _pos = [16812,12610,0];
                _missionName = "Pyrgos Occupation";
		        _msgStart = ['#FFFF00',"Pyrgos is under martial law! There are reports they have a large weapon cache..."];
	         	_msgWIN = ['#0080FF',"Convicts have successfully assaulted the town of Pyrgos and secured the cache!"];
	         	_msgLOSE = ['#FF0000',"The troops have left Pyrgos, taking the cache with them..."];
            };
            case 3:
            {
                _pos = [20885,16947,0];
                _missionName = "Paros Occupation";
		        _msgStart = ['#FFFF00',"Paros is under martial law! There are reports they have a large weapon cache..."];
	         	_msgWIN = ['#0080FF',"Convicts have successfully assaulted the town of Paros and secured the cache!"];
	         	_msgLOSE = ['#FF0000',"The troops have left Paros, taking the cache with them..."];
            };
			case 4:
            {
                _pos = [25764,21344,0];
                _missionName = "Sofia Occupation";
		        _msgStart = ['#FFFF00',"Sofia is under martial law! There are reports they have a large weapon cache..."];
	         	_msgWIN = ['#0080FF',"Convicts have successfully assaulted the town of Sofia and secured the cache!"];
	         	_msgLOSE = ['#FF0000',"The troops have left Sofia, taking the cache with them..."];
            };
        };
    };
	
	case "esseker":
    {
        _chance = floor(random 4);
        switch (_chance) do
        {
            case 0:
            {
                _pos = [1120,10279,0];
                _missionName = "Camp Spencer Occupation";
                _msgStart = ['#FFFF00',"Camp Spencer is under bandit control! There are reports they have a large weapon cache..."];
                _msgWIN = ['#0080FF',"Convicts have successfully assaulted Camp Spencer and secured the cache!"];
                _msgLOSE = ['#FF0000',"The Bandits have left Camp Spencer, taking the cache with them..."];
            };
            case 1:
            {
                _pos = [11932,7920,0];
                _missionName = "Novi Grad Occupation";
                _msgStart = ['#FFFF00',"Novi Grad is under bandit control! There are reports they have a large weapon cache..."];
                _msgWIN = ['#0080FF',"Convicts have successfully assaulted the town of Novi Grad and secured the cache!"];
                _msgLOSE = ['#FF0000',"The Bandits have left Novi Grad, taking the cache with them..."];
            };
            case 2:
            {
                _pos = [8771,5438,0];
                _missionName = "Old Essker Raid";
                _msgStart = ['#FFFF00',"Old Essker is Being occupied by bandits! There are reports they have a large weapon cache..."];
                _msgWIN = ['#0080FF',"Convicts have successfully assaulted the Old Essker Ruins and secured the cache!"];
                _msgLOSE = ['#FF0000',"The bandits have left the Old Essker Ruins, taking the cache with them..."];
            };
            case 3:
            {
                _pos = [4493,3597,0];
                _missionName = "Petlov Grad Park Occupation";
                _msgStart = ['#FFFF00',"Petlov Grad Park is under bandits Occupation! There are reports they have a large weapon cache..."];
                _msgWIN = ['#0080FF',"Convicts have successfully assaulted the Park and secured the cache!"];
                _msgLOSE = ['#FF0000',"The bandits have left Petlov Grad Park, taking the cache with them..."];
            };
        };
    };	
	
    case "tanoa":
    {
        _chance = floor(random 7);
        switch (_chance) do
        {
            case 0:
            {
                _pos = [11621,2648,0];
                _missionName = "Lijnhaven Occupation";
                _msgStart = ['#FFFF00',"Lijnhaven is under martial law! There are reports they have a large weapon cache..."];
                _msgWIN = ['#0080FF',"Convicts have successfully assaulted the town of Lijnhaven and secured the cache!"];
                _msgLOSE = ['#FF0000',"The troops have left Lijnhaven, taking the cache with them..."];
            };
            case 1:
            {
                _pos = [5850,10216,0];
                _missionName = "Georgetown Occupation";
                _msgStart = ['#FFFF00',"Georgetown is under martial law! There are reports they have a large weapon cache..."];
                _msgWIN = ['#0080FF',"Convicts have successfully assaulted the town of Georgetown and secured the cache!"];
                _msgLOSE = ['#FF0000',"The troops have left Georgetown, taking the cache with them..."];
            };
            case 2:
            {
                _pos = [8414,10331,0];
                _missionName = "Sugar Company Raid";
                _msgStart = ['#FFFF00',"Tanoa Sugar Company is Being Raided by bandits! There are reports they have a large weapon cache..."];
                _msgWIN = ['#0080FF',"Convicts have successfully assaulted the Sugar Company and secured the cache!"];
                _msgLOSE = ['#FF0000',"The troops have left the Sugar Company, taking the cache with them..."];
            };
            case 3:
            {
                _pos = [13446,12303,0];
                _missionName = "Blue Pearl Industrial Raid";
                _msgStart = ['#FFFF00',"Blue Pearl Industrial is Being Raided by bandits! There are reports they have a large weapon cache..."];
                _msgWIN = ['#0080FF',"Convicts have successfully assaulted the Blue Pearl Industrial Complex and secured the cache!"];
                _msgLOSE = ['#FF0000',"The troops have left the Blue Pearl Complex, taking the cache with them..."];
            };
		  		  case 4:
            {
                _pos = [1812,13278,0];
                _missionName = "Forbidden Village Occupation";
                _msgStart = ['#FFFF00',"Forbidden Village is under Bandit Occupation! There are reports they have a large weapon cache..."];
                _msgWIN = ['#0080FF',"Convicts have successfully assaulted the Forbidden Village and secured the cache!"];
                _msgLOSE = ['#FF0000',"The Bandits have left the Forbidden Village, taking the cache with them..."];
            };
						case 5:
            {
                _pos = [10032,11796,0];
                _missionName = "Comms ALPHA Occupation";
                _msgStart = ['#FFFF00',"Comms ALPHA is under Bandit Occupation! There are reports they have a large weapon cache..."];
                _msgWIN = ['#0080FF',"Convicts have successfully assaulted Comms ALPHA and secured the cache!"];
                _msgLOSE = ['#FF0000',"The Bandits have left Comms ALPHA, taking the cache with them..."];
            };
						case 6:
            {
                _pos = [11157,11501,0];
                _missionName = "Comms BRAVO Occupation";
                _msgStart = ['#FFFF00',"Comms BRAVO is under Bandit Occupation! There are reports they have a large weapon cache..."];
                _msgWIN = ['#0080FF',"Convicts have successfully assaulted Comms BRAVO and secured the cache!"];
                _msgLOSE = ['#FF0000',"The Bandits have left Comms BRAVO, taking the cache with them..."];
            };
        };
    };			

    case "lythium":
    {
        _chance = floor(random 9);
        switch (_chance) do
        {
            case 0:
            {
                _pos = [16917,5965,0];
                _missionName = "Arobster Occupation";
                _msgStart = ['#FFFF00',"Arobster is under martial law! There are reports they have a large weapon cache..."];
                _msgWIN = ['#0080FF',"Convicts have successfully assaulted the town of Arobster and secured the cache!"];
                _msgLOSE = ['#FF0000',"The troops have left Arobster, taking the cache with them..."];
            };
            case 1:
            {
                _pos = [13683,17464,0];
                _missionName = "KaelNoowi Occupation";
                _msgStart = ['#FFFF00',"KaelNoowi is under martial law! There are reports they have a large weapon cache..."];
                _msgWIN = ['#0080FF',"Convicts have successfully assaulted the town of KaelNoowi and secured the cache!"];
                _msgLOSE = ['#FF0000',"The troops have left KaelNoowi, taking the cache with them..."];
            };
            case 2:
            {
                _pos = [15150,440,0];
                _missionName = "Kinduf Factory Raid";
                _msgStart = ['#FFFF00',"The Kinduf Factory is Being Raided by bandits! There are reports they have a large weapon cache..."];
                _msgWIN = ['#0080FF',"Convicts have successfully assaulted the Kinduf Factory and secured the cache!"];
                _msgLOSE = ['#FF0000',"The troops have left the Kinduf Factory, taking the cache with them..."];
            };
            case 3:
            {
                _pos = [12315,1832,0];
                _missionName = "Regimiento 44 South Base Raid";
                _msgStart = ['#FFFF00',"The Regimiento 44 South Base is Being Raided by bandits! There are reports they have a large weapon cache..."];
                _msgWIN = ['#0080FF',"Convicts have successfully assaulted the Regimiento 44 South Base and secured the cache!"];
                _msgLOSE = ['#FF0000',"The troops have left the Regimiento 44 South Base, taking the cache with them..."];
            };
		 			   case 4:
            {
                _pos = [3818,12861,0];
                _missionName = "Karift Occupation";
                _msgStart = ['#FFFF00',"Karift is under Bandit Occupation! There are reports they have a large weapon cache..."];
                _msgWIN = ['#0080FF',"Convicts have successfully assaulted Karift and secured the cache!"];
                _msgLOSE = ['#FF0000',"The Bandits have left Karift, taking the cache with them..."];
            };
						case 5:
            {
                _pos = [5126,10336,0];
                _missionName = "Mafaraz Occupation";
                _msgStart = ['#FFFF00',"Mafaraz is under Bandit Occupation! There are reports they have a large weapon cache..."];
                _msgWIN = ['#0080FF',"Convicts have successfully assaulted Mafaraz and secured the cache!"];
                _msgLOSE = ['#FF0000',"The Bandits have left Mafaraz, taking the cache with them..."];
            };
						case 6:
            {
                _pos = [9774,11317,0];
                _missionName = "MikisFob Occupation";
                _msgStart = ['#FFFF00',"MikisFob is under Bandit Occupation! There are reports they have a large weapon cache..."];
                _msgWIN = ['#0080FF',"Convicts have successfully assaulted MikisFob and secured the cache!"];
                _msgLOSE = ['#FF0000',"The Bandits have left MikisFob, taking the cache with them..."];
            };
						case 7:
            {
                _pos = [11727,17664,0];
                _missionName = "Regimiento 44 North Base Raid";
                _msgStart = ['#FFFF00',"The Regimiento 44 North Base is under Bandit Occupation! There are reports they have a large weapon cache..."];
                _msgWIN = ['#0080FF',"Convicts have successfully assaulted the Regimiento 44 North Base and secured the cache!"];
                _msgLOSE = ['#FF0000',"The Bandits have left the Regimiento 44 North Base, taking the cache with them..."];
            };
						case 8:
            {
                _pos = [11925,8115,0];
                _missionName = "Bramar Occupation";
                _msgStart = ['#FFFF00',"Bramar is under Bandit Occupation! There are reports they have a large weapon cache..."];
                _msgWIN = ['#0080FF',"Convicts have successfully assaulted Bramar and secured the cache!"];
                _msgLOSE = ['#FF0000',"The Bandits have left Bramar, taking the cache with them..."];
            };
        };
    };

	default
	{
	    diag_log format["DMS ERROR :: Attempting to run occupation with unsupported map: %1",worldName];
	};
};

if (isNil "_pos") exitWith {};

if ([_pos,DMS_StaticMinPlayerDistance] call DMS_fnc_IsPlayerNearby) exitWith {"delay"};

diag_log text "[DMS]: Town Occupation Mission Started";


// Set general mission difficulty
_difficulty = "hardcore";


// Create AI
_AICount 		= 27;
_group1Count 	= ceil(_AICount/3);
_group2Count 	= ceil(_AICount/3);
_group3Count 	= ceil(_AICount/3);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Get AI to defend the position
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
_group = [_pos, _group1Count, _difficulty, "random", _side] call DMS_fnc_SpawnAIGroup;
[ _group,_pos,_difficulty,"COMBAT" ] call DMS_fnc_SetGroupBehavior;

_buildings = _pos nearObjects ["building", 200];
{
	_buildingPositions = [_x, 10] call BIS_fnc_buildingPositions;
	if(count _buildingPositions > 0) then
	{
		_y = _x;
		// Find Highest Point
		_highest = [0,0,0];
		{
			if(_x select 2 > _highest select 2) then
			{
				_highest = _x;
			};

		} foreach _buildingPositions;
		_spawnPosition = _highest;

		_i = _buildingPositions find _spawnPosition;
		_wp = _group addWaypoint [_spawnPosition,0] ;
		_wp setWaypointFormation "Column";
		_wp setWaypointBehaviour "AWARE";
		_wp setWaypointCombatMode "RED";
		_wp setWaypointCompletionRadius 1;
		_wp waypointAttachObject _y;
		_wp setwaypointHousePosition _i;
		_wp setWaypointType "MOVE";

	};

} foreach _buildings;
if(count _buildings > 0 ) then
{
	_wp setWaypointType "CYCLE";
};


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
_group2 = [	_pos, _group2Count, _difficulty, "random", _side] call DMS_fnc_SpawnAIGroup;
[ _group2,_pos,_difficulty,"COMBAT" ] call DMS_fnc_SetGroupBehavior;

_buildings = _pos nearObjects ["building", 100];
{
	_buildingPositions = [_x, 10] call BIS_fnc_buildingPositions;
	if(count _buildingPositions > 0) then
	{
		_y = _x;
		// Find Highest Point
		_highest = [0,0,0];
		{
			if(_x select 2 > _highest select 2) then
			{
				_highest = _x;
			};

		} foreach _buildingPositions;
		_spawnPosition = _highest;

		_i = _buildingPositions find _spawnPosition;
		_wp2 = _group2 addWaypoint [_spawnPosition,0] ;
		_wp2 setWaypointFormation "Column";
		_wp2 setWaypointBehaviour "AWARE";
		_wp2 setWaypointCombatMode "RED";
		_wp2 setWaypointCompletionRadius 1;
		_wp2 waypointAttachObject _y;
		_wp2 setwaypointHousePosition _i;
		_wp2 setWaypointType "MOVE";
	};

} foreach _buildings;
if(count _buildings > 0 ) then
{
	_wp2 setWaypointType "CYCLE";
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
_group3 = [_pos, _group3Count, _difficulty, "random", _side] call DMS_fnc_SpawnAIGroup;
[ _group3,_pos,_difficulty,"COMBAT" ] call DMS_fnc_SetGroupBehavior;

_buildings = _pos nearObjects ["building", 100];
{
	_buildingPositions = [_x, 10] call BIS_fnc_buildingPositions;
	if(count _buildingPositions > 0) then
	{
		_y = _x;
		// Find Highest Point
		_highest = [0,0,0];
		{
			if(_x select 2 > _highest select 2) then
			{
				_highest = _x;
			};

		} foreach _buildingPositions;
		_spawnPosition = _highest;

		_i = _buildingPositions find _spawnPosition;
		_wp3 = _group2 addWaypoint [_spawnPosition,0] ;
		_wp3 setWaypointFormation "Column";
		_wp3 setWaypointBehaviour "AWARE";
		_wp3 setWaypointCombatMode "RED";
		_wp3 setWaypointCompletionRadius 1;
		_wp3 waypointAttachObject _y;
		_wp3 setwaypointHousePosition _i;
		_wp3 setWaypointType "MOVE";

	};

} foreach _buildings;
if(count _buildings > 0 ) then
{
	_wp3 setWaypointType "CYCLE";
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Get the AI to shut the fuck up :)
enableSentences false;
enableRadio false;

// Create Crate
_crate = ["I_CargoNet_01_ammo_F",_pos] call DMS_fnc_SpawnCrate;


// Define mission-spawned AI Units
_missionAIUnits =
[
	[_group,_group2,_group3]
];

// Define the group reinforcements
_groupReinforcementsInfo = [];

// Define mission-spawned objects and loot values
_missionObjs =
[
	[_missionAIUnits],			// armed AI vehicle and static gun(s). Note, we don't add the base itself because we don't want to delete it and respawn it if the mission respawns.
	[],
	[[_crate,[30 + (random 20),100 + (random 40),15 + (random 5)]]]			// weapons,items,backpacks
];

// Create Markers
_markers =
[
	_pos,
	_missionName,
	_difficulty
] call DMS_fnc_CreateMarker;

(_markers select 1) setMarkerSize [500,500];

// Record time here (for logging purposes, otherwise you could just put "diag_tickTime" into the "DMS_AddMissionToMonitor" parameters directly)
_time = diag_tickTime;

// Parse and add mission info to missions monitor
_added =
[
	_pos,
	[
		[
			"kill",
			[_group,_group2,_group3]
		],
		[
			"playerNear",
			[_pos,100]
		]
	],
	_groupReinforcementsInfo,
	[
		_time,
		DMS_StaticMissionTimeOut call DMS_fnc_SelectRandomVal
	],
	_missionAIUnits,
	_missionObjs,
	[_missionName,_msgWIN,_msgLOSE],
	_markers,
	_side,
	_difficulty,
	[[],[]]
] call DMS_fnc_AddMissionToMonitor_Static;

// Check to see if it was added correctly, otherwise delete the stuff
if !(_added) exitWith
{
	diag_log format ["DMS ERROR :: Attempt to set up mission %1 with invalid parameters for DMS_fnc_AddMissionToMonitor_Static! Deleting mission objects and resetting DMS_MissionCount.",_missionName];

	_cleanup = [];
	{
		_cleanup pushBack _x;
	} forEach _missionAIUnits;

	_cleanup pushBack ((_missionObjs select 0)+(_missionObjs select 1));

	{
		_cleanup pushBack (_x select 0);
	} foreach (_missionObjs select 2);

	_cleanup call DMS_fnc_CleanUp;


	// Delete the markers directly
	{deleteMarker _x;} forEach _markers;


	// Reset the mission count
	DMS_MissionCount = DMS_MissionCount - 1;
};


// Notify players
[_missionName,_msgStart] call DMS_fnc_BroadcastMissionStatus;

if (DMS_DEBUG) then
{
	(format ["MISSION: (%1) :: Mission #%2 started at %3 with %4 AI units and %5 difficulty at time %6",_missionName,_num,_pos,_AICount,_difficulty,_time]) call DMS_fnc_DebugLog;
};

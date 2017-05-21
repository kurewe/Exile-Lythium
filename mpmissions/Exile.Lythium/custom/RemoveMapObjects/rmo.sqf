/**
 * Remove/Hide Map Objects From Terrain
 */

_markerarray = ["RemoveMapObjects1","RemoveMapObjects2","RemoveMapObjects3","RemoveMapObjects4",
								"RemoveMapObjects5","RemoveMapObjects6","RemoveMapObjects7","RemoveMapObjects8",
								"RemoveMapObjects9","RemoveMapObjects10","RemoveMapObjects11","RemoveMapObjects12",
								"RemoveMapObjects13"];

_location=[6057.375, 13620.142, 0];  
_radius=10; 
_terrainobjects=nearestTerrainObjects [_location,[],_radius]; {hideObjectGlobal _x} foreach _terrainobjects;

_location=[6052.116, 13571.94, 0];  
_radius=25; 
_terrainobjects=nearestTerrainObjects [_location,[],_radius]; {hideObjectGlobal _x} foreach _terrainobjects;

_location=[10670.5, 2832.94, 0];  
_radius=5; 
_terrainobjects=nearestTerrainObjects [_location,[],_radius]; {hideObjectGlobal _x} foreach _terrainobjects;

_location=[10643.3, 2824.37, 0];  
_radius=5; 
_terrainobjects=nearestTerrainObjects [_location,[],_radius]; {hideObjectGlobal _x} foreach _terrainobjects;

_location=[10668.1, 2816.69, 0];  
_radius=10; 
_terrainobjects=nearestTerrainObjects [_location,[],_radius]; {hideObjectGlobal _x} foreach _terrainobjects;

_location=[12246.6, 2590.15, 0];  
_radius=8; 
_terrainobjects=nearestTerrainObjects [_location,[],_radius]; {hideObjectGlobal _x} foreach _terrainobjects;

_location=[12259.6, 2591.08, 0];  
_radius=8; 
_terrainobjects=nearestTerrainObjects [_location,[],_radius]; {hideObjectGlobal _x} foreach _terrainobjects;

_location=[12230.8, 5557.31, 0];  
_radius=10; 
_terrainobjects=nearestTerrainObjects [_location,[],_radius]; {hideObjectGlobal _x} foreach _terrainobjects;

_location=[12240.7, 5544.82, 0];  
_radius=5; 
_terrainobjects=nearestTerrainObjects [_location,[],_radius]; {hideObjectGlobal _x} foreach _terrainobjects;

_location=[17304.9, 6226.84, 0];  
_radius=10; 
_terrainobjects=nearestTerrainObjects [_location,[],_radius]; {hideObjectGlobal _x} foreach _terrainobjects;

_location=[17298.1, 6187.44, 0];  
_radius=3; 
_terrainobjects=nearestTerrainObjects [_location,[],_radius]; {hideObjectGlobal _x} foreach _terrainobjects;

_location=[17298.9, 6242.58, 0];  
_radius=3; 
_terrainobjects=nearestTerrainObjects [_location,[],_radius]; {hideObjectGlobal _x} foreach _terrainobjects;

_location=[12967.5, 17666.9, 0];  
_radius=10; 
_terrainobjects=nearestTerrainObjects [_location,[],_radius]; {hideObjectGlobal _x} foreach _terrainobjects;

{
_markername = _x;
_terrainobjects=nearestTerrainObjects [(getMarkerPos _markername),[],(getmarkersize _markername)select 0];
{hideObjectGlobal _x} foreach _terrainobjects;
} foreach _markerarray;
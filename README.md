# Lythium Vanilla+ Mission Files for 1.0.4a and Arma 1.78
Author: Kurewe

I've put together some Vanilla+ Lythium Mission files for your pleasure.
Even though it isn't strictly Vanilla, I did try to keep the extras useful and easily configurable/changeable.

Note 1: After updating to Arma 1.70 and Exile 1.0.3, I noticed that there seems to be some (loud) wind across the map (even during completely clear weather). This is not specific to this map, as Bohemia appears to have updated some environment sounds, making them louder. I was able to reduce the constant loud wind by creating a Lythium specific environment entry in the config.cpp. While this helped, the wind is still loud during bad weather and at higher elevations. I will be trying to further reduce the wind volume as I get time.

Note 2: The files I have provided for this Lythium mission (while tested and functional on their own), were done so with the expectation that the person using them will have enough experience and knowledge to then custom configure the mission to their liking. I have no issues providing information about the mission files themselves and specific addons if I use them on my server and have configured them specifically for Lythium. Given that, my preference would be not to turn this thread into a tutorial on how to edit or configure addons, scripts, etc.

 - 60 player slots
 - 4 Safe Traders (which include both airports)
     - Purchased vehicles spawn safely at designated spots
     - All traders have a fuel station/fuel source
 - 2 Spec Ops Traders
 - 3 Mixer Sites (also equipped with workbenches and campfires for EBM use)
 - 9 Spawn Zones
 - Replaced 5 Non-functioning JBAD Fuel Stations with similar Arma versions
     - Only 2 of the original Fuel Stations would and still do auto refuel
 - 9 Fuel Stations added to fill in gaps (with map markers)
     - Fueling is manual on all added fuel stations
 - Added small script to remove/hide certain map objects
     - Floating rock by Shoran Trader
     - Create Heli Landing Area by Shoran Trader
     - 5 Non-functioning Fuel Stations mentioned above
 - 2 Fixes included
     - Get Dynamic Vehicles To Only Spawn Within The Lythium Map Area
     - Purchased Vehicles Spawn In Specific Locations At Traders
 - Exile map markers have been colored
 - All 3 default weather patterns enabled
 - Earthquakes disabled
 - Mission.sqm arranged for easier editing of items without too much work
     - Similar/Related items have been grouped together
 - initServer.sqf/iniPlayerLocal.sqf have been configured to make changes easier
   - Each trader location's objects and simple objects are sectioned and labeled
   - Each trader location's NPCs are sectioned and labeled
 - exile_server_config.pbo included with JBAD and FFAA loot positions
   - Loot positions for Arma buildings and more are also included
 - DMS Files
   - Map Config included for use with DMS
   - Occupation static mission with Lythium locations

Does not include: 
- Roulette

Requirements:
- Exile 1.0.4a - http://www.exilemod.com/downloads/
- Jbad - http://steamcommunity.com/sharedfiles/filedetails/?id=520618345
- Lythium - http://steamcommunity.com/sharedfiles/filedetails/?id=909547724

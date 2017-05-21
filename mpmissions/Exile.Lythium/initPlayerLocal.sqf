/**
 * Created with Exile Mod 3DEN Plugin
 * www.exilemod.com
 */

if (!hasInterface || isServer) exitWith {};

// 51 NPCs
private _npcs = [

// Kinduf Airfield Trader Units
// 14 NPCs
["Exile_Trader_WasteDump", ["HubStandingUA_move1","HubStandingUA_move2","HubStandingUA_idle1","HubStandingUA_idle2","HubStandingUA_idle3"], "Exile_Trader_WasteDump", "WhiteHead_04", [[],[],[],["U_C_Man_casual_1_F",[]],[],[],"H_StrawHat","G_Spectacles",[],["","","","","",""]], [10737.8, 3309.39, 23.1572], [-0.994613, -0.103656, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", ["HubStandingUA_move1","HubStandingUA_move2","HubStandingUA_idle1","HubStandingUA_idle2","HubStandingUA_idle3"], "Exile_Trader_WasteDump", "GreekHead_A3_06", [[],[],[],["U_C_Man_casual_5_F",[]],[],[],"H_Hat_tan","",[],["","","","","",""]], [10745.4, 3312.15, 23.1847], [0.735185, 0.677866, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", ["LHD_krajPaluby"], "Exile_Trader_Vehicle", "AfricanHead_02", [[],[],[],["U_I_G_Story_Protagonist_F",[]],[],[],"H_Bandanna_gry","G_Lady_Blue",[],["","","","","",""]], [10726, 3334.78, 23.0867], [-0.877514, -0.47955, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", ["LHD_krajPaluby"], "Exile_Trader_VehicleCustoms", "WhiteHead_15", [[],[],[],["U_C_WorkerCoveralls",[]],[],[],"","",[],["","","","","",""]], [10733, 3325.9, 23.0954], [0.782932, 0.622107, 0], [0, 0, 1]],
["Exile_Trader_Aircraft", ["LHD_krajPaluby"], "Exile_Trader_Aircraft", "WhiteHead_08", [[],[],[],["U_I_pilotCoveralls",[]],["V_Rangemaster_belt",[]],[],"H_Beret_blk","G_Aviator",[],["","","","","",""]], [10723.7, 3337.68, 23.087], [-0.609308, -0.792933, 0], [0, 0, 1]],
["Exile_Trader_AircraftCustoms", ["LHD_krajPaluby"], "Exile_Trader_AircraftCustoms", "WhiteHead_07", [[],[],[],["U_C_WorkerCoveralls",[]],[],[],"H_Cap_usblack","",[],["","","","","",""]], [10720, 3347.88, 23.0842], [-0.852009, -0.523527, 0], [0, 0, 1]],
["Exile_Trader_Armory", ["LHD_krajPaluby"], "Exile_Trader_Armory", "WhiteHead_14", [["Exile_Weapon_SVD","","","optic_AMS",["Exile_Magazine_10Rnd_762x54",10],[],""],[],["hgun_Pistol_01_F","","","",["10Rnd_9x21_Mag",10],[],""],["U_I_C_Soldier_Para_2_F",[["Exile_Magazine_10Rnd_762x54",3,10],["10Rnd_9x21_Mag",3,10]]],["V_BandollierB_cbr",[]],[],"H_ShemagOpen_tan","G_Combat",[],["","","","","",""]], [10763.9, 3344.55, 26.1766], [0.125788, -0.992057, 0], [0, 0, 1]],
["Exile_Trader_Equipment", ["LHD_krajPaluby"], "Exile_Trader_Equipment", "WhiteHead_17", [["Exile_Weapon_AKM","","","optic_Aco",["Exile_Magazine_30Rnd_762x39_AK",30],[],""],[],["hgun_Pistol_01_F","","","",["10Rnd_9x21_Mag",10],[],""],["U_I_C_Soldier_Bandit_3_F",[["10Rnd_9x21_Mag",3,10]]],["V_I_G_resistanceLeader_F",[["Exile_Magazine_30Rnd_762x39_AK",3,30]]],[],"H_Cap_tan","",[],["","","","","",""]], [10766.1, 3336.34, 26.4139], [-0.079171, 0.996861, 0], [0, 0, 1]],
["Exile_Trader_Food", ["LHD_krajPaluby"], "Exile_Trader_Food", "WhiteHead_02", [[],[],[],["U_C_Journalist",[]],[],[],"","",[],["","","","","",""]], [10766.5, 3340.23, 23.322], [-0.5547, -0.83205, 0], [0, 0, 1]],
["Exile_Trader_Hardware", ["LHD_krajPaluby"], "Exile_Trader_Hardware", "WhiteHead_15", [[],[],[],["U_I_C_Soldier_Bandit_4_F",[]],[],[],"H_Hat_tan","",[],["","","","","",""]], [10764.1, 3344.07, 23.3497], [-0.991077, 0.133294, 0], [0, 0, 1]],
["Exile_Trader_Office", ["LHD_krajPaluby"], "Exile_Trader_Office", "GreekHead_A3_06", [[],[],[],["U_B_GEN_Commander_F",[]],["V_BandollierB_blk",[]],[],"H_Cap_police","",[],["","","","","",""]], [10772.5, 3332.04, 23.6448], [-0.32104, -0.947066, 0], [0, 0, 1]],
["Exile_Guard_01", ["InBaseMoves_patrolling2"], "", "WhiteHead_09", [["arifle_RPK74","","","",["45Rnd_Green_Tracer_545x39_RPK",45],[],""],[],[],["U_I_C_Soldier_Camo_F",[]],["V_TacVest_khk",[["45Rnd_Green_Tracer_545x39_RPK",3,45]]],[],"H_Hat_camo","",[],["","","","","",""]], [10778.7, 3310.63, 26.718], [0.528615, -0.848862, 0], [0, 0, 1]],
["Exile_Guard_02", ["InBaseMoves_patrolling2"], "", "GreekHead_A3_07", [["arifle_AK107","","","optic_Aco",["30Rnd_545x39_AK",30],[],""],[],[],["U_B_CombatUniform_mcam_worn",[["30Rnd_545x39_AK",2,30]]],["V_Rangemaster_belt",[["30Rnd_545x39_AK",1,30]]],[],"H_ShemagOpen_tan","",[],["","","","","",""]], [10737.1, 3326.47, 26.9275], [-0.691994, -0.721904, 0], [0, 0, 1]],
["Exile_Guard_03", ["InBaseMoves_patrolling1"], "", "WhiteHead_09", [["arifle_AKM_F","","","",["30Rnd_762x39_Mag_F",30],[],""],[],[],["U_I_C_Soldier_Camo_F",[["30Rnd_762x39_Mag_F",3,30]]],["V_HarnessOGL_brn",[]],[],"H_Cap_headphones","G_Squares_Tinted",[],["","","","","",""]], [10723.2, 3377.46, 26.2803], [-0.986694, -0.162586, 0], [0, 0, 1]],

// Kalaenoowi Airfield Trader Units
// 13 NPCs
["Exile_Trader_WasteDump", ["HubStandingUA_idle1","HubStandingUA_idle2","HubStandingUA_idle3","HubStandingUA_move1","HubStandingUA_move2"], "Exile_Trader_WasteDump", "GreekHead_A3_08", [[],[],[],["U_C_Man_casual_1_F",[]],[],[],"H_StrawHat","G_Spectacles",[],["","","","","",""]], [13043.1, 18569.3, 347.939], [-0.915726, -0.401804, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", ["HubStandingUA_idle1","HubStandingUA_idle2","HubStandingUA_idle3","HubStandingUA_move1","HubStandingUA_move2"], "Exile_Trader_Vehicle", "WhiteHead_08", [[],[],[],["U_I_G_Story_Protagonist_F",[]],[],[],"H_Bandanna_gry","G_Lady_Blue",[],["","","","","",""]], [13060.7, 18580.7, 348.749], [0.432631, 0.901571, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", ["inbasemoves_repairvehicleknl"], "Exile_Trader_VehicleCustoms", "WhiteHead_04", [[],[],[],["U_C_WorkerCoveralls",[]],[],[],"","",[],["","","","","",""]], [13079.8, 18559.7, 348.496], [0.0920293, -0.995756, 0], [0, 0, 1]],
["Exile_Trader_Aircraft", ["HubStandingUA_idle1","HubStandingUA_idle2","HubStandingUA_idle3","HubStandingUA_move1","HubStandingUA_move2"], "Exile_Trader_Aircraft", "WhiteHead_08", [[],[],[],["U_I_pilotCoveralls",[]],["V_Rangemaster_belt",[]],[],"H_Beret_blk","G_Aviator",[],["","","","","",""]], [13062.5, 18580.3, 348.76], [0.0319374, 0.99949, 0], [0, 0, 1]],
["Exile_Trader_AircraftCustoms", ["inbasemoves_assemblingvehicleerc"], "Exile_Trader_AircraftCustoms", "WhiteHead_16", [[],[],[],["U_C_WorkerCoveralls",[]],[],[],"H_Cap_usblack","",[],["","","","","",""]], [13073.2, 18571.6, 348.685], [0.932098, 0.362207, 0], [0, 0, 1]],
["Exile_Trader_Armory", ["amovpercmstpslowwrfldnon","amovpercmstpslowwrfldnon","aidlpercmstpslowwrfldnon_g01","aidlpercmstpslowwrfldnon_g02","aidlpercmstpslowwrfldnon_g03","aidlpercmstpslowwrfldnon_g05"], "Exile_Trader_Armory", "WhiteHead_12", [["Exile_Weapon_SVD","","","optic_AMS",["Exile_Magazine_10Rnd_762x54",10],[],""],[],["hgun_Pistol_01_F","","","",["10Rnd_9x21_Mag",10],[],""],["U_I_C_Soldier_Para_2_F",[["Exile_Magazine_10Rnd_762x54",3,10],["10Rnd_9x21_Mag",3,10]]],["V_BandollierB_cbr",[]],[],"H_ShemagOpen_tan","G_Combat",[],["","","","","",""]], [13040.6, 18522.2, 346.295], [0.417609, 0.908627, 0], [0, 0, 1]],
["Exile_Trader_Equipment", ["amovpercmstpslowwrfldnon","amovpercmstpslowwrfldnon","aidlpercmstpslowwrfldnon_g01","aidlpercmstpslowwrfldnon_g02","aidlpercmstpslowwrfldnon_g03","aidlpercmstpslowwrfldnon_g05"], "Exile_Trader_Equipment", "GreekHead_A3_06", [["Exile_Weapon_AKM","","","optic_Aco",["Exile_Magazine_30Rnd_762x39_AK",30],[],""],[],["hgun_Pistol_01_F","","","",["10Rnd_9x21_Mag",10],[],""],["U_I_C_Soldier_Bandit_3_F",[["10Rnd_9x21_Mag",3,10]]],["V_I_G_resistanceLeader_F",[["Exile_Magazine_30Rnd_762x39_AK",3,30]]],[],"H_Cap_tan","",[],["","","","","",""]], [13041.3, 18528, 346.295], [0.204366, 0.978895, 0], [0, 0, 1]],
["Exile_Trader_Food", ["HubStandingUA_idle1","HubStandingUA_idle2","HubStandingUA_idle3","HubStandingUA_move1","HubStandingUA_move2"], "Exile_Trader_Food", "AfricanHead_02", [[],[],[],["U_C_Journalist",[]],[],[],"","",[],["","","","","",""]], [13071.6, 18535.5, 347.475], [-0.668652, 0.743575, 0], [0, 0, 1]],
["Exile_Trader_Hardware", ["HubStandingUA_idle1","HubStandingUA_idle2","HubStandingUA_idle3","HubStandingUA_move1","HubStandingUA_move2"], "Exile_Trader_Hardware", "WhiteHead_17", [[],[],[],["U_I_C_Soldier_Bandit_4_F",[]],[],[],"H_Hat_tan","",[],["","","","","",""]], [13063.5, 18528.8, 347.475], [-0.500626, 0.865664, 0], [0, 0, 1]],
["Exile_Trader_Office", ["HubSittingChairUA_idle1","HubSittingChairUA_idle2","HubSittingChairUA_idle3","HubSittingChairUA_move1"], "Exile_Trader_Office", "GreekHead_A3_09", [[],[],[],["U_B_GEN_Commander_F",[]],["V_BandollierB_blk",[]],[],"","",[],["","","","","",""]], [13060.7, 18560.7, 348.193], [-0.0593015, -0.99824, 0], [0, 0, 1]],
["Exile_Guard_01", ["inbasemoves_patrolling1","inbasemoves_patrolling2"], "", "WhiteHead_14", [["arifle_RPK74","","","",["45Rnd_Green_Tracer_545x39_RPK",45],[],""],[],[],["U_I_C_Soldier_Camo_F",[]],["V_TacVest_khk",[["45Rnd_Green_Tracer_545x39_RPK",3,45]]],[],"H_Hat_camo","",[],["","","","","",""]], [13125.6, 18529.4, 350.549], [0.644721, -0.764418, 0], [0, 0, 1]],
["Exile_Guard_02", ["inbasemoves_patrolling1","inbasemoves_patrolling2"], "", "WhiteHead_05", [["arifle_AK107","","","optic_Aco",["30Rnd_545x39_AK",30],[],""],[],[],["U_B_CombatUniform_mcam_worn",[["30Rnd_545x39_AK",2,30]]],["V_Rangemaster_belt",[["30Rnd_545x39_AK",1,30]]],[],"H_ShemagOpen_tan","",[],["","","","","",""]], [13058.8, 18558.3, 351.308], [-0.994363, 0.106034, 0], [0, 0, 1]],
["Exile_Guard_03", ["inbasemoves_patrolling1","inbasemoves_patrolling2"], "", "AfricanHead_03", [["arifle_AKM_F","","","",["30Rnd_762x39_Mag_F",30],[],""],[],[],["U_I_C_Soldier_Camo_F",[["30Rnd_762x39_Mag_F",3,30]]],["V_HarnessOGL_brn",[]],[],"H_Cap_headphones","G_Squares_Tinted",[],["","","","","",""]], [13015.2, 18532.6, 349.215], [-0.999897, -0.0143614, 0], [0, 0, 1]],

// Shoran Trader Units
// 12 NPCs
["Exile_Trader_WasteDump", ["HubStandingUA_idle1","HubStandingUA_idle2","HubStandingUA_idle3","HubStandingUA_move1","HubStandingUA_move2"], "Exile_Trader_WasteDump", "WhiteHead_13", [[],[],[],["U_C_Man_casual_1_F",[]],[],[],"H_StrawHat","G_Spectacles",[],["","","","","",""]], [6024.9, 13645.6, 316.566], [0.784489, -0.620143, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", ["HubStandingUA_idle1","HubStandingUA_idle2","HubStandingUA_idle3","HubStandingUA_move1","HubStandingUA_move2"], "Exile_Trader_Vehicle", "WhiteHead_04", [[],[],[],["U_I_G_Story_Protagonist_F",[]],[],[],"H_Bandanna_gry","G_Lady_Blue",[],["","","","","",""]], [6019.09, 13604.5, 314.064], [-0.975063, -0.221929, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", ["inbasemoves_repairvehicleknl","HubStandingUA_idle1"], "Exile_Trader_VehicleCustoms", "GreekHead_A3_09", [[],[],[],["U_C_WorkerCoveralls",[]],[],[],"","",[],["","","","","",""]], [6019.04, 13598, 314.064], [0.886048, 0.463593, 0], [0, 0, 1]],
["Exile_Trader_Armory", ["amovpercmstpslowwrfldnon","amovpercmstpslowwrfldnon","aidlpercmstpslowwrfldnon_g01","aidlpercmstpslowwrfldnon_g02","aidlpercmstpslowwrfldnon_g03","aidlpercmstpslowwrfldnon_g05"], "Exile_Trader_Armory", "WhiteHead_05", [["Exile_Weapon_SVD","","","optic_AMS",["Exile_Magazine_10Rnd_762x54",10],[],""],[],["hgun_Pistol_01_F","","","",["10Rnd_9x21_Mag",10],[],""],["U_I_C_Soldier_Para_2_F",[["Exile_Magazine_10Rnd_762x54",3,10],["10Rnd_9x21_Mag",3,10]]],["V_BandollierB_cbr",[]],[],"H_ShemagOpen_tan","G_Combat",[],["","","","","",""]], [5993.26, 13616.1, 314.539], [-0.296192, -0.955129, 0], [0, 0, 1]],
["Exile_Trader_Equipment", ["amovpercmstpslowwrfldnon","amovpercmstpslowwrfldnon","aidlpercmstpslowwrfldnon_g01","aidlpercmstpslowwrfldnon_g02","aidlpercmstpslowwrfldnon_g03","aidlpercmstpslowwrfldnon_g05"], "Exile_Trader_Equipment", "WhiteHead_09", [["Exile_Weapon_AKM","","","optic_Aco",["Exile_Magazine_30Rnd_762x39_AK",30],[],""],[],["hgun_Pistol_01_F","","","",["10Rnd_9x21_Mag",10],[],""],["U_I_C_Soldier_Bandit_3_F",[["10Rnd_9x21_Mag",3,10]]],["V_I_G_resistanceLeader_F",[["Exile_Magazine_30Rnd_762x39_AK",3,30]]],[],"H_Cap_tan","",[],["","","","","",""]], [5984.08, 13613.2, 314.601], [0.999199, 0.0400271, 0], [0, 0, 1]],
["Exile_Trader_Hardware", ["HubStandingUA_idle1","HubStandingUA_idle2","HubStandingUA_idle3","HubStandingUA_move1","HubStandingUA_move2"], "Exile_Trader_Hardware", "AfricanHead_02", [[],[],[],["U_I_C_Soldier_Bandit_4_F",[]],[],[],"H_Hat_tan","",[],["","","","","",""]], [6011.6, 13590.3, 314.093], [0.163178, 0.986597, 0], [0, 0, 1]],
["Exile_Trader_Food", ["HubStandingUA_idle1","HubStandingUA_idle2","HubStandingUA_idle3","HubStandingUA_move1","HubStandingUA_move2"], "Exile_Trader_Food", "GreekHead_A3_07", [[],[],[],["U_C_Journalist",[]],[],[],"","",[],["","","","","",""]], [5993.69, 13589.7, 314.153], [-0.229143, 0.973393, 0], [0, 0, 1]],
["Exile_Trader_Office", ["HubStandingUA_idle1","HubStandingUA_idle2","HubStandingUA_idle3","HubStandingUA_move1","HubStandingUA_move2"], "Exile_Trader_Office", "WhiteHead_06", [[],[],[],["U_B_GEN_Commander_F",[]],["V_BandollierB_blk",[]],[],"H_Cap_police","",[],["","","","","",""]], [6010.97, 13621.5, 316.1], [-0.99292, 0.118785, 0], [0, 0, 1]],
["Exile_Guard_01", ["inbasemoves_patrolling1","inbasemoves_patrolling2"], "", "WhiteHead_02", [["arifle_RPK74","","","",["45Rnd_Green_Tracer_545x39_RPK",45],[],""],[],[],["U_I_C_Soldier_Camo_F",[]],["V_TacVest_khk",[["45Rnd_Green_Tracer_545x39_RPK",3,45]]],[],"H_Hat_camo","",[],["","","","","",""]], [6010.96, 13622.3, 318.615], [0.590076, 0.807348, 0], [0, 0, 1]],
["Exile_Guard_01", ["inbasemoves_patrolling1","inbasemoves_patrolling2"], "", "WhiteHead_13", [["arifle_RPK74","","","",["45Rnd_Green_Tracer_545x39_RPK",45],[],""],[],[],["U_I_C_Soldier_Camo_F",[]],["V_TacVest_khk",[["45Rnd_Green_Tracer_545x39_RPK",3,45]]],[],"H_Hat_camo","",[],["","","","","",""]], [6077.68, 13557.4, 314.191], [0.846728, -0.532027, 0], [0, 0, 1]],
["Exile_Guard_02", ["inbasemoves_patrolling1","inbasemoves_patrolling2"], "", "WhiteHead_12", [["arifle_AK107","","","optic_Aco",["30Rnd_545x39_AK",30],[],""],[],[],["U_B_CombatUniform_mcam_worn",[["30Rnd_545x39_AK",2,30]]],["V_Rangemaster_belt",[["30Rnd_545x39_AK",1,30]]],[],"H_ShemagOpen_tan","",[],["","","","","",""]], [6011.86, 13618.9, 318.741], [0.999892, -0.0146893, 0], [0, 0, 1]],
["Exile_Guard_03", ["inbasemoves_patrolling1","inbasemoves_patrolling2"], "", "WhiteHead_02", [["arifle_AKM_F","","","",["30Rnd_762x39_Mag_F",30],[],""],[],[],["U_I_C_Soldier_Camo_F",[["30Rnd_762x39_Mag_F",3,30]]],["V_HarnessOGL_brn",[]],[],"H_Cap_headphones","G_Squares_Tinted",[],["","","","","",""]], [6041.48, 13683.1, 319.853], [0.566229, 0.824248, 0], [0, 0, 1]],

// PuestoCrow Trader Units
// 12 NPCs
["Exile_Trader_WasteDump", ["HubStandingUA_idle1","HubStandingUA_idle2","HubStandingUA_idle3","HubStandingUA_move1","HubStandingUA_move2"], "Exile_Trader_WasteDump", "WhiteHead_15", [[],[],[],["U_C_Man_casual_1_F",[]],[],[],"H_StrawHat","G_Spectacles",[],["","","","","",""]], [13796.4, 9313.53, 86.8522], [0.286997, -0.957932, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", ["HubStandingUA_idle1","HubStandingUA_idle2","HubStandingUA_idle3","HubStandingUA_move1","HubStandingUA_move2"], "Exile_Trader_Vehicle", "WhiteHead_20", [[],[],[],["U_I_G_Story_Protagonist_F",[]],[],[],"H_Bandanna_gry","G_Lady_Blue",[],["","","","","",""]], [13779.5, 9289.76, 83.5425], [0.993737, 0.111742, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", ["inbasemoves_repairvehicleknl","HubStandingUA_idle1"], "Exile_Trader_VehicleCustoms", "WhiteHead_09", [[],[],[],["U_C_WorkerCoveralls",[]],[],[],"","",[],["","","","","",""]], [13775.8, 9293.72, 84.2352], [-0.632376, 0.774661, 0], [0, 0, 1]],
["Exile_Trader_Armory", ["amovpercmstpslowwrfldnon","amovpercmstpslowwrfldnon","aidlpercmstpslowwrfldnon_g01","aidlpercmstpslowwrfldnon_g02","aidlpercmstpslowwrfldnon_g03","aidlpercmstpslowwrfldnon_g05"], "Exile_Trader_Armory", "GreekHead_A3_08", [["Exile_Weapon_SVD","","","optic_AMS",["Exile_Magazine_10Rnd_762x54",10],[],""],[],["hgun_Pistol_01_F","","","",["10Rnd_9x21_Mag",10],[],""],["U_I_C_Soldier_Para_2_F",[["Exile_Magazine_10Rnd_762x54",3,10],["10Rnd_9x21_Mag",3,10]]],["V_BandollierB_cbr",[]],[],"H_ShemagOpen_tan","G_Combat",[],["","","","","",""]], [13738.6, 9343.72, 100.346], [-0.296192, -0.955129, 0], [0, 0, 1]],
["Exile_Trader_Equipment", ["amovpercmstpslowwrfldnon","amovpercmstpslowwrfldnon","aidlpercmstpslowwrfldnon_g01","aidlpercmstpslowwrfldnon_g02","aidlpercmstpslowwrfldnon_g03","aidlpercmstpslowwrfldnon_g05"], "Exile_Trader_Equipment", "WhiteHead_07", [["Exile_Weapon_AKM","","","optic_Aco",["Exile_Magazine_30Rnd_762x39_AK",30],[],""],[],["hgun_Pistol_01_F","","","",["10Rnd_9x21_Mag",10],[],""],["U_I_C_Soldier_Bandit_3_F",[["10Rnd_9x21_Mag",3,10]]],["V_I_G_resistanceLeader_F",[["Exile_Magazine_30Rnd_762x39_AK",3,30]]],[],"H_Cap_tan","",[],["","","","","",""]], [13739.8, 9343.09, 97.7463], [-0.979254, -0.202636, 0], [0, 0, 1]],
["Exile_Trader_Food", ["HubStandingUA_idle1","HubStandingUA_idle2","HubStandingUA_idle3"], "Exile_Trader_Food", "WhiteHead_12", [[],[],[],["U_C_Journalist",[]],[],[],"","",[],["","","","","",""]], [13758.2, 9308, 85.7661], [0.59239, 0.805651, 0], [0, 0, 1]],
["Exile_Trader_Hardware", ["HubStandingUA_idle1","HubStandingUA_idle2","HubStandingUA_idle3","HubStandingUA_move1","HubStandingUA_move2"], "Exile_Trader_Hardware", "WhiteHead_20", [[],[],[],["U_I_C_Soldier_Bandit_4_F",[]],[],[],"H_Hat_tan","",[],["","","","","",""]], [13748.9, 9300.72, 85.7658], [-0.990336, -0.13869, 0], [0, 0, 1]],
["Exile_Trader_Office", ["HubStandingUA_idle1","HubStandingUA_idle2","HubStandingUA_idle3"], "Exile_Trader_Office", "AfricanHead_01", [[],[],[],["U_B_GEN_Commander_F",[]],["V_BandollierB_blk",[]],[],"H_Beret_gen_F","",[],["","","","","",""]], [13738.6, 9321.86, 85.8244], [-0.99292, 0.118785, 0], [0, 0, 1]],
["Exile_Guard_01", ["inbasemoves_patrolling1","inbasemoves_patrolling2"], "", "WhiteHead_05", [["arifle_RPK74","","","",["45Rnd_Green_Tracer_545x39_RPK",45],[],""],[],[],["U_I_C_Soldier_Camo_F",[]],["V_TacVest_khk",[["45Rnd_Green_Tracer_545x39_RPK",3,45]]],[],"H_Hat_camo","",[],["","","","","",""]], [13766.2, 9386.28, 105.483], [0.193248, 0.98115, 0], [0, 0, 1]],
["Exile_Guard_01", ["inbasemoves_patrolling1","inbasemoves_patrolling2"], "", "GreekHead_A3_05", [["arifle_RPK74","","","",["45Rnd_Green_Tracer_545x39_RPK",45],[],""],[],[],["U_I_C_Soldier_Camo_F",[]],["V_TacVest_khk",[["45Rnd_Green_Tracer_545x39_RPK",3,45]]],[],"H_Hat_camo","",[],["","","","","",""]], [13728.6, 9340.42, 102.871], [-0.873645, -0.486563, 0], [0, 0, 1]],
["Exile_Guard_02", ["inbasemoves_patrolling1","inbasemoves_patrolling2"], "", "AfricanHead_01", [["arifle_AK107","","","optic_Aco",["30Rnd_545x39_AK",30],[],""],[],[],["U_B_CombatUniform_mcam_worn",[["30Rnd_545x39_AK",2,30]]],["V_Rangemaster_belt",[["30Rnd_545x39_AK",1,30]]],[],"H_ShemagOpen_tan","",[],["","","","","",""]], [13732.2, 9347.58, 102.871], [-0.544501, 0.83876, 0], [0, 0, 1]],
["Exile_Guard_03", ["inbasemoves_patrolling1","inbasemoves_patrolling2"], "", "WhiteHead_12", [["arifle_AKM_F","","","",["30Rnd_762x39_Mag_F",30],[],""],[],[],["U_I_C_Soldier_Camo_F",[["30Rnd_762x39_Mag_F",3,30]]],["V_HarnessOGL_brn",[]],[],"H_Cap_headphones","G_Squares_Tinted",[],["","","","","",""]], [13768.8, 9301.99, 88.4064], [0.982525, -0.186133, 0], [0, 0, 1]],

// Spec Ops Trader Units
// 4 NPCs
// Spec Ops East
["Exile_Guard_01", ["hubwoundedprone_idle1","hubwoundedprone_idle2"], "", "WhiteHead_03", [[],[],[],["U_BG_Guerrilla_6_1",[]],["V_TacVest_khk",[]],[],"H_ShemagOpen_tan","G_Tactical_Black",[],["","","","","",""]], [20434.1, 5038.5, 27.7628], [0.995831, 0.0912164, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_SpecialOperations", "WhiteHead_05", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],["B_Parachute",[]],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [20433.9, 5039.88, 27.4564], [0.469963, 0.882686, 0], [0, 0, 1]],
// Spec Ops West
["Exile_Guard_01", ["hubwoundedprone_idle1","hubwoundedprone_idle2"], "", "WhiteHead_05", [[],[],[],["U_BG_Guerrilla_6_1",[]],["V_TacVest_khk",[]],[],"H_ShemagOpen_tan","G_Tactical_Black",[],["","","","","",""]], [239.376, 17447.3, 688], [-0.0717034, -0.997426, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_SpecialOperations", "WhiteHead_07", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],["B_Parachute",[]],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [240.768, 17447.3, 687.644], [0.794655, -0.607062, 0], [0, 0, 1]]

];

{
    private _logic = "Logic" createVehicleLocal [0, 0, 0];
    private _trader = (_x select 0) createVehicleLocal [0, 0, 0];
    private _animations = _x select 1;
    
    _logic setPosWorld (_x select 5);
    _logic setVectorDirAndUp [_x select 6, _x select 7];
    
    _trader setVariable ["BIS_enableRandomization", false];
    _trader setVariable ["BIS_fnc_animalBehaviour_disable", true];
    _trader setVariable ["ExileAnimations", _animations];
    _trader setVariable ["ExileTraderType", _x select 2];
    _trader disableAI "ANIM";
    _trader disableAI "MOVE";
    _trader disableAI "FSM";
    _trader disableAI "AUTOTARGET";
    _trader disableAI "TARGET";
    _trader disableAI "CHECKVISIBLE";
    _trader allowDamage false;
    _trader setFace (_x select 3);
    _trader setUnitLoadOut (_x select 4);
    _trader setPosWorld (_x select 5);
    _trader setVectorDirAndUp [_x select 6, _x select 7];
    _trader reveal _logic;
    _trader attachTo [_logic, [0, 0, 0]];
    _trader switchMove (_animations select 0);
    _trader addEventHandler ["AnimDone", {_this call ExileClient_object_trader_event_onAnimationDone}];
}
forEach _npcs;
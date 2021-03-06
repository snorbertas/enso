#pragma once

/*==========================*/
/*=== SPRITE DEFINITIONS ===*/
/*==========================*/
	//Background Sprites
	#define BACKGROUND_FOREST 1
	#define BACKGROUND_SKY 2
	#define BACKGROUND_FOREST_DARK 3
	#define BACKGROUND_CITY 4
	#define BACKGROUND_SKY_CLOUDY 5

	//Interface Sprites
	#define SPRITE_HEALTH_0 75
	#define SPRITE_HEALTH_1 84
	#define SPRITE_HEALTH_2 12
	#define SPRITE_MANA_0 85
	#define SPRITE_MANA_1 86
	#define SPRITE_MANA_2 87
	#define SPRITE_EXP_0 140
	#define SPRITE_EXP_1 141
	#define SPRITE_EXP_2 142
	#define SPRITE_INTERFACE_MAP 114
	#define SPRITE_INTERFACE_BOOKS 13
	#define SPRITE_INTERFACE_INVENTORY 23
	#define SPRITE_INTERFACE_OPTIONS 24
	#define SPRITE_INTERFACE_MESSAGE 32
	#define SPRITE_INTERFACE_CONNECTING 34
	#define SPRITE_INTERFACE_KEYBOARD 41
	#define SPRITE_INTERFACE_EDITOR 47
	#define SPRITE_INTERFACE_EDITOR_B 71
	#define SPRITE_INTERFACE_SLOTS 90
	#define SPRITE_INTERFACE_PLAYER 92
	#define SPRITE_INTERFACE_LOGIN 98
	#define SPRITE_INTERFACE_CONVO_THINK 124
	#define SPRITE_INTERFACE_CONVO_SHOUT 125
	#define SPRITE_INTERFACE_CONVO_NORMAL 126
	#define SPRITE_INTERFACE_TUTORIAL 127
	#define SPRITE_INTERFACE_TUTORIAL2 130
	#define SPRITE_INTERFACE_ARROW 131
	#define SPRITE_INTERFACE_ARROW_H 135
	#define SPRITE_INTERFACE_PAUSE 138
	#define SPRITE_INTERFACE_OBJECTIVE 143
	#define SPRITE_INTERFACE_REWARD 145
	#define SPRITE_BLOODSCREEN 144

	//Button Sprites
	#define SPRITE_BUTTON_STORY 21
	#define SPRITE_BUTTON_MULTIPLAYER 39
	#define SPRITE_BUTTON_OPTIONS 17
	#define SPRITE_BUTTON_CREDITS 14
	#define SPRITE_BUTTON_QUIT 19
	#define SPRITE_BUTTON_QUESTS 8
	#define SPRITE_BUTTON_SKILLS 10
	#define SPRITE_BUTTON_STATS 29
	#define SPRITE_BUTTON_INVENTORY 35
	#define SPRITE_BUTTON_OKAY 27
	#define SPRITE_BUTTON_LOGIN 37
	#define SPRITE_BUTTON_E_NEW 48
	#define SPRITE_BUTTON_E_LOAD 50
	#define SPRITE_BUTTON_E_SAVE 52
	#define SPRITE_BUTTON_E_HOR 57
	#define SPRITE_BUTTON_E_VER 59
	#define SPRITE_BUTTON_E_NTY 72
	#define SPRITE_BUTTON_E_BLOCK 61
	#define SPRITE_BUTTON_E_SELECT 63
	#define SPRITE_BUTTON_E_PLATFORM 65
	#define SPRITE_BUTTON_E_BACKGROUND 67
	#define SPRITE_BUTTON_E_FOREGROUND 88
	#define SPRITE_BUTTON_E_EVENT 69
	#define SPRITE_BUTTON_DONE 115
	#define SPRITE_BUTTON_CONTROLS 117
	#define SPRITE_BUTTON_KEYPICK 119
	#define SPRITE_BUTTON_CANCEL 121
	#define SPRITE_BUTTON_CONTINUE 136

	//Animations
	#define SPRITE_ANIM_WATERMOVE 1
	#define SPRITE_ANIM_WATERSPLASH 95
	#define SPRITE_ANIM_BUTTERFLY_A 99
	#define SPRITE_ANIM_BUTTERFLY_B 102
	#define SPRITE_ANIM_BUTTERFLY_C 105
	#define SPRITE_ANIM_BUTTERFLY_D 108
	#define SPRITE_ANIM_BUTTERFLY_E 111
	#define SPRITE_ANIM_EXP 139

	//Tile Sprites
	#define SPRITE_TILE_GRASS_T1 0
	#define SPRITE_TILE_GRASS_T2 1
	#define SPRITE_TILE_GRASS_B1 2
	#define SPRITE_TILE_GRASS_B2 3
	#define SPRITE_TILE_WATER_T1 4
	#define SPRITE_TILE_WATER_T2 5
	#define SPRITE_TILE_WATER_B1 6
	#define SPRITE_TILE_WATER_B2 7
	#define SPRITE_TILE_SAND_T1 8
	#define SPRITE_TILE_SAND_T2 9
	#define SPRITE_TILE_FENCE 10
	#define SPRITE_TILE_MIST_T1 11
	#define SPRITE_TILE_MIST_T2 12
	#define SPRITE_TILE_MIST_B1 13
	#define SPRITE_TILE_MIST_B2 14
	#define SPRITE_TILE_HOUSE 15
	#define SPRITE_TILE_TREE 21
	#define SPRITE_TILE_GRASS 53
	#define SPRITE_TILE_ROCK 60
	#define SPRITE_TILE_HOUSE_BEIGE_T1 70
	#define SPRITE_TILE_HOUSE_BEIGE_T2 71
	#define SPRITE_TILE_HOUSE_BEIGE_T3 72
	#define SPRITE_TILE_HOUSE_BEIGE_L 73
	#define SPRITE_TILE_HOUSE_BEIGE_R 74
	#define SPRITE_TILE_HOUSE_BEIGE_B1 75
	#define SPRITE_TILE_HOUSE_BEIGE_B2 76
	#define SPRITE_TILE_HOUSE_BEIGE_B3 77
	#define SPRITE_TILE_HOUSE_DARK_T1 78
	#define SPRITE_TILE_HOUSE_DARK_T2 79
	#define SPRITE_TILE_HOUSE_DARK_T3 80
	#define SPRITE_TILE_HOUSE_DARK_L 81
	#define SPRITE_TILE_HOUSE_DARK_R 82
	#define SPRITE_TILE_HOUSE_DARK_B1 83
	#define SPRITE_TILE_HOUSE_DARK_B2 84
	#define SPRITE_TILE_HOUSE_DARK_B3 85
	#define SPRITE_TILE_HOUSE_GREY_T1 86
	#define SPRITE_TILE_HOUSE_GREY_T2 87
	#define SPRITE_TILE_HOUSE_GREY_T3 88
	#define SPRITE_TILE_HOUSE_GREY_L 89
	#define SPRITE_TILE_HOUSE_GREY_R 90
	#define SPRITE_TILE_HOUSE_GREY_B1 91
	#define SPRITE_TILE_HOUSE_GREY_B2 92
	#define SPRITE_TILE_HOUSE_GREY_B3 93
	#define SPRITE_TILE_BRICK 94
	#define SPRITE_TILE_ROOF 100
	#define SPRITE_TILE_DOOR 106
	#define SPRITE_TILE_WINDOW 114
	#define SPRITE_TILE_MISC 134

	//Other Sprites
	#define NO_SPRITE 5
	#define SPRITE_CURSOR 7
	#define SPRITE_RAIN 4
	#define SPRITE_ICON 44
	#define SPRITE_SHADE_L 54
	#define SPRITE_SHADE_R 55
	#define SPRITE_E_MOVE 56
	#define SPRITE_E_PRECISE 74
	#define SPRITE_TUTORIAL_KEY 128
	#define SPRITE_KEY_LEFT 132
	#define SPRITE_KEY_UP 133

/*==========================*/
/*== PLATFORM DEFINITIONS ==*/
/*==========================*/
	//Platforms
	#define PLATFORM_GRASS 1
	#define PLATFORM_SAND 2
	#define PLATFORM_MIST 3
	#define PLATFORM_INVIS 4

	//Events (EnsoEvent)
	#define EE_PLAYER_SPAWN 1
	#define EE_SKELETON_SPAWN 2
	#define EE_BUTTERFLY_SPAWN 3
	#define EE_EXPERIENCE_SPAWN 4
	#define EE_SLIME_SPAWN 1007
	#define EE_BAT_SPAWN 1008
	#define EE_MANNID_SPAWN 1009

	//Lvbackgrounds
	#define LVBG_WATER 2
	#define LVBG_FENCE 1
	#define LVBG_HOUSE_BEIGE SPRITE_TILE_HOUSE_BEIGE_T1
	#define LVBG_HOUSE_DARK SPRITE_TILE_HOUSE_DARK_T1
	#define LVBG_HOUSE_GREY SPRITE_TILE_HOUSE_GREY_T1
	#define LVBG_ROOF_BROWN SPRITE_TILE_ROOF
	#define LVBG_ROOF_BLUE (SPRITE_TILE_ROOF + 1)
	#define LVBG_ROOF_YELLOW (SPRITE_TILE_ROOF + 2)


	//Foregrounds
	

/*=========================*/
/*== ABILITY DEFINITIONS ==*/
/*=========================*/
	#define BOOK_NETIKI 0
	#define BOOK_ADMIN 1337
	#define ABILITY_ALPHASLASH 91
	#define ABILITY_MEMEDASH 92
	#define ABILITY_BASIC_SLASH 0
	#define ABILITY_BASIC_SPELL 1

/*=========================*/
/*==== NPC DEFINITIONS ====*/
/*=========================*/
	#define MONSTER_SKELETON 1
	#define MONSTER_BUTTERFLY 2
	#define NPC_WEST_GUARD 0
	#define NPC_SHOP_OWNER 1
	#define NPC_BUTTERFLY 2
	#define NPC_MAID 3
	#define NPC_NETIKI_VILLAGER 4
	#define NPC_CAFE_OWNER 5
	#define NPC_HOMELESS_MAN 6
	#define NPC_SLIME 7
	#define NPC_BAT 8
	#define NPC_MANNID 9

/*=========================*/
/*= INTERFACE DEFINITIONS =*/
/*=========================*/
	#define FADE_OUT 0
	#define FADE_IN 1
	#define INTERFACE_MAIN_MENU 0
	#define INTERFACE_OPTIONS 3
	#define INTERFACE_LOGIN 8
	#define INTERFACE_KEYBOARD 9
	#define INTERFACE_PAUSE 10
	#define INTERFACE_OBJECTIVE 26
	#define INTERFACE_REWARD 27
	#define INTERFACE_MAP 28
	#define INTERFACE_CHAT 29
	#define INTERFACE_SLOTS 30
	#define INTERFACE_PLAYER 31
	#define INTERFACE_ABILITIES 32
	#define INTERFACE_INVENTORY 33
	#define INTERFACE_TUTORIAL 34
	#define INTERFACE_TUTORIAL2 35
	#define INTERFACE_EDITOR 80
	#define INTERFACE_EDITOR_DEBUG 90
	#define INTERFACE_MESSAGE 99

/*=========================*/
/*=== CONVO DEFINITIONS ===*/
/*=========================*/
	#define CONVO_LOCKED_DOOR 113

/*=========================*/
/*====== ENERGY COSTS =====*/
/*=========================*/
	#define COST_WALL_JUMP 1000


/*=========================*/
/*========== MISC =========*/
/*=========================*/
	#define FACING_LEFT 1
	#define FACING_RIGHT 0
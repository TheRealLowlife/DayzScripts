enum DiagMenuIDs
{
	SCRIPTS_MENU,
	
	VEHICLES,
		VEHICLE_DEBUG_OUTPUT,
		VEHICLE_DUMP_CRASH_DATA,

	INVENTORY_MENU,
		INVENTORY_ENTITY_PLACEMENT_CALLBACK_DEBUG,
	
	TRANSFER_VALUES_MENU,
		TRANSFER_VALUES_SHOW,
	
	CRAFTING_MENU,
		CRAFTING_GENERATE,
		CRAFTING_INSTANT,
		CRAFTING_DUMP,
	
	CHEATS_MENU,
		CHEATS_MODIFIERS,
		CHEATS_KILL_PLAYER,
		CHEATS_INVINCIBILITY,
		CHEATS_DISABLE_STAMINA,
		CHEATS_RESET_PLAYER,
		CHEATS_RESET_PLAYER_MAX,
		CHEATS_INVENTORY_ACCESS,
		CHEATS_FIX_ITEMS,
		CHEATS_CREATE_HIT,
		CHEATS_CREATE_HIT_LIGHT,
	
	PLAYER_AGENTS_MENU,
		PLAYER_AGENTS_INJECTS_SHOW,
	
	SOFT_SKILLS_MENU,	
		SOFT_SKILLS_SHOW_DEBUG,
		SOFT_SKILLS_TOGGLE_STATE,
		SOFT_SKILLS_TOGGLE_MODEL,
		SOFT_SKILLS_SPECIALTY_VALUE,
	
	LIFESPAN_MENU,
		LIFESPAN_BLOODY_HANDS,
		LIFESPAN_PLAYTIME_UPDATE,
	
	MISC_MENU,
		MISC_ACTION_ON_CURSOR,
		MISC_DISABLE_PERSONAL_LIGHT,
		MISC_ITEM_DEBUG_ACTIONS,
		MISC_LOG_PLAYER_STATS,
		MISC_ACTION_TARGETS_MENU,
			MISC_ACTION_TARGETS_NEW,
			MISC_ACTION_TARGETS_DEBUG,
			MISC_ACTION_TARGETS_SELPOS_DEBUG,
		MISC_PERMANENT_CROSSHAIR,
		MISC_TELEPORT_BREAKS_SYNC,
		MISC_VEHICLE_GETOUT_BOX,
		MISC_VEHICLE_GETOUT_RAYCAST,
		MISC_TOGGLE_HUD,
		MISC_ENVIRONMENT_MENU,
			MISC_ENVIRONMENT_DEBUG,
			MISC_ENVIRONMENT_LOGGING_DRYWET,
		MISC_FALLDAMAGE_DEBUG,
		MISC_DISPLAY_PLAYER_INFO,
		MISC_UNIVERSAL_TEMPERATURE_SOURCES,
		MISC_DRAW_CHECKERBOARD,
		MISC_BULLET_IMPACT,
		MISC_PRESENCE_NOTIFIER_DBG,
		MISC_GO_UNCONSCIOUS,
		MISC_GO_UNCONSCIOUS_DELAYED,
		MISC_QUICK_RESTRAIN,	
		MISC_HAIR_MENU,
			MISC_HAIR_DISPLAY_DEBUG,
			MISC_HAIR_LEVEL,
			MISC_HAIR_LEVEL_HIDE,
			MISC_HAIR_HIDE_ALL,
		MISC_CAM_SHAKE,
		MISC_QUICK_FISHING,
		MISC_HOLOGRAM,
		MISC_SHOCK_IMPACT,
		MISC_SHOW_PLUG_ARROWS,
		MISC_BREATH_VAPOR_LVL,
		MISC_TARGETABLE_BY_AI,
		MISC_HIT_INDICATION_MENU,
			MISC_HIT_INDICATION_DEBUG,
			MISC_HIT_INDICATION_SPAWN_HIT,
			MISC_HIT_INDICATION_SPAWN_HIT_DIRECTION,
			MISC_HIT_INDICATION_MODE,
			MISC_HIT_INDICATION_TYPE,
			MISC_HIT_INDICATION_DURATION,
			MISC_HIT_INDICATION_BREAKPOINT,
			MISC_HIT_INDICATION_DISTANCE,
			MISC_HIT_INDICATION_ROTATION,
			MISC_HIT_INDICATION_SCATTER,
			MISC_HIT_INDICATION_DISABLE_PPE,
		MISC_FREEZE_ENTITY,
		MISC_CONNECTION_STATS,
		MISC_PLAYER_SYMPTOMS_SHOW,
		MISC_INPUT_DEVICE_DISCONNECT_DBG,
		MISC_DEBUG_MONITOR,
		MISC_FORCE_HINT_INDEX,
	SIMULATE_MENU,
		SIMULATE_MODE,
		SIMULATE_INFINITE_LOOP,
		SIMULATE_NULL_POINTER,
		SIMULATE_DIVISION_BY_ZERO,
		SIMULATE_ERROR_FUNCTION,
		
	MELEE_MENU,
		MELEE_DEBUG,
		MELEE_CONTINUOUS,
		MELEE_SHOW_TARGETS,
		MELEE_DRAW_TARGETS,
		MELEE_DRAW_RANGE,
		MELEE_DRAW_BLOCK_RANGE_AI,
		MELEE_DRAW_BLOCK_RANGE_PVP,
	
	WEAPON_MENU,
		WEAPON_PARTICLES,
		WEAPON_DEBUG,
		WEAPON_AIM_NOISE,
		WEAPON_RECOIL,
		WEAPON_UNLIMITED_AMMO,
		WEAPON_BURST_VERSION,
		WEAPON_CLAYMORE_DEBUG,
		WEAPON_LIFT_DEBUG,
	
	BLEEDING_MENU,
		BLEEDING_SOURCES,
		BLEEDING_DISABLE_BLOOD_LOSS,
		BLEEDING_ACTIVATE_SOURCE,
		BLEEDING_ACTIVATE_ALL_SOURCES,
		BLEEDING_ACTIVATE_SOURCE_LEVEL,
		BLEEDING_RELOAD,
		BLEEDINGINDICATORS_MENU,
			BLEEDINGINDICATORS,
			BLEEDINGINDICATORS_USEVALUEOVERRIDES,
			BLEEDINGINDICATORS_SEQUENCE_DURATION,
			BLEEDINGINDICATORS_DROP_RANDOMROTATION,
			BLEEDINGINDICATORS_DROP_BASEDURATION,
			BLEEDINGINDICATORS_DROP_MINDELAY,
			BLEEDINGINDICATORS_DROP_MAXDELAY,
			BLEEDINGINDICATORS_DROP_PROGRESSTHRESHOLD,
			BLEEDINGINDICATORS_DROP_STARTSIZE,
			BLEEDINGINDICATORS_DROP_ENDSIZE,
			BLEEDINGINDICATORS_DROP_RNDSCALEMIN,
			BLEEDINGINDICATORS_DROP_RNDSCALEMAX,
			BLEEDINGINDICATORS_DROP_SCATTER,
			BLEEDINGINDICATORS_DROP_SLIDEDISTANCE,
			BLEEDINGINDICATORS_DROP_COLOR_MENU,
				BLEEDINGINDICATORS_DROP_COLOR_ENABLEDESATURATION,
				BLEEDINGINDICATORS_DROP_COLOR_DESATURATIONEND,
				BLEEDINGINDICATORS_DROP_COLOR_R,
				BLEEDINGINDICATORS_DROP_COLOR_G,
				BLEEDINGINDICATORS_DROP_COLOR_B,
				BLEEDINGINDICATORS_DROP_COLOR_A_START,
				BLEEDINGINDICATORS_DROP_COLOR_A_END,	
	
	LOGS_MENU,
		LOGS_ACTIONS,
		LOGS_WEAPONS,
		LOGS_SYNC,
		LOGS_BASEBUILDING,
		LOGS_SYMPTOMS,
		LOGS_QUICKBAR,
		LOGS_INVENTORY_MENU,	
			LOGS_INVENTORY_MOVE,
			LOGS_INVENTORY_RESERVATION,
			LOGS_INVENTORY_HFSM,
		LOGS_BLEEDING_CHANCES,
	
	TRIGGER_MENU,
		TRIGGER_DEBUG,
		TRIGGER_PLAYER_DEBUG,	
	
	BASEBUILDING_MENU,
		BASEBUILDING_WOOD,
		BASEBUILDING_GATE,	
	
	UNDERGROUND_MENU,
		UNDERGROUND_SHOW_BREADCRUMB,
		UNDERGROUND_DISABLE_DARKENING,	
	
	FINISHERS_MENU,
		FINISHERS_FINISHER_FORCED,	
	
	SOUNDS_MENU,
		SOUNDS_ITEM_IMPACT_SOUNDS,
		SOUNDS_DYNAMIC_MUSIC_PLAYER_STATS,
	
	CAMERATOOLS_MENU,
		CAMERATOOLS_ENABLE_REMOTE_CAMERA,
		CAMERATOOLS_ENABLE_REMOTE_CAMERA_BROADCAST,	
	
	FEATURE_TIME_ACCEL_MENU,
		FEATURE_TIME_ACCEL,
		FEATURE_TIME_ACCEL_VALUE1,
		FEATURE_TIME_ACCEL_VALUE2,
		FEATURE_TIME_ACCEL_UG_ENTRANCES,
		FEATURE_TIME_ACCEL_UG_RESERVOIR,
		FEATURE_TIME_ACCEL_ENERGY_CONSUME,
		FEATURE_TIME_ACCEL_ENERGY_RECHARGE,
		FEATURE_TIME_ACCEL_FOOD_DECAY,
		FEATURE_TIME_ACCEL_DYNAMIC_MUSIC_PLAYER
	
	// This stays last!
	MODDED_MENU,
};

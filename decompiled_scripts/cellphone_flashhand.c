#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	struct<2> Local_75 = { 0, 0 } ;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	struct<3> Local_81 = { 0, 0, 0 } ;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	struct<2> Local_92 = { 0, 0 } ;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	var uLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	struct<3> Local_117 = { 0, 0, 0 } ;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	struct<13> Var16;
	int iVar29;
	float fVar30;
	float fVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	int iVar35;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_19 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_64 = 0.73f;
	fLocal_65 = 0.55f;
	fLocal_66 = 0.73f;
	fLocal_67 = 0.45f;
	fLocal_68 = 0f;
	fLocal_69 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_21441 = 145;
	MISC::CLEAR_BIT(&Global_9076, 8);
	MISC::CLEAR_BIT(&Global_9075, 14);
	MISC::CLEAR_BIT(&Global_4546610, 3);
	MISC::CLEAR_BIT(&Global_9076, 10);
	MISC::CLEAR_BIT(&Global_9075, 17);
	MISC::CLEAR_BIT(&Global_9075, 9);
	MISC::CLEAR_BIT(&Global_9075, 26);
	MISC::CLEAR_BIT(&Global_9075, 23);
	MISC::CLEAR_BIT(&Global_9076, 24);
	MISC::CLEAR_BIT(&Global_9076, 25);
	MISC::CLEAR_BIT(&Global_9076, 27);
	MISC::CLEAR_BIT(&Global_9076, 26);
	MISC::CLEAR_BIT(&Global_9075, 30);
	Global_2751110 = 0;
	iLocal_120 = 0;
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
	MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
	Global_21188 = 0;
	iLocal_72 = 0;
	Global_21166 = 0;
	Global_21206 = 0;
	Global_21207 = 0;
	func_160();
	Global_21153 = { Global_21185 };
	Global_21226 = 4;
	Global_21227 = 0;
	Global_9697 = 1;
	Global_21202 = Global_21226;
	if (Global_21204 == 0)
	{
		Global_21205 = 0;
		if (Global_79744)
		{
			if (func_159())
			{
				Global_21203 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_badger");
			}
			else
			{
				Global_21203 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_ifruit");
			}
			iLocal_86 = 1;
			if (iLocal_86 == 1)
			{
			}
		}
		else if (Global_21165)
		{
			Global_21210 = 1;
			Global_21203 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_prologue");
		}
		else
		{
			Global_21203 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(Global_114344.f_14055[Global_21222 /*20*/]));
		}
		SYSTEM::SETTIMERA(0);
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21203) && Global_21205 == 0)
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				Global_21205 = 1;
			}
			if (MISC::IS_PC_VERSION())
			{
				if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
				{
					if (SYSTEM::TIMERA() > 2000)
					{
						Global_21205 = 1;
					}
				}
			}
			if (Global_21221 == 1)
			{
				func_158();
			}
		}
		if (Global_21205 == 1)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21203))
			{
				func_157(Global_21203, "SHUTDOWN_MOVIE");
			}
			SYSTEM::WAIT(0);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_21203);
			Global_21163 = 0;
			Global_21204 = 0;
			Global_21442 = 0;
			if (Global_114344.f_14055.f_84 == 1)
			{
				Global_114344.f_14055.f_84 = 0;
				HUD::CLEAR_FLOATING_HELP(0, true);
			}
			Global_21166 = 1;
			Global_21222.f_1 = 3;
			func_156();
			Global_21210 = 0;
			MOBILE::DESTROY_MOBILE_PHONE();
			MISC::CLEAR_BIT(&Global_9075, 9);
			MISC::CLEAR_BIT(&Global_9075, 27);
			MISC::CLEAR_BIT(&Global_9075, 30);
			MISC::CLEAR_BIT(&Global_9076, 5);
			MISC::CLEAR_BIT(&Global_9076, 21);
			MISC::CLEAR_BIT(&Global_9077, 2);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
			Global_21444 = 0;
			Global_23645 = 0;
			Global_23644 = 0;
			Global_22598 = 0;
			func_154();
			func_152();
			Global_4546889 = 0;
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		Global_21146 = 0.1f;
		Global_21147 = 0.38f;
		Global_21148 = 0.195f;
		Global_21149 = 0.05f;
		if ((MISC::IS_XBOX360_VERSION() || func_151()) || MISC::IS_PC_VERSION())
		{
			HUD::GET_HUD_COLOUR(18, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
			func_150(Global_21203, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
			HUD::GET_HUD_COLOUR(9, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
			func_150(Global_21203, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
			HUD::GET_HUD_COLOUR(6, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
			func_150(Global_21203, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
		}
		else
		{
			if (!MISC::IS_JAPANESE_VERSION())
			{
				HUD::GET_HUD_COLOUR(9, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_150(Global_21203, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(126, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_150(Global_21203, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(6, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_150(Global_21203, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
			}
			if (MISC::IS_JAPANESE_VERSION())
			{
				HUD::GET_HUD_COLOUR(6, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_150(Global_21203, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(126, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_150(Global_21203, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(9, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_150(Global_21203, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
			}
		}
		if (Global_21205 == 0)
		{
		}
		func_149();
		if (Global_79744)
		{
			StringCopy(&Global_21211, "Phone_SoundSet_Michael", 24);
		}
		Global_21204 = 1;
	}
	Global_9078 = 99;
	func_148();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iLocal_98 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	}
	if (HUD::IS_RADAR_HIDDEN())
	{
		Global_23599 = 1;
	}
	else
	{
		Global_23599 = 0;
	}
	func_150(Global_21203, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	Global_21164 = 1;
	if (Global_79744)
	{
		Global_21446 = 0;
		if (func_159())
		{
			if (Global_1836591 == 1)
			{
				Global_4546886 = 4;
			}
			else
			{
				Global_4546886 = 2;
			}
		}
		else
		{
			Global_4546886 = func_145(2030, -1);
		}
		if (Global_4546886 < 1 || Global_4546886 > 7)
		{
			Global_4546886 = 1;
		}
		func_150(Global_21203, "SET_THEME", SYSTEM::TO_FLOAT(Global_4546886), -1082130432, -1082130432, -1082130432, -1082130432);
		func_144();
		if (func_159())
		{
			if (Global_1836591 == 1)
			{
				Global_4546887 = 16;
			}
			else
			{
				Global_4546887 = 9;
			}
		}
		else
		{
			Global_4546887 = func_145(2029, -1);
		}
		if (Global_4546887 == 0)
		{
			Var16 = { func_143(PLAYER::PLAYER_ID()) };
			iVar29 = 0;
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0)
			{
			}
			if (Global_4546890 == 1)
			{
			}
			if ((NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var16) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)) && Global_4546890 == 0)
			{
				if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0))
				{
				}
				else
				{
					iVar29 = 1;
				}
				if (iVar29 == 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_BACKGROUND_CREW_IMAGE");
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar0);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					func_150(Global_21203, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				func_150(Global_21203, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			func_150(Global_21203, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4546887), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		if (Global_21165)
		{
			Global_21446 = 0;
		}
		else if (Global_114344.f_14055.f_88 == 1 || Global_114344.f_14055.f_89 == 1)
		{
			Global_21446 = 0;
		}
		else
		{
			Global_21446 = 0;
		}
		func_150(Global_21203, "SET_THEME", SYSTEM::TO_FLOAT(Global_114344.f_14055[Global_21222 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
		if (Global_9896 == 0)
		{
			func_150(Global_21203, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_114344.f_14055[Global_21222 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_SCALE(575f);
		}
		func_144();
	}
	iLocal_87 = func_142();
	if (Global_21165 == 0)
	{
		func_130();
	}
	Global_21200 = 0;
	Global_21445 = 0;
	MISC::CLEAR_BIT(&Global_9075, 9);
	Global_2696533 = 0;
	if (func_124(0) && NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		Global_2696533 = 1;
	}
	func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_122();
	func_121();
	func_120(1);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Pull_Out", &Global_21211, true);
	SYSTEM::SETTIMERB(0);
	while (Global_21222.f_1 < 6 && Global_21205 == 0)
	{
		SYSTEM::WAIT(0);
		if (SYSTEM::TIMERB() > 10000)
		{
			Global_21205 = 1;
		}
		if (Global_21222.f_1 < 4)
		{
			Global_21205 = 1;
		}
	}
	if (Global_21222.f_1 == 5 || Global_21222.f_1 == 6)
	{
		if (func_119(14))
		{
			func_150(Global_21203, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_150(Global_21203, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21226), -1082130432, -1082130432, -1082130432);
		}
		if (Global_9897[Global_21222 /*2811*/][0 /*281*/].f_259 == 2)
		{
			func_150(Global_21203, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_150(Global_21203, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (Global_21210)
		{
			func_118(Global_21203, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		}
		else
		{
			func_118(Global_21203, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_21210)
		{
			func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_21446 == 0)
		{
			func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9075, 17);
		}
		else if (Global_79744)
		{
			func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9075, 17);
		}
		else
		{
			if (Global_21445 == 1)
			{
				if (Global_21210)
				{
					func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else if (Global_21210)
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			MISC::SET_BIT(&Global_9075, 17);
		}
	}
	Global_21208 = 1;
	func_117();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_104 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		iLocal_99 = MISC::GET_GAME_TIMER();
	}
	if (Global_21442 == 1)
	{
		if (Global_9897[Global_21222 /*2811*/][0 /*281*/].f_259 == 2)
		{
			if (Global_114344.f_14055.f_84 == 0)
			{
				Global_114344.f_14055.f_84 = 1;
				if (Global_21167 == 0)
				{
					fVar30 = 0.75f;
					fVar31 = 0.8f;
				}
				else
				{
					fVar30 = 0.65f;
					fVar31 = 0.77f;
				}
				if (fVar30 == fVar31)
				{
				}
				func_116("CELL_7052", 10000);
			}
		}
	}
	if (Global_79744 == 0)
	{
		iLocal_16 = MISC::GET_GAME_TIMER() + 375;
	}
	if (func_115())
	{
		iLocal_78 = 1;
	}
	else
	{
		iLocal_78 = 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_79 = 1;
			if (func_115())
			{
				func_114();
			}
		}
		else
		{
			iLocal_79 = 0;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (Global_79744 == 0)
		{
			iLocal_101 = MISC::GET_GAME_TIMER();
			iLocal_103 = 0;
		}
	}
	MISC::CLEAR_BIT(&Global_9077, 9);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BitTest(Global_4546610, 24))
		{
			if (!Global_21445)
			{
				if (Global_21222.f_1 >= 6)
				{
					MISC::CLEAR_BIT(&Global_4546610, 24);
					func_122();
					func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_120(1);
					if (Global_21222.f_1 == 6)
					{
						if (BitTest(Global_9077, 9))
						{
							MISC::CLEAR_BIT(&Global_9077, 9);
							Global_21202 = 4;
							Global_21226 = Global_21202;
						}
						func_150(Global_21203, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
					}
				}
			}
		}
		if (Global_79744)
		{
			if (Global_21222.f_1 == 6)
			{
				if (func_113())
				{
					func_112();
				}
			}
			else if (Global_21222.f_1 == 7)
			{
				func_107(10, 23, 5, 0, 26362);
			}
		}
		if (func_106())
		{
			PAD::DISABLE_CONTROL_ACTION(0, 114, true);
		}
		if (Global_79744 == 0)
		{
			if (iLocal_74)
			{
				if (Global_21222.f_1 == 6 || Global_21222.f_1 == 7)
				{
					iLocal_74 = 0;
				}
			}
			if (Global_21222.f_1 > 4)
			{
				if ((BitTest(Global_9075, 14) && Global_4546889 == 0) && Global_21162 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (func_105())
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_75);
							if (Global_21168[Global_21167 /*3*/].f_1 != Local_75.f_1)
							{
								func_103();
							}
						}
						else
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_75);
							if (Global_21175[Global_21167 /*3*/].f_1 != Local_75.f_1)
							{
								if (!func_106())
								{
								}
								if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1)
								{
									func_101();
								}
							}
						}
						if (iLocal_79 == 0)
						{
							if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
							{
								iLocal_79 = 1;
								func_101();
								func_114();
							}
						}
						else if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_79 = 0;
							func_103();
							if (Global_21222.f_1 == 10 || Global_21222.f_1 == 9)
							{
								if (Global_22585 != 2)
								{
									func_100();
								}
							}
						}
						if (iLocal_78 == 0)
						{
							if (func_115())
							{
								iLocal_78 = 1;
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
								{
									func_114();
								}
								func_103();
							}
						}
						else
						{
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								if (Global_21222.f_1 == 10 || Global_21222.f_1 == 9)
								{
									PAD::DISABLE_CONTROL_ACTION(0, 26, true);
								}
							}
							if (func_115() == 0)
							{
								iLocal_78 = 0;
								func_101();
							}
						}
					}
				}
			}
		}
		if (Global_2696533 == 1)
		{
			if (!func_124(0) || !NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) == 0)
				{
					if (Global_21222.f_1 > 3)
					{
						Global_21207 = 1;
						func_99();
						func_96(0);
						Global_2696533 = 0;
					}
				}
			}
		}
		if (Global_21447 == 0)
		{
			if ((Global_44375 != 15 || Global_9080 == 1) || func_95(0))
			{
				if (!Global_21445)
				{
					if (Global_21222.f_1 == 6)
					{
						Global_9081 = 42;
						func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_122();
						func_121();
						func_120(1);
						func_150(Global_21203, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_21447 = 1;
			}
		}
		else if ((Global_44375 == 15 && func_95(0) == 0) && Global_9080 == 0)
		{
			if (!Global_21445)
			{
				if (Global_21222.f_1 == 6)
				{
					Global_9081 = 255;
					func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_122();
					func_121();
					func_120(1);
					func_150(Global_21203, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_21447 = 0;
		}
		if (Global_21448 == 0)
		{
			if (BitTest(Global_9076, 3))
			{
				if (!Global_21445 && !BitTest(Global_9077, 9))
				{
					if (Global_21222.f_1 == 6)
					{
						func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_122();
						func_121();
						func_120(1);
						func_150(Global_21203, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_21448 = 1;
			}
		}
		else if (!BitTest(Global_9076, 3))
		{
			if (!Global_21445 && !BitTest(Global_9077, 9))
			{
				if (Global_21222.f_1 == 6)
				{
					func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_122();
					func_121();
					func_120(1);
					func_150(Global_21203, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_21448 = 0;
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_21150.f_1 != Global_21168[Global_21167 /*3*/].f_1 || func_115())
			{
				if (Global_21222.f_1 > 3)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) == 0)
					{
						if (Global_79744)
						{
							if (Global_21222.f_1 == 9)
							{
								if (Global_22638 == 1 || BitTest(Global_9076, 23))
								{
									PAD::SET_INPUT_EXCLUSIVE(0, Global_21191);
								}
							}
							else
							{
								PAD::SET_INPUT_EXCLUSIVE(0, Global_21191);
							}
						}
						else
						{
							PAD::SET_INPUT_EXCLUSIVE(0, Global_21191);
						}
					}
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecurohack")) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(0, Global_21192);
						if (BitTest(Global_9075, 17))
						{
							PAD::SET_INPUT_EXCLUSIVE(0, Global_21193);
						}
					}
					if (!func_94() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecurohack")) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(0, Global_21194);
					}
				}
			}
			if (Global_21150.f_1 == Global_21168[Global_21167 /*3*/].f_1)
			{
			}
		}
		if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, true);
			PAD::DISABLE_CONTROL_ACTION(0, 141, true);
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (!Global_76838)
			{
				if (!func_106())
				{
					PAD::SET_INPUT_EXCLUSIVE(0, 180);
					PAD::SET_INPUT_EXCLUSIVE(0, 181);
					PAD::ENABLE_CONTROL_ACTION(0, 180, true);
					PAD::ENABLE_CONTROL_ACTION(0, 181, true);
				}
				PAD::SET_INPUT_EXCLUSIVE(0, Global_21196);
				if (!func_94())
				{
					PAD::SET_INPUT_EXCLUSIVE(0, Global_21197);
				}
				if (Global_21222.f_1 > 4)
				{
					PAD::SET_INPUT_EXCLUSIVE(0, Global_21199);
				}
			}
		}
		if (func_93(2, Global_21190, 0))
		{
			iLocal_96 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (iLocal_73 == 1)
		{
			if (!PAD::IS_CONTROL_PRESSED(2, Global_21191))
			{
				Global_9079 = 1;
				iLocal_73 = 0;
			}
			if (!Global_21222.f_1 > 3)
			{
				iLocal_73 = 0;
			}
		}
		if (iLocal_96)
		{
			if (PAD::IS_CONTROL_PRESSED(2, Global_21190))
			{
				if (SYSTEM::TIMERA() > 5000)
				{
					Global_21222.f_1 = 3;
					func_91();
				}
			}
			else
			{
				iLocal_96 = 0;
			}
		}
		Global_9700 = MISC::GET_GAME_TIMER();
		if (Global_21209)
		{
			func_117();
			Global_21208 = 1;
			Global_21209 = 0;
		}
		if (Global_21444 == 0)
		{
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			func_84();
			func_83();
			HUD::SET_TEXT_RENDER_ID(iLocal_84);
			if (Global_21208 == 1)
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
				if (Global_21165)
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_21203, Global_21142, Global_21143, Global_21144, Global_21145, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_21203, Global_21142, Global_21143, Global_21144, Global_21145, 255, 255, 255, 255, 0);
				}
				func_148();
			}
			if (Global_21162 == 1)
			{
				if (Global_21222.f_1 > 3)
				{
					func_82();
				}
			}
			else if (Global_21222.f_1 > 3)
			{
				if (Global_4546889 == 1)
				{
					func_81();
				}
				if (BitTest(Global_9076, 25))
				{
					if (Global_79744 == 1)
					{
						func_80();
					}
				}
				else if (!BitTest(Global_9076, 24))
				{
					if (BitTest(Global_9076, 26))
					{
						if (func_93(2, Global_21189, 0))
						{
							MISC::SET_BIT(&Global_9076, 25);
							MISC::CLEAR_BIT(&Global_9076, 26);
							MISC::CLEAR_BIT(&Global_9077, 2);
						}
					}
				}
				else if (Global_79744 == 1)
				{
					func_79();
				}
			}
		}
		if (iLocal_72)
		{
			if (Global_21222.f_1 == 6)
			{
				func_51();
			}
		}
		else if (!BitTest(Global_9075, 23) && !Global_78513)
		{
			if (Global_21222.f_1 == 5 || Global_21222.f_1 == 6)
			{
				if (Global_21444 == 0)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) < 1 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1)
					{
						if (Global_21165 == 0)
						{
							if (BitTest(Global_9075, 14))
							{
								if (!Global_79744)
								{
									if (iLocal_73 == 0)
									{
										if (!func_119(14))
										{
											func_50();
										}
										else if (Global_2696533)
										{
											func_49();
										}
									}
								}
								else if (BitTest(Global_9077, 9))
								{
									func_47();
								}
								else
								{
									func_24();
								}
							}
						}
						if (BitTest(Global_9075, 9))
						{
							func_22(0, 0, 1, 1);
						}
						else if (Global_23644 == 0)
						{
							if (!BitTest(Global_4546610, 3))
							{
								if (Global_79744)
								{
									func_21();
								}
								func_20();
								func_18();
							}
						}
						else
						{
							if (Global_79744)
							{
								func_21();
							}
							if (!BitTest(Global_4546610, 3))
							{
								if (Global_23644 == 1)
								{
									if (BitTest(Global_4546610, 1))
									{
										if (BitTest(Global_9075, 14))
										{
											if (Global_79744)
											{
												func_22(7, 0, 1, 0);
											}
											else
											{
												Global_23645 = 0;
											}
											Global_23644 = 0;
											MISC::CLEAR_BIT(&Global_4546610, 1);
										}
									}
									else if (BitTest(Global_9075, 14))
									{
										func_22(7, 0, 1, 0);
										Global_23644 = 0;
									}
								}
								else
								{
									if (Global_23644 == 3)
									{
										func_22(1, 0, 1, 0);
										Global_23644 = 0;
									}
									if (Global_23644 == 2)
									{
										func_22(14, 0, 1, 0);
										Global_23644 = 0;
									}
									if (Global_23644 == 4)
									{
										func_22(24, 0, 1, 0);
										Global_23644 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (SCRIPT::HAS_SCRIPT_LOADED(&(Global_9082[Global_21225 /*15*/].f_5)))
		{
			if (Global_21225 == 0)
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9082[Global_21225 /*15*/].f_9) == 0)
				{
					Global_21220 = SYSTEM::START_NEW_SCRIPT(&(Global_9082[Global_21225 /*15*/].f_5), 4000);
				}
			}
			else
			{
				iVar32 = 0;
				if (Global_21225 == 24)
				{
					if (BitTest(Global_4546610, 4) == 0 && Global_1836183 == 0)
					{
					}
				}
				if (Global_21225 == 2 || iVar32 == 1)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9082[Global_21225 /*15*/].f_9) == 0)
					{
						Global_21220 = SYSTEM::START_NEW_SCRIPT(&(Global_9082[Global_21225 /*15*/].f_5), 4592);
					}
				}
				else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9082[Global_21225 /*15*/].f_9) == 0)
				{
					Global_21220 = SYSTEM::START_NEW_SCRIPT(&(Global_9082[Global_21225 /*15*/].f_5), 2600);
				}
			}
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_9082[Global_21225 /*15*/].f_5));
			Global_9078 = 99;
			MISC::CLEAR_BIT(&Global_9075, 23);
		}
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				PAD::DISABLE_CONTROL_ACTION(2, 200, true);
			}
		}
		if (Global_21222.f_1 == 1)
		{
			func_9();
		}
		if (Global_21222.f_1 == 0)
		{
			func_9();
		}
		if (Global_21222.f_1 == 3)
		{
			func_9();
		}
		else
		{
			if (Global_22598)
			{
				if (Global_21222.f_1 == 9)
				{
					if (Global_79744)
					{
						if (!BitTest(Global_9076, 31))
						{
							if (!BitTest(Global_9076, 27))
							{
								if (func_8())
								{
									if (!BitTest(Global_9075, 9))
									{
										if (func_93(2, Global_21194, 0))
										{
											if (!MISC::IS_PC_VERSION())
											{
												if (!Global_21221 == 1)
												{
													if (Global_21222.f_1 > 6)
													{
														MISC::SET_BIT(&Global_9076, 24);
														MISC::SET_BIT(&Global_9076, 27);
														MISC::CLEAR_BIT(&Global_9076, 26);
														MISC::CLEAR_BIT(&Global_9076, 25);
														MISC::SET_BIT(&(Global_2740054.f_1864), 17);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (Global_21205 == 1)
			{
				Global_21207 = 1;
				func_96(0);
			}
			if (Global_21206 == 1)
			{
				Global_21207 = 1;
				func_96(0);
			}
			if (Global_79744)
			{
				if (!BitTest(Global_9077, 0))
				{
					if (HUD::IS_PAUSE_MENU_ACTIVE() && !func_7())
					{
						if (Global_2747205.f_1 == 1)
						{
						}
						else
						{
							func_99();
							func_96(0);
						}
					}
				}
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
					{
						MISC::SET_BIT(&Global_9076, 4);
					}
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) == 1f)
					{
						if (BitTest(Global_4718592.f_38, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1922251))
						{
							func_5(1, 1);
							MISC::SET_BIT(&Global_9075, 14);
						}
						else
						{
							Global_21207 = 1;
							func_99();
							func_96(0);
						}
					}
				}
				if (func_119(14))
				{
					if ((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114344.f_28055[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114344.f_28055[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114344.f_28055[2 /*29*/])
					{
						iLocal_121 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_121 = 1;
					}
				}
				if ((((((((((((((PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false)) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael1")) > 0) || Global_80006 == 1) || func_3(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false)) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || GRAPHICS::GET_USINGNIGHTVISION()) || iLocal_121)
				{
					if (!Global_21165)
					{
						MISC::SET_BIT(&Global_9076, 4);
					}
				}
				if (MISC::IS_PC_VERSION())
				{
					if (Global_79744 == 0)
					{
						if (iLocal_103 == 0)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									iLocal_101 = MISC::GET_GAME_TIMER();
									iLocal_103 = 1;
								}
							}
						}
						else
						{
							iLocal_102 = MISC::GET_GAME_TIMER();
							iLocal_105 = (iLocal_102 - iLocal_101);
							if (iLocal_105 < 4000)
							{
								MISC::SET_BIT(&Global_9076, 4);
							}
							else
							{
								iLocal_103 = 0;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					if (Global_79744)
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_111, true);
						if (iLocal_111 != joaat("weapon_unarmed") && Global_21222.f_1 < 7)
						{
							MISC::SET_BIT(&Global_9076, 4);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_112 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("submersible") || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("submersible2"))
					{
						iLocal_115 = 1;
					}
					else
					{
						iLocal_115 = 0;
					}
					if (((((ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("cutter")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("chernobog")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("khanjali")) || iLocal_115) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_112, false) == 0)
					{
						MISC::SET_BIT(&Global_9076, 4);
					}
					if (((((((((((((((ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("valkyrie") || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("insurgent")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("technical")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("trash")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("trash2")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("limo2")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("insurgent3")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("halftrack")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("dune3")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("trailersmall2")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("technical2")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("boxville5")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("mogul")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("bombushka")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("tula")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("chernobog"))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_112))
						{
							iVar33 = func_2(PLAYER::PLAYER_PED_ID(), iLocal_112);
							if (iVar33 != -2)
							{
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("insurgent") || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("limo2"))
								{
									if (iVar33 == 3)
									{
										MISC::SET_BIT(&Global_9076, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("trash") || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("trash2"))
								{
									if (iVar33 == 2 || iVar33 == 1)
									{
										MISC::SET_BIT(&Global_9076, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("technical2"))
								{
									if (iVar33 == 1)
									{
										MISC::SET_BIT(&Global_9076, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("boxville5"))
								{
									if (iVar33 == 3)
									{
										MISC::SET_BIT(&Global_9076, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("insurgent3"))
								{
									if (iVar33 == 3)
									{
										MISC::SET_BIT(&Global_9076, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("halftrack"))
								{
									if (iVar33 == 1)
									{
										MISC::SET_BIT(&Global_9076, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("dune3"))
								{
									if (iVar33 == 0)
									{
										MISC::SET_BIT(&Global_9076, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("trailersmall2"))
								{
									if (iVar33 == -1)
									{
										MISC::SET_BIT(&Global_9076, 4);
									}
								}
								if (VEHICLE::IS_TURRET_SEAT(iLocal_112, iVar33))
								{
									MISC::SET_BIT(&Global_9076, 4);
								}
							}
						}
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 69))
					{
						if (Global_79744 == 0)
						{
							if (Global_21222.f_1 == 6 || Global_21222.f_1 == 7)
							{
								bVar34 = true;
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("stromberg") && ENTITY::IS_ENTITY_IN_WATER(iLocal_112))
								{
									bVar34 = false;
								}
								if (((VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_112)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_112))) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("submersible2"))
								{
									bVar34 = false;
								}
								if (bVar34)
								{
									func_96(0);
								}
							}
						}
					}
				}
				else
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 24))
					{
						if (Global_79744 == 0)
						{
							if (Global_21222.f_1 == 6 || Global_21222.f_1 == 7)
							{
								func_96(0);
							}
						}
					}
					iLocal_115 = 0;
				}
				if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (BitTest(Global_4718592.f_38, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1922251))
					{
						func_5(1, 1);
					}
					else
					{
						Global_21207 = 1;
						func_99();
						func_96(0);
					}
				}
				if (Global_79744 == 0)
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_98)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_21207 = 1;
							func_99();
							func_96(0);
						}
					}
					if (Global_21222.f_1 == 9 || Global_21222.f_1 == 10)
					{
						if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
						{
							Global_21207 = 1;
							func_99();
							func_96(0);
						}
					}
				}
				else if (func_106())
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_98)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_21207 = 1;
							func_99();
							func_96(0);
						}
					}
				}
				if (CAM::IS_AIM_CAM_ACTIVE())
				{
					if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_106())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_111, true);
							if ((iLocal_111 == joaat("weapon_sniperrifle") || iLocal_111 == joaat("weapon_heavysniper")) || iLocal_111 == joaat("weapon_remotesniper"))
							{
								bLocal_110 = true;
							}
							else
							{
								bLocal_110 = false;
							}
							if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
							{
								if (bLocal_110)
								{
									Global_21207 = 1;
									func_99();
									func_96(0);
								}
							}
						}
					}
				}
				if (PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()))
				{
					Global_21207 = 1;
					func_99();
					func_96(0);
				}
				if (PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0))
				{
					Global_21207 = 1;
					func_99();
					func_96(0);
				}
				if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
				{
					Global_21207 = 1;
					func_99();
					func_96(0);
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_79744 == 0)
					{
						Global_21207 = 1;
						func_99();
						func_96(0);
					}
				}
			}
			else
			{
				iVar35 = 0;
				if (((Global_79744 && Global_2747205.f_1) && Global_2747205.f_37) && Global_21222.f_1 == 9)
				{
					iVar35 = 1;
					if (!BitTest(Global_9076, 24))
					{
						if (BitTest(Global_9076, 26))
						{
							MISC::SET_BIT(&Global_9076, 25);
							MISC::CLEAR_BIT(&Global_9076, 26);
							MISC::CLEAR_BIT(&Global_9077, 2);
						}
					}
				}
				if (iVar35 == 0)
				{
					Global_21207 = 1;
					func_99();
					func_96(0);
				}
			}
		}
		if (Global_21200 == 1)
		{
			func_1();
		}
		if (Global_21221 == 2)
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
			{
				PAD::SET_INPUT_EXCLUSIVE(0, Global_21191);
				PAD::SET_INPUT_EXCLUSIVE(0, Global_21192);
				PAD::DISABLE_CONTROL_ACTION(0, 24, true);
				PAD::DISABLE_CONTROL_ACTION(0, 257, true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
		}
	}
}

void func_1()
{
	if (!PAD::IS_CONTROL_PRESSED(2, Global_21191) && !PAD::IS_CONTROL_PRESSED(2, Global_21190))
	{
		Global_21200 = 0;
	}
}

int func_2(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, false) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, false) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, false) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, false) == iParam0)
			{
				return 2;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 3, false) == iParam0)
			{
				return 3;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 4, false) == iParam0)
			{
				return 4;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 5, false) == iParam0)
			{
				return 5;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 6, false) == iParam0)
			{
				return 6;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 7, false) == iParam0)
			{
				return 3;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 8, false) == iParam0)
			{
				return 4;
			}
		}
	}
	return -2;
}

int func_3(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_4(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_4(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_45376[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_45376[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_5(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_6(0))
		{
			Global_21444 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21159);
			}
			Global_21150 = { Global_21168[Global_21167 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21150);
		}
	}
	else if (Global_21444 == 1)
	{
		Global_21444 = 0;
		Global_21150 = { Global_21175[Global_21167 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21159);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21150);
		}
	}
}

int func_6(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_21222.f_1 > 3)
		{
			if (BitTest(Global_9075, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_21222.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_7()
{
	return BitTest(Global_1959772, 5);
}

bool func_8()
{
	return Global_2747205.f_1;
}

void func_9()
{
	float fVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_23644 = 0;
	Global_23645 = 0;
	PAD::SET_INPUT_EXCLUSIVE(0, Global_21192);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	if (Global_21188 == 0)
	{
		MOBILE::SET_MOBILE_PHONE_SCALE(500f);
		if (func_105())
		{
			iLocal_16 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_16 = 0;
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(true);
		Global_21188 = 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}
	if (Global_114344.f_14055.f_84 == 1)
	{
		Global_114344.f_14055.f_84 = 0;
		HUD::CLEAR_FLOATING_HELP(0, true);
	}
	fVar0 = 350f;
	if (BitTest(Global_9075, 30) || BitTest(Global_9077, 2))
	{
		fVar0 = 25f;
	}
	Var1 = { Global_21182 };
	if (Global_21207 == 1)
	{
		Var1 = { -45f, 45f, 25f };
	}
	if ((BitTest(Global_9076, 26) || BitTest(Global_9075, 30)) || BitTest(Global_9077, 2))
	{
		Local_117 = { Global_21168[Global_21167 /*3*/] };
	}
	else
	{
		Local_117 = { Global_21175[Global_21167 /*3*/] };
	}
	fVar4 = func_15(Local_117, Global_21168[Global_21167 /*3*/], Global_21182, Var1, fVar0, 0);
	if (!iLocal_85 && fVar4 >= 1f)
	{
		MOBILE::DESTROY_MOBILE_PHONE();
		iLocal_85 = 1;
	}
	if (iLocal_85 && (MISC::GET_GAME_TIMER() - iLocal_16) > 500)
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_21192);
		if (Global_21222.f_1 == 3)
		{
		}
		if (Global_21222.f_1 == 1)
		{
		}
		if (Global_21222.f_1 == 0)
		{
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
		Global_21163 = 0;
		Global_21204 = 0;
		Global_21442 = 0;
		if (Global_114344.f_14055.f_84 == 1)
		{
			Global_114344.f_14055.f_84 = 0;
			HUD::CLEAR_FLOATING_HELP(0, true);
		}
		Global_21166 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
		if (Global_23599 == 0)
		{
		}
		Global_21444 = 0;
		if (func_12(0))
		{
			func_11();
		}
		MISC::CLEAR_BIT(&Global_9076, 8);
		MISC::CLEAR_BIT(&Global_9075, 14);
		MISC::CLEAR_BIT(&Global_9075, 9);
		MISC::CLEAR_BIT(&Global_9075, 27);
		MISC::CLEAR_BIT(&Global_9075, 30);
		MISC::CLEAR_BIT(&Global_9076, 5);
		MISC::CLEAR_BIT(&Global_9076, 19);
		MISC::CLEAR_BIT(&Global_9076, 21);
		MISC::CLEAR_BIT(&Global_9076, 24);
		MISC::CLEAR_BIT(&Global_9076, 25);
		MISC::CLEAR_BIT(&Global_9076, 27);
		MISC::CLEAR_BIT(&Global_9076, 26);
		MISC::CLEAR_BIT(&Global_9077, 2);
		Global_2751110 = 0;
		iLocal_120 = 0;
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_10();
		}
		SYSTEM::SETTIMERA(0);
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9082[2 /*15*/].f_9) == 0 && !Global_78513)
		{
			while (SCRIPT::IS_THREAD_ACTIVE(Global_21220))
			{
				SYSTEM::WAIT(0);
				PAD::SET_INPUT_EXCLUSIVE(0, Global_21192);
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21203))
				{
					HUD::SET_TEXT_RENDER_ID(iLocal_84);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_21203, Global_21142, Global_21143, Global_21144, Global_21145, 255, 255, 255, 255, 0);
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					SCRIPT::TERMINATE_THREAD(Global_21220);
				}
			}
		}
		Global_21210 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21203))
		{
			func_157(Global_21203, "SHUTDOWN_MOVIE");
		}
		SYSTEM::WAIT(0);
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_21203);
		Global_21188 = 0;
		PAD::SET_INPUT_EXCLUSIVE(0, Global_21192);
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (Global_2747205.f_1)
			{
				if (Global_79744)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", true);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_21211, true);
				}
			}
		}
		func_154();
		func_152();
		Global_22598 = 0;
		Global_4546889 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_10()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23596 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21222.f_1 == 9) || Global_21221 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22585 = 6;
		Global_21222.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22585 = 6;
		return;
	}
}

void func_11()
{
	if (Global_9897[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9897[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9897[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9897[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9897[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9897[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_9075, 25);
	MISC::SET_BIT(&Global_9076, 11);
}

int func_12(int iParam0)
{
	if (Global_44375 == 15)
	{
		return 0;
	}
	if (func_13(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_13(int iParam0)
{
	return func_14(iParam0, Global_44375);
}

int func_14(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

float func_15(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4546889 == 0)
	{
		if (BitTest(Global_9075, 14) && Global_21222.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_21175[Global_21167 /*3*/].f_1 == Var0.f_1)
			{
				Global_4546889 = 1;
			}
		}
	}
	if (func_105() && Global_4546889 == 0)
	{
		return 2f;
	}
	if (iLocal_16 == 0)
	{
		iLocal_16 = MISC::GET_GAME_TIMER();
	}
	fVar3 = func_17((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_16)) / fParam12), 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (bParam13)
		{
			fVar4 = (fVar4 - 1f);
			fVar5 = 0.670158f;
			fVar4 = (((fVar4 * fVar4) * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f);
		}
		else
		{
			fVar4 = SYSTEM::SIN((fVar3 * 90f));
		}
		Global_21150 = { func_16(Param0, Param3, fVar4) };
		Global_21153 = { func_16(Param6, Param9, fVar4) };
	}
	else
	{
		Global_21150 = { Param3 };
		Global_21153 = { Param9 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_21150);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_21153, 0);
	return fVar3;
}

Vector3 func_16(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_17(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_18()
{
	if (Global_21200 == 0)
	{
		if (func_93(2, Global_21194, 0))
		{
			if (Global_79744 == 0)
			{
				if (Global_21446)
				{
					if (Global_21445 == 0)
					{
						Global_21445 = 1;
						func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_120(2);
						func_19();
						func_150(Global_21203, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21227), -1082130432, -1082130432, -1082130432);
						Global_21202 = Global_21227;
					}
					else
					{
						Global_21445 = 0;
						func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_120(1);
						func_19();
						func_150(Global_21203, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21226), -1082130432, -1082130432, -1082130432);
						Global_21202 = Global_21226;
					}
				}
			}
		}
	}
}

void func_19()
{
	if (Global_21446 == 0)
	{
		func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_9075, 17);
	}
	else if (Global_79744)
	{
		func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_9075, 17);
	}
	else
	{
		if (Global_21445 == 1)
		{
			if (Global_21210)
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else if (Global_21210)
		{
			func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
		}
		else
		{
			func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		MISC::SET_BIT(&Global_9075, 17);
	}
}

void func_20()
{
	if (BitTest(Global_9076, 10) || iLocal_120 == 1)
	{
		Global_9699 = MISC::GET_GAME_TIMER();
		Global_9698 = 0;
		Global_21200 = 1;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "GET_CURRENT_SELECTION");
		iLocal_71 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		iLocal_72 = 1;
	}
	else if (Global_21200 == 0)
	{
		if (func_93(2, Global_21191, 0))
		{
			if (iLocal_73 == 0)
			{
				Global_9699 = MISC::GET_GAME_TIMER();
				Global_9698 = 0;
				Global_21200 = 1;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "GET_CURRENT_SELECTION");
				iLocal_71 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				iLocal_72 = 1;
			}
		}
	}
}

void func_21()
{
	if (Global_21200 == 0)
	{
		if (func_93(2, Global_21189, 1))
		{
			if (func_145(2092, -1) == 1)
			{
				if (Global_114344.f_14055[Global_21222 /*20*/].f_17 == 0)
				{
					if (!BitTest(Global_9076, 3))
					{
						if (!Global_21165)
						{
							if (!BitTest(Global_4546610, 3))
							{
								if (!BitTest(Global_9075, 14))
								{
									Global_21200 = 1;
									MISC::SET_BIT(&Global_4546610, 3);
									func_22(3, 0, 1, 0);
									Global_23644 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_22(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	func_160();
	if (Global_79744 == 0)
	{
		if (func_119(14))
		{
			if (Global_23644 == 2 || Global_23644 == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (Global_21222.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_6(0) == 1)
		{
			return 0;
		}
	}
	if (Global_21188 == 1)
	{
		return 0;
	}
	if (Global_21222.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_21219))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_21222.f_1 < 4)
			{
				func_23("cellphone_flashhand");
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_21219 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_21204)
	{
		SYSTEM::WAIT(0);
	}
	func_122();
	func_121();
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9082[iParam0 /*15*/].f_9) == 0)
	{
		Global_9698 = 0;
		Global_21222.f_1 = 7;
		func_23(&(Global_9082[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9082[iParam0 /*15*/].f_9) == 0)
			{
				Global_21220 = SYSTEM::START_NEW_SCRIPT(&(Global_9082[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9082[iParam0 /*15*/].f_9) == 0)
		{
			Global_21220 = SYSTEM::START_NEW_SCRIPT(&(Global_9082[iParam0 /*15*/].f_5), 2600);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_9082[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_23(char* sParam0)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_24()
{
	if (func_46())
	{
		if (((Global_21202 == 2 || Global_21202 == 5) || Global_21202 == 8) && func_93(2, Global_21197, 0))
		{
			Global_21202 = 0;
			func_44();
			func_39();
			return;
		}
	}
	if (Global_21201)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_21201 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		func_35();
	}
	if (Global_21201 == 0)
	{
		if (func_93(2, Global_21197, 0))
		{
			Global_21449 = 0;
			switch (Global_21202)
			{
				case 2:
					if (Global_9660[0] == 1)
					{
						Global_21202 = 0;
					}
					else
					{
						Global_21202 = 1;
						Global_21449 = 1;
					}
					break;
				
				case 5:
					Global_21202 = 3;
					break;
				
				case 6:
					Global_21202 = 7;
					break;
				
				case 7:
					if (Global_9660[Global_21202 + 1] == 1)
					{
						Global_21202 = 8;
					}
					else
					{
						Global_21202 = 6;
						Global_21449 = 1;
					}
					break;
				
				case 8:
					Global_21202 = 6;
					break;
				
				default:
					Global_21202++;
					break;
			}
			if (Global_21449 == 1)
			{
				func_33();
			}
			else
			{
				func_31();
			}
			Global_21201 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_93(2, Global_21196, 0))
		{
			Global_21449 = 0;
			switch (Global_21202)
			{
				case 0:
					Global_21202 = 2;
					break;
				
				case 1:
					if (Global_9660[0] == 1)
					{
						Global_21202 = 0;
					}
					else
					{
						Global_21202 = 2;
						Global_21449 = 1;
					}
					break;
				
				case 3:
					Global_21202 = 5;
					break;
				
				case 6:
					if (Global_9660[8] == 1)
					{
						Global_21202 = 8;
					}
					else
					{
						Global_21202 = 7;
						Global_21449 = 1;
					}
					break;
				
				default:
					Global_21202 = (Global_21202 - 1);
					break;
			}
			if (Global_21449 == 1)
			{
				func_31();
			}
			else
			{
				func_33();
			}
			Global_21201 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_93(2, Global_21198, 0))
		{
			Global_21449 = 0;
			switch (Global_21202)
			{
				case 0:
					if (Global_9660[6])
					{
						Global_21202 = 6;
					}
					break;
				
				case 1:
					if (Global_9660[7])
					{
						Global_21202 = 7;
					}
					else
					{
						Global_21449 = 1;
						Global_21202 = 4;
					}
					break;
				
				case 2:
					if (Global_9660[8])
					{
						Global_21202 = 8;
					}
					else
					{
						Global_21449 = 1;
						Global_21202 = 5;
					}
					break;
				
				case 3:
					if (Global_9660[0])
					{
						Global_21202 = 0;
					}
					else
					{
						Global_21449 = 1;
						Global_21202 = 6;
					}
					break;
				
				case 4:
					if (Global_9660[1])
					{
						Global_21202 = 1;
					}
					break;
				
				case 5:
					if (Global_9660[2])
					{
						Global_21202 = 2;
					}
					break;
				
				case 6:
					if (Global_9660[3])
					{
						Global_21202 = 3;
					}
					break;
				
				case 7:
					if (Global_9660[4])
					{
						Global_21202 = 4;
					}
					break;
				
				case 8:
					if (Global_9660[5])
					{
						Global_21202 = 5;
					}
					break;
			}
			if (Global_21449 == 1)
			{
				func_29();
			}
			else
			{
				func_26();
			}
			Global_21201 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_93(2, Global_21199, 0))
		{
			Global_21449 = 0;
			switch (Global_21202)
			{
				case 0:
					if (Global_9660[3])
					{
						Global_21202 = 3;
					}
					break;
				
				case 1:
					if (Global_9660[4])
					{
						Global_21202 = 4;
					}
					break;
				
				case 2:
					if (Global_9660[5])
					{
						Global_21202 = 5;
					}
					break;
				
				case 3:
					if (Global_9660[6])
					{
						Global_21202 = 6;
					}
					break;
				
				case 4:
					if (Global_9660[7])
					{
						Global_21202 = 7;
					}
					else
					{
						Global_21449 = 1;
						Global_21202 = 1;
					}
					break;
				
				case 5:
					if (Global_9660[8])
					{
						Global_21202 = 8;
					}
					else
					{
						Global_21449 = 1;
						Global_21202 = 2;
					}
					break;
				
				case 6:
					if (Global_9660[0])
					{
						Global_21202 = 0;
					}
					else
					{
						Global_21449 = 1;
						Global_21202 = 3;
					}
					break;
				
				case 7:
					if (Global_9660[1])
					{
						Global_21202 = 1;
					}
					break;
				
				case 8:
					if (Global_9660[2])
					{
						Global_21202 = 2;
					}
					break;
			}
			if (Global_21449 == 1)
			{
				func_26();
			}
			else
			{
				func_29();
			}
			Global_21201 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	if (Global_9082[24 /*15*/].f_10 == 57)
	{
		if (Global_21201 == 1 && Global_21202 == 8)
		{
			if (iLocal_122 == 0)
			{
				iLocal_122 = 1;
				func_25(12);
			}
		}
	}
}

void func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2740054.f_5271.f_7[iVar0]), iVar1);
}

void func_26()
{
	func_150(Global_21203, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
	func_27();
}

void func_27()
{
	if (func_28())
	{
		if (Global_21449 == 0)
		{
			MOBILE::CELL_SET_INPUT(1);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(2);
		}
	}
}

int func_28()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79744)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4546888 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_29()
{
	func_150(Global_21203, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
	func_30();
}

void func_30()
{
	if (func_28())
	{
		if (Global_21449 == 0)
		{
			MOBILE::CELL_SET_INPUT(2);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(1);
		}
	}
}

void func_31()
{
	func_150(Global_21203, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(2), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
	func_32();
}

void func_32()
{
	if (func_28())
	{
		if (Global_21449 == 0)
		{
			MOBILE::CELL_SET_INPUT(4);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(3);
		}
	}
}

void func_33()
{
	func_150(Global_21203, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(4), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
	func_34();
}

void func_34()
{
	if (func_28())
	{
		if (Global_21449 == 0)
		{
			MOBILE::CELL_SET_INPUT(3);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(4);
		}
	}
}

void func_35()
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
	{
		switch (Global_21202)
		{
			case 0:
				if (Global_9660[1])
				{
					func_31();
					Global_21202 = 1;
				}
				break;
			
			case 1:
				if (Global_9660[2])
				{
					func_31();
					Global_21202 = 2;
				}
				break;
			
			case 2:
				if (Global_9660[3])
				{
					func_31();
					func_29();
					Global_21202 = 3;
				}
				else
				{
					func_33();
					func_29();
					Global_21202 = 4;
				}
				break;
			
			case 3:
				if (Global_9660[4])
				{
					func_31();
					Global_21202 = 4;
				}
				break;
			
			case 4:
				if (Global_9660[5])
				{
					func_31();
					Global_21202 = 5;
				}
				break;
			
			case 5:
				if (Global_9660[6])
				{
					func_31();
					func_29();
					Global_21202 = 6;
				}
				break;
			
			case 6:
				if (Global_9660[7])
				{
					func_31();
					Global_21202 = 7;
				}
				break;
			
			case 7:
				if (Global_9660[8])
				{
					func_31();
					Global_21202 = 8;
				}
				else if (func_46())
				{
					func_39();
					func_33();
					func_29();
					Global_21202 = 0;
				}
				else
				{
					func_33();
					func_29();
					Global_21202 = 0;
				}
				break;
			
			case 8:
				if (func_46())
				{
					func_39();
					func_31();
					func_29();
					Global_21202 = 0;
					return;
				}
				if (Global_9660[0])
				{
					func_31();
					func_29();
					Global_21202 = 0;
				}
				else
				{
					func_33();
					func_29();
				}
				break;
			}
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
	{
		switch (Global_21202)
		{
			case 0:
				if (BitTest(Global_9077, 9))
				{
					func_36();
					func_33();
					func_26();
					Global_21202 = 8;
					return;
				}
				if (Global_9660[8])
				{
					func_33();
					func_26();
					Global_21202 = 8;
				}
				else
				{
					func_31();
					func_26();
					Global_21202 = 7;
				}
				break;
			
			case 1:
				if (Global_9660[0])
				{
					func_33();
					Global_21202 = 0;
				}
				else if (BitTest(Global_9077, 9))
				{
					func_36();
					func_31();
					func_26();
					Global_21202 = 8;
				}
				else if (Global_9660[8])
				{
					func_26();
					func_31();
				}
				else
				{
					func_26();
				}
				break;
			
			case 2:
				if (Global_9660[1])
				{
					func_33();
					Global_21202 = 1;
				}
				break;
			
			case 3:
				if (Global_9660[2])
				{
					func_33();
					func_26();
					Global_21202 = 2;
				}
				break;
			
			case 4:
				if (Global_9660[3])
				{
					func_33();
					Global_21202 = 3;
				}
				else
				{
					func_26();
					func_31();
					Global_21449 = 1;
					Global_21202 = 2;
				}
				break;
			
			case 5:
				if (Global_9660[4])
				{
					func_33();
					Global_21202 = 4;
				}
				break;
			
			case 6:
				if (Global_9660[5])
				{
					func_26();
					func_33();
					Global_21202 = 5;
				}
				break;
			
			case 7:
				if (Global_9660[6])
				{
					func_33();
					Global_21202 = 6;
				}
				break;
			
			case 8:
				if (Global_9660[7])
				{
					func_33();
					Global_21202 = 7;
				}
				break;
			}
	}
}

void func_36()
{
	MISC::CLEAR_BIT(&Global_9077, 9);
	func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_120(1);
	func_150(Global_21203, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
	func_37();
	func_122();
	func_120(1);
	func_150(Global_21203, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
	func_150(Global_21203, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
}

void func_37()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_38(&(Global_9082[10 /*15*/]));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iVar0++;
	}
	func_150(Global_21203, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_150(Global_21203, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
}

void func_38(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_39()
{
	Global_21226 = Global_21202;
	func_40(1);
}

void func_40(bool bParam0)
{
	int iVar0;
	
	MISC::SET_BIT(&Global_9077, 9);
	if (bParam0)
	{
		func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_37();
	func_43();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9623[iVar0] = 0;
		Global_9660[iVar0] = 0;
		iVar0++;
	}
	func_41(10, "CELL_16", 0, "appSettings", 24);
	if (bParam0)
	{
		func_150(Global_21203, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
		func_150(Global_21203, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
	}
}

void func_41(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	func_42(iParam0, sParam1, iParam2, sParam3, iParam4, 1, 1, 0, 0);
	Global_9660[iParam2] = 1;
	Global_9623[iParam2] = iParam0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[iParam0 /*15*/].f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[iParam0 /*15*/].f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_38(&(Global_9082[iParam0 /*15*/]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_42(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_9082[iParam0 /*15*/]), sParam1, 16);
	Global_9082[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_9082[iParam0 /*15*/].f_5), sParam3, 16);
	Global_9082[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_9082[iParam0 /*15*/].f_10 = iParam4;
	Global_9082[iParam0 /*15*/].f_11 = iParam5;
	Global_9082[iParam0 /*15*/].f_12 = iParam6;
	Global_9082[iParam0 /*15*/].f_13 = iParam7;
	Global_9082[iParam0 /*15*/].f_14 = iParam8;
	if (Global_9082[iParam0 /*15*/].f_12 == 0)
	{
		Global_9082[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_9082[iParam0 /*15*/].f_13 == 0)
	{
		Global_9082[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_9082[iParam0 /*15*/].f_14 == 0)
	{
		Global_9082[iParam0 /*15*/].f_14 = 0;
	}
}

void func_43()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9660[iVar0] = 0;
		iVar0++;
	}
}

void func_44()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_21211, true);
		func_45();
	}
}

void func_45()
{
	if (func_28())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

int func_46()
{
	if (func_108())
	{
		return 1;
	}
	return 0;
}

void func_47()
{
	if (((Global_21202 == 0 || Global_21202 == 3) || Global_21202 == 6) && func_93(2, Global_21196, 0))
	{
		Global_21202 += 2;
		func_44();
		func_36();
		return;
	}
	if (Global_21201)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_21201 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		func_35();
	}
	func_48();
}

void func_48()
{
	bool bVar0;
	
	if (!Global_21201)
	{
		bVar0 = false;
		if (func_93(2, Global_21197, 0))
		{
			Global_21449 = 0;
			switch (Global_21202)
			{
				case 0:
				case 3:
				case 6:
					if (Global_9660[Global_21202 + 1])
					{
						Global_21202++;
					}
					else if (Global_9660[Global_21202 + 2])
					{
						Global_21202 += 2;
						Global_21449 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						bVar0 = true;
					}
					break;
				
				case 1:
				case 4:
				case 7:
					if (Global_9660[Global_21202 + 1])
					{
						Global_21202++;
					}
					else if (Global_9660[(Global_21202 - 1)])
					{
						Global_21202 = (Global_21202 - 1);
						Global_21449 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						bVar0 = true;
					}
					break;
				
				case 2:
				case 5:
				case 8:
					if (Global_9660[(Global_21202 - 2)])
					{
						Global_21202 = (Global_21202 - 2);
					}
					else if (Global_9660[(Global_21202 - 1)])
					{
						Global_21202 = (Global_21202 - 1);
						Global_21449 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						bVar0 = true;
					}
					break;
			}
			if (!bVar0)
			{
				if (!Global_21449)
				{
					func_31();
				}
				else
				{
					func_33();
				}
			}
			Global_21201 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_93(2, Global_21196, 0))
		{
			Global_21449 = 0;
			switch (Global_21202)
			{
				case 1:
				case 4:
				case 7:
					if (Global_9660[(Global_21202 - 1)])
					{
						Global_21202 = (Global_21202 - 1);
					}
					else if (Global_9660[Global_21202 + 1])
					{
						Global_21202++;
						Global_21449 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						bVar0 = true;
					}
					break;
				
				case 2:
				case 5:
				case 8:
					if (Global_9660[(Global_21202 - 1)])
					{
						Global_21202 = (Global_21202 - 1);
					}
					else if (Global_9660[(Global_21202 - 2)])
					{
						Global_21202 = (Global_21202 - 2);
						Global_21449 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						bVar0 = true;
					}
					break;
			}
			if (!bVar0)
			{
				if (!Global_21449)
				{
					func_33();
				}
				else
				{
					func_31();
				}
			}
			Global_21201 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_93(2, Global_21198, 0))
		{
			Global_21449 = 0;
			switch (Global_21202)
			{
				case 0:
				case 1:
				case 2:
					if (Global_9660[Global_21202 + 6])
					{
						Global_21202 += 6;
					}
					else if (Global_9660[Global_21202 + 3])
					{
						Global_21202 += 3;
						Global_21449 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						bVar0 = true;
					}
					break;
				
				case 3:
				case 4:
				case 5:
					if (Global_9660[(Global_21202 - 3)])
					{
						Global_21202 = (Global_21202 - 3);
					}
					else if (Global_9660[Global_21202 + 3])
					{
						Global_21202 += 3;
						Global_21449 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						bVar0 = true;
					}
					break;
				
				case 6:
				case 7:
				case 8:
					if (Global_9660[(Global_21202 - 3)])
					{
						Global_21202 = (Global_21202 - 3);
					}
					else if (Global_9660[(Global_21202 - 6)])
					{
						Global_21202 = (Global_21202 - 6);
						Global_21449 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						bVar0 = true;
					}
					break;
			}
			if (!bVar0)
			{
				if (!Global_21449)
				{
					func_26();
				}
				else
				{
					func_29();
				}
			}
			Global_21201 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_93(2, Global_21199, 0))
		{
			Global_21449 = 0;
			switch (Global_21202)
			{
				case 0:
				case 1:
				case 2:
					if (Global_9660[Global_21202 + 3])
					{
						Global_21202 += 3;
					}
					else if (Global_9660[Global_21202 + 6])
					{
						Global_21202 += 6;
						Global_21449 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						bVar0 = true;
					}
					break;
				
				case 3:
				case 4:
				case 5:
					if (Global_9660[Global_21202 + 3])
					{
						Global_21202 += 3;
					}
					else if (Global_9660[(Global_21202 - 3)])
					{
						Global_21202 = (Global_21202 - 3);
						Global_21449 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						bVar0 = true;
					}
					break;
				
				case 6:
				case 7:
				case 8:
					if (Global_9660[(Global_21202 - 6)])
					{
						Global_21202 = (Global_21202 - 6);
					}
					else if (Global_9660[(Global_21202 - 3)])
					{
						Global_21202 = (Global_21202 - 3);
						Global_21449 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21211, true);
						bVar0 = true;
					}
					break;
			}
			if (!bVar0)
			{
				if (!Global_21449)
				{
					func_29();
				}
				else
				{
					func_26();
				}
			}
			Global_21201 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_49()
{
	if (Global_21201)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_21201 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_21202)
			{
				case 6:
					if (Global_9660[7])
					{
						func_31();
						Global_21202 = 7;
					}
					break;
				
				case 7:
					if (Global_9660[6])
					{
						func_33();
						Global_21202 = 6;
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_21202)
			{
				case 6:
					if (Global_9660[7])
					{
						func_31();
						Global_21202 = 7;
					}
					break;
				
				case 7:
					if (Global_9660[6])
					{
						func_33();
						Global_21202 = 6;
					}
					break;
				}
			}
	}
	if (Global_21201 == 0)
	{
		if (func_93(2, Global_21197, 0))
		{
			Global_21449 = 0;
			switch (Global_21202)
			{
				case 2:
					Global_21202 = 0;
					break;
				
				case 5:
					Global_21202 = 3;
					break;
				
				case 7:
					if (Global_9660[Global_21202 + 1] == 1)
					{
						Global_21202 = 8;
					}
					else
					{
						Global_21202 = 6;
						Global_21449 = 1;
					}
					break;
				
				case 8:
					Global_21202 = 6;
					break;
				
				default:
					Global_21202++;
					break;
			}
			if (Global_21449 == 1)
			{
				func_33();
			}
			else
			{
				func_31();
			}
			Global_21201 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_93(2, Global_21196, 0))
		{
			Global_21449 = 0;
			switch (Global_21202)
			{
				case 0:
					Global_21202 = 2;
					break;
				
				case 3:
					Global_21202 = 5;
					break;
				
				case 6:
					if (Global_9660[8] == 1)
					{
						Global_21202 = 8;
					}
					else
					{
						Global_21202 = 7;
						Global_21449 = 1;
					}
					break;
				
				default:
					Global_21202 = (Global_21202 - 1);
					break;
			}
			if (Global_21449 == 1)
			{
				func_31();
			}
			else
			{
				func_33();
			}
			Global_21201 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_50()
{
	if (Global_21201)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_21201 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_21202)
			{
				case 0:
					if (Global_9660[1])
					{
						func_31();
						Global_21202 = 1;
					}
					break;
				
				case 1:
					if (Global_9660[2])
					{
						func_31();
						Global_21202 = 2;
					}
					break;
				
				case 2:
					if (Global_9660[3])
					{
						func_31();
						func_29();
						Global_21202 = 3;
					}
					else
					{
						func_33();
						func_29();
						Global_21202 = 4;
					}
					break;
				
				case 3:
					if (Global_9660[4])
					{
						func_31();
						Global_21202 = 4;
					}
					break;
				
				case 4:
					if (Global_9660[5])
					{
						func_31();
						Global_21202 = 5;
					}
					break;
				
				case 5:
					if (Global_9660[6])
					{
						func_31();
						func_29();
						Global_21202 = 6;
					}
					break;
				
				case 6:
					if (Global_9660[7])
					{
						func_31();
						Global_21202 = 7;
					}
					break;
				
				case 7:
					if (Global_9660[8])
					{
						func_31();
						Global_21202 = 8;
					}
					else
					{
						func_33();
						func_29();
						Global_21202 = 0;
					}
					break;
				
				case 8:
					if (Global_9660[0])
					{
						func_31();
						func_29();
						Global_21202 = 0;
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_21202)
			{
				case 0:
					if (Global_9660[8])
					{
						func_33();
						func_26();
						Global_21202 = 8;
					}
					else
					{
						func_31();
						func_26();
						Global_21202 = 7;
					}
					break;
				
				case 1:
					if (Global_9660[0])
					{
						func_33();
						Global_21202 = 0;
					}
					break;
				
				case 2:
					if (Global_9660[1])
					{
						func_33();
						Global_21202 = 1;
					}
					break;
				
				case 3:
					if (Global_9660[2])
					{
						func_33();
						func_26();
						Global_21202 = 2;
					}
					break;
				
				case 4:
					if (Global_9660[3])
					{
						func_33();
						Global_21202 = 3;
					}
					else
					{
						func_26();
						func_31();
						Global_21449 = 1;
						Global_21202 = 2;
					}
					break;
				
				case 5:
					if (Global_9660[4])
					{
						func_33();
						Global_21202 = 4;
					}
					break;
				
				case 6:
					if (Global_9660[5])
					{
						func_26();
						func_33();
						Global_21202 = 5;
					}
					break;
				
				case 7:
					if (Global_9660[6])
					{
						func_33();
						Global_21202 = 6;
					}
					break;
				
				case 8:
					if (Global_9660[7])
					{
						func_33();
						Global_21202 = 7;
					}
					break;
				}
			}
	}
	if (Global_21201 == 0)
	{
		if (func_93(2, Global_21197, 0))
		{
			Global_21449 = 0;
			switch (Global_21202)
			{
				case 2:
					Global_21202 = 0;
					break;
				
				case 5:
					Global_21202 = 3;
					break;
				
				case 7:
					if (Global_9660[Global_21202 + 1] == 1)
					{
						Global_21202 = 8;
					}
					else
					{
						Global_21202 = 6;
						Global_21449 = 1;
					}
					break;
				
				case 8:
					Global_21202 = 6;
					break;
				
				default:
					Global_21202++;
					break;
			}
			if (Global_21449 == 1)
			{
				func_33();
			}
			else
			{
				func_31();
			}
			Global_21201 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_93(2, Global_21196, 0))
		{
			Global_21449 = 0;
			switch (Global_21202)
			{
				case 0:
					Global_21202 = 2;
					break;
				
				case 3:
					Global_21202 = 5;
					break;
				
				case 6:
					if (Global_9660[8] == 1)
					{
						Global_21202 = 8;
					}
					else
					{
						Global_21202 = 7;
						Global_21449 = 1;
					}
					break;
				
				default:
					Global_21202 = (Global_21202 - 1);
					break;
			}
			if (Global_21449 == 1)
			{
				func_31();
			}
			else
			{
				func_33();
			}
			Global_21201 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_93(2, Global_21198, 0))
		{
			Global_21449 = 0;
			switch (Global_21202)
			{
				case 0:
					if (Global_9660[6])
					{
						Global_21202 = 6;
					}
					break;
				
				case 1:
					if (Global_9660[7])
					{
						Global_21202 = 7;
					}
					break;
				
				case 2:
					if (Global_9660[8])
					{
						Global_21202 = 8;
					}
					else
					{
						Global_21449 = 1;
						Global_21202 = 5;
					}
					break;
				
				case 3:
					if (Global_9660[0])
					{
						Global_21202 = 0;
					}
					break;
				
				case 4:
					if (Global_9660[1])
					{
						Global_21202 = 1;
					}
					break;
				
				case 5:
					if (Global_9660[2])
					{
						Global_21202 = 2;
					}
					break;
				
				case 6:
					if (Global_9660[3])
					{
						Global_21202 = 3;
					}
					break;
				
				case 7:
					if (Global_9660[4])
					{
						Global_21202 = 4;
					}
					break;
				
				case 8:
					if (Global_9660[5])
					{
						Global_21202 = 5;
					}
					break;
			}
			if (Global_21449 == 1)
			{
				func_29();
			}
			else
			{
				func_26();
			}
			Global_21201 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_93(2, Global_21199, 0))
		{
			Global_21449 = 0;
			switch (Global_21202)
			{
				case 0:
					if (Global_9660[3])
					{
						Global_21202 = 3;
					}
					break;
				
				case 1:
					if (Global_9660[4])
					{
						Global_21202 = 4;
					}
					break;
				
				case 2:
					if (Global_9660[5])
					{
						Global_21202 = 5;
					}
					break;
				
				case 3:
					if (Global_9660[6])
					{
						Global_21202 = 6;
					}
					break;
				
				case 4:
					if (Global_9660[7])
					{
						Global_21202 = 7;
					}
					break;
				
				case 5:
					if (Global_9660[8])
					{
						Global_21202 = 8;
					}
					else
					{
						Global_21449 = 1;
						Global_21202 = 2;
					}
					break;
				
				case 6:
					if (Global_9660[0])
					{
						Global_21202 = 0;
					}
					break;
				
				case 7:
					if (Global_9660[1])
					{
						Global_21202 = 1;
					}
					break;
				
				case 8:
					if (Global_9660[2])
					{
						Global_21202 = 2;
					}
					break;
			}
			if (Global_21449 == 1)
			{
				func_26();
			}
			else
			{
				func_29();
			}
			Global_21201 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_51()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_71))
	{
		iLocal_72 = 0;
		iLocal_70 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_71);
		if (Global_21445 == 0)
		{
			Global_21226 = iLocal_70;
		}
		else
		{
			Global_21227 = iLocal_70;
		}
		if (iLocal_70 < 0)
		{
			iLocal_70 = 0;
		}
		Global_21225 = Global_9623[iLocal_70];
		if (BitTest(Global_9076, 10))
		{
			Global_21225 = 2;
			MISC::CLEAR_BIT(&Global_9076, 10);
		}
		if (iLocal_120 == 1)
		{
			Global_21226 = 1;
			Global_21225 = 0;
			Global_2751110 = 0;
			iLocal_120 = 0;
		}
		iVar0 = 0;
		if (Global_79744)
		{
			if (Global_21225 == 25 && func_46())
			{
			}
		}
		if (SCRIPT::IS_THREAD_ACTIVE(Global_21220))
		{
			iVar0 = 1;
		}
		if (Global_21225 == 3)
		{
			if (BitTest(Global_9076, 3))
			{
				iVar0 = 1;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (((((((PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false)) || GRAPHICS::GET_USINGNIGHTVISION())
				{
					iVar0 = 1;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) == 0)
					{
						iVar0 = 1;
					}
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar1) < 0f)
					{
						iVar0 = 1;
					}
				}
				if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
				{
					iVar0 = 1;
				}
				if (Global_79744)
				{
					if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_111, true);
						if (iLocal_111 != joaat("weapon_unarmed"))
						{
							iVar0 = 1;
						}
					}
				}
			}
		}
		if (Global_21225 == 2)
		{
			if (BitTest(Global_9076, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_21225 == 24 && MISC::ARE_STRINGS_EQUAL(&(Global_9082[Global_21225 /*15*/]), "CELL_BENWEB"))
		{
			if (BitTest(Global_9076, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_79744)
		{
			if (Global_21225 == 15 || Global_21225 == 5)
			{
			}
			else
			{
				if (Global_21225 == 24)
				{
					if (((BitTest(Global_4546610, 4) == 0 && Global_1836183 == 0) && BitTest(Global_4546610, 20) == 0) && BitTest(Global_4546610, 22) == 0)
					{
					}
					if ((((BitTest(Global_4546610, 20) == 1 && BitTest(Global_4546610, 4) == 0) && Global_1836183 == 0) && BitTest(Global_4546610, 22) == 0) && BitTest(Global_4546610, 26) == 0)
					{
						iVar0 = 1;
						MISC::SET_BIT(&Global_4546610, 21);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
					{
						if (Global_21225 == 3)
						{
							iVar0 = 1;
						}
					}
				}
				if (Global_76837 && Global_21225 == 2)
				{
					iVar0 = 1;
					sVar2 = func_78();
					if (!func_77(sVar2))
					{
						func_116(sVar2, -1);
					}
				}
				if (Global_21225 == 23)
				{
					func_53(&iVar0);
				}
				if (func_159())
				{
					if (Global_21225 == 10)
					{
						if (!func_77("FIX_MPCHAR_BLCK"))
						{
							func_116("FIX_MPCHAR_BLCK", -1);
						}
						iVar0 = 1;
					}
				}
				if (iVar0 == 0)
				{
					func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_9075, 17);
					Global_21222.f_1 = 7;
					if (BitTest(Global_9075, 23))
					{
					}
					else
					{
						func_44();
						unk_0xCFB0E9C3456319EA(Global_2672964.f_4.f_11, "PhoneApp", 0, Global_9082[Global_21225 /*15*/].f_9);
						Global_1944267.f_35 = 133;
						SCRIPT::REQUEST_SCRIPT(&(Global_9082[Global_21225 /*15*/].f_5));
						MISC::SET_BIT(&Global_9075, 23);
					}
				}
				else
				{
					if (Global_21225 == 2 || Global_21225 == 3)
					{
					}
					func_52();
				}
			}
		}
		else
		{
			switch (Global_21225)
			{
				case 3:
					if (Global_113397 == 1)
					{
						iVar0 = 1;
					}
					break;
				
				case 8:
					iVar0 = 1;
					break;
				
				case 15:
					iVar0 = 1;
					break;
				
				case 16:
					iVar0 = 1;
					MISC::SET_BIT(&Global_9075, 26);
					break;
				
				case 5:
					iVar0 = 1;
					break;
				
				case 20:
					iVar0 = 1;
					if (Global_21447 == 0)
					{
						if ((Global_9079 == 0 && iLocal_73 == 0) && Global_44375 == 15)
						{
							iLocal_73 = 1;
							func_44();
							if (!Global_114344.f_14055.f_85)
							{
							}
						}
					}
					else
					{
						func_52();
					}
					break;
				
				default:
					break;
			}
			if (CUTSCENE::CAN_USE_MOBILE_PHONE_DURING_CUTSCENE())
			{
				if (Global_21225 != 0)
				{
					iVar0 = 1;
				}
			}
			if (func_119(14))
			{
				if (Global_21225 != 3 && Global_21225 != 14)
				{
					iVar0 = 1;
				}
			}
			if (iVar0 == 0)
			{
				func_44();
				func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9075, 17);
				Global_21222.f_1 = 7;
				if (BitTest(Global_9075, 23))
				{
				}
				else
				{
					SCRIPT::REQUEST_SCRIPT(&(Global_9082[Global_21225 /*15*/].f_5));
					MISC::SET_BIT(&Global_9075, 23);
				}
			}
			else if (Global_21225 != 20)
			{
				if (Global_114344.f_14055.f_86 == 0)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("paparazzo3b")) > 0)
					{
						if (Global_21225 == 3)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
								{
									func_116("CELL_38", -1);
									Global_114344.f_14055.f_86 = 1;
								}
							}
						}
					}
				}
				func_52();
			}
		}
	}
}

void func_52()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21211, true);
	}
}

void func_53(int iParam0)
{
	if (func_75(0))
	{
		*iParam0 = 1;
		if (!func_77("HROBA_INGNG_BLK"))
		{
			func_116("HROBA_INGNG_BLK", -1);
		}
	}
	else if ((((((((((func_72(PLAYER::PLAYER_ID()) || func_68(PLAYER::PLAYER_ID())) || func_67()) || func_65(PLAYER::PLAYER_ID())) || func_63()) || func_62(0)) || func_61()) || Global_1057440 != -1) || Global_1845225[PLAYER::PLAYER_ID() /*874*/] == 5) || func_58(PLAYER::PLAYER_ID(), 1, 0)) || Global_1984708)
	{
		*iParam0 = 1;
		if (!func_77("HROBA_GFAIL_BLK"))
		{
			func_116("HROBA_GFAIL_BLK", -1);
		}
	}
	else if (!func_75(1) && func_55() >= func_54())
	{
		*iParam0 = 1;
		if (!func_77("APPR_REG_BOSSF1"))
		{
			func_116("APPR_REG_BOSSF1", -1);
		}
	}
}

int func_54()
{
	return Global_262145.f_12821;
}

int func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (func_56(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_56(int iParam0)
{
	if (func_57(iParam0))
	{
		if (func_57(Global_1888737[iParam0 /*611*/].f_10))
		{
			return Global_1888737[iParam0 /*611*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_57(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (iVar0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_58(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_59(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845225[iParam0 /*874*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_59(int iParam0)
{
	return func_60(iParam0);
}

var func_60(int iParam0)
{
	return BitTest(Global_1845225[iParam0 /*874*/].f_11.f_1, 0);
}

var func_61()
{
	if (Global_2740054.f_298)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_2740054.f_297) == 0)
		{
			Global_2740054.f_298 = 0;
			Global_2740054.f_297 = -1;
		}
	}
	return Global_2740054.f_298;
}

int func_62(int iParam0)
{
	return 0;
}

int func_63()
{
	return func_64(Global_4718592.f_131616);
}

int func_64(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31058[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_65(int iParam0)
{
	return func_66(&(Global_2658016[iParam0 /*467*/].f_446), 0);
}

var func_66(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

var func_67()
{
	return Global_1835499;
}

int func_68(int iParam0)
{
	if (func_71(iParam0))
	{
		return 1;
	}
	if (func_69(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_69(int iParam0)
{
	return func_70(iParam0, 20);
}

var func_70(int iParam0, int iParam1)
{
	return BitTest(Global_1888737[iParam0 /*611*/].f_10.f_4, iParam1);
}

int func_71(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1888737[iVar0 /*611*/].f_1, 7);
	}
	return 0;
}

int func_72(int iParam0)
{
	if (func_74(iParam0))
	{
		return 1;
	}
	if (func_73(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_73(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_70(iParam0, 9);
	}
	return 0;
}

int func_74(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1888737[iVar0 /*611*/].f_1, 0);
	}
	return 0;
}

bool func_75(bool bParam0)
{
	return func_76(PLAYER::PLAYER_ID(), bParam0);
}

int func_76(int iParam0, bool bParam1)
{
	if (!func_57(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_56(iParam0))
		{
			return 0;
		}
	}
	return func_57(Global_1888737[iParam0 /*611*/].f_10);
}

bool func_77(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_78()
{
	return "BLOCK_APP_WEB";
}

void func_79()
{
	if (Global_21188 == 0)
	{
		if (func_15(Global_21175[Global_21167 /*3*/], Global_21168[Global_21167 /*3*/], Global_21182, Global_21182, 350f, 0) >= 1f)
		{
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_9076, 24);
			MISC::SET_BIT(&Global_9076, 26);
		}
	}
}

void func_80()
{
	if (Global_21188 == 0)
	{
		if (func_15(Global_21168[Global_21167 /*3*/], Global_21175[Global_21167 /*3*/], Global_21182, Global_21182, 350f, 1) >= 1f)
		{
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_9076, 25);
			if (Global_22598)
			{
				MISC::CLEAR_BIT(&Global_9076, 27);
			}
		}
	}
}

void func_81()
{
	if (Global_21188 == 0 && Global_21162 == 0)
	{
		if (func_15(Global_21175[Global_21167 /*3*/], Global_21168[Global_21167 /*3*/], Global_21182, Global_21182, 350f, 0) >= 1f)
		{
			iLocal_16 = 0;
			Global_4546889 = 0;
		}
	}
}

void func_82()
{
	float fVar0;
	float fVar1;
	
	if (BitTest(Global_9077, 2))
	{
		MISC::SET_BIT(&Global_9076, 8);
		MISC::SET_BIT(&Global_9075, 14);
		Global_21162 = 0;
		iLocal_16 = 0;
		MOBILE::SET_MOBILE_PHONE_ROTATION(Global_21182, 0);
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1)
	{
		fVar0 = func_15(Global_21168[Global_21167 /*3*/], Global_21175[Global_21167 /*3*/], Global_21185, Global_21182, 450f, 1);
		if (fVar0 >= 1f)
		{
			MISC::SET_BIT(&Global_9076, 8);
			MISC::SET_BIT(&Global_9075, 14);
			Global_21162 = 0;
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_9077, 2);
			iLocal_80 = 0;
		}
		else if (fVar0 >= 0.75f)
		{
			MISC::SET_BIT(&Global_9076, 8);
		}
	}
	else
	{
		if (iLocal_80 == 0)
		{
			Local_81 = { Global_21175[Global_21167 /*3*/] };
			Local_81.f_0 = (Local_81.f_0 - 10f);
			Local_81.f_1 = (Local_81.f_1 + 20f);
			iLocal_80 = 1;
		}
		fVar1 = func_15(Global_21168[Global_21167 /*3*/], Local_81, -90f, 0f, 90f, -90f, 0f, 90f, 450f, 1);
		if (fVar1 >= 1f)
		{
			MISC::SET_BIT(&Global_9076, 8);
			MISC::SET_BIT(&Global_9075, 14);
			Global_21162 = 0;
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_9077, 2);
			iLocal_80 = 0;
		}
		else if (fVar1 >= 0.75f)
		{
			MISC::SET_BIT(&Global_9076, 8);
		}
	}
}

void func_83()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_105 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_104);
	}
	else
	{
		iLocal_100 = MISC::GET_GAME_TIMER();
		iLocal_105 = (iLocal_100 - iLocal_99);
	}
	if (iLocal_105 > 4000)
	{
		iLocal_87 = func_142();
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_104 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			iLocal_99 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_84()
{
	if (Global_21221 == 1)
	{
		func_158();
		if (Global_21200 == 0)
		{
			if (func_93(2, Global_21192, 0))
			{
				if (BitTest(Global_9076, 8))
				{
					if (Global_22632 == 0)
					{
						func_52();
						Global_21200 = 1;
						Global_21221 = 3;
						Global_22634 = 1;
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
		}
		if (Global_21200 == 0)
		{
			if (func_93(2, Global_21191, 0))
			{
				if (BitTest(Global_9076, 8))
				{
					func_44();
					Global_21200 = 1;
					Global_21221 = 2;
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
					}
					func_90();
					func_89();
				}
			}
		}
	}
	else
	{
		if (iLocal_97 == 0)
		{
			if (BitTest(Global_9075, 27))
			{
				iLocal_97 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else
		{
			if (Global_21222.f_1 > 3)
			{
				if (SYSTEM::TIMERB() > 1500)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							if (Global_21165)
							{
								AUDIO::PLAY_PED_RINGTONE("Dial_and_Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
							}
							else if (!BitTest(Global_9077, 5))
							{
								AUDIO::PLAY_PED_RINGTONE("Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
							}
						}
					}
				}
			}
			if (!BitTest(Global_9075, 27))
			{
				iLocal_97 = 0;
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		if (Global_21221 == 0)
		{
			if (Global_21200 == 0)
			{
				if ((func_93(2, Global_21190, 0) || Global_2751110 == 1) && !Global_78513)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (BitTest(Global_9076, 8))
							{
								switch (Global_21222.f_1)
								{
									case 3:
										break;
									
									case 4:
										break;
									
									case 6:
										if (Global_21444 == 0)
										{
											if (Global_21445 == 1)
											{
												func_52();
												Global_21445 = 0;
												func_150(Global_21203, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
												func_122();
												func_121();
												func_120(1);
												func_150(Global_21203, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21226), -1082130432, -1082130432, -1082130432);
											}
											else
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
												{
													AUDIO::PLAY_SOUND_FRONTEND(-1, "Put_Away", &Global_21211, true);
												}
												iLocal_16 = 0;
												Global_21222.f_1 = 3;
											}
										}
										break;
									
									case 5:
										Global_21222.f_1 = 3;
										break;
									
									case 7:
										if (BitTest(Global_9075, 23) == 1)
										{
										}
										if ((Global_9700 - Global_9699) > Global_9701 && BitTest(Global_9075, 23) == 0)
										{
											if (BitTest(Global_9076, 0))
											{
											}
											else
											{
												func_52();
												Global_9698 = 1;
												Global_21222.f_1 = 6;
												if (Global_79744)
												{
													func_150(Global_21203, "SET_THEME", SYSTEM::TO_FLOAT(Global_4546886), -1082130432, -1082130432, -1082130432, -1082130432);
												}
												Global_9078 = 99;
												if (Global_2751110 == 0)
												{
													func_85();
												}
											}
										}
										break;
									
									case 8:
										break;
									
									case 10:
										if (Global_8390 == 132)
										{
											if (Global_2747205.f_1 || BitTest(Global_9076, 20))
											{
												func_52();
												func_114();
											}
										}
										else
										{
											func_52();
											func_114();
											Global_22634 = 1;
										}
										break;
									
									case 9:
										if (Global_22585 == 0)
										{
											Global_21222.f_1 = 3;
										}
										break;
									
									default:
										break;
								}
								if (Global_2751110 == 1)
								{
									iLocal_120 = 1;
									Global_2751110 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_85()
{
	char cVar0[24];
	
	if (Global_21205 == 1)
	{
		return;
	}
	if (Global_21222.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21203))
	{
		if (Global_79744)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_21222.f_1)
	{
		case 6:
			func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_120(Global_9697);
			if (Global_9697 == 1)
			{
				func_150(Global_21203, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21226), -1082130432, -1082130432, -1082130432);
				Global_21202 = Global_21226;
			}
			else
			{
				func_150(Global_21203, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21227), -1082130432, -1082130432, -1082130432);
				Global_21202 = Global_21227;
			}
			if (Global_21210)
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21446 == 0)
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9075, 17);
			}
			else if (Global_79744)
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9075, 17);
			}
			else
			{
				if (Global_21445 == 1)
				{
					if (Global_21210)
					{
						func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_21210)
				{
					func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_9075, 17);
			}
			if (Global_79744)
			{
				Global_21202 = Global_21226;
				if (func_46() && BitTest(Global_9077, 9))
				{
					func_40(0);
				}
				func_150(Global_21203, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
				func_150(Global_21203, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21202), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_150(Global_21203, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_118(Global_21203, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9075, 17);
			if (BitTest(Global_9075, 20))
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21210)
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_21165)
				{
					func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_21221 == 1)
			{
				func_144();
				func_150(Global_21203, "SET_THEME", SYSTEM::TO_FLOAT(Global_114344.f_14055[Global_21222 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_22598)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22600);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_38("CELL_300");
					func_38("CELL_217");
					func_38("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_88(Global_8390, Global_21222) == 0)
				{
					func_118(Global_21203, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_120[Global_8390 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_118(Global_21203, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2241[Global_8390 /*29*/].f_3), &(Global_2241[Global_8390 /*29*/].f_7), "CELL_217", &(Global_2241[Global_8390 /*29*/].f_3), 0);
				}
				func_150(Global_21203, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22585 == 4 || Global_22585 == 3)
			{
				func_150(Global_21203, "SET_THEME", SYSTEM::TO_FLOAT(Global_114344.f_14055[Global_21222 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_144();
				if (Global_22598)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22600);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_38("CELL_300");
					func_38("CELL_219");
					func_38("CELL_219");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_22843)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_88(Global_8390, Global_21222) == 0)
					{
						func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_118(Global_21203, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_120[Global_8390 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_150(Global_21203, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_118(Global_21203, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2241[Global_8390 /*29*/].f_3), &(Global_2241[Global_8390 /*29*/].f_7), &cVar0, &(Global_2241[Global_8390 /*29*/].f_3), 0);
					}
				}
				func_150(Global_21203, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_86();
			break;
		
		default:
			break;
	}
}

void func_86()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21203))
	{
		func_87();
		if (Global_21221 == 1)
		{
			if (Global_21210)
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_22632)
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_9075, 20))
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21210)
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9075, 17);
		}
		else
		{
			func_118(Global_21203, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9075, 17);
			if (BitTest(Global_9075, 20))
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21210)
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_21165)
				{
					func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_87()
{
	if (Global_79744)
	{
		func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_9075, 17);
	}
}

int func_88(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2241[iParam0 /*29*/].f_24[iParam1];
}

void func_89()
{
	if (Global_22598)
	{
		if (Global_79744)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21203))
			{
				if (!MISC::IS_PC_VERSION())
				{
					func_118(Global_21203, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_2740054.f_1864), 15);
				}
			}
		}
	}
}

void func_90()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21203))
	{
		if (!Global_22593)
		{
			func_118(Global_21203, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_118(Global_21203, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9075, 17);
			if (BitTest(Global_9075, 20))
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21210)
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_21165)
				{
					func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_118(Global_21203, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_22598)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22600);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				func_38("CELL_300");
				func_38("CELL_219");
				func_38("CELL_219");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (func_88(Global_8390, Global_21222) == 0)
			{
				func_118(Global_21203, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_120[Global_8390 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_118(Global_21203, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2241[Global_8390 /*29*/].f_3), &(Global_2241[Global_8390 /*29*/].f_7), "CELL_219", &(Global_2241[Global_8390 /*29*/].f_3), 0);
			}
		}
		func_150(Global_21203, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_91()
{
	Global_21451 = 0;
	func_92();
}

void func_92()
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21221 == 1)
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23596 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22585 = 6;
		Global_21222.f_1 = Global_21224;
		return;
	}
}

int func_93(int iParam0, int iParam1, int iParam2)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(2)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_94()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_95(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79993, 0);
}

void func_96(int iParam0)
{
	if (func_98())
	{
		return;
	}
	if (Global_21444)
	{
		if (func_7())
		{
			func_5(1, 1);
		}
		else
		{
			func_5(0, 0);
		}
	}
	if (Global_21222.f_1 == 10 || Global_21222.f_1 == 9)
	{
		MISC::SET_BIT(&Global_9076, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22585 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_9075, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_9075, 30);
	}
	if (!func_97())
	{
		Global_21222.f_1 = 3;
	}
}

int func_97()
{
	if (Global_21222.f_1 == 1 || Global_21222.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_98()
{
	return BitTest(Global_1959772, 19);
}

void func_99()
{
	if (Global_21222.f_1 == 9 || Global_21222.f_1 == 10)
	{
		Global_22638 = 0;
		Global_22634 = 1;
	}
}

void func_100()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_115() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = 1;
		}
	}
	if (!Global_79744)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 1);
			if (Global_79744)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
			}
			else if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 1;
			}
			if (!Global_21165)
			{
				if (Global_8390 != 128)
				{
					if (iVar0 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
							}
							else
							{
								if (Global_79744)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
								MISC::SET_BIT(&Global_9075, 11);
								TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), true, 1);
							}
						}
					}
				}
			}
		}
	}
}

void func_101()
{
	if ((BitTest(Global_9075, 14) && Global_4546889 == 0) && Global_21162 == 0)
	{
		if (func_106())
		{
		}
		else
		{
			func_102();
		}
		if (Global_21222.f_1 == 9)
		{
			if (Global_22598 == 0)
			{
				iLocal_74 = 1;
			}
		}
	}
}

void func_102()
{
	struct<2> Var0;
	
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_21175[Global_21167 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_21162 = 1;
	}
}

void func_103()
{
	if ((BitTest(Global_9075, 14) && Global_4546889 == 0) && Global_21162 == 0)
	{
		if (iLocal_74 == 0)
		{
			if (BitTest(Global_9076, 26))
			{
				MISC::CLEAR_BIT(&Global_9076, 24);
				MISC::CLEAR_BIT(&Global_9076, 25);
				MISC::CLEAR_BIT(&Global_9076, 27);
				MISC::CLEAR_BIT(&Global_9076, 26);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						func_102();
					}
					else if (func_105() == 0)
					{
						func_102();
					}
				}
			}
		}
		if (Global_21222.f_1 == 10 || Global_21222.f_1 == 9)
		{
			if (func_105())
			{
				func_104();
			}
		}
		else if (func_106())
		{
		}
		else if (func_105())
		{
			func_104();
		}
		if (Global_21222.f_1 == 9)
		{
			if (Global_22598 == 0)
			{
				iLocal_74 = 1;
			}
		}
	}
}

void func_104()
{
	struct<2> Var0;
	
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_21168[Global_21167 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_4546889 = 1;
	}
}

int func_105()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_21222.f_1 == 10 || Global_21222.f_1 == 9)
		{
			if (Global_21165 == 0)
			{
				if (Global_8390 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (Global_22585 != 2)
						{
						}
					}
				}
			}
		}
		if (func_119(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || (PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(BitTest(Global_4718592.f_38, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1922251))))
		{
			return 0;
		}
		if (Global_113392)
		{
			return 0;
		}
	}
	if (Global_79744)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if ((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4546888 || iVar2 == 1)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_114344.f_14055.f_89)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_106()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_107(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (SCRIPT::DOES_SCRIPT_WITH_NAME_HASH_EXIST(Global_9082[iParam0 /*15*/].f_9) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9082[iParam0 /*15*/].f_9) > 0)
	{
		Stack.Push(Global_9082[iParam0 /*15*/].f_4 != iParam3);
		Call_Loc(iParam4);
		if ((StackVal && StackVal) && !BitTest(Global_9077, 9))
		{
			MISC::SET_BIT(&Global_9077, 9);
			Global_21202 = iParam3;
			Global_21226 = Global_21202;
		}
		else
		{
			Stack.Push(Global_9082[iParam1 /*15*/].f_4 == iParam2);
			Call_Loc(iParam4);
			if ((StackVal && !StackVal) && BitTest(Global_9077, 9))
			{
				MISC::CLEAR_BIT(&Global_9077, 9);
				Global_21202 = iParam2;
				Global_21226 = Global_21202;
			}
		}
	}
}

bool func_108()
{
	return (func_109() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}

bool func_109()
{
	return func_110(9539, -1);
}

bool func_110(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_111();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_111()
{
	return Global_1574927;
}

void func_112()
{
	if (!BitTest(Global_4546610, 24))
	{
		if (Global_21222.f_1 > 4)
		{
			MISC::SET_BIT(&Global_4546610, 24);
		}
	}
}

int func_113()
{
	if (((Global_9082[23 /*15*/].f_4 != 5 && func_108()) && !BitTest(Global_9077, 9)) || (Global_9082[23 /*15*/].f_4 == 5 && !func_108()))
	{
		return 1;
	}
	return 0;
}

void func_114()
{
	if (!Global_79744)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (BitTest(Global_9075, 11))
			{
				if (!Global_21165)
				{
					TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), false, 1);
				}
				if (Global_79744)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				}
				MISC::CLEAR_BIT(&Global_9075, 11);
			}
		}
	}
}

int func_115()
{
	int iVar0;
	int iVar1;
	
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_116(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_117()
{
	MOBILE::GET_MOBILE_PHONE_RENDER_ID(&iLocal_84);
	if (iLocal_84 == -1)
	{
	}
}

void func_118(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_38(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_38(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_38(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_38(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_38(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_119(int iParam0)
{
	return Global_44375 == iParam0;
}

void func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_23654 = 0;
	Global_9697 = iParam0;
	func_43();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_119(14))
		{
			while (iVar1 < 35)
			{
				if (iParam0 == Global_9082[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_9082[iVar1 /*15*/].f_4)
					{
						if (Global_9660[iVar0] == 0)
						{
							Global_9623[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_9076, 3))
								{
									iVar2 = 42;
									Global_21448 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21448 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&(Global_9082[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2696533)
							{
								if (iVar1 == 14)
								{
									func_118(Global_21203, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9082[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23648), -1f, &(Global_9082[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_9660[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 35)
			{
				if (iParam0 == Global_9082[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_9082[iVar1 /*15*/].f_4)
					{
						if (Global_9660[iVar0] == 0)
						{
							Global_9623[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_114344.f_14145[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_114344.f_14145[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_114344.f_14145[iVar3 /*104*/].f_99[Global_21222] == 1)
											{
												Global_23654++;
											}
										}
									}
									iVar3++;
								}
								func_118(Global_21203, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9082[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23654), -1f, &(Global_9082[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_79744)
								{
									iVar4 = 0;
									iVar4 = Global_4543039;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4543041[iVar5 /*296*/].f_24 != 0)
										{
											if (Global_4543041[iVar5 /*296*/].f_28 == 0)
											{
												if (Global_4543041[iVar5 /*296*/].f_291[Global_21222] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_118(Global_21203, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9082[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_9082[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_21222)
									{
										case 0:
											iVar6 = Global_45601;
											break;
										
										case 1:
											iVar6 = Global_45602;
											break;
										
										case 2:
											iVar6 = Global_45603;
											break;
										
										default:
											break;
									}
									func_118(Global_21203, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9082[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_9082[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_118(Global_21203, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9082[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23648), -1f, &(Global_9082[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&(Global_9082[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9081);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_9076, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&(Global_9082[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_9076, 3))
								{
									iVar8 = 42;
									Global_21448 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21448 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&(Global_9082[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&(Global_9082[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 24 && MISC::ARE_STRINGS_EQUAL(&(Global_9082[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_9076, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21203, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9082[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&(Global_9082[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_9082[iVar1 /*15*/].f_10 == 57 && iVar1 == 24)
							{
								iVar9 = 0;
								iVar9 = Global_1881764.f_1;
								func_118(Global_21203, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9082[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_9082[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_118(Global_21203, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9082[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_9082[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_9660[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_121()
{
	if (Global_79744 == 0)
	{
		Global_9082[14 /*15*/].f_4 = -99;
		Global_9082[4 /*15*/].f_4 = -99;
		if (Global_2696533)
		{
			if (func_119(14))
			{
				func_42(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_42(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_42(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_42(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_122()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		Global_9082[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_79744 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_123(iVar2, Global_21222) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_42(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_42(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_42(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_44375 == 15 && func_95(0) == 0) && Global_9080 == 0)
		{
			func_42(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21447 = 0;
			Global_9081 = 255;
		}
		else
		{
			func_42(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21447 = 1;
			Global_9081 = 42;
		}
		if (iVar1 == 1)
		{
			func_42(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_42(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_42(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_42(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_42(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_114344.f_14055.f_89 == 1)
		{
			func_42(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_114344.f_14055.f_88 == 1)
		{
			func_42(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_42(26, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_42(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_42(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_42(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_42(29, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_42(30, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_42(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_42(32, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_42(33, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_42(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_42(21, "CELL_37", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (func_108())
		{
			func_42(23, "CELL_HACKER_ROB", 5, "appHackerDen", 62, 1, 1, 0, 0);
		}
		else
		{
			func_42(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		}
		func_42(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_42(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_42(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_42(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_42(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		if (BitTest(Global_4546610, 4))
		{
			func_42(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_42(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_42(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_42(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_42(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_42(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_42(24, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_42(25, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_42(26, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_42(27, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_42(28, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_42(29, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_42(30, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_42(31, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_42(32, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_42(33, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_42(34, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!BitTest(Global_4546610, 4))
		{
			if (Global_1836183)
			{
				func_42(24, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4546610, 20))
			{
				func_42(24, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4546610, 22))
			{
				func_42(24, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4546610, 26))
			{
				if (func_159())
				{
					func_42(24, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
				}
				else
				{
					func_42(24, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
				}
			}
		}
		if ((((BitTest(Global_4546610, 4) == 0 && Global_1836183 == 0) && BitTest(Global_4546610, 20) == 0) && BitTest(Global_4546610, 22) == 0) && BitTest(Global_4546610, 26) == 0)
		{
			if (func_159())
			{
				func_42(24, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
			}
			else
			{
				func_42(24, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
			}
		}
	}
}

int func_123(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2241[iParam0 /*29*/].f_19[iParam1];
}

int func_124(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 1)
	{
	}
	if (iParam0 == 0)
	{
		if (func_128() == 0)
		{
			return 0;
		}
	}
	if (func_126(&iVar0) && MISC::GET_PROFILE_SETTING(903) == 1)
	{
		return 1;
	}
	if (!func_126(&iVar0))
	{
		if (iVar0 == 6)
		{
			return 1;
		}
		else if (iVar0 == 7)
		{
			return 1;
		}
		else if (iVar0 == 8)
		{
			return 1;
		}
		else if (iVar0 == 10)
		{
			return 1;
		}
		else if (iVar0 == 12)
		{
			return 1;
		}
		else if (iVar0 == 13)
		{
			return 1;
		}
		else if (iVar0 == 11)
		{
			return 1;
		}
		else if (func_125(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 22:
		case 23:
		case 24:
			return 1;
			break;
	}
	return 0;
}

bool func_126(int* iParam0)
{
	if (func_127())
	{
		*iParam0 = 11;
		return 1;
	}
	return NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(iParam0);
}

bool func_127()
{
	return Global_33559;
}

int func_128()
{
	if (func_129())
	{
		if (!NETWORK::NETWORK_IS_NP_AVAILABLE())
		{
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 4)
			{
				return 0;
			}
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 2)
			{
				return 0;
			}
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 1)
			{
				return 0;
			}
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_129()
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

void func_130()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iLocal_113 = ZONE::GET_ZONE_SCUMMINESS(ZONE::GET_ZONE_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));
	}
	switch (iLocal_113)
	{
		case 0:
			iLocal_88 = 5;
			break;
		
		case 1:
			iLocal_88 = 5;
			break;
		
		case 2:
			iLocal_88 = 4;
			break;
		
		case 3:
			iLocal_88 = 4;
			break;
		
		case 4:
			iLocal_88 = 3;
			break;
		
		case 5:
			iLocal_88 = 2;
			break;
		
		default:
			iLocal_88 = 3;
			break;
	}
	iLocal_114 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	if (iLocal_114 < 2)
	{
		if (iLocal_88 > 2)
		{
			iLocal_88 = (iLocal_88 - 1);
		}
	}
	if (iLocal_115 == 1 || func_131())
	{
		iLocal_88 = 0;
	}
	func_150(Global_21203, "SET_PROVIDER_ICON", SYSTEM::TO_FLOAT(iLocal_87), SYSTEM::TO_FLOAT(iLocal_88), -1082130432, -1082130432, -1082130432);
}

int func_131()
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		bVar0 = func_137();
		if (func_136(bVar0))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			iVar4 = 0;
			while (iVar4 < Global_114344.f_7692.f_136)
			{
				if (BitTest(Global_114344.f_7692[iVar4 /*15*/].f_2, bVar0))
				{
					if (func_134(Var1, func_135(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_114344.f_7692.f_764)
			{
				if (BitTest(Global_114344.f_7692.f_651[iVar4 /*14*/].f_2, bVar0))
				{
					if (func_134(Var1, func_133(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_114344.f_7692.f_866)
			{
				if (BitTest(Global_114344.f_7692.f_765[iVar4 /*10*/].f_2, bVar0))
				{
					if (func_134(Var1, func_132(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
		}
	}
	return 0;
}

int func_132(int iParam0)
{
	return Global_114344.f_7692.f_765[iParam0 /*10*/].f_7;
}

int func_133(int iParam0)
{
	return Global_114344.f_7692.f_651[iParam0 /*14*/].f_7;
}

int func_134(struct<3> Param0, int iParam3)
{
	if (iParam3 != -1)
	{
		if (iParam3 >= Global_44376)
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Param0, Global_44376[iParam3 /*5*/]) <= (Global_44376[iParam3 /*5*/].f_3 * Global_44376[iParam3 /*5*/].f_3))
		{
			return 1;
		}
		else if (Global_44376[iParam3 /*5*/].f_4 != -1)
		{
			return func_134(Param0, Global_44376[iParam3 /*5*/].f_4);
		}
	}
	return 0;
}

int func_135(int iParam0)
{
	return Global_114344.f_7692[iParam0 /*15*/].f_7;
}

bool func_136(int iParam0)
{
	return iParam0 < 3;
}

var func_137()
{
	func_138();
	return Global_114344.f_2367.f_539.f_4321;
}

void func_138()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_140(Global_114344.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_139(PLAYER::PLAYER_PED_ID());
			if (func_136(iVar0) && (!func_119(14) || Global_113292))
			{
				if (Global_114344.f_2367.f_539.f_4321 != iVar0 && func_136(Global_114344.f_2367.f_539.f_4321))
				{
					Global_114344.f_2367.f_539.f_4322 = Global_114344.f_2367.f_539.f_4321;
				}
				Global_114344.f_2367.f_539.f_4323 = iVar0;
				Global_114344.f_2367.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114344.f_2367.f_539.f_4321 != 145)
			{
				Global_114344.f_2367.f_539.f_4323 = Global_114344.f_2367.f_539.f_4321;
			}
			return;
		}
	}
	Global_114344.f_2367.f_539.f_4321 = 145;
}

int func_139(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_140(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_140(int iParam0)
{
	if (func_136(iParam0))
	{
		return func_141(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_141(int iParam0)
{
	return Global_2241[iParam0 /*29*/];
}

int func_142()
{
	func_160();
	return Global_114344.f_14055[Global_21222 /*20*/].f_8;
}

struct<13> func_143(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_144()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_21222 == 0)
		{
			switch (Global_114344.f_14055[Global_21222 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_21222 == 1)
		{
			switch (Global_114344.f_14055[Global_21222 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_21222 == 2)
		{
			switch (Global_114344.f_14055[Global_21222 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_21222 == 3)
		{
			switch (Global_4546886)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

int func_145(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 15525)
	{
		iVar0 = func_146(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_146(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_147(uParam1));
}

int func_147(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_111();
		if (iVar1 > -1)
		{
			Global_2752197 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2752197 = 1;
		}
	}
	return iVar0;
}

void func_148()
{
	if (func_119(14))
	{
		if (Global_2696533)
		{
			if (Global_21222.f_1 == 6)
			{
				if (Global_21202 == 7)
				{
					func_150(Global_21203, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(7), -1082130432, -1082130432, -1082130432);
				}
				else
				{
					Global_21202 = 6;
					func_150(Global_21203, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
				}
			}
		}
		else if (Global_21222.f_1 == 6)
		{
			func_150(Global_21203, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
	}
	iLocal_90 = CLOCK::GET_CLOCK_MINUTES();
	if (iLocal_90 != Global_9078)
	{
		Global_9078 = iLocal_90;
		iLocal_89 = CLOCK::GET_CLOCK_HOURS();
		iLocal_91 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
		switch (iLocal_91)
		{
			case 0:
				StringCopy(&Local_92, "CELL_920", 16);
				break;
			
			case 1:
				StringCopy(&Local_92, "CELL_921", 16);
				break;
			
			case 2:
				StringCopy(&Local_92, "CELL_922", 16);
				break;
			
			case 3:
				StringCopy(&Local_92, "CELL_923", 16);
				break;
			
			case 4:
				StringCopy(&Local_92, "CELL_924", 16);
				break;
			
			case 5:
				StringCopy(&Local_92, "CELL_925", 16);
				break;
			
			case 6:
				StringCopy(&Local_92, "CELL_926", 16);
				break;
			
			default:
				StringCopy(&Local_92, "CELL_206", 16);
				break;
		}
		func_118(Global_21203, "SET_TITLEBAR_TIME", SYSTEM::TO_FLOAT(iLocal_89), SYSTEM::TO_FLOAT(iLocal_90), -1f, -1f, -1f, &Local_92, 0, 0, 0, 0);
		if (Global_21165 == 0)
		{
			func_130();
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			iLocal_98 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
		}
	}
}

void func_149()
{
	if (Global_79744)
	{
		StringCopy(&Global_21211, "Phone_SoundSet_Default", 24);
		MOBILE::CREATE_MOBILE_PHONE(0);
	}
	else if (Global_21165)
	{
		MOBILE::CREATE_MOBILE_PHONE(4);
		StringCopy(&Global_21211, "Phone_SoundSet_Prologue", 24);
	}
	else
	{
		switch (Global_21222)
		{
			case 0:
				StringCopy(&Global_21211, "Phone_SoundSet_Michael", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			
			case 2:
				StringCopy(&Global_21211, "Phone_SoundSet_Trevor", 24);
				MOBILE::CREATE_MOBILE_PHONE(1);
				break;
			
			case 1:
				StringCopy(&Global_21211, "Phone_SoundSet_Franklin", 24);
				MOBILE::CREATE_MOBILE_PHONE(2);
				break;
			
			default:
				StringCopy(&Global_21211, "Phone_SoundSet_Default", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			}
	}
	Global_21185 = { -90f, -130f, 0f };
	if (GRAPHICS::GET_IS_HIDEF())
	{
		Global_21167 = 0;
		Global_21168[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -158.8f), -113f };
		Global_21175[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -53.3f), -113f };
	}
	else
	{
		Global_21167 = 0;
		Global_21168[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -121.8f), -91.5f };
		Global_21175[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -35.3f), -91.5f };
	}
	Global_21150 = { Global_21168[Global_21167 /*3*/] };
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_21168[Global_21167 /*3*/]);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_21185, 0);
	Global_21162 = 1;
}

void func_150(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_151()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_152()
{
	Global_2747205.f_1 = 0;
	Global_2747205 = 0;
	Global_2747205.f_2 = 0;
	Global_2747205.f_33 = -1;
	Global_2747205.f_34 = -1;
	StringCopy(&(Global_2747205.f_4), "", 64);
	StringCopy(&(Global_2747205.f_39[0 /*16*/]), "", 64);
	Global_2747205.f_38 = 0;
	Global_2747205.f_56 = 0;
	Global_2747205.f_57 = 0;
	Global_2747205.f_58 = -2;
	Global_2747205.f_3 = 0;
	func_153(&(Global_2747205.f_20));
}

void func_153(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_154()
{
	Global_2747205.f_2 = 1;
	Global_2747205.f_38 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2747205 = 0;
			Global_2747205.f_2 = 0;
		}
		else if (func_155(Global_2747205.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2747205.f_20)))
			{
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2747205.f_20)))
				{
					func_152();
				}
			}
		}
		else
		{
			func_152();
		}
	}
	else
	{
		func_152();
	}
	if (Global_2747205.f_37)
	{
		func_96(0);
	}
	Global_2747205.f_37 = 0;
	Global_2747205.f_3 = 0;
}

bool func_155(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_156()
{
	Global_21451 = 0;
	func_10();
}

void func_157(int iParam0, char* sParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_158()
{
	PAD::SET_INPUT_EXCLUSIVE(0, Global_21191);
	PAD::DISABLE_CONTROL_ACTION(0, 70, true);
	PAD::DISABLE_CONTROL_ACTION(0, 69, true);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_21191);
		PAD::SET_INPUT_EXCLUSIVE(0, Global_21192);
		PAD::DISABLE_CONTROL_ACTION(0, 24, true);
		PAD::DISABLE_CONTROL_ACTION(0, 257, true);
	}
	if (Global_79744)
	{
		Global_114344.f_14055[3 /*20*/].f_10 = func_145(1198, -1);
	}
	if (MISC::IS_PC_VERSION())
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
		{
		}
		else if (((MISC::GET_GAME_TIMER() - iLocal_116) >= 300 || iLocal_116 == 0) || iLocal_116 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_CONTROL_SHAKE(0, 100, 100);
			iLocal_116 = MISC::GET_GAME_TIMER();
		}
	}
	else if (Global_114344.f_14055[Global_21222 /*20*/].f_10 == 1)
	{
		if (((MISC::GET_GAME_TIMER() - iLocal_116) >= 300 || iLocal_116 == 0) || iLocal_116 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_CONTROL_SHAKE(0, 100, 100);
			iLocal_116 = MISC::GET_GAME_TIMER();
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_79744)
			{
				if (!MISC::ARE_STRINGS_EQUAL(&(Global_9897[3 /*2811*/][1 /*281*/].f_144[func_145(1199, -1) /*6*/]), "Silent Ringtone Dummy"))
				{
					AUDIO::PLAY_PED_RINGTONE(&(Global_9897[3 /*2811*/][1 /*281*/].f_144[func_145(1199, -1) /*6*/]), PLAYER::PLAYER_PED_ID(), true);
				}
			}
			else if (!MISC::ARE_STRINGS_EQUAL(&(Global_114344.f_14055[Global_21222 /*20*/].f_11), "Silent Ringtone Dummy"))
			{
				if (!Global_9897[Global_21222 /*2811*/][0 /*281*/].f_259 == 1)
				{
					if (MISC::IS_PC_VERSION())
					{
						if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_114344.f_14055[Global_21222 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
						}
					}
					else
					{
						AUDIO::PLAY_PED_RINGTONE(&(Global_114344.f_14055[Global_21222 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
					}
				}
			}
		}
	}
}

int func_159()
{
	if (Global_79744)
	{
		if (Global_1836590 || Global_1836591 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_160()
{
	if (func_119(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114344.f_28055[0 /*29*/])
			{
				Global_21222 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114344.f_28055[1 /*29*/])
			{
				Global_21222 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114344.f_28055[2 /*29*/])
			{
				Global_21222 = 2;
			}
			else
			{
				Global_21222 = 0;
			}
		}
	}
	else
	{
		Global_21222 = func_137();
		if (Global_21222 == 145)
		{
			Global_21222 = 3;
		}
		if (Global_79744)
		{
			Global_21222 = 3;
		}
		if (Global_21222 > 3)
		{
			Global_21222 = 3;
		}
	}
}


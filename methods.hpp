#ifndef __METHODS_HPP_
#define __METHODS_HPP_

{"saveposition_initclient", gsc_saveposition_initclient, 0},
{"saveposition_save", gsc_saveposition_save, 0},
{"saveposition_selectwithoutflag", gsc_saveposition_selectwithoutflag, 0},
{"saveposition_selectsave", gsc_saveposition_selectsave, 0},
{"saveposition_getangles", gsc_saveposition_getangles, 0},
{"saveposition_getorigin", gsc_saveposition_getorigin, 0},
{"saveposition_getgroundentity", gsc_saveposition_getgroundentity, 0},
{"saveposition_getfpsmode", gsc_saveposition_getfpsmode, 0},
{"saveposition_getsavenum", gsc_saveposition_getsavenum, 0},
#ifndef COD4 // CoD4 actually has these functions
{"setactionslot", Gsc_Utils_Void, 0},
{"setperk", Gsc_Utils_Void, 0},
{"allowelevate", Gsc_Utils_Void, 0},
{"setweaponammoclip", Gsc_Player_setWeaponAmmoClip, 0},
{"getuserinfo", gsc_player_get_userinfo, 0},
{"sprintButtonPressed", Gsc_Utils_ZeroInt, 0},
{"player_onconnect", Gsc_Utils_Void, 0},
{"issprinting", Gsc_Utils_ZeroInt, 0},
{"followplayer", Gsc_Utils_Void, 0},
#else
#endif
{"jumpclearstateextended", Gsc_Player_JumpClearStateExtended, 0},
{"setoriginandangles", Gsc_Player_setOriginandAngles, 0},
{"getgroundentity", Gsc_Player_GetGroundEntity, 0},
{"getjumpslowdowntimer", Gsc_player_GetJumpSlowdownTimer, 0},
{"saveposition_getexplosivejumps", gsc_saveposition_getexplosivejumps, 0},
{"saveposition_getdoubleexplosives", gsc_saveposition_getdoubleexplosives, 0},
{"saveposition_getcheckpointid", gsc_saveposition_getcheckpointid, 0},
{"saveposition_getflags", gsc_saveposition_getflags, 0},
{"isthinking", Gsc_Utils_IsEntityThinking, 0},
{"SV_GameSendServerCommand", Gsc_Player_SV_GameSendServerCommand, 0},
{"clearfpsfilter", Gsc_Player_ClearFPSFilter, 0},
{"addplayertohidelist", Gsc_Vis_AddPlayerToHideList, 0},
{"removeplayerfromhidelist", Gsc_Vis_RemovePlayerFromHideList, 0},
{"hideforall", Gsc_Vis_HideForAll, 0},
{"sethideradius", Gsc_Vis_SetHideRadius, 0},
{"sethidemodenone", Gsc_Vis_SetHideModeNone, 0},
{"sethidemodeall", Gsc_Vis_SetHideModeAll, 0},
{"sethidemodenear", Gsc_Vis_SetHideModeNear, 0},
{"initvisibility", Gsc_Vis_InitVisibility, 0},
{"hidefromplayer", Gsc_Vis_HideFromPlayer, 0},
{"showtoallplayers", Gsc_Vis_ShowToAllPlayers, 0},

{"selectPlaybackDemo", Gsc_Demo_SelectPlaybackDemo, 0},
{"readPlaybackFrame_origin", Gsc_Demo_ReadFrame_Origin, 0},
{"readPlaybackFrame_angles", Gsc_Demo_ReadFrame_Angles, 0},
{"readPlaybackFrame_savenow", Gsc_Demo_ReadFrame_SaveNow, 0},
{"readPlaybackFrame_loadnow", Gsc_Demo_ReadFrame_LoadNow, 0},
{"readPlaybackFrame_rpgnow", Gsc_Demo_ReadFrame_RPGNow, 0},
{"readPlaybackFrame_flags", Gsc_Demo_ReadFrame_Flags, 0},
{"readPlaybackFrame_FPS", Gsc_Demo_ReadFrame_FPS, 0},
{"skipPlaybackFrames", Gsc_Demo_SkipFrame, 0},
{"skipPlaybackKeyFrames", Gsc_Demo_SkipKeyFrame, 0},
{"nextPlaybackFrame", Gsc_Demo_NextFrame, 0},
{"prevPlaybackFrame", Gsc_Demo_PrevFrame, 0},
{"nextPlaybackKeyFrame", Gsc_Demo_ReadFrame_NextKeyFrame, 0},
{"prevPlaybackKeyFrame", Gsc_Demo_ReadFrame_PrevKeyFrame, 0},



#endif // __METHODS_HPP_

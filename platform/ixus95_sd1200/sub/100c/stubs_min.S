#include "stubs_asm.h"

DEF(physw_status, 0xE238) // 0xFF8219DC ShowPhySwStatus
			//0xE23C or 0xE248
			
DEF(physw_run, 0x1c34) // 0x1C1C + 0xC @0xFF821894 task_PhySw SD990
			// 0x1C28 + 0xC @ 0xFF821A3C SD780
			
DEF(FlashParamsTable,0xFFB2E6AC) // sub_FFA58670, search for ParameterManager.c
				// sub_FFA$A620 SD780
				
DEF(zoom_busy, 0x5A3C)  // 0x8A08 + 0x14, found in sub_FF93368 search on "ZoomLens" OK
			// 0x5A28 + 0x14  found in sub_FF9165F0 search on "aZoomlens" OK
			
DEF(focus_busy, 0x5938) //  0x890C + 0x8, via _sub_FF92E770__FocusLensController_c__201 and comparison to s5is OK
			//  0x5930 + 0x8, via _sub_FF9115C8__FocusLensController.c__201
			
DEF(canon_menu_active,0x2CA0) // 0x582C+4, StartRecModeMenu OK      
				// 0x2C9C + 4 look for EraseAllMenu
				
				
DEF(canon_shoot_menu_active,0x6E29)   // 0xA350+1, search on "AC:StartShutTimer", similar to a720 OK
					//sub_FF973928 sd990 vs sub_FF953AA8 sd780 
					//0x6E28+1 (1 is assumed)
					
DEF(recreview_hold, 0x6C10) // 0x9FDC + 0xC4 sub_FF9659B4, via search on int 0x3007, similar to s5 101b. Doesn't appear to work.
			    // 0x6B4C + 0xC4 sub_FF946A18, via search on int 0x3007 SD780



DEF(movie_status, 0x5B74)  // 0x53A0 + 0x3C via  loc_FF861EAC and _sub_FF860E64__MovieRecorder_c__0 OK
			   // 0x5AD8 + 0x9C ???



DEF(some_flag_for_af_scan, 0x6068) // search on "SsPrepareSeq.c", refs at FF93BF9C similar to a720 OK
					//0x6068 SD780 ff85dd44
DEF(zoom_status, 0xAC68) // sub_FFA599D4, search on ZoomCon_EnterCaptModeChange OK, NOTE may have more values than other cams ?
			// 0xAC68 look for BackupWrapper.c scrolldown 
			
DEF(some_f_for_dng, 0xDEAD) // TODO NOT FOUND!
DEF(second_ext_for_dng, 0xDEAD) // TODO NOT FOUND!

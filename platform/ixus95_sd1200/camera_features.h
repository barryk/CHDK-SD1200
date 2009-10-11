    #define CAM_PROPSET                  2 
    #define CAM_DRYOS                    1

    #define CAM_RAW_ROWPIX               3720
    #define CAM_RAW_ROWS                 2772

    #define  CAM_USE_ZOOM_FOR_MF         1
    #undef   CAM_HAS_ERASE_BUTTON
    #define  CAM_MULTIPART               1
    #undef   CAM_HAS_IRIS_DIAPHRAGM
    #define  CAM_HAS_ND_FILTER           1
    #define  CAM_HAS_MANUAL_FOCUS		 1
    #define  CAM_HAS_USER_TV_MODES		 1 
    #define  CAM_SHOW_OSD_IN_SHOOT_MENU  1
    #define  CAM_CHDK_HAS_EXT_VIDEO_MENU 1
    #undef   CAM_VIDEO_CONTROL
    #undef   CAM_UNCACHED_BIT            // shut up compiler
    #define  CAM_UNCACHED_BIT            0x40000000
    #undef   CAM_BITMAP_PALETTE
    #define  CAM_BITMAP_PALETTE          2

	#undef   CAM_BLACK_LEVEL
    #define  CAM_BLACK_LEVEL             127
    #define  CAM_HAS_JOGDIAL             1
//    #define CAM_AF_SCAN_DURING_VIDEO_RECORD 1
    #define  CAM_VIDEO_QUALITY_ONLY          1  
    #define  CAM_CAN_UNLOCK_OPTICAL_ZOOM_IN_VIDEO 1
	#undef   CAM_SENSOR_BITS_PER_PIXEL
    #define  CAM_SENSOR_BITS_PER_PIXEL   12
	#undef   CAM_WHITE_LEVEL
    #define  CAM_WHITE_LEVEL             ((1<<CAM_SENSOR_BITS_PER_PIXEL)-1)

    #define  DNG_SUPPORT                 1
    // pattern
    #define  cam_CFAPattern 0x01000201 // Green  Blue  Red  Green
    // color preliminary
    // Stole this from sd990 VERIFY_SD1200
    #define  CAM_COLORMATRIX1                             \
      837237, 1000000, -290137, 1000000, -128156, 1000000, \
      -127762, 1000000, 643909, 1000000,  52973,  1000000, \
      4446,  1000000, 88354,   1000000,  224246, 1000000
    
    #define  cam_CalibrationIlluminant1 1 // Daylight
    // cropping 
    #define  CAM_JPEG_WIDTH  3648
    #define  CAM_JPEG_HEIGHT 2736
    #define  CAM_ACTIVE_AREA_X1 12
    #define  CAM_ACTIVE_AREA_Y1 12
    #define  CAM_ACTIVE_AREA_X2 3648
    #define  CAM_ACTIVE_AREA_Y2 2736
    // camera name
    #define PARAM_CAMERA_NAME 4 // parameter number for GetParameterData

    #undef CAM_USES_ASPECT_CORRECTION
    #undef CAM_USES_ASPECT_YCORRECTION

    #define CAM_USES_ASPECT_CORRECTION 1
    #define CAM_USES_ASPECT_YCORRECTION 0
    
    #undef ASPECT_XCORRECTION
    #define ASPECT_XCORRECTION(x)  ( ( ((x)<<3) + (x) )  >>2 )
    //correction x*screen_buffer_width/screen_width =
    // x*720/320 = x*9/4 = (x<<3 + x)>>2

    #undef ASPECT_GRID_XCORRECTION
    #define ASPECT_GRID_XCORRECTION(x)  ( ((x)<<3)/9  )  //grids are designed on a 360x240 basis and screen is 320x240, we need x*320/360=x*8/9
    #undef ASPECT_GRID_YCORRECTION
    #define ASPECT_GRID_YCORRECTION(y)  ( (y) )       //y correction for grids  made on a 360x240 As the buffer is 720x240 we have no correction here.

     #undef ASPECT_VIEWPORT_XCORRECTION 
    #define ASPECT_VIEWPORT_XCORRECTION(x) ASPECT_GRID_XCORRECTION(x) //viewport is 360x240 and screen 320x240, we need x*320/360=x*8/9, equal than grids, used by edgeoverlay
    #undef ASPECT_VIEWPORT_YCORRECTION 
    #define ASPECT_VIEWPORT_YCORRECTION(y) ( (y) ) 
//    #undef EDGE_HMARGIN 
//    #define EDGE_HMARGIN 20

    //games mappings
    // renamed GAMES_SCREEN_WIDTH / GAMES_SCREEN_HEIGHT
   #undef GAMES_SCREEN_WIDTH
   #undef GAMES_SCREEN_HEIGHT
   #define GAMES_SCREEN_WIDTH 360
   #define GAMES_SCREEN_HEIGHT 240
   #undef ASPECT_GAMES_XCORRECTION
   // 720/360=2 same aspect than grids and viewport but another approach: there is a lot of corrections to do in game's code, and we decide to paint directly on display buffer wirh another resolution
   // used by gui.c that configures the draw environment (trhough new draw_gui function) depending on gui_mode: we have then 360x240 for games (but deformed output:circles are not circles) and 320x240 for
   // other modes in perfect aspect ratio 4/3: slightly better visualization: file menus more readable, ...
   #define ASPECT_GAMES_XCORRECTION(x)   ( ((x)<<1) )  
   #undef ASPECT_GAMES_YCORRECTION
   #define ASPECT_GAMES_YCORRECTION(y)   ( (y) )  //none

   //zebra letterbox for saving memory
   #undef ZEBRA_HMARGIN0
   #define ZEBRA_HMARGIN0  30 //this 30 rows are not used by the display buffer is 720x240 effective, no 960x270, i.e. (270-240) reduction in widht possible but not done (more difficult to manage it and slower).



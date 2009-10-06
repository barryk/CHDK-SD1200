    #define CAM_PROPSET                  2 
    #define CAM_DRYOS                    1

    #define CAM_RAW_ROWPIX               3648 // SD1200 10MP @ 12 bpp
    #define CAM_RAW_ROWS                 2736

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

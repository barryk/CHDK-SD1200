#include "stubs_asm.h"
NHSTUB(ExitFromCompensationEVF, 0xFF8279F8)
NHSTUB(kbd_read_keys, 0xFF8230CC)
NHSTUB(kbd_read_keys_r2, 0xFF848DC8)
NHSTUB(kbd_pwr_off, 0xFF810958) // nullsub
NHSTUB(kbd_pwr_on, 0xFF810958) // nullsub
NHSTUB(Mount_FileSystem, 0xFF810958) // nullsub
NHSTUB(Unmount_FileSystem, 0xFF810958) // nullsub
NHSTUB(SetZoomActuatorSpeedPercent, 0xFF810958) // nullsub
NHSTUB(PT_PlaySound, 0xFF866454) 
NHSTUB(rewinddir, 0xFF810958) // nullsub
NHSTUB(DoAFLock, 0xff8275cc)
NHSTUB(UnlockAF, 0xff827638)
NHSTUB(MakeAFScan,  0xFFA449F8)
NHSTUB(PostLEDMessage, 0xFF848910) 
NHSTUB(ExpCtrlTool_StartContiAE, 0xFF835600) 
NHSTUB(GetKbdState, 0xFF849300)
NHSTUB(UnsetZoomForMovie, 0xFF95D048)
NHSTUB(GiveSemaphore, 0xFF81BA5C)
NSTUB(PutInNdFilter, 0xFFA0C578)
NSTUB(PutOutNdFilter, 0xFFA0C5B0)
NHSTUB(WriteSDCard, 0xFF928D00)

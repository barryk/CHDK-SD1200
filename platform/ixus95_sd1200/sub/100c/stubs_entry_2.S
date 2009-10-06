#include "stubs_asm.h"
// not found correctly by finsig

//Autofound Required!
NHSTUB(TurnOnBackLight,0xFFC68A90)	//"TurnOnBackLight" string
NHSTUB(TurnOffBackLight,0xFFC68AA8)	//"TurnOffBackLight" string

NHSTUB(EnterToCompensationEVF,0xFFC15348)	//Look for ExpOn
NHSTUB(ExitFromCompensationEVF,0xFFC1538C)	//Look for ExpOff

NHSTUB(GetCurrentTargetDistance, 0xFFCCA6B4) // Sub uses "Error GetTargetDistanceResult"

NHSTUB(VbattGet,0xFFC10644) // string, eventproc

NHSTUB(vsprintf, 0xFFC0CBA0) // via eventproc_export_CPrintf (call before aCprintfSizeOve)

NHSTUB(PostLogicalEventForNotPowerType, 0xFFC5D1F8) // string "PostLogicalEventForNotPowerType"
NHSTUB(PT_PlaySound, 0xFFC47A78)
    /* Similar to SD780. They said look for "LDRH R0, [R0]"
     * Followed by LDR R1, [R1]. (True, but hard to search like that).
     * I found by looking for "%Y/%m/%d %H:%M:%S" in the function _prior_ to this
     */

NHSTUB(GetOpticalTemperature, 0xFFC33940) // Similar to SD780, which is also not certain.
    // References Temperature.c and near GetBatteryTemperature

NHSTUB(UnsetZoomForMovie, 0xFFD21B70) // string "ZoomCon_UnsetZoomForMovie"

NHSTUB(LEDDrive, 0xFFC3043C) // string "LEDDrive"
NHSTUB(OpLog_Get, 0xFFC58590) // IDA eventproc_export_OpLog.Get
NHSTUB(WriteSDCard, 0xFFCE4118) // Similar to SD990, searched SdCon.c
NHSTUB(DoAFLock, 0xFFC47B8C) // Similar to SD990, AFL and AFL* strings
NHSTUB(UnlockAF, 0xFFC47B9C) // Similar to SD990, AFUL and AFUL* strings

NHSTUB(PutInNdFilter, 0xFFC00950) // String TurnOnNdFilter at 0xFFDEAD54 but I don't think it's right
NHSTUB(PutOutNdFilter, 0xFFC00950) 

NHSTUB(kbd_p2_f, 0xFFC116B0) // Similar to SD780, PhySw+1C
NHSTUB(kbd_read_keys, 0xFFC11D80)
    // Look for LDR R0, =YYYY then BL GetKbdState then LDR R0, =YYYY
NHSTUB(strchr, 0xFFC6CAD4) // Similar to SD780. AND R2, R1, #0xFF then LDRB R1, [R0]

NHSTUB(RefreshPhysicalScreen, 0xFFC00950) // Unknown. nullsub for now
NHSTUB(kbd_pwr_off, 0xFFC00950) // Unknown. nullsub for now
NHSTUB(kbd_pwr_on, 0xFFC00950) // Unknown. nullsub for now
NHSTUB(ScreenLock, 0xFFC00950) // Unknown. nullsub for now
NHSTUB(ScreenUnLock, 0xFFC00950) // Unknown. nullsub for now

NHSTUB(GetDrive_ClusterSize, 0xFFC00950) // Unknown. nullsub for now
NHSTUB(GetDrive_FreeClusters, 0xFFC00950) // Unknown. nullsub for now
NHSTUB(GetDrive_TotalClusters, 0xFFC00950) // Unknown. nullsub for now

// Don't exist in dryos
NHSTUB(Mount_FileSystem, 0xFC00950) // NULLSUB
NHSTUB(Unmount_FileSystem, 0xFC00950) // NULLSUB
NHSTUB(rewinddir, 0xFC00950) // NULLSUB
NHSTUB(SetZoomActuatorSpeedPercent, 0xFC00950) // NULLSUB
#include "typedefs.h"
#include "rtwtypes.h"
#include "DRV/USB_HAL.h"
#include "FlashData.h"
#include "TBRe_Mod.h"
#include "TBRe_Mod_private.h"

uint8_T Gearing_Ratio = 3 ;
uint8_T Wheel_Size = 450 ;
uint16_T Brake1_High = 1715 ;
uint16_T Brake2_High = 1470 ;
uint16_T Throttle1_High = 4520 ;
uint16_T Throttle2_High = 4420 ;
uint16_T Brake1_Low = 500 ;
uint16_T Brake2_Low = 500 ;
uint16_T Throttle1_Low = 520 ;
uint16_T Throttle2_Low = 450 ;
uint8_T Max_Torque_Std = 140 ;
uint16_T Green_TSAL2 = 12000 ;
uint16_T Green_TSAL1 = 0 ;
uint8_T Max_Torque_Boost = 240 ;
boolean_T MCU_Ignition = 1 ;
uint16_T LV_Low_Voltage_Warning = 25000 ;
uint16_T MCUMotor_Temp_Warning = 60 ;
real32_T Target_Slip_Ratio = 0.15 ;
uint8_T TC_P_Gain = 1000 ;
uint8_T MinTC_Torque = 20 ;
uint8_T Max_Regen = 30 ;
uint8_T Throttle_Active_Threshold = 5 ;
uint8_T Brake_Active_Threshold = 10 ;
int16_T INV_Torque_limit = 200 ;
int16_T INV_Speed_Limit_Fwd = 5000 ;
int16_T INV_Speed_limit_Rev = -5000 ;
int16_T INV_DC_Link_Target = 250 ;
int16_T INV_DC_Link_Regen_Imax = -20 ;
int16_T INV_DC_Link_Discharge_Imax = 300 ;
int16_T INV_Regen_Torque_Limit = -10 ;
int16_T INV_Id_Debug = 0 ;
int16_T INV_Iq_debug = 0 ;
boolean_T Init_System_Start = 1 ;
boolean_T Init_System_end = 0 ;
int8_T Brake1_Pressure_Scaling = 14.3 ;
real32_T Motor_To_Road_Speed_Ratio = 0.02872 ;
int8_T Brake2_Pressure_Scaling = 14.3 ;
int8_T Regen_Coast = -10 ;
uint16_T Brk1_OOR_High = 4500 ;
uint16_T Brk1_OOR_Low = 250 ;
uint16_T Brk2_OOR_High = 4500 ;
uint16_T Brk2_OOR_Low = 250 ;

#undef LIBVERSION
#define LIBVERSION                     "4.1.2"
#if __GNUC__ == 4

__attribute__ ((section(".sdata2")))
#endif
  const unsigned char sModelVersion[8] = LIBVERSION;
const unsigned char sIncrementalVersion[10] = "1.4";
const unsigned char sModelName[50] = "TBRe_Mod";
const unsigned char sModelDescription[256] = "Config description";
const unsigned char sModelDate[21] = __DATE__ " " __TIME__;
const t_USBTabRx tab_rx_usb[] = {

#include "tab_rx_usb.h"

  { 0, 0, 0, 0 }
};

const U16 tab_rx_usb_size = sizeof(tab_rx_usb)/sizeof(tab_rx_usb[0])-1;
void FlashData_Init(void)
{
}

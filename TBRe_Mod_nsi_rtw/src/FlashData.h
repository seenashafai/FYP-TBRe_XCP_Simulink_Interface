#ifndef RTW_HEADER_FlashData_h_
#define RTW_HEADER_FlashData_h_
#define _SAVEDRAM_                     __attribute__ ((section(".dataSavedRam")))

extern _SAVEDRAM_ uint8_T Gearing_Ratio;
extern _SAVEDRAM_ uint8_T Wheel_Size;
extern _SAVEDRAM_ uint16_T Brake1_High;
extern _SAVEDRAM_ uint16_T Brake2_High;
extern _SAVEDRAM_ uint16_T Throttle1_High;
extern _SAVEDRAM_ uint16_T Throttle2_High;
extern _SAVEDRAM_ uint16_T Brake1_Low;
extern _SAVEDRAM_ uint16_T Brake2_Low;
extern _SAVEDRAM_ uint16_T Throttle1_Low;
extern _SAVEDRAM_ uint16_T Throttle2_Low;
extern _SAVEDRAM_ uint8_T Max_Torque_Std;
extern _SAVEDRAM_ uint16_T Green_TSAL2;
extern _SAVEDRAM_ uint16_T Green_TSAL1;
extern _SAVEDRAM_ uint8_T Max_Torque_Boost;
extern _SAVEDRAM_ boolean_T MCU_Ignition;
extern _SAVEDRAM_ uint16_T LV_Low_Voltage_Warning;
extern _SAVEDRAM_ uint16_T MCUMotor_Temp_Warning;
extern _SAVEDRAM_ real32_T Target_Slip_Ratio;
extern _SAVEDRAM_ uint8_T TC_P_Gain;
extern _SAVEDRAM_ uint8_T MinTC_Torque;
extern _SAVEDRAM_ uint8_T Max_Regen;
extern _SAVEDRAM_ uint8_T Throttle_Active_Threshold;
extern _SAVEDRAM_ uint8_T Brake_Active_Threshold;
extern _SAVEDRAM_ int16_T INV_Torque_limit;
extern _SAVEDRAM_ int16_T INV_Speed_Limit_Fwd;
extern _SAVEDRAM_ int16_T INV_Speed_limit_Rev;
extern _SAVEDRAM_ int16_T INV_DC_Link_Target;
extern _SAVEDRAM_ int16_T INV_DC_Link_Regen_Imax;
extern _SAVEDRAM_ int16_T INV_DC_Link_Discharge_Imax;
extern _SAVEDRAM_ int16_T INV_Regen_Torque_Limit;
extern _SAVEDRAM_ int16_T INV_Id_Debug;
extern _SAVEDRAM_ int16_T INV_Iq_debug;
extern _SAVEDRAM_ boolean_T Init_System_Start;
extern _SAVEDRAM_ boolean_T Init_System_end;
extern _SAVEDRAM_ int8_T Brake1_Pressure_Scaling;
extern _SAVEDRAM_ real32_T Motor_To_Road_Speed_Ratio;
extern _SAVEDRAM_ int8_T Brake2_Pressure_Scaling;
extern _SAVEDRAM_ int8_T Regen_Coast;
extern _SAVEDRAM_ uint16_T Brk1_OOR_High;
extern _SAVEDRAM_ uint16_T Brk1_OOR_Low;
extern _SAVEDRAM_ uint16_T Brk2_OOR_High;
extern _SAVEDRAM_ uint16_T Brk2_OOR_Low;
void FlashData_Init(void);

#endif                                 /* RTW_HEADER_FlashData_h_ */

/*
 * Code generation for system system '<Root>/DiagnosticsCAN'
 *
 * Model                      : TBRe_Mod
 * Model version              : 1.4
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C source code generated on : Fri Apr 15 14:02:53 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "DiagnosticsCAN.h"

/* Include model header file for global data */
#include "TBRe_Mod.h"
#include "TBRe_Mod_private.h"

/* System initialize for atomic system: '<Root>/DiagnosticsCAN' */
void DiagnosticsCAN_Init(void)
{
  {
    /* user code (Initialize function Header) */

    /* System '<Root>/DiagnosticsCAN' */
    /* Declaration : */

    /* user code (Initialize function Body) */

    /* System '<Root>/DiagnosticsCAN' */
    /* Execution : */

    /* user code (Initialize function Trailer) */

    /* System '<Root>/DiagnosticsCAN' */
    /* Exit : */
  }
}

/* Start for atomic system: '<Root>/DiagnosticsCAN' */
void DiagnosticsCAN_Start(void)
{
  /* Start for S-Function (NsiCan_Tx_Ext): '<S1>/CanTx1' */

  /* S-Function Block: '<S1>/CanTx1' */
  // Initializing data for the message VCU_Torque in the channel 1
  objCan1VCU_Torque.identType = CAN_ID_STD;
  objCan1VCU_Torque.dlc = 5;
  objCan1VCU_Torque.ident = 0x654;
  objCan1VCU_Torque.frameType = FRAME_TX_DATA;
  CAN_InitFrame(FLEX_CAN_A, &objCan1VCU_Torque, OS_TASK_UNKNOWNID);

  // Initializing data for the signal Max_Torque
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_TorqueSignals[0].data = 0;
  sigCan1TxVCU_TorqueSignals[0].layout = ORDER_INTEL;
  sigCan1TxVCU_TorqueSignals[0].startbit = 32;
  sigCan1TxVCU_TorqueSignals[0].length = 8;

  // Initializing data for the signal ECU_TorqueAcut
  //GAIN = 0.10000000149011612 , OFFSET=0.0, FLOAT = 1, UNITE = Percent
  //GAIN = 0.100000F , OFFSET=
  sigCan1TxVCU_TorqueSignals[1].data = 0;
  sigCan1TxVCU_TorqueSignals[1].layout = ORDER_INTEL;
  sigCan1TxVCU_TorqueSignals[1].startbit = 16;
  sigCan1TxVCU_TorqueSignals[1].length = 16;

  // Initializing data for the signal ECU_TorqueReq
  //GAIN = 0.10000000149011612 , OFFSET=0.0, FLOAT = 1, UNITE = Percent
  //GAIN = 0.100000F , OFFSET=
  sigCan1TxVCU_TorqueSignals[2].data = 0;
  sigCan1TxVCU_TorqueSignals[2].layout = ORDER_INTEL;
  sigCan1TxVCU_TorqueSignals[2].startbit = 0;
  sigCan1TxVCU_TorqueSignals[2].length = 16;

  /* Start for S-Function (NsiCan_Tx_Ext): '<S1>/CanTx2' */

  /* S-Function Block: '<S1>/CanTx2' */
  // Initializing data for the message VCU_Diagnostics in the channel 1
  objCan1VCU_Diagnostics.identType = CAN_ID_STD;
  objCan1VCU_Diagnostics.dlc = 8;
  objCan1VCU_Diagnostics.ident = 0x650;
  objCan1VCU_Diagnostics.frameType = FRAME_TX_DATA;
  CAN_InitFrame(FLEX_CAN_A, &objCan1VCU_Diagnostics, OS_TASK_UNKNOWNID);

  // Initializing data for the signal VCU_Year
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_DiagnosticsSignals[0].data = 0;
  sigCan1TxVCU_DiagnosticsSignals[0].layout = ORDER_INTEL;
  sigCan1TxVCU_DiagnosticsSignals[0].startbit = 48;
  sigCan1TxVCU_DiagnosticsSignals[0].length = 8;

  // Initializing data for the signal VCU_Version
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_DiagnosticsSignals[1].data = 0;
  sigCan1TxVCU_DiagnosticsSignals[1].layout = ORDER_INTEL;
  sigCan1TxVCU_DiagnosticsSignals[1].startbit = 56;
  sigCan1TxVCU_DiagnosticsSignals[1].length = 8;

  // Initializing data for the signal VCU_Month
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_DiagnosticsSignals[2].data = 0;
  sigCan1TxVCU_DiagnosticsSignals[2].layout = ORDER_INTEL;
  sigCan1TxVCU_DiagnosticsSignals[2].startbit = 40;
  sigCan1TxVCU_DiagnosticsSignals[2].length = 8;

  // Initializing data for the signal VCU_Day
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_DiagnosticsSignals[3].data = 0;
  sigCan1TxVCU_DiagnosticsSignals[3].layout = ORDER_INTEL;
  sigCan1TxVCU_DiagnosticsSignals[3].startbit = 35;
  sigCan1TxVCU_DiagnosticsSignals[3].length = 5;

  // Initializing data for the signal Boost_on
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_DiagnosticsSignals[4].data = 0;
  sigCan1TxVCU_DiagnosticsSignals[4].layout = ORDER_INTEL;
  sigCan1TxVCU_DiagnosticsSignals[4].startbit = 34;
  sigCan1TxVCU_DiagnosticsSignals[4].length = 1;

  // Initializing data for the signal TC_on
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_DiagnosticsSignals[5].data = 0;
  sigCan1TxVCU_DiagnosticsSignals[5].layout = ORDER_INTEL;
  sigCan1TxVCU_DiagnosticsSignals[5].startbit = 33;
  sigCan1TxVCU_DiagnosticsSignals[5].length = 1;

  // Initializing data for the signal RegenBool
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_DiagnosticsSignals[6].data = 0;
  sigCan1TxVCU_DiagnosticsSignals[6].layout = ORDER_INTEL;
  sigCan1TxVCU_DiagnosticsSignals[6].startbit = 32;
  sigCan1TxVCU_DiagnosticsSignals[6].length = 1;

  // Initializing data for the signal Fault_ECU_Shutdown
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_DiagnosticsSignals[7].data = 0;
  sigCan1TxVCU_DiagnosticsSignals[7].layout = ORDER_INTEL;
  sigCan1TxVCU_DiagnosticsSignals[7].startbit = 22;
  sigCan1TxVCU_DiagnosticsSignals[7].length = 1;

  // Initializing data for the signal Low_AIR_Status
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_DiagnosticsSignals[8].data = 0;
  sigCan1TxVCU_DiagnosticsSignals[8].layout = ORDER_INTEL;
  sigCan1TxVCU_DiagnosticsSignals[8].startbit = 20;
  sigCan1TxVCU_DiagnosticsSignals[8].length = 1;

  // Initializing data for the signal High_AIR_Status
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_DiagnosticsSignals[9].data = 0;
  sigCan1TxVCU_DiagnosticsSignals[9].layout = ORDER_INTEL;
  sigCan1TxVCU_DiagnosticsSignals[9].startbit = 21;
  sigCan1TxVCU_DiagnosticsSignals[9].length = 1;

  // Initializing data for the signal BPPS_Implausibility
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_DiagnosticsSignals[10].data = 0;
  sigCan1TxVCU_DiagnosticsSignals[10].layout = ORDER_INTEL;
  sigCan1TxVCU_DiagnosticsSignals[10].startbit = 16;
  sigCan1TxVCU_DiagnosticsSignals[10].length = 1;

  // Initializing data for the signal Pedal_Sensor_Fail
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_DiagnosticsSignals[11].data = 0;
  sigCan1TxVCU_DiagnosticsSignals[11].layout = ORDER_INTEL;
  sigCan1TxVCU_DiagnosticsSignals[11].startbit = 24;
  sigCan1TxVCU_DiagnosticsSignals[11].length = 8;

  // Initializing data for the signal APPS_Implausibility
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_DiagnosticsSignals[12].data = 0;
  sigCan1TxVCU_DiagnosticsSignals[12].layout = ORDER_INTEL;
  sigCan1TxVCU_DiagnosticsSignals[12].startbit = 17;
  sigCan1TxVCU_DiagnosticsSignals[12].length = 1;

  // Initializing data for the signal APPS_BP_Implausibility
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_DiagnosticsSignals[13].data = 0;
  sigCan1TxVCU_DiagnosticsSignals[13].layout = ORDER_INTEL;
  sigCan1TxVCU_DiagnosticsSignals[13].startbit = 18;
  sigCan1TxVCU_DiagnosticsSignals[13].length = 1;

  // Initializing data for the signal GearingRatio
  //GAIN = 0.10000000149011612 , OFFSET=0.0, FLOAT = 1, UNITE = _
  //GAIN = 0.100000F , OFFSET=
  sigCan1TxVCU_DiagnosticsSignals[14].data = 0;
  sigCan1TxVCU_DiagnosticsSignals[14].layout = ORDER_INTEL;
  sigCan1TxVCU_DiagnosticsSignals[14].startbit = 8;
  sigCan1TxVCU_DiagnosticsSignals[14].length = 8;

  // Initializing data for the signal Wheel_Size
  //GAIN = 0.10000000149011612 , OFFSET=0.0, FLOAT = 1, UNITE = m
  //GAIN = 0.100000F , OFFSET=
  sigCan1TxVCU_DiagnosticsSignals[15].data = 0;
  sigCan1TxVCU_DiagnosticsSignals[15].layout = ORDER_INTEL;
  sigCan1TxVCU_DiagnosticsSignals[15].startbit = 0;
  sigCan1TxVCU_DiagnosticsSignals[15].length = 8;

  // Initializing data for the signal Fault_CarShutdown
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_DiagnosticsSignals[16].data = 0;
  sigCan1TxVCU_DiagnosticsSignals[16].layout = ORDER_INTEL;
  sigCan1TxVCU_DiagnosticsSignals[16].startbit = 23;
  sigCan1TxVCU_DiagnosticsSignals[16].length = 1;

  // Initializing data for the signal LV_Battery_Warning
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_DiagnosticsSignals[17].data = 0;
  sigCan1TxVCU_DiagnosticsSignals[17].layout = ORDER_INTEL;
  sigCan1TxVCU_DiagnosticsSignals[17].startbit = 19;
  sigCan1TxVCU_DiagnosticsSignals[17].length = 1;

  /* Start for S-Function (NsiCan_Tx_Ext): '<S1>/CanTx3' */

  /* S-Function Block: '<S1>/CanTx3' */
  // Initializing data for the message VCU_IMD_Status in the channel 1
  objCan1VCU_IMD_Status.identType = CAN_ID_STD;
  objCan1VCU_IMD_Status.dlc = 6;
  objCan1VCU_IMD_Status.ident = 0x656;
  objCan1VCU_IMD_Status.frameType = FRAME_TX_DATA;
  CAN_InitFrame(FLEX_CAN_A, &objCan1VCU_IMD_Status, OS_TASK_UNKNOWNID);

  // Initializing data for the signal IMD_Frequency
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_IMD_StatusSignals[0].data = 0;
  sigCan1TxVCU_IMD_StatusSignals[0].layout = ORDER_INTEL;
  sigCan1TxVCU_IMD_StatusSignals[0].startbit = 0;
  sigCan1TxVCU_IMD_StatusSignals[0].length = 16;

  // Initializing data for the signal IMD_Duty
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_IMD_StatusSignals[1].data = 0;
  sigCan1TxVCU_IMD_StatusSignals[1].layout = ORDER_INTEL;
  sigCan1TxVCU_IMD_StatusSignals[1].startbit = 16;
  sigCan1TxVCU_IMD_StatusSignals[1].length = 16;

  // Initializing data for the signal IMD_Resistance
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_IMD_StatusSignals[2].data = 0;
  sigCan1TxVCU_IMD_StatusSignals[2].layout = ORDER_INTEL;
  sigCan1TxVCU_IMD_StatusSignals[2].startbit = 32;
  sigCan1TxVCU_IMD_StatusSignals[2].length = 16;

  /* Start for S-Function (NsiCan_Tx_Ext): '<S1>/CanTx6' */

  /* S-Function Block: '<S1>/CanTx6' */
  // Initializing data for the message VCU_Pedal_Percentages in the channel 1
  objCan1VCU_Pedal_Percentages.identType = CAN_ID_STD;
  objCan1VCU_Pedal_Percentages.dlc = 7;
  objCan1VCU_Pedal_Percentages.ident = 0x652;
  objCan1VCU_Pedal_Percentages.frameType = FRAME_TX_DATA;
  CAN_InitFrame(FLEX_CAN_A, &objCan1VCU_Pedal_Percentages, OS_TASK_UNKNOWNID);

  // Initializing data for the signal BrakePot_Percentage
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = %
  //GAIN =  , OFFSET=
  sigCan1TxVCU_Pedal_PercentagesSignals[0].data = 0;
  sigCan1TxVCU_Pedal_PercentagesSignals[0].layout = ORDER_INTEL;
  sigCan1TxVCU_Pedal_PercentagesSignals[0].startbit = 40;
  sigCan1TxVCU_Pedal_PercentagesSignals[0].length = 8;

  // Initializing data for the signal Brake_Percentage
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = %
  //GAIN =  , OFFSET=
  sigCan1TxVCU_Pedal_PercentagesSignals[1].data = 0;
  sigCan1TxVCU_Pedal_PercentagesSignals[1].layout = ORDER_INTEL;
  sigCan1TxVCU_Pedal_PercentagesSignals[1].startbit = 48;
  sigCan1TxVCU_Pedal_PercentagesSignals[1].length = 8;

  // Initializing data for the signal Brake2_Percentage
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = %
  //GAIN =  , OFFSET=
  sigCan1TxVCU_Pedal_PercentagesSignals[2].data = 0;
  sigCan1TxVCU_Pedal_PercentagesSignals[2].layout = ORDER_INTEL;
  sigCan1TxVCU_Pedal_PercentagesSignals[2].startbit = 32;
  sigCan1TxVCU_Pedal_PercentagesSignals[2].length = 8;

  // Initializing data for the signal Throttle_Percentage
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = %
  //GAIN =  , OFFSET=
  sigCan1TxVCU_Pedal_PercentagesSignals[3].data = 0;
  sigCan1TxVCU_Pedal_PercentagesSignals[3].layout = ORDER_INTEL;
  sigCan1TxVCU_Pedal_PercentagesSignals[3].startbit = 16;
  sigCan1TxVCU_Pedal_PercentagesSignals[3].length = 8;

  // Initializing data for the signal Brake1_Percentage
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = %
  //GAIN =  , OFFSET=
  sigCan1TxVCU_Pedal_PercentagesSignals[4].data = 0;
  sigCan1TxVCU_Pedal_PercentagesSignals[4].layout = ORDER_INTEL;
  sigCan1TxVCU_Pedal_PercentagesSignals[4].startbit = 24;
  sigCan1TxVCU_Pedal_PercentagesSignals[4].length = 8;

  // Initializing data for the signal Throttle2_Percentage
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = %
  //GAIN =  , OFFSET=
  sigCan1TxVCU_Pedal_PercentagesSignals[5].data = 0;
  sigCan1TxVCU_Pedal_PercentagesSignals[5].layout = ORDER_INTEL;
  sigCan1TxVCU_Pedal_PercentagesSignals[5].startbit = 8;
  sigCan1TxVCU_Pedal_PercentagesSignals[5].length = 8;

  // Initializing data for the signal Throttle1_Percent
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = %
  //GAIN =  , OFFSET=
  sigCan1TxVCU_Pedal_PercentagesSignals[6].data = 0;
  sigCan1TxVCU_Pedal_PercentagesSignals[6].layout = ORDER_INTEL;
  sigCan1TxVCU_Pedal_PercentagesSignals[6].startbit = 0;
  sigCan1TxVCU_Pedal_PercentagesSignals[6].length = 8;

  /* Start for S-Function (NsiCan_Tx_Ext): '<S1>/CanTx7' */

  /* S-Function Block: '<S1>/CanTx7' */
  // Initializing data for the message VCU_HW_IO in the channel 1
  objCan1VCU_HW_IO.identType = CAN_ID_STD;
  objCan1VCU_HW_IO.dlc = 5;
  objCan1VCU_HW_IO.ident = 0x651;
  objCan1VCU_HW_IO.frameType = FRAME_TX_DATA;
  CAN_InitFrame(FLEX_CAN_A, &objCan1VCU_HW_IO, OS_TASK_UNKNOWNID);

  // Initializing data for the signal AccyFanFreq
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = Hz
  //GAIN =  , OFFSET=
  sigCan1TxVCU_HW_IOSignals[0].data = 0;
  sigCan1TxVCU_HW_IOSignals[0].layout = ORDER_INTEL;
  sigCan1TxVCU_HW_IOSignals[0].startbit = 32;
  sigCan1TxVCU_HW_IOSignals[0].length = 8;

  // Initializing data for the signal Coolant_AccyFan
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_HW_IOSignals[1].data = 0;
  sigCan1TxVCU_HW_IOSignals[1].layout = ORDER_INTEL;
  sigCan1TxVCU_HW_IOSignals[1].startbit = 6;
  sigCan1TxVCU_HW_IOSignals[1].length = 1;

  // Initializing data for the signal Console_Z
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_HW_IOSignals[2].data = 0;
  sigCan1TxVCU_HW_IOSignals[2].layout = ORDER_INTEL;
  sigCan1TxVCU_HW_IOSignals[2].startbit = 1;
  sigCan1TxVCU_HW_IOSignals[2].length = 1;

  // Initializing data for the signal Consle_Y
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = Bool
  //GAIN =  , OFFSET=
  sigCan1TxVCU_HW_IOSignals[3].data = 0;
  sigCan1TxVCU_HW_IOSignals[3].layout = ORDER_INTEL;
  sigCan1TxVCU_HW_IOSignals[3].startbit = 2;
  sigCan1TxVCU_HW_IOSignals[3].length = 1;

  // Initializing data for the signal Coolant_Pump_Fan
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_HW_IOSignals[4].data = 0;
  sigCan1TxVCU_HW_IOSignals[4].layout = ORDER_INTEL;
  sigCan1TxVCU_HW_IOSignals[4].startbit = 5;
  sigCan1TxVCU_HW_IOSignals[4].length = 1;

  // Initializing data for the signal Buzzer
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_HW_IOSignals[5].data = 0;
  sigCan1TxVCU_HW_IOSignals[5].layout = ORDER_INTEL;
  sigCan1TxVCU_HW_IOSignals[5].startbit = 7;
  sigCan1TxVCU_HW_IOSignals[5].length = 1;

  // Initializing data for the signal LV_Battery_SOC
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_HW_IOSignals[6].data = 0;
  sigCan1TxVCU_HW_IOSignals[6].layout = ORDER_INTEL;
  sigCan1TxVCU_HW_IOSignals[6].startbit = 8;
  sigCan1TxVCU_HW_IOSignals[6].length = 8;

  // Initializing data for the signal LV_Battery_Voltage
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = mV
  //GAIN =  , OFFSET=
  sigCan1TxVCU_HW_IOSignals[7].data = 0;
  sigCan1TxVCU_HW_IOSignals[7].layout = ORDER_INTEL;
  sigCan1TxVCU_HW_IOSignals[7].startbit = 16;
  sigCan1TxVCU_HW_IOSignals[7].length = 16;

  // Initializing data for the signal Console_RTD
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = Bool
  //GAIN =  , OFFSET=
  sigCan1TxVCU_HW_IOSignals[8].data = 0;
  sigCan1TxVCU_HW_IOSignals[8].layout = ORDER_INTEL;
  sigCan1TxVCU_HW_IOSignals[8].startbit = 0;
  sigCan1TxVCU_HW_IOSignals[8].length = 1;

  // Initializing data for the signal Console_X
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = Bool
  //GAIN =  , OFFSET=
  sigCan1TxVCU_HW_IOSignals[9].data = 0;
  sigCan1TxVCU_HW_IOSignals[9].layout = ORDER_INTEL;
  sigCan1TxVCU_HW_IOSignals[9].startbit = 3;
  sigCan1TxVCU_HW_IOSignals[9].length = 1;

  /* Start for S-Function (NsiCan_Tx_Ext): '<S1>/CanTx8' */

  /* S-Function Block: '<S1>/CanTx8' */
  // Initializing data for the message VCU_Vehicle_Functionality in the channel 1
  objCan1VCU_Vehicle_Functionality.identType = CAN_ID_STD;
  objCan1VCU_Vehicle_Functionality.dlc = 4;
  objCan1VCU_Vehicle_Functionality.ident = 0x655;
  objCan1VCU_Vehicle_Functionality.frameType = FRAME_TX_DATA;
  CAN_InitFrame(FLEX_CAN_A, &objCan1VCU_Vehicle_Functionality, OS_TASK_UNKNOWNID);

  // Initializing data for the signal Tractive_System_Startup
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_Vehicle_FunctionalitySignals[0].data = 0;
  sigCan1TxVCU_Vehicle_FunctionalitySignals[0].layout = ORDER_INTEL;
  sigCan1TxVCU_Vehicle_FunctionalitySignals[0].startbit = 24;
  sigCan1TxVCU_Vehicle_FunctionalitySignals[0].length = 1;

  // Initializing data for the signal Throttle_Bool
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_Vehicle_FunctionalitySignals[1].data = 0;
  sigCan1TxVCU_Vehicle_FunctionalitySignals[1].layout = ORDER_INTEL;
  sigCan1TxVCU_Vehicle_FunctionalitySignals[1].startbit = 25;
  sigCan1TxVCU_Vehicle_FunctionalitySignals[1].length = 1;

  // Initializing data for the signal MCU_NMT_Mode
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_Vehicle_FunctionalitySignals[2].data = 0;
  sigCan1TxVCU_Vehicle_FunctionalitySignals[2].layout = ORDER_INTEL;
  sigCan1TxVCU_Vehicle_FunctionalitySignals[2].startbit = 16;
  sigCan1TxVCU_Vehicle_FunctionalitySignals[2].length = 8;

  // Initializing data for the signal Control_Word
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_Vehicle_FunctionalitySignals[3].data = 0;
  sigCan1TxVCU_Vehicle_FunctionalitySignals[3].layout = ORDER_INTEL;
  sigCan1TxVCU_Vehicle_FunctionalitySignals[3].startbit = 0;
  sigCan1TxVCU_Vehicle_FunctionalitySignals[3].length = 8;

  // Initializing data for the signal Vehicle_Operation
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_Vehicle_FunctionalitySignals[4].data = 0;
  sigCan1TxVCU_Vehicle_FunctionalitySignals[4].layout = ORDER_INTEL;
  sigCan1TxVCU_Vehicle_FunctionalitySignals[4].startbit = 8;
  sigCan1TxVCU_Vehicle_FunctionalitySignals[4].length = 8;

  // Initializing data for the signal Brake_Bool
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1TxVCU_Vehicle_FunctionalitySignals[5].data = 0;
  sigCan1TxVCU_Vehicle_FunctionalitySignals[5].layout = ORDER_INTEL;
  sigCan1TxVCU_Vehicle_FunctionalitySignals[5].startbit = 26;
  sigCan1TxVCU_Vehicle_FunctionalitySignals[5].length = 1;

  /* Start for S-Function (NsiCan_Tx_Ext): '<S1>/CanTx9' */

  /* S-Function Block: '<S1>/CanTx9' */
  // Initializing data for the message VCU_Pedal_Voltages in the channel 1
  objCan1VCU_Pedal_Voltages.identType = CAN_ID_STD;
  objCan1VCU_Pedal_Voltages.dlc = 8;
  objCan1VCU_Pedal_Voltages.ident = 0x653;
  objCan1VCU_Pedal_Voltages.frameType = FRAME_TX_DATA;
  CAN_InitFrame(FLEX_CAN_A, &objCan1VCU_Pedal_Voltages, OS_TASK_UNKNOWNID);

  // Initializing data for the signal Brake2_Voltage
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = mV
  //GAIN =  , OFFSET=
  sigCan1TxVCU_Pedal_VoltagesSignals[0].data = 0;
  sigCan1TxVCU_Pedal_VoltagesSignals[0].layout = ORDER_INTEL;
  sigCan1TxVCU_Pedal_VoltagesSignals[0].startbit = 48;
  sigCan1TxVCU_Pedal_VoltagesSignals[0].length = 16;

  // Initializing data for the signal Brake1_Voltage
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = mV
  //GAIN =  , OFFSET=
  sigCan1TxVCU_Pedal_VoltagesSignals[1].data = 0;
  sigCan1TxVCU_Pedal_VoltagesSignals[1].layout = ORDER_INTEL;
  sigCan1TxVCU_Pedal_VoltagesSignals[1].startbit = 16;
  sigCan1TxVCU_Pedal_VoltagesSignals[1].length = 16;

  // Initializing data for the signal Throttle2_Voltage
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = mV
  //GAIN =  , OFFSET=
  sigCan1TxVCU_Pedal_VoltagesSignals[2].data = 0;
  sigCan1TxVCU_Pedal_VoltagesSignals[2].layout = ORDER_INTEL;
  sigCan1TxVCU_Pedal_VoltagesSignals[2].startbit = 32;
  sigCan1TxVCU_Pedal_VoltagesSignals[2].length = 16;

  // Initializing data for the signal Throttle1_Voltage
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = mV
  //GAIN =  , OFFSET=
  sigCan1TxVCU_Pedal_VoltagesSignals[3].data = 0;
  sigCan1TxVCU_Pedal_VoltagesSignals[3].layout = ORDER_INTEL;
  sigCan1TxVCU_Pedal_VoltagesSignals[3].startbit = 0;
  sigCan1TxVCU_Pedal_VoltagesSignals[3].length = 16;
}

/* Output and update for atomic system: '<Root>/DiagnosticsCAN' */
void DiagnosticsCAN(void)
{
  /* DataTypeConversion: '<S1>/Data Type Conversion1' */
  TBRe_Mod_B.DataTypeConversion1_e = (uint8_T)TBRe_Mod_B.Switch2;

  /* DataTypeConversion: '<S1>/Data Type Conversion' */
  TBRe_Mod_B.DataTypeConversion = TBRe_Mod_B.Torque_MCU_Req;

  /* S-Function (NsiCan_Tx_Ext): '<S1>/CanTx1' */

  /* S-Function Block: '<S1>/CanTx1' */
  // preparing the data
  sigCan1TxVCU_TorqueSignals[0].data = (( TBRe_Mod_B.DataTypeConversion1_e ));
  SignalLentgh = 16.0;
  if ((( TBRe_Mod_B.DataTypeConversion )/0.100000F) > ((1<<SignalLentgh)-1)) {
    //Overflow detected
    sigCan1TxVCU_TorqueSignals[1].data = (uint16_T)((1<<SignalLentgh)-1);
  } else {
    sigCan1TxVCU_TorqueSignals[1].data = (uint16_T)
      (( TBRe_Mod_B.DataTypeConversion )/0.100000F);
  }

  // sending the message VCU_Torque in the channel 1
  CAN_TransmitMessage(FLEX_CAN_A, sigCan1TxVCU_TorqueSignals, sizeof
                      (sigCan1TxVCU_TorqueSignals)/sizeof(t_SignalData),
                      &objCan1VCU_Torque);

  /* DataTypeConversion: '<S1>/Data Type Conversion25' */
  TBRe_Mod_B.DataTypeConversion25 = (uint8_T)TBRe_Mod_B.ECU_Ok;

  /* DataTypeConversion: '<S1>/Data Type Conversion28' */
  TBRe_Mod_B.DataTypeConversion28 = (uint8_T)TBRe_Mod_B.ProductofElements_n;

  /* DataTypeConversion: '<S1>/Data Type Conversion11' */
  TBRe_Mod_B.DataTypeConversion11 = (TBRe_Mod_B.Pedal_Sensor_Fail != 0);

  /* DataTypeConversion: '<S1>/Data Type Conversion29' */
  TBRe_Mod_B.DataTypeConversion29 = (TBRe_Mod_B.ProductofElements != 0);

  /* DataTypeConversion: '<S1>/Data Type Conversion30' */
  TBRe_Mod_B.DataTypeConversion30 = TBRe_Mod_B.LogicalOperator2;

  /* DataTypeConversion: '<S1>/Data Type Conversion31' */
  TBRe_Mod_B.DataTypeConversion31 = TBRe_Mod_B.Shutdown_Error;

  /* DataTypeConversion: '<S1>/Data Type Conversion32' */
  TBRe_Mod_B.DataTypeConversion32 = TBRe_Mod_B.LV_Warning;

  /* S-Function (NsiMem_Read): '<S1>/Memory read1' */
  /* S-Function Block: <S1>/Memory read1 (NsiMem_Read) */
  TBRe_Mod_B.Memoryread1_a = (U08)Gearing_Ratio;

  /* DataTypeConversion: '<S1>/Data Type Conversion24' */
  TBRe_Mod_B.DataTypeConversion24 = (TBRe_Mod_B.Memoryread1_a != 0);

  /* S-Function (NsiMem_Read): '<S1>/Memory read' */
  /* S-Function Block: <S1>/Memory read (NsiMem_Read) */
  TBRe_Mod_B.Memoryread_ij = (U08)Wheel_Size;

  /* DataTypeConversion: '<S1>/Data Type Conversion23' */
  TBRe_Mod_B.DataTypeConversion23 = (TBRe_Mod_B.Memoryread_ij != 0);

  /* S-Function (NsiCan_Tx_Ext): '<S1>/CanTx2' */

  /* S-Function Block: '<S1>/CanTx2' */
  // preparing the data
  sigCan1TxVCU_DiagnosticsSignals[0].data = (( TBRe_Mod_B.DataTypeConversion25 ));
  sigCan1TxVCU_DiagnosticsSignals[1].data =
    (( TBRe_Mod_ConstB.DataTypeConversion27 ));
  sigCan1TxVCU_DiagnosticsSignals[2].data =
    (( TBRe_Mod_ConstB.DataTypeConversion26 ));
  sigCan1TxVCU_DiagnosticsSignals[3].data = (( TBRe_Mod_B.DataTypeConversion28 ));
  sigCan1TxVCU_DiagnosticsSignals[4].data = (( TBRe_Mod_B.DataTypeConversion11 ));
  sigCan1TxVCU_DiagnosticsSignals[5].data = (( TBRe_Mod_B.DataTypeConversion29 ));
  sigCan1TxVCU_DiagnosticsSignals[6].data = (( TBRe_Mod_B.DataTypeConversion30 ));
  sigCan1TxVCU_DiagnosticsSignals[7].data = (( TBRe_Mod_B.DataTypeConversion31 ));
  sigCan1TxVCU_DiagnosticsSignals[8].data = (( TBRe_Mod_B.DataTypeConversion32 ));
  sigCan1TxVCU_DiagnosticsSignals[9].data = (( TBRe_Mod_B.DataTypeConversion24 ));
  sigCan1TxVCU_DiagnosticsSignals[10].data = (( TBRe_Mod_B.DataTypeConversion23 ));

  // sending the message VCU_Diagnostics in the channel 1
  CAN_TransmitMessage(FLEX_CAN_A, sigCan1TxVCU_DiagnosticsSignals, sizeof
                      (sigCan1TxVCU_DiagnosticsSignals)/sizeof(t_SignalData),
                      &objCan1VCU_Diagnostics);

  /* DataTypeConversion: '<S1>/Data Type Conversion38' */
  TBRe_Mod_B.DataTypeConversion38 = (uint16_T)TBRe_Mod_B.IMD_Freq;

  /* DataTypeConversion: '<S1>/Data Type Conversion39' */
  TBRe_Mod_B.DataTypeConversion39 = (uint16_T)TBRe_Mod_B.IMD_Duty;

  /* DataTypeConversion: '<S1>/Data Type Conversion40' */
  TBRe_Mod_B.DataTypeConversion40 = (uint16_T)TBRe_Mod_B.IMD_Resistance;

  /* S-Function (NsiCan_Tx_Ext): '<S1>/CanTx3' */

  /* S-Function Block: '<S1>/CanTx3' */
  // preparing the data
  sigCan1TxVCU_IMD_StatusSignals[0].data = (( TBRe_Mod_B.DataTypeConversion38 ));
  sigCan1TxVCU_IMD_StatusSignals[1].data = (( TBRe_Mod_B.DataTypeConversion39 ));
  sigCan1TxVCU_IMD_StatusSignals[2].data = (( TBRe_Mod_B.DataTypeConversion40 ));

  // sending the message VCU_IMD_Status in the channel 1
  CAN_TransmitMessage(FLEX_CAN_A, sigCan1TxVCU_IMD_StatusSignals, sizeof
                      (sigCan1TxVCU_IMD_StatusSignals)/sizeof(t_SignalData),
                      &objCan1VCU_IMD_Status);

  /* DataTypeConversion: '<S1>/Data Type Conversion7' */
  TBRe_Mod_B.DataTypeConversion7_b = (uint8_T)TBRe_Mod_B.MinMax_d;

  /* DataTypeConversion: '<S1>/Data Type Conversion8' */
  TBRe_Mod_B.DataTypeConversion8_j = (uint8_T)TBRe_Mod_B.MinMax_e;

  /* DataTypeConversion: '<S1>/Data Type Conversion10' */
  TBRe_Mod_B.DataTypeConversion10_k = (uint8_T)TBRe_Mod_B.MinMax_dv;

  /* DataTypeConversion: '<S1>/Data Type Conversion9' */
  TBRe_Mod_B.DataTypeConversion9_h = (uint8_T)TBRe_Mod_B.MinMax_b;

  /* DataTypeConversion: '<S1>/Data Type Conversion5' */
  TBRe_Mod_B.DataTypeConversion5 = TBRe_Mod_B.Product;

  /* S-Function (NsiCan_Tx_Ext): '<S1>/CanTx6' */

  /* S-Function Block: '<S1>/CanTx6' */
  // preparing the data
  sigCan1TxVCU_Pedal_PercentagesSignals[1].data =
    (( TBRe_Mod_B.DataTypeConversion7_b ));
  sigCan1TxVCU_Pedal_PercentagesSignals[2].data =
    (( TBRe_Mod_B.DataTypeConversion8_j ));
  sigCan1TxVCU_Pedal_PercentagesSignals[4].data =
    (( TBRe_Mod_B.DataTypeConversion10_k ));
  sigCan1TxVCU_Pedal_PercentagesSignals[5].data =
    (( TBRe_Mod_B.DataTypeConversion9_h ));
  sigCan1TxVCU_Pedal_PercentagesSignals[6].data =
    (( TBRe_Mod_B.DataTypeConversion5 ));

  // sending the message VCU_Pedal_Percentages in the channel 1
  CAN_TransmitMessage(FLEX_CAN_A, sigCan1TxVCU_Pedal_PercentagesSignals, sizeof
                      (sigCan1TxVCU_Pedal_PercentagesSignals)/sizeof
                      (t_SignalData), &objCan1VCU_Pedal_Percentages);

  /* DataTypeConversion: '<S1>/Data Type Conversion12' */
  TBRe_Mod_B.DataTypeConversion12_o = (uint8_T)TBRe_Mod_B.Fan_Freq;

  /* DataTypeConversion: '<S1>/Data Type Conversion13' */
  TBRe_Mod_B.DataTypeConversion13 = TBRe_Mod_B.btnAccyFan_Input;

  /* DataTypeConversion: '<S1>/Data Type Conversion15' */
  TBRe_Mod_B.DataTypeConversion15 = TBRe_Mod_B.btnZ_Input;

  /* DataTypeConversion: '<S1>/Data Type Conversion16' */
  TBRe_Mod_B.DataTypeConversion16 = TBRe_Mod_B.btnY_Input;

  /* DataTypeConversion: '<S1>/Data Type Conversion17' */
  TBRe_Mod_B.DataTypeConversion17 = TBRe_Mod_B.btnPumpFan_Input;

  /* DataTypeConversion: '<S1>/Data Type Conversion18' */
  TBRe_Mod_B.DataTypeConversion18 = TBRe_Mod_B.Compare;

  /* DataTypeConversion: '<S1>/Data Type Conversion19' */
  TBRe_Mod_B.DataTypeConversion19 = (uint8_T)TBRe_Mod_B.LV_SOC;

  /* DataTypeConversion: '<S1>/Data Type Conversion20' */
  TBRe_Mod_B.DataTypeConversion20_j = TBRe_Mod_B.LV_Battery_Voltage_n;

  /* DataTypeConversion: '<S1>/Data Type Conversion21' */
  TBRe_Mod_B.DataTypeConversion21_f = TBRe_Mod_B.btnRTD_Input;

  /* DataTypeConversion: '<S1>/Data Type Conversion22' */
  TBRe_Mod_B.DataTypeConversion22_p = TBRe_Mod_B.btnPreCharge_Input;

  /* S-Function (NsiCan_Tx_Ext): '<S1>/CanTx7' */

  /* S-Function Block: '<S1>/CanTx7' */
  // preparing the data
  sigCan1TxVCU_HW_IOSignals[0].data = (( TBRe_Mod_B.DataTypeConversion12_o ));
  sigCan1TxVCU_HW_IOSignals[1].data = (( TBRe_Mod_B.DataTypeConversion13 ));
  sigCan1TxVCU_HW_IOSignals[2].data = (( TBRe_Mod_B.DataTypeConversion15 ));
  sigCan1TxVCU_HW_IOSignals[3].data = (( TBRe_Mod_B.DataTypeConversion16 ));
  sigCan1TxVCU_HW_IOSignals[4].data = (( TBRe_Mod_B.DataTypeConversion17 ));
  sigCan1TxVCU_HW_IOSignals[5].data = (( TBRe_Mod_B.DataTypeConversion18 ));
  sigCan1TxVCU_HW_IOSignals[6].data = (( TBRe_Mod_B.DataTypeConversion19 ));
  sigCan1TxVCU_HW_IOSignals[7].data = (( TBRe_Mod_B.DataTypeConversion20_j ));
  sigCan1TxVCU_HW_IOSignals[8].data = (( TBRe_Mod_B.DataTypeConversion21_f ));
  sigCan1TxVCU_HW_IOSignals[9].data = (( TBRe_Mod_B.DataTypeConversion22_p ));

  // sending the message VCU_HW_IO in the channel 1
  CAN_TransmitMessage(FLEX_CAN_A, sigCan1TxVCU_HW_IOSignals, sizeof
                      (sigCan1TxVCU_HW_IOSignals)/sizeof(t_SignalData),
                      &objCan1VCU_HW_IO);

  /* DataTypeConversion: '<S1>/Data Type Conversion33' */
  TBRe_Mod_B.DataTypeConversion33 = TBRe_Mod_B.TSS_f;

  /* DataTypeConversion: '<S1>/Data Type Conversion34' */
  TBRe_Mod_B.DataTypeConversion34 = TBRe_Mod_B.Throttle_Bool;

  /* DataTypeConversion: '<S1>/Data Type Conversion35' */
  TBRe_Mod_B.DataTypeConversion35 = TBRe_Mod_B.Control_Word;

  /* DataTypeConversion: '<S1>/Data Type Conversion36' */
  TBRe_Mod_B.DataTypeConversion36 = TBRe_Mod_B.State;

  /* DataTypeConversion: '<S1>/Data Type Conversion37' */
  TBRe_Mod_B.DataTypeConversion37 = TBRe_Mod_B.Brake_Bool;

  /* S-Function (NsiCan_Tx_Ext): '<S1>/CanTx8' */

  /* S-Function Block: '<S1>/CanTx8' */
  // preparing the data
  sigCan1TxVCU_Vehicle_FunctionalitySignals[0].data =
    (( TBRe_Mod_B.DataTypeConversion33 ));
  sigCan1TxVCU_Vehicle_FunctionalitySignals[1].data =
    (( TBRe_Mod_B.DataTypeConversion34 ));
  sigCan1TxVCU_Vehicle_FunctionalitySignals[3].data =
    (( TBRe_Mod_B.DataTypeConversion35 ));
  sigCan1TxVCU_Vehicle_FunctionalitySignals[4].data =
    (( TBRe_Mod_B.DataTypeConversion36 ));
  sigCan1TxVCU_Vehicle_FunctionalitySignals[5].data =
    (( TBRe_Mod_B.DataTypeConversion37 ));

  // sending the message VCU_Vehicle_Functionality in the channel 1
  CAN_TransmitMessage(FLEX_CAN_A, sigCan1TxVCU_Vehicle_FunctionalitySignals,
                      sizeof(sigCan1TxVCU_Vehicle_FunctionalitySignals)/sizeof
                      (t_SignalData), &objCan1VCU_Vehicle_Functionality);

  /* DataTypeConversion: '<S1>/Data Type Conversion4' */
  TBRe_Mod_B.DataTypeConversion4 = TBRe_Mod_B.Brake2_Pressure;

  /* DataTypeConversion: '<S1>/Data Type Conversion2' */
  TBRe_Mod_B.DataTypeConversion2 = TBRe_Mod_B.Brake1_Pressure;

  /* DataTypeConversion: '<S1>/Data Type Conversion3' */
  TBRe_Mod_B.DataTypeConversion3_a = TBRe_Mod_B.Throttle2_Voltage;

  /* DataTypeConversion: '<S1>/Data Type Conversion6' */
  TBRe_Mod_B.DataTypeConversion6_k = TBRe_Mod_B.Throttle1_Voltage;

  /* S-Function (NsiCan_Tx_Ext): '<S1>/CanTx9' */

  /* S-Function Block: '<S1>/CanTx9' */
  // preparing the data
  sigCan1TxVCU_Pedal_VoltagesSignals[0].data = TBRe_Mod_B.DataTypeConversion4;
  sigCan1TxVCU_Pedal_VoltagesSignals[1].data = TBRe_Mod_B.DataTypeConversion2;
  sigCan1TxVCU_Pedal_VoltagesSignals[2].data = TBRe_Mod_B.DataTypeConversion3_a;
  sigCan1TxVCU_Pedal_VoltagesSignals[3].data = TBRe_Mod_B.DataTypeConversion6_k;

  // sending the message VCU_Pedal_Voltages in the channel 1
  CAN_TransmitMessage(FLEX_CAN_A, sigCan1TxVCU_Pedal_VoltagesSignals, sizeof
                      (sigCan1TxVCU_Pedal_VoltagesSignals)/sizeof(t_SignalData),
                      &objCan1VCU_Pedal_Voltages);
}

/*
 * Code generation for system system '<Root>/MainTask'
 *
 * Model                      : TBRe_Mod
 * Model version              : 1.4
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C source code generated on : Fri Apr 15 14:02:53 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "MainTask.h"

/* Include model header file for global data */
#include "TBRe_Mod.h"
#include "TBRe_Mod_private.h"

/* Named constants for Chart: '<S17>/Operation_Mode' */
#define TBRe_Mod_IN_NO_ACTIVE_CHILD    ((uint8_T)0U)
#define TBRe_Mod_IN_Operating_State    ((uint8_T)1U)
#define TBRe_Mod_IN_Startup_State      ((uint8_T)2U)

/* Named constants for Chart: '<S22>/Flashy' */
#define TBRe_Mod_IN_Init               ((uint8_T)1U)
#define TBRe_Mod_IN_Normal             ((uint8_T)2U)

/* Named constants for Chart: '<S22>/Wake_Up' */
#define TBRe_Mod_IN_One                ((uint8_T)3U)
#define TBRe_Mod_IN_Three              ((uint8_T)4U)
#define TBRe_Mod_IN_Two                ((uint8_T)5U)

/* Named constants for Chart: '<S54>/Operaton_Mode' */
#define TBRe_Mod_IN_Buzzer_State       ((uint8_T)1U)
#define TBRe_Mod_IN_Error_State        ((uint8_T)2U)
#define TBRe_Mod_IN_RTD_State          ((uint8_T)3U)
#define TBRe_Mod_IN_Standby_State      ((uint8_T)4U)

/* Named constants for Chart: '<S54>/TS Enable' */
#define TBRe_Mod_IN_Default_State      ((uint8_T)1U)
#define TBRe_Mod_IN_HV_System_Active   ((uint8_T)2U)
#define TBRe_Mod_IN_Precharge          ((uint8_T)4U)
#define TBRe__IN_HV_System_Deactivating ((uint8_T)3U)

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* System initialize for atomic system: '<Root>/MainTask' */
void MainTask_Init(void)
{
  int32_T i;

  {
    /* user code (Initialize function Header) */

    /* System '<Root>/MainTask' */
    /* Declaration : */

    /* user code (Initialize function Body) */

    /* System '<Root>/MainTask' */
    /* Execution : */

    /* InitializeConditions for S-Function (sfix_udelay): '<S39>/Tapped Delay' */
    for (i = 0; i < 10; i++) {
      TBRe_Mod_DW.TappedDelay_X[i] = false;
    }

    /* End of InitializeConditions for S-Function (sfix_udelay): '<S39>/Tapped Delay' */

    /* InitializeConditions for Delay: '<S38>/prv_APPS_BP1' */
    TBRe_Mod_DW.prv_APPS_BP1_DSTATE = false;

    /* InitializeConditions for S-Function (sfix_udelay): '<S33>/Debouncing2' */
    for (i = 0; i < 5; i++) {
      TBRe_Mod_DW.Debouncing2_X[i] = false;
    }

    /* End of InitializeConditions for S-Function (sfix_udelay): '<S33>/Debouncing2' */

    /* InitializeConditions for S-Function (sfix_udelay): '<S40>/Tapped Delay' */
    for (i = 0; i < 10; i++) {
      TBRe_Mod_DW.TappedDelay_X_m[i] = false;
    }

    /* End of InitializeConditions for S-Function (sfix_udelay): '<S40>/Tapped Delay' */

    /* SystemInitialize for Chart: '<S54>/TS Enable' */
    TBRe_Mod_DW.temporalCounter_i1_o = 0U;
    TBRe_Mod_DW.is_active_c12_TBRe_Mod = 0U;
    TBRe_Mod_DW.is_c12_TBRe_Mod = TBRe_Mod_IN_NO_ACTIVE_CHILD;
    TBRe_Mod_B.TS_Enable = false;

    /* SystemInitialize for Chart: '<S54>/Operaton_Mode' */
    TBRe_Mod_DW.temporalCounter_i1_e = 0U;
    TBRe_Mod_DW.is_active_c2_TBRe_Mod = 0U;
    TBRe_Mod_DW.is_c2_TBRe_Mod = TBRe_Mod_IN_NO_ACTIVE_CHILD;
    TBRe_Mod_B.Control_Word = 0U;
    TBRe_Mod_B.State = 0U;

    /* SystemInitialize for Chart: '<S17>/Operation_Mode' */
    TBRe_Mod_DW.temporalCounter_i1 = 0U;
    TBRe_Mod_DW.is_active_c6_TBRe_Mod = 0U;
    TBRe_Mod_DW.is_c6_TBRe_Mod = TBRe_Mod_IN_NO_ACTIVE_CHILD;
    TBRe_Mod_B.Operating_State = false;

    /* SystemInitialize for Chart: '<S23>/Inverter_reset' */
    TBRe_Mod_DW.temporalCounter_i1_k = 0U;
    TBRe_Mod_DW.is_active_c8_TBRe_Mod = 0U;
    TBRe_Mod_DW.is_c8_TBRe_Mod = TBRe_Mod_IN_NO_ACTIVE_CHILD;
    TBRe_Mod_B.Ignition = false;

    /* SystemInitialize for Chart: '<S22>/Wake_Up' */
    TBRe_Mod_DW.temporalCounter_i1_n = 0U;
    TBRe_Mod_DW.is_active_c4_TBRe_Mod = 0U;
    TBRe_Mod_DW.is_c4_TBRe_Mod = TBRe_Mod_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S22>/Flashy1' */
    TBRe_Mod_DW.temporalCounter_i1_fp = 0U;
    TBRe_Mod_DW.is_active_c7_TBRe_Mod = 0U;
    TBRe_Mod_DW.is_c7_TBRe_Mod = TBRe_Mod_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S22>/Flashy' */
    TBRe_Mod_DW.temporalCounter_i1_k0 = 0U;
    TBRe_Mod_DW.is_active_c5_TBRe_Mod = 0U;
    TBRe_Mod_DW.is_c5_TBRe_Mod = TBRe_Mod_IN_NO_ACTIVE_CHILD;

    /* SystemInitialize for Chart: '<S22>/InitLight' */
    TBRe_Mod_DW.temporalCounter_i1_f = 0U;
    TBRe_Mod_DW.is_active_c3_TBRe_Mod = 0U;
    TBRe_Mod_DW.is_c3_TBRe_Mod = TBRe_Mod_IN_NO_ACTIVE_CHILD;

    /* user code (Initialize function Trailer) */

    /* System '<Root>/MainTask' */

    /* Exit : */
  }
}

/* Start for atomic system: '<Root>/MainTask' */
void MainTask_Start(void)
{
  /* Start for S-Function (NsiIo_DigitalInput): '<S12>/DigitalInput5' */

  /* S-Function Block: '<S12>/DigitalInput5' */
  initDigitalInput(22, DIGITAL_INPUT_21_22_SWITCHTO, DIGITAL_INPUT_NO_IRQ,
                   OS_TASK_UNKNOWNID);

  /* Start for S-Function (NsiCan_Rx_Ext): '<S8>/CanRx6' */

  /* S-Function Block: '<S8>/CanRx6' */
  // Initializing data for the message BMS_Feedback_1 in the channel 1
  objCan1BMS_Feedback_1.identType = CAN_ID_STD;
  objCan1BMS_Feedback_1.dlc = 7;
  objCan1BMS_Feedback_1.ident = 0x100;
  objCan1BMS_Feedback_1.frameType = FRAME_RX_DATA;
  objCan1BMS_Feedback_1.RXState = FRAME_RX_NOT_RECEIVED;
  CAN_InitFrame(FLEX_CAN_A, &objCan1BMS_Feedback_1, OS_TASK_UNKNOWNID);

  // Initializing data for the signal Instant_Pack_Voltage
  //GAIN = 0.10000000149011612 , OFFSET=0.0, FLOAT = 1, UNITE = _
  //GAIN = 0.100000F , OFFSET=
  sigCan1RxBMS_Feedback_1Signals[0].data = 0;
  sigCan1RxBMS_Feedback_1Signals[0].layout = ORDER_INTEL;
  sigCan1RxBMS_Feedback_1Signals[0].startbit = 0;
  sigCan1RxBMS_Feedback_1Signals[0].length = 16;

  // Initializing data for the signal Pack_SOC
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxBMS_Feedback_1Signals[1].data = 0;
  sigCan1RxBMS_Feedback_1Signals[1].layout = ORDER_INTEL;
  sigCan1RxBMS_Feedback_1Signals[1].startbit = 16;
  sigCan1RxBMS_Feedback_1Signals[1].length = 16;

  // Initializing data for the signal Pack_Current
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxBMS_Feedback_1Signals[2].data = 0;
  sigCan1RxBMS_Feedback_1Signals[2].layout = ORDER_INTEL;
  sigCan1RxBMS_Feedback_1Signals[2].startbit = 32;
  sigCan1RxBMS_Feedback_1Signals[2].length = -16;

  // Initializing data for the signal Acu_Fan
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxBMS_Feedback_1Signals[3].data = 0;
  sigCan1RxBMS_Feedback_1Signals[3].layout = ORDER_INTEL;
  sigCan1RxBMS_Feedback_1Signals[3].startbit = 48;
  sigCan1RxBMS_Feedback_1Signals[3].length = 8;

  /* Start for S-Function (NsiCan_Rx_J1939_Ext): '<S10>/CanRx1' */
  static U32 u32RX_MASK = 0xFFFFFF;
  static U32 u32_J1939_IDENT;

  /* S-Function Block: '<S10>/CanRx1' */
  objCan2HS3_Temperature_Feedback.ident = 0x191AFF71;
  objCan2HS3_Temperature_Feedback.identType = CAN_ID_XTD;
  objCan2HS3_Temperature_Feedback.frameType = FRAME_RX_DATA;
  objCan2HS3_Temperature_Feedback.RXState = FRAME_RX_NOT_RECEIVED;
  objCan2HS3_Temperature_Feedback.dlc = 8;
  u32RX_MASK &= 0xFFFF00;
  CAN_InitRxFrameWithMask(FLEX_CAN_B, &objCan2HS3_Temperature_Feedback,
    u32RX_MASK, OS_TASK_UNKNOWNID);

  // Initializing data for the signal DC_Link_Voltage
  sigCan2RxHS3_Temperature_FeedbackSignals[0].data = 0;
  sigCan2RxHS3_Temperature_FeedbackSignals[0].layout = ORDER_INTEL;
  sigCan2RxHS3_Temperature_FeedbackSignals[0].startbit = 32;
  sigCan2RxHS3_Temperature_FeedbackSignals[0].length = -16;

  // Initializing data for the signal MotorTemperature
  sigCan2RxHS3_Temperature_FeedbackSignals[1].data = 0;
  sigCan2RxHS3_Temperature_FeedbackSignals[1].layout = ORDER_INTEL;
  sigCan2RxHS3_Temperature_FeedbackSignals[1].startbit = 16;
  sigCan2RxHS3_Temperature_FeedbackSignals[1].length = -16;

  /* Start for S-Function (NsiIo_DigitalInput): '<S12>/DigitalInput' */

  /* S-Function Block: '<S12>/DigitalInput' */
  initDigitalInput(21, DIGITAL_INPUT_21_22_SWITCHTO, DIGITAL_INPUT_NO_IRQ,
                   OS_TASK_UNKNOWNID);

  /* Start for S-Function (NsiIo_DigitalInput): '<S14>/DigitalInput3' */

  /* S-Function Block: '<S14>/DigitalInput3' */
  initDigitalInput(12, DIGITAL_INPUT_11_12_SWITCHTO, DIGITAL_INPUT_NO_IRQ,
                   OS_TASK_UNKNOWNID);

  /* Start for S-Function (NsiIo_DigitalInput): '<S9>/DigitalInput1' */

  /* S-Function Block: '<S9>/DigitalInput1' */
  initDigitalInput(19, DIGITAL_INPUT_19_20_SWITCHTO, DIGITAL_INPUT_NO_IRQ,
                   OS_TASK_UNKNOWNID);

  /* Start for S-Function (NsiCan_Rx_J1939_Ext): '<S10>/CanRx3' */

  /* S-Function Block: '<S10>/CanRx3' */
  objCan2HS1_Torque_Feedback.ident = 0x1918FF71;
  objCan2HS1_Torque_Feedback.identType = CAN_ID_XTD;
  objCan2HS1_Torque_Feedback.frameType = FRAME_RX_DATA;
  objCan2HS1_Torque_Feedback.RXState = FRAME_RX_NOT_RECEIVED;
  objCan2HS1_Torque_Feedback.dlc = 8;
  u32RX_MASK &= 0xFFFF00;
  CAN_InitRxFrameWithMask(FLEX_CAN_B, &objCan2HS1_Torque_Feedback, u32RX_MASK,
    OS_TASK_UNKNOWNID);

  // Initializing data for the signal Speed_Measured
  sigCan2RxHS1_Torque_FeedbackSignals[0].data = 0;
  sigCan2RxHS1_Torque_FeedbackSignals[0].layout = ORDER_INTEL;
  sigCan2RxHS1_Torque_FeedbackSignals[0].startbit = 16;
  sigCan2RxHS1_Torque_FeedbackSignals[0].length = -16;

  // Initializing data for the signal Torque_Measured
  sigCan2RxHS1_Torque_FeedbackSignals[1].data = 0;
  sigCan2RxHS1_Torque_FeedbackSignals[1].layout = ORDER_INTEL;
  sigCan2RxHS1_Torque_FeedbackSignals[1].startbit = 0;
  sigCan2RxHS1_Torque_FeedbackSignals[1].length = -16;

  /* Start for S-Function (NsiCan_Rx_J1939_Ext): '<S10>/CanRx4' */

  /* S-Function Block: '<S10>/CanRx4' */
  objCan2HS4_Fault_Info.ident = 0x191BFF71;
  objCan2HS4_Fault_Info.identType = CAN_ID_XTD;
  objCan2HS4_Fault_Info.frameType = FRAME_RX_DATA;
  objCan2HS4_Fault_Info.RXState = FRAME_RX_NOT_RECEIVED;
  objCan2HS4_Fault_Info.dlc = 8;
  u32RX_MASK &= 0xFFFF00;
  CAN_InitRxFrameWithMask(FLEX_CAN_B, &objCan2HS4_Fault_Info, u32RX_MASK,
    OS_TASK_UNKNOWNID);

  // Initializing data for the signal FaultData
  sigCan2RxHS4_Fault_InfoSignals[0].data = 0;
  sigCan2RxHS4_Fault_InfoSignals[0].layout = ORDER_INTEL;
  sigCan2RxHS4_Fault_InfoSignals[0].startbit = 16;
  sigCan2RxHS4_Fault_InfoSignals[0].length = -24;

  // Initializing data for the signal FaultCode
  sigCan2RxHS4_Fault_InfoSignals[1].data = 0;
  sigCan2RxHS4_Fault_InfoSignals[1].layout = ORDER_INTEL;
  sigCan2RxHS4_Fault_InfoSignals[1].startbit = 0;
  sigCan2RxHS4_Fault_InfoSignals[1].length = -16;

  /* Start for S-Function (NsiIo_FrequencyInput): '<S15>/FrequentialInput2' */

  /* S-Function Block: '<S15>/FrequentialInput2' */

  /* Start for S-Function (NsiIo_FrequencyInput): '<S15>/FrequentialInput3' */

  /* S-Function Block: '<S15>/FrequentialInput3' */
  // INIT FUNCTION FOR DutyCycle
  eTPU_Configure10KFreqInputPPA(2);

  /* Start for S-Function (NsiUsb_Rx): '<S17>/UsbRx' */
  TBRe_Mod_B.UsbRx_n = 1.0;

  /* Start for S-Function (NsiUsb_Rx): '<S22>/UsbRx' */
  TBRe_Mod_B.UsbRx = 0.0;

  /* Start for S-Function (NsiCan_Tx_J1939_Ext): '<S19>/CanTx2' */

  /* S-Function Block: '<S19>/CanTx2' */
  objCan2HC1_Demands.ident = 0x19107171;
  objCan2HC1_Demands.identType = CAN_ID_XTD;
  objCan2HC1_Demands.frameType = FRAME_TX_DATA;
  objCan2HC1_Demands.dlc = 8;

  //FLEX_CAN_B_is1939
  //FLEX_CAN_B must use J1939 Source Address for TX
  u32_J1939_IDENT = 0x19107171 & 0xFFFFFF00;
  u32_J1939_IDENT |= J1939_SA2;
  objCan2HC1_Demands.ident = 0x19107171;
  CAN_InitFrame(FLEX_CAN_B, &objCan2HC1_Demands, OS_TASK_UNKNOWNID);

  // Initializing data for the signal Torque_Request
  sigCan2TxHC1_DemandsSignals[0].data = 0;
  sigCan2TxHC1_DemandsSignals[0].layout = ORDER_INTEL;
  sigCan2TxHC1_DemandsSignals[0].startbit = 0;
  sigCan2TxHC1_DemandsSignals[0].length = 16;

  // Initializing data for the signal ControlWord
  sigCan2TxHC1_DemandsSignals[1].data = 0;
  sigCan2TxHC1_DemandsSignals[1].layout = ORDER_INTEL;
  sigCan2TxHC1_DemandsSignals[1].startbit = 16;
  sigCan2TxHC1_DemandsSignals[1].length = 16;

  // Initializing data for the signal Torque_Traction_Limit
  sigCan2TxHC1_DemandsSignals[2].data = 0;
  sigCan2TxHC1_DemandsSignals[2].layout = ORDER_INTEL;
  sigCan2TxHC1_DemandsSignals[2].startbit = 32;
  sigCan2TxHC1_DemandsSignals[2].length = 16;

  /* Start for S-Function (NsiCan_Tx_J1939_Ext): '<S19>/CanTx4' */

  /* S-Function Block: '<S19>/CanTx4' */
  objCan2HC3_Battery_Demands.ident = 0x19127171;
  objCan2HC3_Battery_Demands.identType = CAN_ID_XTD;
  objCan2HC3_Battery_Demands.frameType = FRAME_TX_DATA;
  objCan2HC3_Battery_Demands.dlc = 8;

  //FLEX_CAN_B_is1939
  //FLEX_CAN_B must use J1939 Source Address for TX
  u32_J1939_IDENT = 0x19127171 & 0xFFFFFF00;
  u32_J1939_IDENT |= J1939_SA2;
  objCan2HC3_Battery_Demands.ident = 0x19127171;
  CAN_InitFrame(FLEX_CAN_B, &objCan2HC3_Battery_Demands, OS_TASK_UNKNOWNID);

  // Initializing data for the signal DC_Link_Voltage_Target
  sigCan2TxHC3_Battery_DemandsSignals[0].data = 0;
  sigCan2TxHC3_Battery_DemandsSignals[0].layout = ORDER_INTEL;
  sigCan2TxHC3_Battery_DemandsSignals[0].startbit = 32;
  sigCan2TxHC3_Battery_DemandsSignals[0].length = 16;

  // Initializing data for the signal DC_Link_Imax_Recharge
  sigCan2TxHC3_Battery_DemandsSignals[1].data = 0;
  sigCan2TxHC3_Battery_DemandsSignals[1].layout = ORDER_INTEL;
  sigCan2TxHC3_Battery_DemandsSignals[1].startbit = 16;
  sigCan2TxHC3_Battery_DemandsSignals[1].length = 16;

  // Initializing data for the signal DC_Link_Imax_Discharge
  sigCan2TxHC3_Battery_DemandsSignals[2].data = 0;
  sigCan2TxHC3_Battery_DemandsSignals[2].layout = ORDER_INTEL;
  sigCan2TxHC3_Battery_DemandsSignals[2].startbit = 0;
  sigCan2TxHC3_Battery_DemandsSignals[2].length = 16;

  /* Start for S-Function (NsiCan_Tx_J1939_Ext): '<S19>/CanTx6' */

  /* S-Function Block: '<S19>/CanTx6' */
  objCan2HC2_Demands.ident = 0x19117171;
  objCan2HC2_Demands.identType = CAN_ID_XTD;
  objCan2HC2_Demands.frameType = FRAME_TX_DATA;
  objCan2HC2_Demands.dlc = 8;

  //FLEX_CAN_B_is1939
  //FLEX_CAN_B must use J1939 Source Address for TX
  u32_J1939_IDENT = 0x19117171 & 0xFFFFFF00;
  u32_J1939_IDENT |= J1939_SA2;
  objCan2HC2_Demands.ident = 0x19117171;
  CAN_InitFrame(FLEX_CAN_B, &objCan2HC2_Demands, OS_TASK_UNKNOWNID);

  // Initializing data for the signal Speed_Limit_Reverse
  sigCan2TxHC2_DemandsSignals[0].data = 0;
  sigCan2TxHC2_DemandsSignals[0].layout = ORDER_INTEL;
  sigCan2TxHC2_DemandsSignals[0].startbit = 32;
  sigCan2TxHC2_DemandsSignals[0].length = 16;

  // Initializing data for the signal Speed_Limit_Forward
  sigCan2TxHC2_DemandsSignals[1].data = 0;
  sigCan2TxHC2_DemandsSignals[1].layout = ORDER_INTEL;
  sigCan2TxHC2_DemandsSignals[1].startbit = 16;
  sigCan2TxHC2_DemandsSignals[1].length = 16;

  // Initializing data for the signal Torque_Regen_Limit
  sigCan2TxHC2_DemandsSignals[2].data = 0;
  sigCan2TxHC2_DemandsSignals[2].layout = ORDER_INTEL;
  sigCan2TxHC2_DemandsSignals[2].startbit = 0;
  sigCan2TxHC2_DemandsSignals[2].length = 16;

  /* Start for S-Function (NsiCan_Tx_J1939_Ext): '<S19>/CanTx7' */

  /* S-Function Block: '<S19>/CanTx7' */
  objCan2HC4_Debug_Demands.ident = 0x19137171;
  objCan2HC4_Debug_Demands.identType = CAN_ID_XTD;
  objCan2HC4_Debug_Demands.frameType = FRAME_TX_DATA;
  objCan2HC4_Debug_Demands.dlc = 8;

  //FLEX_CAN_B_is1939
  //FLEX_CAN_B must use J1939 Source Address for TX
  u32_J1939_IDENT = 0x19137171 & 0xFFFFFF00;
  u32_J1939_IDENT |= J1939_SA2;
  objCan2HC4_Debug_Demands.ident = 0x19137171;
  CAN_InitFrame(FLEX_CAN_B, &objCan2HC4_Debug_Demands, OS_TASK_UNKNOWNID);

  // Initializing data for the signal Debug_Id_direct_control
  sigCan2TxHC4_Debug_DemandsSignals[0].data = 0;
  sigCan2TxHC4_Debug_DemandsSignals[0].layout = ORDER_INTEL;
  sigCan2TxHC4_Debug_DemandsSignals[0].startbit = 16;
  sigCan2TxHC4_Debug_DemandsSignals[0].length = 16;

  // Initializing data for the signal Debug_Iq_direct_control
  sigCan2TxHC4_Debug_DemandsSignals[1].data = 0;
  sigCan2TxHC4_Debug_DemandsSignals[1].layout = ORDER_INTEL;
  sigCan2TxHC4_Debug_DemandsSignals[1].startbit = 0;
  sigCan2TxHC4_Debug_DemandsSignals[1].length = 16;

  /* Start for S-Function (NsiCan_Rx_Ext): '<S8>/CanRx1' */

  /* S-Function Block: '<S8>/CanRx1' */
  // Initializing data for the message BMS_Feedback_3 in the channel 1
  objCan1BMS_Feedback_3.identType = CAN_ID_STD;
  objCan1BMS_Feedback_3.dlc = 6;
  objCan1BMS_Feedback_3.ident = 0x102;
  objCan1BMS_Feedback_3.frameType = FRAME_RX_DATA;
  objCan1BMS_Feedback_3.RXState = FRAME_RX_NOT_RECEIVED;
  CAN_InitFrame(FLEX_CAN_A, &objCan1BMS_Feedback_3, OS_TASK_UNKNOWNID);

  // Initializing data for the signal Avg_pack_temp
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxBMS_Feedback_3Signals[0].data = 0;
  sigCan1RxBMS_Feedback_3Signals[0].layout = ORDER_INTEL;
  sigCan1RxBMS_Feedback_3Signals[0].startbit = 0;
  sigCan1RxBMS_Feedback_3Signals[0].length = 8;

  // Initializing data for the signal Highest_pack_temp
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxBMS_Feedback_3Signals[1].data = 0;
  sigCan1RxBMS_Feedback_3Signals[1].layout = ORDER_INTEL;
  sigCan1RxBMS_Feedback_3Signals[1].startbit = 8;
  sigCan1RxBMS_Feedback_3Signals[1].length = 8;

  // Initializing data for the signal Lowest_pack_temp
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxBMS_Feedback_3Signals[2].data = 0;
  sigCan1RxBMS_Feedback_3Signals[2].layout = ORDER_INTEL;
  sigCan1RxBMS_Feedback_3Signals[2].startbit = 16;
  sigCan1RxBMS_Feedback_3Signals[2].length = 8;

  // Initializing data for the signal Highest_temp_ID
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxBMS_Feedback_3Signals[3].data = 0;
  sigCan1RxBMS_Feedback_3Signals[3].layout = ORDER_INTEL;
  sigCan1RxBMS_Feedback_3Signals[3].startbit = 24;
  sigCan1RxBMS_Feedback_3Signals[3].length = 8;

  // Initializing data for the signal Lowest_temp_ID
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxBMS_Feedback_3Signals[4].data = 0;
  sigCan1RxBMS_Feedback_3Signals[4].layout = ORDER_INTEL;
  sigCan1RxBMS_Feedback_3Signals[4].startbit = 32;
  sigCan1RxBMS_Feedback_3Signals[4].length = 8;

  // Initializing data for the signal Heatsink_temp
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxBMS_Feedback_3Signals[5].data = 0;
  sigCan1RxBMS_Feedback_3Signals[5].layout = ORDER_INTEL;
  sigCan1RxBMS_Feedback_3Signals[5].startbit = 40;
  sigCan1RxBMS_Feedback_3Signals[5].length = 8;

  /* Start for S-Function (NsiCan_Rx_Ext): '<S8>/CanRx7' */

  /* S-Function Block: '<S8>/CanRx7' */
  // Initializing data for the message BMS_Feedback_2 in the channel 1
  objCan1BMS_Feedback_2.identType = CAN_ID_STD;
  objCan1BMS_Feedback_2.dlc = 8;
  objCan1BMS_Feedback_2.ident = 0x101;
  objCan1BMS_Feedback_2.frameType = FRAME_RX_DATA;
  objCan1BMS_Feedback_2.RXState = FRAME_RX_NOT_RECEIVED;
  CAN_InitFrame(FLEX_CAN_A, &objCan1BMS_Feedback_2, OS_TASK_UNKNOWNID);

  // Initializing data for the signal Avg_Cell_Voltage
  //GAIN = 9.9999997473787516E-5 , OFFSET=0.0, FLOAT = 1, UNITE = mV
  //GAIN = 0.000100F , OFFSET=
  sigCan1RxBMS_Feedback_2Signals[0].data = 0;
  sigCan1RxBMS_Feedback_2Signals[0].layout = ORDER_INTEL;
  sigCan1RxBMS_Feedback_2Signals[0].startbit = 0;
  sigCan1RxBMS_Feedback_2Signals[0].length = 16;

  // Initializing data for the signal High_Cell_Voltage
  //GAIN = 9.9999997473787516E-5 , OFFSET=0.0, FLOAT = 1, UNITE = mV
  //GAIN = 0.000100F , OFFSET=
  sigCan1RxBMS_Feedback_2Signals[1].data = 0;
  sigCan1RxBMS_Feedback_2Signals[1].layout = ORDER_INTEL;
  sigCan1RxBMS_Feedback_2Signals[1].startbit = 16;
  sigCan1RxBMS_Feedback_2Signals[1].length = 16;

  // Initializing data for the signal High_Cell_ID
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxBMS_Feedback_2Signals[2].data = 0;
  sigCan1RxBMS_Feedback_2Signals[2].layout = ORDER_INTEL;
  sigCan1RxBMS_Feedback_2Signals[2].startbit = 32;
  sigCan1RxBMS_Feedback_2Signals[2].length = 8;

  // Initializing data for the signal Low_Cell_Voltage
  //GAIN = 9.9999997473787516E-5 , OFFSET=0.0, FLOAT = 1, UNITE = mV
  //GAIN = 0.000100F , OFFSET=
  sigCan1RxBMS_Feedback_2Signals[3].data = 0;
  sigCan1RxBMS_Feedback_2Signals[3].layout = ORDER_INTEL;
  sigCan1RxBMS_Feedback_2Signals[3].startbit = 40;
  sigCan1RxBMS_Feedback_2Signals[3].length = 16;

  // Initializing data for the signal Low_Cell_ID
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxBMS_Feedback_2Signals[4].data = 0;
  sigCan1RxBMS_Feedback_2Signals[4].layout = ORDER_INTEL;
  sigCan1RxBMS_Feedback_2Signals[4].startbit = 56;
  sigCan1RxBMS_Feedback_2Signals[4].length = 8;

  /* Start for S-Function (NsiIo_DigitalInput): '<S13>/DigitalInput6' */

  /* S-Function Block: '<S13>/DigitalInput6' */
  initDigitalInput(18, DIGITAL_INPUT_17_18_SWITCHTO, DIGITAL_INPUT_NO_IRQ,
                   OS_TASK_UNKNOWNID);

  /* Start for S-Function (NsiIo_DigitalInput): '<S13>/DigitalInput1' */

  /* S-Function Block: '<S13>/DigitalInput1' */
  initDigitalInput(16, DIGITAL_INPUT_15_16_SWITCHTO, DIGITAL_INPUT_NO_IRQ,
                   OS_TASK_UNKNOWNID);

  /* Start for S-Function (NsiIo_DigitalInput): '<S13>/DigitalInput2' */

  /* S-Function Block: '<S13>/DigitalInput2' */
  initDigitalInput(17, DIGITAL_INPUT_17_18_SWITCHTO, DIGITAL_INPUT_NO_IRQ,
                   OS_TASK_UNKNOWNID);

  /* Start for S-Function (NsiIo_DigitalInput): '<S14>/DigitalInput2' */

  /* S-Function Block: '<S14>/DigitalInput2' */
  initDigitalInput(11, DIGITAL_INPUT_11_12_SWITCHTO, DIGITAL_INPUT_NO_IRQ,
                   OS_TASK_UNKNOWNID);

  /* Start for S-Function (NsiIo_DigitalInput): '<S14>/DigitalInput4' */

  /* S-Function Block: '<S14>/DigitalInput4' */
  initDigitalInput(13, DIGITAL_INPUT_13_14_SWITCHTO, DIGITAL_INPUT_NO_IRQ,
                   OS_TASK_UNKNOWNID);

  /* Start for S-Function (NsiIo_DigitalInput): '<S14>/DigitalInput1' */

  /* S-Function Block: '<S14>/DigitalInput1' */
  initDigitalInput(14, DIGITAL_INPUT_13_14_SWITCHTO, DIGITAL_INPUT_NO_IRQ,
                   OS_TASK_UNKNOWNID);

  /* Start for S-Function (NsiIo_DigitalInput): '<S14>/DigitalInput5' */

  /* S-Function Block: '<S14>/DigitalInput5' */
  initDigitalInput(9, DIGITAL_INPUT_9_10_SWITCHTO, DIGITAL_INPUT_NO_IRQ,
                   OS_TASK_UNKNOWNID);

  /* Start for S-Function (NsiIo_DigitalInput): '<S14>/DigitalInput6' */

  /* S-Function Block: '<S14>/DigitalInput6' */
  initDigitalInput(10, DIGITAL_INPUT_9_10_SWITCHTO, DIGITAL_INPUT_NO_IRQ,
                   OS_TASK_UNKNOWNID);

  /* Start for S-Function (NsiIo_FrequencyInput): '<S9>/FrequentialInput1' */

  /* S-Function Block: '<S9>/FrequentialInput1' */

  /* Start for S-Function (NsiCan_Rx_J1939_Ext): '<S10>/CanRx2' */

  /* S-Function Block: '<S10>/CanRx2' */
  objCan2HD4_Debug_Temperatures_B.ident = 0x192BFF71;
  objCan2HD4_Debug_Temperatures_B.identType = CAN_ID_XTD;
  objCan2HD4_Debug_Temperatures_B.frameType = FRAME_RX_DATA;
  objCan2HD4_Debug_Temperatures_B.RXState = FRAME_RX_NOT_RECEIVED;
  objCan2HD4_Debug_Temperatures_B.dlc = 8;
  u32RX_MASK &= 0xFFFF00;
  CAN_InitRxFrameWithMask(FLEX_CAN_B, &objCan2HD4_Debug_Temperatures_B,
    u32RX_MASK, OS_TASK_UNKNOWNID);

  // Initializing data for the signal Debug_Temps_Heatsink
  sigCan2RxHD4_Debug_Temperatures_BSignals[0].data = 0;
  sigCan2RxHD4_Debug_Temperatures_BSignals[0].layout = ORDER_INTEL;
  sigCan2RxHD4_Debug_Temperatures_BSignals[0].startbit = 24;
  sigCan2RxHD4_Debug_Temperatures_BSignals[0].length = 8;

  /* Start for S-Function (NsiCan_Rx_Ext): '<S11>/CanRx1' */

  /* S-Function Block: '<S11>/CanRx1' */
  // Initializing data for the message Front_Wheel_Speeds in the channel 1
  objCan1Front_Wheel_Speeds.identType = CAN_ID_STD;
  objCan1Front_Wheel_Speeds.dlc = 6;
  objCan1Front_Wheel_Speeds.ident = 0x502;
  objCan1Front_Wheel_Speeds.frameType = FRAME_RX_DATA;
  objCan1Front_Wheel_Speeds.RXState = FRAME_RX_NOT_RECEIVED;
  CAN_InitFrame(FLEX_CAN_A, &objCan1Front_Wheel_Speeds, OS_TASK_UNKNOWNID);

  // Initializing data for the signal Front_Right_Wheel_Speed
  //GAIN = 0.10000000149011612 , OFFSET=0.0, FLOAT = 1, UNITE = rpm
  //GAIN = 0.100000F , OFFSET=
  sigCan1RxFront_Wheel_SpeedsSignals[0].data = 0;
  sigCan1RxFront_Wheel_SpeedsSignals[0].layout = ORDER_INTEL;
  sigCan1RxFront_Wheel_SpeedsSignals[0].startbit = 0;
  sigCan1RxFront_Wheel_SpeedsSignals[0].length = 16;

  // Initializing data for the signal Front_Left_Wheel_Speed
  //GAIN = 0.10000000149011612 , OFFSET=0.0, FLOAT = 1, UNITE = rpm
  //GAIN = 0.100000F , OFFSET=
  sigCan1RxFront_Wheel_SpeedsSignals[1].data = 0;
  sigCan1RxFront_Wheel_SpeedsSignals[1].layout = ORDER_INTEL;
  sigCan1RxFront_Wheel_SpeedsSignals[1].startbit = 16;
  sigCan1RxFront_Wheel_SpeedsSignals[1].length = 16;

  // Initializing data for the signal Vehicle_Speed
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxFront_Wheel_SpeedsSignals[2].data = 0;
  sigCan1RxFront_Wheel_SpeedsSignals[2].layout = ORDER_INTEL;
  sigCan1RxFront_Wheel_SpeedsSignals[2].startbit = 32;
  sigCan1RxFront_Wheel_SpeedsSignals[2].length = 16;

  /* Start for S-Function (NsiCan_Rx_Ext): '<S11>/CanRx2' */

  /* S-Function Block: '<S11>/CanRx2' */
  // Initializing data for the message Rear_Wheel_Speeds in the channel 1
  objCan1Rear_Wheel_Speeds.identType = CAN_ID_STD;
  objCan1Rear_Wheel_Speeds.dlc = 6;
  objCan1Rear_Wheel_Speeds.ident = 0x501;
  objCan1Rear_Wheel_Speeds.frameType = FRAME_RX_DATA;
  objCan1Rear_Wheel_Speeds.RXState = FRAME_RX_NOT_RECEIVED;
  CAN_InitFrame(FLEX_CAN_A, &objCan1Rear_Wheel_Speeds, OS_TASK_UNKNOWNID);

  // Initializing data for the signal Rear_Right_Wheel_Speed
  //GAIN = 0.10000000149011612 , OFFSET=0.0, FLOAT = 1, UNITE = rpm
  //GAIN = 0.100000F , OFFSET=
  sigCan1RxRear_Wheel_SpeedsSignals[0].data = 0;
  sigCan1RxRear_Wheel_SpeedsSignals[0].layout = ORDER_INTEL;
  sigCan1RxRear_Wheel_SpeedsSignals[0].startbit = 0;
  sigCan1RxRear_Wheel_SpeedsSignals[0].length = 16;

  // Initializing data for the signal Rear_Left_Wheel_Speed
  //GAIN = 0.10000000149011612 , OFFSET=0.0, FLOAT = 1, UNITE = rpm
  //GAIN = 0.100000F , OFFSET=
  sigCan1RxRear_Wheel_SpeedsSignals[1].data = 0;
  sigCan1RxRear_Wheel_SpeedsSignals[1].layout = ORDER_INTEL;
  sigCan1RxRear_Wheel_SpeedsSignals[1].startbit = 16;
  sigCan1RxRear_Wheel_SpeedsSignals[1].length = 16;

  // Initializing data for the signal Rear_Wheel_Speed
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = kph
  //GAIN =  , OFFSET=
  sigCan1RxRear_Wheel_SpeedsSignals[2].data = 0;
  sigCan1RxRear_Wheel_SpeedsSignals[2].layout = ORDER_INTEL;
  sigCan1RxRear_Wheel_SpeedsSignals[2].startbit = 32;
  sigCan1RxRear_Wheel_SpeedsSignals[2].length = 16;

  /* Start for S-Function (NsiCan_Rx_Ext): '<S11>/CanRx5' */

  /* S-Function Block: '<S11>/CanRx5' */
  // Initializing data for the message SteeringWheelSensor in the channel 1
  objCan1SteeringWheelSensor.identType = CAN_ID_STD;
  objCan1SteeringWheelSensor.dlc = 5;
  objCan1SteeringWheelSensor.ident = 0x234;
  objCan1SteeringWheelSensor.frameType = FRAME_RX_DATA;
  objCan1SteeringWheelSensor.RXState = FRAME_RX_NOT_RECEIVED;
  CAN_InitFrame(FLEX_CAN_A, &objCan1SteeringWheelSensor, OS_TASK_UNKNOWNID);

  // Initializing data for the signal Acc_Angle
  //GAIN = 0.10000000149011612 , OFFSET=0.0, FLOAT = 1, UNITE = Degrees
  //GAIN = 0.100000F , OFFSET=
  sigCan1RxSteeringWheelSensorSignals[0].data = 0;
  sigCan1RxSteeringWheelSensorSignals[0].layout = ORDER_INTEL;
  sigCan1RxSteeringWheelSensorSignals[0].startbit = 0;
  sigCan1RxSteeringWheelSensorSignals[0].length = -16;

  /* Start for S-Function (NsiCan_Rx_Ext): '<S11>/CanRx8' */

  /* S-Function Block: '<S11>/CanRx8' */
  // Initializing data for the message AccelerometerY in the channel 1
  objCan1AccelerometerY.identType = CAN_ID_STD;
  objCan1AccelerometerY.dlc = 8;
  objCan1AccelerometerY.ident = 0x174;
  objCan1AccelerometerY.frameType = FRAME_RX_DATA;
  objCan1AccelerometerY.RXState = FRAME_RX_NOT_RECEIVED;
  CAN_InitFrame(FLEX_CAN_A, &objCan1AccelerometerY, OS_TASK_UNKNOWNID);

  // Initializing data for the signal Acc_Yaw
  //GAIN = 0.004999999888241291 , OFFSET=0.0, FLOAT = 1, UNITE = _
  //GAIN = 0.005000F , OFFSET=
  sigCan1RxAccelerometerYSignals[0].data = 0;
  sigCan1RxAccelerometerYSignals[0].layout = ORDER_INTEL;
  sigCan1RxAccelerometerYSignals[0].startbit = 0;
  sigCan1RxAccelerometerYSignals[0].length = 16;

  /* Start for S-Function (NsiCan_Rx_Ext): '<S11>/CanRx9' */

  /* S-Function Block: '<S11>/CanRx9' */
  // Initializing data for the message Shutdown_Data in the channel 1
  objCan1Shutdown_Data.identType = CAN_ID_STD;
  objCan1Shutdown_Data.dlc = 3;
  objCan1Shutdown_Data.ident = 0x705;
  objCan1Shutdown_Data.frameType = FRAME_RX_DATA;
  objCan1Shutdown_Data.RXState = FRAME_RX_NOT_RECEIVED;
  CAN_InitFrame(FLEX_CAN_A, &objCan1Shutdown_Data, OS_TASK_UNKNOWNID);

  // Initializing data for the signal Fault_CarShutdown
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxShutdown_DataSignals[0].data = 0;
  sigCan1RxShutdown_DataSignals[0].layout = ORDER_INTEL;
  sigCan1RxShutdown_DataSignals[0].startbit = 0;
  sigCan1RxShutdown_DataSignals[0].length = 1;

  // Initializing data for the signal Fault_Latched_Shutdown
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxShutdown_DataSignals[1].data = 0;
  sigCan1RxShutdown_DataSignals[1].layout = ORDER_INTEL;
  sigCan1RxShutdown_DataSignals[1].startbit = 1;
  sigCan1RxShutdown_DataSignals[1].length = -1;

  // Initializing data for the signal Fault_PCB_Shutdown
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxShutdown_DataSignals[2].data = 0;
  sigCan1RxShutdown_DataSignals[2].layout = ORDER_INTEL;
  sigCan1RxShutdown_DataSignals[2].startbit = 4;
  sigCan1RxShutdown_DataSignals[2].length = -1;

  // Initializing data for the signal Fault_LatchIMD_Shutdown
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxShutdown_DataSignals[3].data = 0;
  sigCan1RxShutdown_DataSignals[3].layout = ORDER_INTEL;
  sigCan1RxShutdown_DataSignals[3].startbit = 19;
  sigCan1RxShutdown_DataSignals[3].length = -1;

  // Initializing data for the signal Fault_LatchBSPD_Shutdown
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxShutdown_DataSignals[4].data = 0;
  sigCan1RxShutdown_DataSignals[4].layout = ORDER_INTEL;
  sigCan1RxShutdown_DataSignals[4].startbit = 20;
  sigCan1RxShutdown_DataSignals[4].length = 1;

  // Initializing data for the signal Fault_LatchBMS_Shutdown
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxShutdown_DataSignals[5].data = 0;
  sigCan1RxShutdown_DataSignals[5].layout = ORDER_INTEL;
  sigCan1RxShutdown_DataSignals[5].startbit = 18;
  sigCan1RxShutdown_DataSignals[5].length = -1;

  // Initializing data for the signal Fault_Interlock_Shutdown
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxShutdown_DataSignals[6].data = 0;
  sigCan1RxShutdown_DataSignals[6].layout = ORDER_INTEL;
  sigCan1RxShutdown_DataSignals[6].startbit = 11;
  sigCan1RxShutdown_DataSignals[6].length = -1;

  // Initializing data for the signal Fault_Inertia_Shutdown
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxShutdown_DataSignals[7].data = 0;
  sigCan1RxShutdown_DataSignals[7].layout = ORDER_INTEL;
  sigCan1RxShutdown_DataSignals[7].startbit = 7;
  sigCan1RxShutdown_DataSignals[7].length = -1;

  // Initializing data for the signal Fault_Fuse_Shutdown
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxShutdown_DataSignals[8].data = 0;
  sigCan1RxShutdown_DataSignals[8].layout = ORDER_INTEL;
  sigCan1RxShutdown_DataSignals[8].startbit = 3;
  sigCan1RxShutdown_DataSignals[8].length = -1;

  // Initializing data for the signal Fault_ECU_Shutdown
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxShutdown_DataSignals[9].data = 0;
  sigCan1RxShutdown_DataSignals[9].layout = ORDER_INTEL;
  sigCan1RxShutdown_DataSignals[9].startbit = 12;
  sigCan1RxShutdown_DataSignals[9].length = -1;

  // Initializing data for the signal Fault_Current
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxShutdown_DataSignals[10].data = 0;
  sigCan1RxShutdown_DataSignals[10].layout = ORDER_INTEL;
  sigCan1RxShutdown_DataSignals[10].startbit = 16;
  sigCan1RxShutdown_DataSignals[10].length = -1;

  // Initializing data for the signal Fault_BSPD
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxShutdown_DataSignals[11].data = 0;
  sigCan1RxShutdown_DataSignals[11].layout = ORDER_INTEL;
  sigCan1RxShutdown_DataSignals[11].startbit = 17;
  sigCan1RxShutdown_DataSignals[11].length = 1;

  // Initializing data for the signal Fault_Brake
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxShutdown_DataSignals[12].data = 0;
  sigCan1RxShutdown_DataSignals[12].layout = ORDER_INTEL;
  sigCan1RxShutdown_DataSignals[12].startbit = 15;
  sigCan1RxShutdown_DataSignals[12].length = -1;

  // Initializing data for the signal Fault_TSMS_Shutdown
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxShutdown_DataSignals[13].data = 0;
  sigCan1RxShutdown_DataSignals[13].layout = ORDER_INTEL;
  sigCan1RxShutdown_DataSignals[13].startbit = 9;
  sigCan1RxShutdown_DataSignals[13].length = 1;

  // Initializing data for the signal Fault_HVD_Shutdown
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxShutdown_DataSignals[14].data = 0;
  sigCan1RxShutdown_DataSignals[14].layout = ORDER_INTEL;
  sigCan1RxShutdown_DataSignals[14].startbit = 10;
  sigCan1RxShutdown_DataSignals[14].length = 1;

  // Initializing data for the signal Fault_BOTS_Shutdown
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxShutdown_DataSignals[15].data = 0;
  sigCan1RxShutdown_DataSignals[15].layout = ORDER_INTEL;
  sigCan1RxShutdown_DataSignals[15].startbit = 5;
  sigCan1RxShutdown_DataSignals[15].length = 1;

  // Initializing data for the signal Fault_IMD
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxShutdown_DataSignals[16].data = 0;
  sigCan1RxShutdown_DataSignals[16].layout = ORDER_INTEL;
  sigCan1RxShutdown_DataSignals[16].startbit = 14;
  sigCan1RxShutdown_DataSignals[16].length = 1;

  // Initializing data for the signal Fault_BMS
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxShutdown_DataSignals[17].data = 0;
  sigCan1RxShutdown_DataSignals[17].layout = ORDER_INTEL;
  sigCan1RxShutdown_DataSignals[17].startbit = 13;
  sigCan1RxShutdown_DataSignals[17].length = 1;

  // Initializing data for the signal Fault_ESTP_RollHoop_Shutdown
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxShutdown_DataSignals[18].data = 0;
  sigCan1RxShutdown_DataSignals[18].layout = ORDER_INTEL;
  sigCan1RxShutdown_DataSignals[18].startbit = 8;
  sigCan1RxShutdown_DataSignals[18].length = 1;

  // Initializing data for the signal Fault_ESTP_Dash_Shutdown
  //GAIN = 1.0 , OFFSET=0.0, FLOAT = 0, UNITE = _
  //GAIN =  , OFFSET=
  sigCan1RxShutdown_DataSignals[19].data = 0;
  sigCan1RxShutdown_DataSignals[19].layout = ORDER_INTEL;
  sigCan1RxShutdown_DataSignals[19].startbit = 6;
  sigCan1RxShutdown_DataSignals[19].length = 1;
}

/* Outputs for atomic system: '<Root>/MainTask' */
void MainTask(void)
{
  real_T rtb_LowerLinit;
  uint16_T localProduct;
  int32_T rtb_Gain6;
  boolean_T rtb_LogicalOperator2;
  uint8_T rtb_State;
  int16_T rtb_Throttle_Req;
  boolean_T X;
  boolean_T Y;
  boolean_T Z;
  boolean_T Light_e;
  boolean_T guard1 = false;
  boolean_T guard2 = false;

  /* S-Function (NsiMem_Read): '<S43>/Memory read4' */
  /* S-Function Block: <S43>/Memory read4 (NsiMem_Read) */
  TBRe_Mod_B.Memoryread4_f = (U16)Brake1_High;

  /* S-Function (NsiMem_Read): '<S43>/Memory read5' */
  /* S-Function Block: <S43>/Memory read5 (NsiMem_Read) */
  TBRe_Mod_B.Memoryread5_e = (U16)Brake1_Low;

  /* S-Function (NsiIo_AnalogInput): '<S16>/AnalogInput1' */
  /* S-Function Block: <S16>/AnalogInput1 (NsiIo_AnalogInput) */
  ANA_IN_ReadValue(1, &TBRe_Mod_B.Throttle1_Voltage);

  /* S-Function (NsiIo_AnalogInput): '<S16>/AnalogInput6' */
  /* S-Function Block: <S16>/AnalogInput6 (NsiIo_AnalogInput) */
  ANA_IN_ReadValue(2, &TBRe_Mod_B.Throttle2_Voltage);

  /* S-Function (NsiIo_AnalogInput): '<S16>/AnalogInput2' */
  /* S-Function Block: <S16>/AnalogInput2 (NsiIo_AnalogInput) */
  ANA_IN_ReadValue(3, &TBRe_Mod_B.Brake1_Pressure);

  /* S-Function (NsiIo_AnalogInput): '<S16>/AnalogInput3' */
  /* S-Function Block: <S16>/AnalogInput3 (NsiIo_AnalogInput) */
  ANA_IN_ReadValue(4, &TBRe_Mod_B.Brake2_Pressure);

  /* MATLAB Function: '<S42>/Sensor_Diag' */
  /* MATLAB Function 'MainTask/Pre_Processing_Layer/Pedal_Box/Sensor Plausibility/Sensor_Diag': '<S48>:1' */
  /* '<S48>:1:5' */
  TBRe_Mod_B.TV1_Out = 0U;

  /* '<S48>:1:6' */
  TBRe_Mod_B.TV2_Out = 0U;

  /* '<S48>:1:7' */
  TBRe_Mod_B.BV1_Out = 0U;

  /* '<S48>:1:8' */
  TBRe_Mod_B.BV2_Out = 0U;

  /* '<S48>:1:10' */
  rtb_State = 0U;
  if (TBRe_Mod_B.Throttle1_Voltage > 5000) {
    /* '<S48>:1:12' */
    /* '<S48>:1:13' */
    rtb_State = 1U;
  }

  if (TBRe_Mod_B.Throttle2_Voltage > 5000) {
    /* '<S48>:1:17' */
    /* '<S48>:1:18' */
    rtb_State = (uint8_T)(rtb_State + 2);
  }

  if (TBRe_Mod_B.Brake1_Pressure > 5000) {
    /* '<S48>:1:22' */
    /* '<S48>:1:23' */
    rtb_State = (uint8_T)(rtb_State + 8);
  }

  if (TBRe_Mod_B.Brake2_Pressure > 5000) {
    /* '<S48>:1:27' */
    /* '<S48>:1:28' */
    rtb_State = (uint8_T)(rtb_State + 16);
  }

  if (rtb_State == 0) {
    /* '<S48>:1:32' */
    /* '<S48>:1:33' */
    TBRe_Mod_B.TV1_Out = TBRe_Mod_B.Throttle1_Voltage;

    /* '<S48>:1:34' */
    TBRe_Mod_B.TV2_Out = TBRe_Mod_B.Throttle2_Voltage;

    /* '<S48>:1:35' */
    TBRe_Mod_B.BV1_Out = TBRe_Mod_B.Brake1_Pressure;

    /* '<S48>:1:36' */
    TBRe_Mod_B.BV2_Out = TBRe_Mod_B.Brake2_Pressure;
  }

  TBRe_Mod_B.Pedal_Sensor_Fail = rtb_State;

  /* End of MATLAB Function: '<S42>/Sensor_Diag' */

  /* MinMax: '<S51>/MinMax5' */
  if (TBRe_Mod_B.Memoryread5_e > TBRe_Mod_B.BV1_Out) {
    localProduct = TBRe_Mod_B.Memoryread5_e;
  } else {
    localProduct = TBRe_Mod_B.BV1_Out;
  }

  /* End of MinMax: '<S51>/MinMax5' */

  /* Product: '<S51>/Divide' incorporates:
   *  Constant: '<S51>/Constant'
   *  DataTypeConversion: '<S51>/Data Type Conversion3'
   *  DataTypeConversion: '<S51>/Data Type Conversion4'
   *  Sum: '<S51>/Add'
   *  Sum: '<S51>/Add1'
   */
  rtb_LowerLinit = 100.0 / (real_T)(uint16_T)(TBRe_Mod_B.Memoryread4_f -
    TBRe_Mod_B.Memoryread5_e) * (real_T)(uint16_T)(localProduct -
    TBRe_Mod_B.Memoryread5_e);

  /* MinMax: '<S51>/MinMax' */
  if ((100.0 < rtb_LowerLinit) || rtIsNaN(rtb_LowerLinit)) {
    TBRe_Mod_B.MinMax = 100U;
  } else {
    TBRe_Mod_B.MinMax = (uint16_T)rtb_LowerLinit;
  }

  /* End of MinMax: '<S51>/MinMax' */

  /* S-Function (NsiMem_Read): '<S43>/Memory read6' */
  /* S-Function Block: <S43>/Memory read6 (NsiMem_Read) */
  TBRe_Mod_B.Memoryread6_b = (U16)Brake2_High;

  /* S-Function (NsiMem_Read): '<S43>/Memory read7' */
  /* S-Function Block: <S43>/Memory read7 (NsiMem_Read) */
  TBRe_Mod_B.Memoryread7_d = (U16)Brake2_Low;

  /* MinMax: '<S52>/MinMax5' */
  if (TBRe_Mod_B.Memoryread7_d > TBRe_Mod_B.BV2_Out) {
    localProduct = TBRe_Mod_B.Memoryread7_d;
  } else {
    localProduct = TBRe_Mod_B.BV2_Out;
  }

  /* End of MinMax: '<S52>/MinMax5' */

  /* Product: '<S52>/Divide' incorporates:
   *  Constant: '<S52>/Constant'
   *  DataTypeConversion: '<S52>/Data Type Conversion3'
   *  DataTypeConversion: '<S52>/Data Type Conversion4'
   *  Sum: '<S52>/Add'
   *  Sum: '<S52>/Add1'
   */
  rtb_LowerLinit = 100.0 / (real_T)(uint16_T)(TBRe_Mod_B.Memoryread6_b -
    TBRe_Mod_B.Memoryread7_d) * (real_T)(uint16_T)(localProduct -
    TBRe_Mod_B.Memoryread7_d);

  /* MinMax: '<S52>/MinMax' */
  if ((100.0 < rtb_LowerLinit) || rtIsNaN(rtb_LowerLinit)) {
    TBRe_Mod_B.MinMax_d = 100U;
  } else {
    TBRe_Mod_B.MinMax_d = (uint16_T)rtb_LowerLinit;
  }

  /* End of MinMax: '<S52>/MinMax' */

  /* MinMax: '<S40>/MinMax' */
  if (TBRe_Mod_B.MinMax > TBRe_Mod_B.MinMax_d) {
    TBRe_Mod_B.MinMax_e = TBRe_Mod_B.MinMax;
  } else {
    TBRe_Mod_B.MinMax_e = TBRe_Mod_B.MinMax_d;
  }

  /* End of MinMax: '<S40>/MinMax' */

  /* S-Function (NsiMem_Read): '<S43>/Memory read' */
  /* S-Function Block: <S43>/Memory read (NsiMem_Read) */
  TBRe_Mod_B.Memoryread_i = (U16)Throttle1_High;

  /* S-Function (NsiMem_Read): '<S43>/Memory read1' */
  /* S-Function Block: <S43>/Memory read1 (NsiMem_Read) */
  TBRe_Mod_B.Memoryread1_e = (U16)Throttle1_Low;

  /* MinMax: '<S49>/MinMax5' */
  if (TBRe_Mod_B.Memoryread1_e > TBRe_Mod_B.TV1_Out) {
    localProduct = TBRe_Mod_B.Memoryread1_e;
  } else {
    localProduct = TBRe_Mod_B.TV1_Out;
  }

  /* End of MinMax: '<S49>/MinMax5' */

  /* Product: '<S49>/Divide' incorporates:
   *  Constant: '<S49>/Constant'
   *  DataTypeConversion: '<S49>/Data Type Conversion3'
   *  DataTypeConversion: '<S49>/Data Type Conversion4'
   *  Sum: '<S49>/Add'
   *  Sum: '<S49>/Add1'
   */
  rtb_LowerLinit = 100.0 / (real_T)(uint16_T)(TBRe_Mod_B.Memoryread_i -
    TBRe_Mod_B.Memoryread1_e) * (real_T)(uint16_T)(localProduct -
    TBRe_Mod_B.Memoryread1_e);

  /* MinMax: '<S49>/MinMax' */
  if ((100.0 < rtb_LowerLinit) || rtIsNaN(rtb_LowerLinit)) {
    TBRe_Mod_B.MinMax_dv = 100U;
  } else {
    TBRe_Mod_B.MinMax_dv = (uint16_T)rtb_LowerLinit;
  }

  /* End of MinMax: '<S49>/MinMax' */

  /* S-Function (NsiMem_Read): '<S43>/Memory read2' */
  /* S-Function Block: <S43>/Memory read2 (NsiMem_Read) */
  TBRe_Mod_B.Memoryread2_h = (U16)Throttle2_High;

  /* S-Function (NsiMem_Read): '<S43>/Memory read3' */
  /* S-Function Block: <S43>/Memory read3 (NsiMem_Read) */
  TBRe_Mod_B.Memoryread3_f = (U16)Throttle2_Low;

  /* MinMax: '<S50>/MinMax5' */
  if (TBRe_Mod_B.Memoryread3_f > TBRe_Mod_B.TV2_Out) {
    localProduct = TBRe_Mod_B.Memoryread3_f;
  } else {
    localProduct = TBRe_Mod_B.TV2_Out;
  }

  /* End of MinMax: '<S50>/MinMax5' */

  /* Product: '<S50>/Divide' incorporates:
   *  Constant: '<S50>/Constant'
   *  DataTypeConversion: '<S50>/Data Type Conversion3'
   *  DataTypeConversion: '<S50>/Data Type Conversion4'
   *  Sum: '<S50>/Add'
   *  Sum: '<S50>/Add1'
   */
  rtb_LowerLinit = 100.0 / (real_T)(uint16_T)(TBRe_Mod_B.Memoryread2_h -
    TBRe_Mod_B.Memoryread3_f) * (real_T)(uint16_T)(localProduct -
    TBRe_Mod_B.Memoryread3_f);

  /* MinMax: '<S50>/MinMax' */
  if ((100.0 < rtb_LowerLinit) || rtIsNaN(rtb_LowerLinit)) {
    TBRe_Mod_B.MinMax_b = 100U;
  } else {
    TBRe_Mod_B.MinMax_b = (uint16_T)rtb_LowerLinit;
  }

  /* End of MinMax: '<S50>/MinMax' */

  /* Product: '<S39>/Product of Elements' incorporates:
   *  S-Function (sfix_udelay): '<S39>/Tapped Delay'
   */
  localProduct = (uint16_T)(TBRe_Mod_DW.TappedDelay_X[0] ? (int32_T)
    TBRe_Mod_DW.TappedDelay_X[1] : 0);
  for (rtb_Gain6 = 0; rtb_Gain6 < 8; rtb_Gain6++) {
    localProduct = (uint16_T)(TBRe_Mod_DW.TappedDelay_X[rtb_Gain6 + 2] ?
      (int32_T)localProduct : 0);
  }

  TBRe_Mod_B.ProductofElements = localProduct;

  /* End of Product: '<S39>/Product of Elements' */

  /* MinMax: '<S39>/MinMax' */
  if (TBRe_Mod_B.MinMax_dv < TBRe_Mod_B.MinMax_b) {
    localProduct = TBRe_Mod_B.MinMax_dv;
  } else {
    localProduct = TBRe_Mod_B.MinMax_b;
  }

  /* End of MinMax: '<S39>/MinMax' */

  /* Product: '<S39>/Product' incorporates:
   *  Logic: '<S39>/Logical Operator3'
   */
  rtb_Gain6 = !(TBRe_Mod_B.ProductofElements != 0) * localProduct;

  /* Logic: '<S38>/Logical Operator2' incorporates:
   *  Delay: '<S38>/prv_APPS_BP1'
   *  Logic: '<S38>/Logical Operator'
   *  Logic: '<S38>/Logical Operator1'
   *  RelationalOperator: '<S38>/Relational Operator'
   *  RelationalOperator: '<S38>/Relational Operator1'
   *  RelationalOperator: '<S38>/Relational Operator2'
   */
  TBRe_Mod_B.LogicalOperator2 = (((TBRe_Mod_B.MinMax_e >= 5) && (rtb_Gain6 > 25))
    || ((rtb_Gain6 > 5) && TBRe_Mod_DW.prv_APPS_BP1_DSTATE));

  /* Product: '<S38>/Product' incorporates:
   *  Logic: '<S38>/Logical Operator3'
   */
  TBRe_Mod_B.Product = (uint8_T)(!TBRe_Mod_B.LogicalOperator2 ? (int32_T)
    (uint8_T)rtb_Gain6 : 0);

  /* Relay: '<S37>/Throttle Bool Hysteresis' */
  if (TBRe_Mod_B.Product >= Throttle_Active_Threshold) {
    TBRe_Mod_DW.ThrottleBoolHysteresis_Mode = true;
  } else {
    if (TBRe_Mod_B.Product <= (int32_T)rt_roundd_snf((real_T)
         Throttle_Active_Threshold / 2.0)) {
      TBRe_Mod_DW.ThrottleBoolHysteresis_Mode = false;
    }
  }

  TBRe_Mod_B.Throttle_Bool = TBRe_Mod_DW.ThrottleBoolHysteresis_Mode;

  /* End of Relay: '<S37>/Throttle Bool Hysteresis' */

  /* Relay: '<S37>/Brake Bool Hysteresis' */
  if (TBRe_Mod_B.MinMax_e >= Brake_Active_Threshold) {
    TBRe_Mod_DW.BrakeBoolHysteresis_Mode = true;
  } else {
    if (TBRe_Mod_B.MinMax_e <= 5) {
      TBRe_Mod_DW.BrakeBoolHysteresis_Mode = false;
    }
  }

  TBRe_Mod_B.Brake_Bool = TBRe_Mod_DW.BrakeBoolHysteresis_Mode;

  /* End of Relay: '<S37>/Brake Bool Hysteresis' */

  /* Product: '<S33>/Product of Elements' incorporates:
   *  S-Function (sfix_udelay): '<S33>/Debouncing2'
   */
  localProduct = (uint16_T)(TBRe_Mod_DW.Debouncing2_X[4] ? (int32_T)(uint16_T)
    (TBRe_Mod_DW.Debouncing2_X[3] ? (int32_T)(uint16_T)
     (TBRe_Mod_DW.Debouncing2_X[2] ? (int32_T)(uint16_T)
      (TBRe_Mod_DW.Debouncing2_X[0] ? (int32_T)TBRe_Mod_DW.Debouncing2_X[1] : 0)
      : 0) : 0) : 0);

  /* S-Function (NsiIo_DigitalInput): '<S12>/DigitalInput5' */
  /* S-Function Block: <S12>/DigitalInput5 (NsiIo_DigitalInput) */
  readDigitalInput(22, (U08*)&TBRe_Mod_B.AIRHigh);

  /* S-Function (NsiCan_Rx_Ext): '<S8>/CanRx6' */

  /* S-Function Block: '<S8>/CanRx6' */
  // receiving the message BMS_Feedback_1 in the channel 1
  TBRe_Mod_B.CanRx6_o5 = objCan1BMS_Feedback_1.RXState;
  if (objCan1BMS_Feedback_1.RXState == FRAME_RX_RECEIVED) {
    //       CAN_ReceiveMessage(sigCan1RxBMS_Feedback_1Signals, 4, &objCan1BMS_Feedback_1);
    CAN_ReceiveMessage(sigCan1RxBMS_Feedback_1Signals, sizeof
                       (sigCan1RxBMS_Feedback_1Signals)/sizeof(t_SignalData),
                       &objCan1BMS_Feedback_1);
    objCan1BMS_Feedback_1.RXState = FRAME_RX_NOT_RECEIVED;
  }

  // extracting signal BMS_Feedback_1_Instant_Pack_Voltage
  TBRe_Mod_B.Instant_Pack_Voltage = (0.100000F * sigCan1RxBMS_Feedback_1Signals
    [0].data);

  // extracting signal BMS_Feedback_1_Pack_SOC
  TBRe_Mod_B.Pack_SOC = ( sigCan1RxBMS_Feedback_1Signals[1].data);

  // extracting signal BMS_Feedback_1_Pack_Current
  TBRe_Mod_B.Pack_Current = ( sigCan1RxBMS_Feedback_1Signals[2].data);

  // extracting signal BMS_Feedback_1_Acu_Fan
  TBRe_Mod_B.Acc_Fan_Speed = ( sigCan1RxBMS_Feedback_1Signals[3].data);

  /* S-Function (NsiCan_Rx_J1939_Ext): '<S10>/CanRx1' */

  /* S-Function Block: '<S10>/CanRx1' */
  // receiving the message HS3_Temperature_Feedback in the channel 2
  TBRe_Mod_B.MCU_Temp_m = objCan2HS3_Temperature_Feedback.RXState;
  if (objCan2HS3_Temperature_Feedback.RXState == FRAME_RX_RECEIVED) {
    CAN_ReceiveMessage(sigCan2RxHS3_Temperature_FeedbackSignals, 2,
                       &objCan2HS3_Temperature_Feedback);
    objCan2HS3_Temperature_Feedback.RXState = FRAME_RX_NOT_RECEIVED;
  }

  // extracting the data
  // extracting signal HS3_Temperature_Feedback_DC_Link_Voltage
  TBRe_Mod_B.MCU_Voltage = (0.062500F *
    sigCan2RxHS3_Temperature_FeedbackSignals[0].data);

  // extracting signal HS3_Temperature_Feedback_MotorTemperature
  TBRe_Mod_B.Motor_Temp = ( sigCan2RxHS3_Temperature_FeedbackSignals[1].data);

  /* S-Function (NsiIo_DigitalInput): '<S12>/DigitalInput' */
  /* S-Function Block: <S12>/DigitalInput (NsiIo_DigitalInput) */
  readDigitalInput(21, (U08*)&TBRe_Mod_B.AIRLow);

  /* S-Function (NsiIo_DigitalInput): '<S14>/DigitalInput3' */
  /* S-Function Block: <S14>/DigitalInput3 (NsiIo_DigitalInput) */
  readDigitalInput(12, (U08*)&TBRe_Mod_B.btnPreCharge_Input);

  /* S-Function (NsiIo_DigitalInput): '<S9>/DigitalInput1' */
  /* S-Function Block: <S9>/DigitalInput1 (NsiIo_DigitalInput) */
  readDigitalInput(19, (U08*)&TBRe_Mod_B.Latch_Status);

  /* Chart: '<S54>/TS Enable' */
  if (TBRe_Mod_DW.temporalCounter_i1_o < 127U) {
    TBRe_Mod_DW.temporalCounter_i1_o++;
  }

  /* Gateway: MainTask/Vehicle_Functionality_Layer/Vehicle_Operation_Mode/TS Enable */
  TBRe_Mod_DW.btnPreCharge_prev = TBRe_Mod_DW.btnPreCharge_start;
  TBRe_Mod_DW.btnPreCharge_start = TBRe_Mod_B.btnPreCharge_Input;

  /* During: MainTask/Vehicle_Functionality_Layer/Vehicle_Operation_Mode/TS Enable */
  if (TBRe_Mod_DW.is_active_c12_TBRe_Mod == 0U) {
    TBRe_Mod_DW.btnPreCharge_prev = TBRe_Mod_B.btnPreCharge_Input;

    /* Entry: MainTask/Vehicle_Functionality_Layer/Vehicle_Operation_Mode/TS Enable */
    TBRe_Mod_DW.is_active_c12_TBRe_Mod = 1U;

    /* Entry Internal: MainTask/Vehicle_Functionality_Layer/Vehicle_Operation_Mode/TS Enable */
    /* Transition: '<S68>:3' */
    TBRe_Mod_DW.is_c12_TBRe_Mod = TBRe_Mod_IN_Default_State;
    TBRe_Mod_DW.temporalCounter_i1_o = 0U;

    /* Entry 'Default_State': '<S68>:61' */
    TBRe_Mod_B.TS_Enable = false;
    rtb_State = 0U;
  } else {
    guard1 = false;
    guard2 = false;
    switch (TBRe_Mod_DW.is_c12_TBRe_Mod) {
     case TBRe_Mod_IN_Default_State:
      rtb_State = 0U;

      /* During 'Default_State': '<S68>:61' */
      if ((TBRe_Mod_DW.btnPreCharge_prev != TBRe_Mod_DW.btnPreCharge_start) && (
           !TBRe_Mod_DW.btnPreCharge_prev) && TBRe_Mod_B.btnPreCharge_Input &&
          (TBRe_Mod_DW.temporalCounter_i1_o >= 100U)) {
        /* Transition: '<S68>:67' */
        TBRe_Mod_DW.is_c12_TBRe_Mod = TBRe_Mod_IN_Precharge;
        TBRe_Mod_DW.temporalCounter_i1_o = 0U;

        /* Entry 'Precharge': '<S68>:66' */
        TBRe_Mod_B.TS_Enable = true;
        rtb_State = 1U;
      }
      break;

     case TBRe_Mod_IN_HV_System_Active:
      rtb_State = 2U;

      /* During 'HV_System_Active': '<S68>:70' */
      if (!TBRe_Mod_B.AIRLow) {
        /* Transition: '<S68>:85' */
        /* Transition: '<S68>:89' */
        TBRe_Mod_DW.is_c12_TBRe_Mod = TBRe_Mod_IN_Default_State;
        TBRe_Mod_DW.temporalCounter_i1_o = 0U;

        /* Entry 'Default_State': '<S68>:61' */
        TBRe_Mod_B.TS_Enable = false;
        rtb_State = 0U;
      } else {
        if ((TBRe_Mod_DW.btnPreCharge_prev != TBRe_Mod_DW.btnPreCharge_start) &&
            (!TBRe_Mod_DW.btnPreCharge_prev) && TBRe_Mod_B.btnPreCharge_Input &&
            (TBRe_Mod_DW.temporalCounter_i1_o >= 50U)) {
          /* Transition: '<S68>:82' */
          TBRe_Mod_DW.is_c12_TBRe_Mod = TBRe__IN_HV_System_Deactivating;
          TBRe_Mod_DW.temporalCounter_i1_o = 0U;

          /* Entry 'HV_System_Deactivating': '<S68>:81' */
          TBRe_Mod_B.TS_Enable = false;
          rtb_State = 3U;
        }
      }
      break;

     case TBRe__IN_HV_System_Deactivating:
      rtb_State = 3U;

      /* During 'HV_System_Deactivating': '<S68>:81' */
      if (TBRe_Mod_DW.temporalCounter_i1_o >= 50U) {
        /* Transition: '<S68>:83' */
        /* Transition: '<S68>:88' */
        /* Transition: '<S68>:89' */
        TBRe_Mod_DW.is_c12_TBRe_Mod = TBRe_Mod_IN_Default_State;
        TBRe_Mod_DW.temporalCounter_i1_o = 0U;

        /* Entry 'Default_State': '<S68>:61' */
        TBRe_Mod_B.TS_Enable = false;
        rtb_State = 0U;
      }
      break;

     default:
      rtb_State = 1U;

      /* During 'Precharge': '<S68>:66' */
      if (TBRe_Mod_B.AIRLow) {
        /* Transition: '<S68>:71' */
        if (TBRe_Mod_DW.temporalCounter_i1_o >= 50U) {
          /* Transition: '<S68>:96' */
          TBRe_Mod_DW.is_c12_TBRe_Mod = TBRe_Mod_IN_HV_System_Active;
          TBRe_Mod_DW.temporalCounter_i1_o = 0U;

          /* Entry 'HV_System_Active': '<S68>:70' */
          TBRe_Mod_B.TS_Enable = true;
          rtb_State = 2U;
        } else if (!TBRe_Mod_B.AIRLow) {
          /* Transition: '<S68>:97' */
          /* Transition: '<S68>:89' */
          guard1 = true;
        } else {
          guard2 = true;
        }
      } else {
        guard2 = true;
      }
      break;
    }

    if (guard2) {
      if (TBRe_Mod_DW.temporalCounter_i1_o >= 50U) {
        /* Transition: '<S68>:92' */
        guard1 = true;
      }
    }

    if (guard1) {
      TBRe_Mod_DW.is_c12_TBRe_Mod = TBRe_Mod_IN_Default_State;
      TBRe_Mod_DW.temporalCounter_i1_o = 0U;

      /* Entry 'Default_State': '<S68>:61' */
      TBRe_Mod_B.TS_Enable = false;
      rtb_State = 0U;
    }
  }

  /* End of Chart: '<S54>/TS Enable' */

  /* Logic: '<S69>/StartUp' incorporates:
   *  Constant: '<S69>/Threshold_Level'
   *  Constant: '<S70>/Constant'
   *  Constant: '<S71>/Constant'
   *  Constant: '<S72>/Constant'
   *  Product: '<S69>/Product'
   *  RelationalOperator: '<S70>/Compare'
   *  RelationalOperator: '<S71>/Compare'
   *  RelationalOperator: '<S72>/Compare'
   *  Sum: '<S69>/Add'
   */
  TBRe_Mod_B.TSS_f = ((TBRe_Mod_B.Instant_Pack_Voltage >= 150.0F) && ((int16_T)
    (real32_T)floor(TBRe_Mod_B.MCU_Voltage - (real32_T)(uint16_T)
                    (TBRe_Mod_B.Instant_Pack_Voltage * 0.9)) > 0) &&
                      (TBRe_Mod_B.MCU_Voltage >= 150.0F) && TBRe_Mod_B.AIRLow &&
                      TBRe_Mod_B.TS_Enable);

  /* Logic: '<S54>/Logical Operator2' */
  rtb_LogicalOperator2 = (TBRe_Mod_B.AIRHigh && TBRe_Mod_B.TSS_f);

  /* Chart: '<S54>/Operaton_Mode' incorporates:
   *  DataTypeConversion: '<S33>/Data Type Conversion'
   */
  if (TBRe_Mod_DW.temporalCounter_i1_e < 255U) {
    TBRe_Mod_DW.temporalCounter_i1_e++;
  }

  /* Gateway: MainTask/Vehicle_Functionality_Layer/Vehicle_Operation_Mode/Operaton_Mode */
  TBRe_Mod_DW.btnRTD_prev = TBRe_Mod_DW.btnRTD_start;
  TBRe_Mod_DW.btnRTD_start = (localProduct != 0);

  /* During: MainTask/Vehicle_Functionality_Layer/Vehicle_Operation_Mode/Operaton_Mode */
  if (TBRe_Mod_DW.is_active_c2_TBRe_Mod == 0U) {
    TBRe_Mod_DW.btnRTD_prev = (localProduct != 0);

    /* Entry: MainTask/Vehicle_Functionality_Layer/Vehicle_Operation_Mode/Operaton_Mode */
    TBRe_Mod_DW.is_active_c2_TBRe_Mod = 1U;

    /* Entry Internal: MainTask/Vehicle_Functionality_Layer/Vehicle_Operation_Mode/Operaton_Mode */
    /* Transition: '<S67>:3' */
    TBRe_Mod_DW.is_c2_TBRe_Mod = TBRe_Mod_IN_Error_State;

    /* Entry 'Error_State': '<S67>:1' */
    TBRe_Mod_B.Control_Word = 6U;

    /* Error */
    TBRe_Mod_B.State = 0U;
  } else {
    switch (TBRe_Mod_DW.is_c2_TBRe_Mod) {
     case TBRe_Mod_IN_Buzzer_State:
      TBRe_Mod_B.Control_Word = 3U;
      TBRe_Mod_B.State = 2U;

      /* During 'Buzzer_State': '<S67>:5' */
      if (TBRe_Mod_DW.temporalCounter_i1_e >= 150U) {
        /* Transition: '<S67>:11' */
        TBRe_Mod_DW.is_c2_TBRe_Mod = TBRe_Mod_IN_RTD_State;

        /* Entry 'RTD_State': '<S67>:6' */
        TBRe_Mod_B.Control_Word = 5U;

        /* ReadyToDrive	 */
        TBRe_Mod_B.State = 3U;
      }
      break;

     case TBRe_Mod_IN_Error_State:
      /* During 'Error_State': '<S67>:1' */
      /* Transition: '<S67>:61' */
      TBRe_Mod_DW.is_c2_TBRe_Mod = TBRe_Mod_IN_Standby_State;
      TBRe_Mod_DW.temporalCounter_i1_e = 0U;

      /* Entry 'Standby_State': '<S67>:2' */
      TBRe_Mod_B.Control_Word = 6U;

      /* Off */
      TBRe_Mod_B.State = 1U;
      break;

     case TBRe_Mod_IN_RTD_State:
      TBRe_Mod_B.Control_Word = 5U;
      TBRe_Mod_B.State = 3U;

      /* During 'RTD_State': '<S67>:6' */
      if ((localProduct != 0) || (!rtb_LogicalOperator2)) {
        /* Transition: '<S67>:28' */
        TBRe_Mod_DW.is_c2_TBRe_Mod = TBRe_Mod_IN_Standby_State;
        TBRe_Mod_DW.temporalCounter_i1_e = 0U;

        /* Entry 'Standby_State': '<S67>:2' */
        TBRe_Mod_B.Control_Word = 6U;

        /* Off */
        TBRe_Mod_B.State = 1U;
      }
      break;

     default:
      TBRe_Mod_B.Control_Word = 6U;
      TBRe_Mod_B.State = 1U;

      /* During 'Standby_State': '<S67>:2' */
      if ((TBRe_Mod_DW.btnRTD_prev != TBRe_Mod_DW.btnRTD_start) &&
          (!TBRe_Mod_DW.btnRTD_prev) && (localProduct != 0) &&
          TBRe_Mod_B.Brake_Bool && (!TBRe_Mod_B.Throttle_Bool) &&
          rtb_LogicalOperator2 && (TBRe_Mod_DW.temporalCounter_i1_e >= 50U)) {
        /* Transition: '<S67>:12' */
        TBRe_Mod_DW.is_c2_TBRe_Mod = TBRe_Mod_IN_Buzzer_State;
        TBRe_Mod_DW.temporalCounter_i1_e = 0U;

        /* Entry 'Buzzer_State': '<S67>:5' */
        TBRe_Mod_B.Control_Word = 3U;

        /* Energise */
        TBRe_Mod_B.State = 2U;
      }
      break;
    }
  }

  /* End of Chart: '<S54>/Operaton_Mode' */

  /* Switch: '<S23>/Switch1' incorporates:
   *  Constant: '<S23>/20V'
   *  Constant: '<S23>/Ground1'
   *  Constant: '<S66>/Constant'
   *  Logic: '<S54>/Logical Operator1'
   *  RelationalOperator: '<S66>/Compare'
   */
  if ((TBRe_Mod_B.State != 0) && TBRe_Mod_B.TS_Enable) {
    TBRe_Mod_B.ECU_Ok = 8000U;
  } else {
    TBRe_Mod_B.ECU_Ok = 0U;
  }

  /* End of Switch: '<S23>/Switch1' */

  /* S-Function (NsiIo_AnalogOutput): '<S17>/AnalogOutput1' */
  /* S-Function Block: <S17>/AnalogOutput1 (NsiIo_AnalogOutput) */
  {
    static U16 u16Voltage = 0xFFFF;
    if (u16Voltage != TBRe_Mod_B.ECU_Ok) {
      setAnaOutputVoltage(2, TBRe_Mod_B.ECU_Ok);
      u16Voltage = TBRe_Mod_B.ECU_Ok;
    }
  }

  /* Switch: '<S23>/Switch4' incorporates:
   *  Constant: '<S23>/8V'
   *  Constant: '<S23>/Ground'
   */
  if (TBRe_Mod_B.TSS_f) {
    TBRe_Mod_B.TSS = 8000U;
  } else {
    TBRe_Mod_B.TSS = 0U;
  }

  /* End of Switch: '<S23>/Switch4' */

  /* S-Function (NsiIo_AnalogOutput): '<S17>/AnalogOutput2' */
  /* S-Function Block: <S17>/AnalogOutput2 (NsiIo_AnalogOutput) */
  {
    static U16 u16Voltage = 0xFFFF;
    if (u16Voltage != TBRe_Mod_B.TSS) {
      setAnaOutputVoltage(5, TBRe_Mod_B.TSS);
      u16Voltage = TBRe_Mod_B.TSS;
    }
  }

  /* Chart: '<S17>/Operation_Mode' */
  if (TBRe_Mod_DW.temporalCounter_i1 < 511U) {
    TBRe_Mod_DW.temporalCounter_i1++;
  }

  /* Gateway: MainTask/Comms_And_Data_Output_Layer/Hardwired_Ouputs/Operation_Mode */
  /* During: MainTask/Comms_And_Data_Output_Layer/Hardwired_Ouputs/Operation_Mode */
  if (TBRe_Mod_DW.is_active_c6_TBRe_Mod == 0U) {
    /* Entry: MainTask/Comms_And_Data_Output_Layer/Hardwired_Ouputs/Operation_Mode */
    TBRe_Mod_DW.is_active_c6_TBRe_Mod = 1U;

    /* Entry Internal: MainTask/Comms_And_Data_Output_Layer/Hardwired_Ouputs/Operation_Mode */
    /* Transition: '<S21>:3' */
    TBRe_Mod_DW.is_c6_TBRe_Mod = TBRe_Mod_IN_Startup_State;
    TBRe_Mod_DW.temporalCounter_i1 = 0U;

    /* Entry 'Startup_State': '<S21>:1' */
    TBRe_Mod_B.Operating_State = true;

    /* Reset */
  } else if ((TBRe_Mod_DW.is_c6_TBRe_Mod != TBRe_Mod_IN_Operating_State) &&
             (TBRe_Mod_DW.temporalCounter_i1 >= 300U)) {
    /* During 'Startup_State': '<S21>:1' */
    /* Transition: '<S21>:41' */
    TBRe_Mod_DW.is_c6_TBRe_Mod = TBRe_Mod_IN_Operating_State;

    /* Entry 'Operating_State': '<S21>:5' */
    TBRe_Mod_B.Operating_State = false;

    /* Normal Operation */
  } else {
    /* During 'Operating_State': '<S21>:5' */
  }

  /* End of Chart: '<S17>/Operation_Mode' */

  /* Logic: '<S17>/Logical Operator' */
  TBRe_Mod_B.LogicalOperator = TBRe_Mod_B.Operating_State;

  /* S-Function (NsiIo_DigitalOutput): '<S17>/DigitalOutput1' */
  /* S-Function Block: <S17>/DigitalOutput1 (NsiIo_DigitalOutput) */
  writeDigitalOutput(8, LS_DIGITAL_OUTPUT, TBRe_Mod_B.LogicalOperator);

  /* Logic: '<S23>/Logical Operator1' */
  TBRe_Mod_B.Brake_Light = TBRe_Mod_B.Brake_Bool;

  /* S-Function (NsiIo_DigitalOutput): '<S17>/DigitalOutput2' */
  /* S-Function Block: <S17>/DigitalOutput2 (NsiIo_DigitalOutput) */
  writeDigitalOutput(1, HS_DIGITAL_OUTPUT, TBRe_Mod_B.Brake_Light);

  /* RelationalOperator: '<S32>/Compare' incorporates:
   *  Constant: '<S32>/Constant'
   */
  TBRe_Mod_B.Compare = (TBRe_Mod_B.State == 2);

  /* S-Function (NsiIo_DigitalOutput): '<S17>/DigitalOutput3' */
  /* S-Function Block: <S17>/DigitalOutput3 (NsiIo_DigitalOutput) */
  writeDigitalOutput(7, LS_DIGITAL_OUTPUT, TBRe_Mod_B.Compare);

  /* S-Function (NsiCan_Rx_J1939_Ext): '<S10>/CanRx3' */

  /* S-Function Block: '<S10>/CanRx3' */
  // receiving the message HS1_Torque_Feedback in the channel 2
  TBRe_Mod_B.CanRx3_o3 = objCan2HS1_Torque_Feedback.RXState;
  if (objCan2HS1_Torque_Feedback.RXState == FRAME_RX_RECEIVED) {
    CAN_ReceiveMessage(sigCan2RxHS1_Torque_FeedbackSignals, 2,
                       &objCan2HS1_Torque_Feedback);
    objCan2HS1_Torque_Feedback.RXState = FRAME_RX_NOT_RECEIVED;
  }

  // extracting the data
  // extracting signal HS1_Torque_Feedback_Speed_Measured
  TBRe_Mod_B.Motor_Speed_l = ( sigCan2RxHS1_Torque_FeedbackSignals[0].data);

  /* DataTypeConversion: '<S10>/Data Type Conversion' */
  TBRe_Mod_B.Motor_Speed = (int16_T)TBRe_Mod_B.Motor_Speed_l;

  /* RelationalOperator: '<S20>/Compare' incorporates:
   *  Constant: '<S20>/Constant'
   */
  TBRe_Mod_B.Compare_c = (TBRe_Mod_B.Motor_Speed <= 5);

  /* S-Function (NsiIo_DigitalOutput): '<S17>/DigitalOutput6' */
  /* S-Function Block: <S17>/DigitalOutput6 (NsiIo_DigitalOutput) */
  writeDigitalOutput(3, HS_DIGITAL_OUTPUT, TBRe_Mod_B.Compare_c);

  /* S-Function (NsiCan_Rx_J1939_Ext): '<S10>/CanRx4' */

  /* S-Function Block: '<S10>/CanRx4' */
  // receiving the message HS4_Fault_Info in the channel 2
  TBRe_Mod_B.CanRx4_o3 = objCan2HS4_Fault_Info.RXState;
  if (objCan2HS4_Fault_Info.RXState == FRAME_RX_RECEIVED) {
    CAN_ReceiveMessage(sigCan2RxHS4_Fault_InfoSignals, 2, &objCan2HS4_Fault_Info);
    objCan2HS4_Fault_Info.RXState = FRAME_RX_NOT_RECEIVED;
  }

  // extracting the data
  // extracting signal HS4_Fault_Info_FaultData
  TBRe_Mod_B.CanRx4_o1 = ( sigCan2RxHS4_Fault_InfoSignals[0].data);

  // extracting signal HS4_Fault_Info_FaultCode
  TBRe_Mod_B.FaultCode = ( sigCan2RxHS4_Fault_InfoSignals[1].data);

  /* RelationalOperator: '<S30>/Compare' incorporates:
   *  Constant: '<S30>/Constant'
   */
  rtb_LogicalOperator2 = (TBRe_Mod_B.FaultCode == 21187);

  /* Chart: '<S23>/Inverter_reset' */
  if (TBRe_Mod_DW.temporalCounter_i1_k < 255U) {
    TBRe_Mod_DW.temporalCounter_i1_k++;
  }

  /* Gateway: MainTask/Post_Processing_Layer/Hardwired_Peripherals/Inverter_reset */
  TBRe_Mod_DW.Ignition_Switch_prev = TBRe_Mod_DW.Ignition_Switch_start;
  TBRe_Mod_DW.Ignition_Switch_start = rtb_LogicalOperator2;

  /* During: MainTask/Post_Processing_Layer/Hardwired_Peripherals/Inverter_reset */
  if (TBRe_Mod_DW.is_active_c8_TBRe_Mod == 0U) {
    TBRe_Mod_DW.Ignition_Switch_prev = rtb_LogicalOperator2;

    /* Entry: MainTask/Post_Processing_Layer/Hardwired_Peripherals/Inverter_reset */
    TBRe_Mod_DW.is_active_c8_TBRe_Mod = 1U;

    /* Entry Internal: MainTask/Post_Processing_Layer/Hardwired_Peripherals/Inverter_reset */
    /* Transition: '<S31>:3' */
    TBRe_Mod_DW.is_c8_TBRe_Mod = TBRe_Mod_IN_Startup_State;

    /* Entry 'Startup_State': '<S31>:1' */
    TBRe_Mod_B.Ignition = true;

    /* Default */
  } else if (TBRe_Mod_DW.is_c8_TBRe_Mod == TBRe_Mod_IN_Operating_State) {
    /* During 'Operating_State': '<S31>:5' */
    if (TBRe_Mod_DW.temporalCounter_i1_k >= 150U) {
      /* Transition: '<S31>:47' */
      TBRe_Mod_DW.is_c8_TBRe_Mod = TBRe_Mod_IN_Startup_State;

      /* Entry 'Startup_State': '<S31>:1' */
      TBRe_Mod_B.Ignition = true;

      /* Default */
    }
  } else {
    /* During 'Startup_State': '<S31>:1' */
    if ((TBRe_Mod_DW.Ignition_Switch_prev != TBRe_Mod_DW.Ignition_Switch_start) &&
        (!TBRe_Mod_DW.Ignition_Switch_prev) && rtb_LogicalOperator2) {
      /* Transition: '<S31>:46' */
      TBRe_Mod_DW.is_c8_TBRe_Mod = TBRe_Mod_IN_Operating_State;
      TBRe_Mod_DW.temporalCounter_i1_k = 0U;

      /* Entry 'Operating_State': '<S31>:5' */
      TBRe_Mod_B.Ignition = false;

      /* Off */
    }
  }

  /* End of Chart: '<S23>/Inverter_reset' */

  /* S-Function (NsiIo_DigitalOutput): '<S17>/DigitalOutput8' */
  /* S-Function Block: <S17>/DigitalOutput8 (NsiIo_DigitalOutput) */
  writeDigitalOutput(2, HS_DIGITAL_OUTPUT, TBRe_Mod_B.Ignition);

  /* S-Function (NsiUsb_Tx): '<S17>/UsbTx1' */
  /* S-Function Block: '<S17>/UsbTx1' */
  USB_TxVariable(18, &TBRe_Mod_B.Compare_c, 1);

  /* S-Function (NsiIo_FrequencyInput): '<S15>/FrequentialInput2' */
  /* S-Function Block: <S15>/FrequentialInput2 (NsiIo_FrequencyInput) */
  /* Get Frequency */
  eTPU_GetInputFreq(1, FREQ_INPUT_10KHZ, &TBRe_Mod_B.IMD_Freq);

  /* S-Function (NsiUsb_Tx): '<S17>/UsbTx3' */
  /* S-Function Block: '<S17>/UsbTx3' */
  USB_TxVariable(19, &TBRe_Mod_B.IMD_Freq, 4);

  /* S-Function (NsiIo_FrequencyInput): '<S15>/FrequentialInput3' */
  /* S-Function Block: <S15>/FrequentialInput3 (NsiIo_FrequencyInput) */
  /* Get Frequency */
  eTPU_GetInputFreq(2, FREQ_INPUT_10KHZ, &TBRe_Mod_B.IMD_Duty_j);

  /* Sum: '<S15>/Add' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S15>/Constant1'
   *  Product: '<S15>/Divide'
   */
  TBRe_Mod_B.IMD_Duty = 100.0 - (real_T)TBRe_Mod_B.IMD_Duty_j / 1000.0;

  /* S-Function (NsiUsb_Tx): '<S17>/UsbTx4' */
  /* S-Function Block: '<S17>/UsbTx4' */
  USB_TxVariable(20, &TBRe_Mod_B.IMD_Duty, 8);

  /* Sum: '<S34>/Subtract1' incorporates:
   *  Constant: '<S34>/Constant'
   *  Constant: '<S34>/Constant1'
   *  Constant: '<S34>/Constant2'
   *  Gain: '<S34>/Gain'
   *  Product: '<S34>/Divide'
   *  Sum: '<S34>/Subtract'
   */
  TBRe_Mod_B.IMD_Resistance = 1080.0 / (0.01 * TBRe_Mod_B.IMD_Duty - 0.05) -
    1200.0;

  /* S-Function (NsiUsb_Tx): '<S17>/UsbTx5' */
  /* S-Function Block: '<S17>/UsbTx5' */
  USB_TxVariable(21, &TBRe_Mod_B.IMD_Resistance, 8);

  /* S-Function (NsiMem_Read): '<S17>/Memory read' */
  /* S-Function Block: <S17>/Memory read (NsiMem_Read) */
  TBRe_Mod_B.Memoryread_g = (U16)Green_TSAL1;

  /* S-Function (NsiIo_AnalogOutput): '<S17>/AnalogOutput3' */
  /* S-Function Block: <S17>/AnalogOutput3 (NsiIo_AnalogOutput) */
  {
    static U16 u16Voltage = 0xFFFF;
    if (u16Voltage != TBRe_Mod_B.Memoryread_g) {
      setAnaOutputVoltage(3, TBRe_Mod_B.Memoryread_g);
      u16Voltage = TBRe_Mod_B.Memoryread_g;
    }
  }

  /* S-Function (NsiMem_Read): '<S17>/Memory read1' */
  /* S-Function Block: <S17>/Memory read1 (NsiMem_Read) */
  TBRe_Mod_B.Memoryread1_n = (U16)Green_TSAL2;

  /* S-Function (NsiIo_AnalogOutput): '<S17>/AnalogOutput4' */
  /* S-Function Block: <S17>/AnalogOutput4 (NsiIo_AnalogOutput) */
  {
    static U16 u16Voltage = 0xFFFF;
    if (u16Voltage != TBRe_Mod_B.Memoryread1_n) {
      setAnaOutputVoltage(4, TBRe_Mod_B.Memoryread1_n);
      u16Voltage = TBRe_Mod_B.Memoryread1_n;
    }
  }

  /* S-Function (NsiUsb_Rx): '<S17>/UsbRx' */
  /* S-Function Block: '<S17>/UsbRx' */

  /* S-Function (NsiIo_DigitalOutput): '<S17>/DigitalOutput4' */
  /* S-Function Block: <S17>/DigitalOutput4 (NsiIo_DigitalOutput) */
  writeDigitalOutput(4, HS_DIGITAL_OUTPUT, TBRe_Mod_B.UsbRx_n);

  /* S-Function (NsiUsb_Tx): '<S17>/UsbTx2' */
  /* S-Function Block: '<S17>/UsbTx2' */
  USB_TxVariable(25, &TBRe_Mod_B.UsbRx_n, 1);

  /* Chart: '<S22>/Wake_Up' */
  if (TBRe_Mod_DW.temporalCounter_i1_n < 63U) {
    TBRe_Mod_DW.temporalCounter_i1_n++;
  }

  /* Gateway: MainTask/Post_Processing_Layer/Dash_LEDs/Wake_Up */
  /* During: MainTask/Post_Processing_Layer/Dash_LEDs/Wake_Up */
  if (TBRe_Mod_DW.is_active_c4_TBRe_Mod == 0U) {
    /* Entry: MainTask/Post_Processing_Layer/Dash_LEDs/Wake_Up */
    TBRe_Mod_DW.is_active_c4_TBRe_Mod = 1U;

    /* Entry Internal: MainTask/Post_Processing_Layer/Dash_LEDs/Wake_Up */
    /* Transition: '<S29>:2' */
    TBRe_Mod_DW.is_c4_TBRe_Mod = TBRe_Mod_IN_Init;
    TBRe_Mod_DW.temporalCounter_i1_n = 0U;

    /* Entry 'Init': '<S29>:1' */
    rtb_LogicalOperator2 = true;
    X = false;
    Y = false;
    Z = false;
  } else {
    switch (TBRe_Mod_DW.is_c4_TBRe_Mod) {
     case TBRe_Mod_IN_Init:
      rtb_LogicalOperator2 = true;
      X = false;
      Y = false;
      Z = false;

      /* During 'Init': '<S29>:1' */
      if (TBRe_Mod_DW.temporalCounter_i1_n >= 50U) {
        /* Transition: '<S29>:5' */
        TBRe_Mod_DW.is_c4_TBRe_Mod = TBRe_Mod_IN_One;
        TBRe_Mod_DW.temporalCounter_i1_n = 0U;

        /* Entry 'One': '<S29>:3' */
        rtb_LogicalOperator2 = false;
        X = true;
      }
      break;

     case TBRe_Mod_IN_Normal:
      rtb_LogicalOperator2 = false;
      X = false;
      Y = false;
      Z = false;

      /* During 'Normal': '<S29>:14' */
      break;

     case TBRe_Mod_IN_One:
      rtb_LogicalOperator2 = false;
      X = true;
      Y = false;
      Z = false;

      /* During 'One': '<S29>:3' */
      if (TBRe_Mod_DW.temporalCounter_i1_n >= 50U) {
        /* Transition: '<S29>:15' */
        TBRe_Mod_DW.is_c4_TBRe_Mod = TBRe_Mod_IN_Two;
        TBRe_Mod_DW.temporalCounter_i1_n = 0U;

        /* Entry 'Two': '<S29>:12' */
        X = false;
        Y = true;
      }
      break;

     case TBRe_Mod_IN_Three:
      rtb_LogicalOperator2 = false;
      X = false;
      Y = false;
      Z = true;

      /* During 'Three': '<S29>:13' */
      if (TBRe_Mod_DW.temporalCounter_i1_n >= 50U) {
        /* Transition: '<S29>:17' */
        TBRe_Mod_DW.is_c4_TBRe_Mod = TBRe_Mod_IN_Normal;

        /* Entry 'Normal': '<S29>:14' */
        Z = false;
      }
      break;

     default:
      rtb_LogicalOperator2 = false;
      X = false;
      Y = true;
      Z = false;

      /* During 'Two': '<S29>:12' */
      if (TBRe_Mod_DW.temporalCounter_i1_n >= 50U) {
        /* Transition: '<S29>:16' */
        TBRe_Mod_DW.is_c4_TBRe_Mod = TBRe_Mod_IN_Three;
        TBRe_Mod_DW.temporalCounter_i1_n = 0U;

        /* Entry 'Three': '<S29>:13' */
        Y = false;
        Z = true;
      }
      break;
    }
  }

  /* End of Chart: '<S22>/Wake_Up' */

  /* Chart: '<S22>/Flashy1' */
  if (TBRe_Mod_DW.temporalCounter_i1_fp < 31U) {
    TBRe_Mod_DW.temporalCounter_i1_fp++;
  }

  /* Gateway: MainTask/Post_Processing_Layer/Dash_LEDs/Flashy1 */
  /* During: MainTask/Post_Processing_Layer/Dash_LEDs/Flashy1 */
  if (TBRe_Mod_DW.is_active_c7_TBRe_Mod == 0U) {
    /* Entry: MainTask/Post_Processing_Layer/Dash_LEDs/Flashy1 */
    TBRe_Mod_DW.is_active_c7_TBRe_Mod = 1U;

    /* Entry Internal: MainTask/Post_Processing_Layer/Dash_LEDs/Flashy1 */
    /* Transition: '<S27>:2' */
    TBRe_Mod_DW.is_c7_TBRe_Mod = TBRe_Mod_IN_Init;
    TBRe_Mod_DW.temporalCounter_i1_fp = 0U;

    /* Entry 'Init': '<S27>:1' */
    Light_e = true;
  } else if (TBRe_Mod_DW.is_c7_TBRe_Mod == TBRe_Mod_IN_Init) {
    Light_e = true;

    /* During 'Init': '<S27>:1' */
    if (TBRe_Mod_DW.temporalCounter_i1_fp >= 20U) {
      /* Transition: '<S27>:5' */
      TBRe_Mod_DW.is_c7_TBRe_Mod = TBRe_Mod_IN_Normal;
      TBRe_Mod_DW.temporalCounter_i1_fp = 0U;

      /* Entry 'Normal': '<S27>:3' */
      Light_e = false;
    }
  } else {
    Light_e = false;

    /* During 'Normal': '<S27>:3' */
    if (TBRe_Mod_DW.temporalCounter_i1_fp >= 20U) {
      /* Transition: '<S27>:8' */
      TBRe_Mod_DW.is_c7_TBRe_Mod = TBRe_Mod_IN_Init;
      TBRe_Mod_DW.temporalCounter_i1_fp = 0U;

      /* Entry 'Init': '<S27>:1' */
      Light_e = true;
    }
  }

  /* End of Chart: '<S22>/Flashy1' */

  /* Logic: '<S22>/Logical Operator3' incorporates:
   *  Constant: '<S25>/Constant'
   *  Logic: '<S22>/Logical Operator6'
   *  RelationalOperator: '<S25>/Compare'
   */
  TBRe_Mod_B.X_LED = (X || (Light_e && (rtb_State == 2)) || TBRe_Mod_B.TSS_f);

  /* S-Function (NsiIo_DigitalOutput): '<S18>/DigitalOutput1' */
  /* S-Function Block: <S18>/DigitalOutput1 (NsiIo_DigitalOutput) */
  writeDigitalOutput(4, LS_DIGITAL_OUTPUT, TBRe_Mod_B.X_LED);

  /* Logic: '<S22>/Logical Operator5' */
  TBRe_Mod_B.Z_LED = Z;

  /* S-Function (NsiIo_DigitalOutput): '<S18>/DigitalOutput2' */
  /* S-Function Block: <S18>/DigitalOutput2 (NsiIo_DigitalOutput) */
  writeDigitalOutput(3, LS_DIGITAL_OUTPUT, TBRe_Mod_B.Z_LED);

  /* Logic: '<S22>/Logical Operator4' */
  TBRe_Mod_B.Y_LED = Y;

  /* S-Function (NsiIo_DigitalOutput): '<S18>/DigitalOutput3' */
  /* S-Function Block: <S18>/DigitalOutput3 (NsiIo_DigitalOutput) */
  writeDigitalOutput(5, LS_DIGITAL_OUTPUT, TBRe_Mod_B.Y_LED);

  /* Logic: '<S22>/Logical Operator2' incorporates:
   *  Constant: '<S24>/Constant'
   *  RelationalOperator: '<S24>/Compare'
   */
  TBRe_Mod_B.RTD_LED = (rtb_LogicalOperator2 || (TBRe_Mod_B.State == 3));

  /* S-Function (NsiIo_DigitalOutput): '<S18>/DigitalOutput4' */
  /* S-Function Block: <S18>/DigitalOutput4 (NsiIo_DigitalOutput) */
  writeDigitalOutput(6, LS_DIGITAL_OUTPUT, TBRe_Mod_B.RTD_LED);

  /* Chart: '<S22>/Flashy' */
  if (TBRe_Mod_DW.temporalCounter_i1_k0 < 63U) {
    TBRe_Mod_DW.temporalCounter_i1_k0++;
  }

  /* Gateway: MainTask/Post_Processing_Layer/Dash_LEDs/Flashy */
  /* During: MainTask/Post_Processing_Layer/Dash_LEDs/Flashy */
  if (TBRe_Mod_DW.is_active_c5_TBRe_Mod == 0U) {
    /* Entry: MainTask/Post_Processing_Layer/Dash_LEDs/Flashy */
    TBRe_Mod_DW.is_active_c5_TBRe_Mod = 1U;

    /* Entry Internal: MainTask/Post_Processing_Layer/Dash_LEDs/Flashy */
    /* Transition: '<S26>:2' */
    TBRe_Mod_DW.is_c5_TBRe_Mod = TBRe_Mod_IN_Init;
    TBRe_Mod_DW.temporalCounter_i1_k0 = 0U;

    /* Entry 'Init': '<S26>:1' */
    rtb_LogicalOperator2 = true;
  } else if (TBRe_Mod_DW.is_c5_TBRe_Mod == TBRe_Mod_IN_Init) {
    rtb_LogicalOperator2 = true;

    /* During 'Init': '<S26>:1' */
    if (TBRe_Mod_DW.temporalCounter_i1_k0 >= 50U) {
      /* Transition: '<S26>:5' */
      TBRe_Mod_DW.is_c5_TBRe_Mod = TBRe_Mod_IN_Normal;
      TBRe_Mod_DW.temporalCounter_i1_k0 = 0U;

      /* Entry 'Normal': '<S26>:3' */
      rtb_LogicalOperator2 = false;
    }
  } else {
    rtb_LogicalOperator2 = false;

    /* During 'Normal': '<S26>:3' */
    if (TBRe_Mod_DW.temporalCounter_i1_k0 >= 50U) {
      /* Transition: '<S26>:8' */
      TBRe_Mod_DW.is_c5_TBRe_Mod = TBRe_Mod_IN_Init;
      TBRe_Mod_DW.temporalCounter_i1_k0 = 0U;

      /* Entry 'Init': '<S26>:1' */
      rtb_LogicalOperator2 = true;
    }
  }

  /* End of Chart: '<S22>/Flashy' */

  /* Chart: '<S22>/InitLight' */
  if (TBRe_Mod_DW.temporalCounter_i1_f < 255U) {
    TBRe_Mod_DW.temporalCounter_i1_f++;
  }

  /* Gateway: MainTask/Post_Processing_Layer/Dash_LEDs/InitLight */
  /* During: MainTask/Post_Processing_Layer/Dash_LEDs/InitLight */
  if (TBRe_Mod_DW.is_active_c3_TBRe_Mod == 0U) {
    /* Entry: MainTask/Post_Processing_Layer/Dash_LEDs/InitLight */
    TBRe_Mod_DW.is_active_c3_TBRe_Mod = 1U;

    /* Entry Internal: MainTask/Post_Processing_Layer/Dash_LEDs/InitLight */
    /* Transition: '<S28>:2' */
    TBRe_Mod_DW.is_c3_TBRe_Mod = TBRe_Mod_IN_Init;
    TBRe_Mod_DW.temporalCounter_i1_f = 0U;

    /* Entry 'Init': '<S28>:1' */
    X = true;
  } else if (TBRe_Mod_DW.is_c3_TBRe_Mod == TBRe_Mod_IN_Init) {
    X = true;

    /* During 'Init': '<S28>:1' */
    if (TBRe_Mod_DW.temporalCounter_i1_f >= 250U) {
      /* Transition: '<S28>:5' */
      TBRe_Mod_DW.is_c3_TBRe_Mod = TBRe_Mod_IN_Normal;

      /* Entry 'Normal': '<S28>:3' */
      X = false;
    }
  } else {
    X = false;

    /* During 'Normal': '<S28>:3' */
  }

  /* End of Chart: '<S22>/InitLight' */

  /* S-Function (NsiUsb_Rx): '<S22>/UsbRx' */
  /* S-Function Block: '<S22>/UsbRx' */

  /* Logic: '<S22>/Logical Operator' incorporates:
   *  Logic: '<S22>/Logical Operator1'
   */
  TBRe_Mod_B.APPS_LED = ((TBRe_Mod_B.ProductofElements != 0) ||
    (rtb_LogicalOperator2 && TBRe_Mod_B.LogicalOperator2) || X ||
    (TBRe_Mod_B.UsbRx != 0));

  /* S-Function (NsiIo_DigitalOutput): '<S18>/DigitalOutput5' */
  /* S-Function Block: <S18>/DigitalOutput5 (NsiIo_DigitalOutput) */
  writeDigitalOutput(2, LS_DIGITAL_OUTPUT, TBRe_Mod_B.APPS_LED);

  /* Saturate: '<S53>/Saturation' */
  if (TBRe_Mod_B.Motor_Speed > 10000) {
    rtb_Throttle_Req = 10000;
  } else if (TBRe_Mod_B.Motor_Speed < 1) {
    rtb_Throttle_Req = 1;
  } else {
    rtb_Throttle_Req = TBRe_Mod_B.Motor_Speed;
  }

  /* End of Saturate: '<S53>/Saturation' */

  /* Product: '<S53>/Divide' incorporates:
   *  Constant: '<S53>/Constant'
   *  Gain: '<S53>/Gain'
   */
  rtb_LowerLinit = 30000.0 / (27452.0 * (real_T)rtb_Throttle_Req *
    3.814697265625E-6);

  /* Lookup_n-D: '<S53>/Throttle_Torque_Map_%_240Nm' */
  rtb_Throttle_Req = look1_iu8lu16n16ts16Ds_FbqVATJM(TBRe_Mod_B.Product,
    TBRe_Mod_ConstP.Throttle_Torque_Map__240Nm_bp01,
    TBRe_Mod_ConstP.Throttle_Torque_Map__240Nm_tabl, 2U);

  /* Switch: '<S60>/Switch2' incorporates:
   *  RelationalOperator: '<S60>/LowerRelop1'
   *  RelationalOperator: '<S60>/UpperRelop'
   *  Switch: '<S60>/Switch'
   */
  if (rtb_Throttle_Req > rtb_LowerLinit) {
    TBRe_Mod_B.Switch2 = (int16_T)floor(rtb_LowerLinit);
  } else if (rtb_Throttle_Req < 0) {
    /* Switch: '<S60>/Switch' incorporates:
     *  Constant: '<S53>/Constant1'
     */
    TBRe_Mod_B.Switch2 = 0;
  } else {
    TBRe_Mod_B.Switch2 = rtb_Throttle_Req;
  }

  /* End of Switch: '<S60>/Switch2' */

  /* DataTypeConversion: '<S19>/Data Type Conversion10' incorporates:
   *  Gain: '<S19>/Gain1'
   */
  TBRe_Mod_B.DataTypeConversion10 = (uint16_T)(TBRe_Mod_B.Switch2 << 4);

  /* DataTypeConversion: '<S19>/Data Type Conversion3' */
  TBRe_Mod_B.DataTypeConversion3 = TBRe_Mod_B.Control_Word;

  /* S-Function (NsiMem_Read): '<S19>/Memory read' */
  /* S-Function Block: <S19>/Memory read (NsiMem_Read) */
  TBRe_Mod_B.Memoryread = (S16)INV_Torque_limit;

  /* DataTypeConversion: '<S19>/Data Type Conversion1' incorporates:
   *  Gain: '<S19>/Gain2'
   */
  TBRe_Mod_B.DataTypeConversion1 = (uint16_T)(TBRe_Mod_B.Memoryread << 4);

  /* S-Function (NsiCan_Tx_J1939_Ext): '<S19>/CanTx2' */

  /* S-Function Block: '<S19>/CanTx2' */
  // preparing the data
  sigCan2TxHC1_DemandsSignals[0].data = TBRe_Mod_B.DataTypeConversion10;
  sigCan2TxHC1_DemandsSignals[1].data = TBRe_Mod_B.DataTypeConversion3;
  sigCan2TxHC1_DemandsSignals[2].data = TBRe_Mod_B.DataTypeConversion1;

  // sending the message HC1_Demands in the channel 2
  CAN_TransmitMessage(FLEX_CAN_B, sigCan2TxHC1_DemandsSignals, 3,
                      &objCan2HC1_Demands);

  /* S-Function (NsiUsb_Tx): '<S19>/UsbTx1' */
  /* S-Function Block: '<S19>/UsbTx1' */
  USB_TxVariable(28, &TBRe_Mod_B.DataTypeConversion10, 2);

  /* S-Function (NsiUsb_Tx): '<S19>/UsbTx2' */
  /* S-Function Block: '<S19>/UsbTx2' */
  USB_TxVariable(29, &TBRe_Mod_B.Switch2, 2);

  /* S-Function (NsiMem_Read): '<S19>/Memory read4' */
  /* S-Function Block: <S19>/Memory read4 (NsiMem_Read) */
  TBRe_Mod_B.Memoryread4 = (S16)INV_DC_Link_Target;

  /* DataTypeConversion: '<S19>/Data Type Conversion8' incorporates:
   *  Gain: '<S19>/Gain4'
   */
  TBRe_Mod_B.DataTypeConversion8 = (uint16_T)(TBRe_Mod_B.Memoryread4 << 4);

  /* S-Function (NsiMem_Read): '<S19>/Memory read5' */
  /* S-Function Block: <S19>/Memory read5 (NsiMem_Read) */
  TBRe_Mod_B.Memoryread5 = (S16)INV_DC_Link_Regen_Imax;

  /* DataTypeConversion: '<S19>/Data Type Conversion9' */
  TBRe_Mod_B.DataTypeConversion9 = (uint16_T)TBRe_Mod_B.Memoryread5;

  /* S-Function (NsiMem_Read): '<S19>/Memory read6' */
  /* S-Function Block: <S19>/Memory read6 (NsiMem_Read) */
  TBRe_Mod_B.Memoryread6 = (S16)INV_DC_Link_Discharge_Imax;

  /* DataTypeConversion: '<S19>/Data Type Conversion20' */
  TBRe_Mod_B.DataTypeConversion20 = (uint16_T)TBRe_Mod_B.Memoryread6;

  /* S-Function (NsiCan_Tx_J1939_Ext): '<S19>/CanTx4' */

  /* S-Function Block: '<S19>/CanTx4' */
  // preparing the data
  sigCan2TxHC3_Battery_DemandsSignals[0].data = TBRe_Mod_B.DataTypeConversion8;
  sigCan2TxHC3_Battery_DemandsSignals[1].data = TBRe_Mod_B.DataTypeConversion9;
  sigCan2TxHC3_Battery_DemandsSignals[2].data = TBRe_Mod_B.DataTypeConversion20;

  // sending the message HC3_Battery_Demands in the channel 2
  CAN_TransmitMessage(FLEX_CAN_B, sigCan2TxHC3_Battery_DemandsSignals, 3,
                      &objCan2HC3_Battery_Demands);

  /* S-Function (NsiMem_Read): '<S19>/Memory read1' */
  /* S-Function Block: <S19>/Memory read1 (NsiMem_Read) */
  TBRe_Mod_B.Memoryread1 = (S16)INV_Speed_limit_Rev;

  /* DataTypeConversion: '<S19>/Data Type Conversion12' */
  TBRe_Mod_B.DataTypeConversion12 = (uint16_T)TBRe_Mod_B.Memoryread1;

  /* S-Function (NsiMem_Read): '<S19>/Memory read2' */
  /* S-Function Block: <S19>/Memory read2 (NsiMem_Read) */
  TBRe_Mod_B.Memoryread2 = (S16)INV_Speed_Limit_Fwd;

  /* DataTypeConversion: '<S19>/Data Type Conversion6' */
  TBRe_Mod_B.DataTypeConversion6 = (uint16_T)TBRe_Mod_B.Memoryread2;

  /* S-Function (NsiMem_Read): '<S19>/Memory read3' */
  /* S-Function Block: <S19>/Memory read3 (NsiMem_Read) */
  TBRe_Mod_B.Memoryread3 = (S16)INV_Regen_Torque_Limit;

  /* DataTypeConversion: '<S19>/Data Type Conversion7' incorporates:
   *  Gain: '<S19>/Gain3'
   */
  TBRe_Mod_B.DataTypeConversion7 = (uint16_T)(TBRe_Mod_B.Memoryread3 << 4);

  /* S-Function (NsiCan_Tx_J1939_Ext): '<S19>/CanTx6' */

  /* S-Function Block: '<S19>/CanTx6' */
  // preparing the data
  sigCan2TxHC2_DemandsSignals[0].data = TBRe_Mod_B.DataTypeConversion12;
  sigCan2TxHC2_DemandsSignals[1].data = TBRe_Mod_B.DataTypeConversion6;
  sigCan2TxHC2_DemandsSignals[2].data = TBRe_Mod_B.DataTypeConversion7;

  // sending the message HC2_Demands in the channel 2
  CAN_TransmitMessage(FLEX_CAN_B, sigCan2TxHC2_DemandsSignals, 3,
                      &objCan2HC2_Demands);

  /* S-Function (NsiMem_Read): '<S19>/Memory read7' */
  /* S-Function Block: <S19>/Memory read7 (NsiMem_Read) */
  TBRe_Mod_B.Memoryread7 = (S16)INV_Id_Debug;

  /* DataTypeConversion: '<S19>/Data Type Conversion21' incorporates:
   *  Gain: '<S19>/Gain5'
   */
  TBRe_Mod_B.DataTypeConversion21 = (uint16_T)(TBRe_Mod_B.Memoryread7 << 4);

  /* S-Function (NsiMem_Read): '<S19>/Memory read8' */
  /* S-Function Block: <S19>/Memory read8 (NsiMem_Read) */
  TBRe_Mod_B.Memoryread8 = (S16)INV_Iq_debug;

  /* DataTypeConversion: '<S19>/Data Type Conversion22' incorporates:
   *  Gain: '<S19>/Gain6'
   */
  TBRe_Mod_B.DataTypeConversion22 = (uint16_T)(TBRe_Mod_B.Memoryread8 << 4);

  /* S-Function (NsiCan_Tx_J1939_Ext): '<S19>/CanTx7' */

  /* S-Function Block: '<S19>/CanTx7' */
  // preparing the data
  sigCan2TxHC4_Debug_DemandsSignals[0].data = TBRe_Mod_B.DataTypeConversion21;
  sigCan2TxHC4_Debug_DemandsSignals[1].data = TBRe_Mod_B.DataTypeConversion22;

  // sending the message HC4_Debug_Demands in the channel 2
  CAN_TransmitMessage(FLEX_CAN_B, sigCan2TxHC4_Debug_DemandsSignals, 2,
                      &objCan2HC4_Debug_Demands);

  /* S-Function (NsiUsb_Tx): '<S8>/UsbTx1' */
  /* S-Function Block: '<S8>/UsbTx1' */
  USB_TxVariable(38, &TBRe_Mod_B.Instant_Pack_Voltage, 4);

  /* S-Function (NsiCan_Rx_Ext): '<S8>/CanRx1' */

  /* S-Function Block: '<S8>/CanRx1' */
  // receiving the message BMS_Feedback_3 in the channel 1
  TBRe_Mod_B.CanRx1_o7 = objCan1BMS_Feedback_3.RXState;
  if (objCan1BMS_Feedback_3.RXState == FRAME_RX_RECEIVED) {
    //       CAN_ReceiveMessage(sigCan1RxBMS_Feedback_3Signals, 6, &objCan1BMS_Feedback_3);
    CAN_ReceiveMessage(sigCan1RxBMS_Feedback_3Signals, sizeof
                       (sigCan1RxBMS_Feedback_3Signals)/sizeof(t_SignalData),
                       &objCan1BMS_Feedback_3);
    objCan1BMS_Feedback_3.RXState = FRAME_RX_NOT_RECEIVED;
  }

  // extracting signal BMS_Feedback_3_Avg_pack_temp
  TBRe_Mod_B.Avg_Cell_Temp = ( sigCan1RxBMS_Feedback_3Signals[0].data);

  // extracting signal BMS_Feedback_3_Highest_pack_temp
  TBRe_Mod_B.Highest_Cell_Temp = ( sigCan1RxBMS_Feedback_3Signals[1].data);

  // extracting signal BMS_Feedback_3_Lowest_pack_temp
  TBRe_Mod_B.Lowest_Cell_Temp = ( sigCan1RxBMS_Feedback_3Signals[2].data);

  // extracting signal BMS_Feedback_3_Highest_temp_ID
  TBRe_Mod_B.Highest_Temp_ID = ( sigCan1RxBMS_Feedback_3Signals[3].data);

  // extracting signal BMS_Feedback_3_Lowest_temp_ID
  TBRe_Mod_B.Lowest_Temp_ID = ( sigCan1RxBMS_Feedback_3Signals[4].data);

  // extracting signal BMS_Feedback_3_Heatsink_temp
  TBRe_Mod_B.BMS_Heatsink_Temp = ( sigCan1RxBMS_Feedback_3Signals[5].data);

  /* S-Function (NsiCan_Rx_Ext): '<S8>/CanRx7' */

  /* S-Function Block: '<S8>/CanRx7' */
  // receiving the message BMS_Feedback_2 in the channel 1
  TBRe_Mod_B.CanRx7_o6 = objCan1BMS_Feedback_2.RXState;
  if (objCan1BMS_Feedback_2.RXState == FRAME_RX_RECEIVED) {
    //       CAN_ReceiveMessage(sigCan1RxBMS_Feedback_2Signals, 5, &objCan1BMS_Feedback_2);
    CAN_ReceiveMessage(sigCan1RxBMS_Feedback_2Signals, sizeof
                       (sigCan1RxBMS_Feedback_2Signals)/sizeof(t_SignalData),
                       &objCan1BMS_Feedback_2);
    objCan1BMS_Feedback_2.RXState = FRAME_RX_NOT_RECEIVED;
  }

  // extracting signal BMS_Feedback_2_Avg_Cell_Voltage
  TBRe_Mod_B.Abg_Cell_Voltage = (0.000100F * sigCan1RxBMS_Feedback_2Signals[0].
    data);

  // extracting signal BMS_Feedback_2_High_Cell_Voltage
  TBRe_Mod_B.High_Cell_Voltage = (0.000100F * sigCan1RxBMS_Feedback_2Signals[1].
    data);

  // extracting signal BMS_Feedback_2_High_Cell_ID
  TBRe_Mod_B.High_Cell_ID = ( sigCan1RxBMS_Feedback_2Signals[2].data);

  // extracting signal BMS_Feedback_2_Low_Cell_Voltage
  TBRe_Mod_B.Low_Cell_Voltage = (0.000100F * sigCan1RxBMS_Feedback_2Signals[3].
    data);

  // extracting signal BMS_Feedback_2_Low_Cell_ID
  TBRe_Mod_B.Low_Cell_ID = ( sigCan1RxBMS_Feedback_2Signals[4].data);

  /* S-Function (NsiUsb_Tx): '<S12>/UsbTx1' */
  /* S-Function Block: '<S12>/UsbTx1' */
  USB_TxVariable(39, &TBRe_Mod_B.AIRLow, 1);

  /* S-Function (NsiUsb_Tx): '<S12>/UsbTx2' */
  /* S-Function Block: '<S12>/UsbTx2' */
  USB_TxVariable(40, &TBRe_Mod_B.AIRHigh, 1);

  /* S-Function (NsiIo_DigitalInput): '<S13>/DigitalInput6' */
  /* S-Function Block: <S13>/DigitalInput6 (NsiIo_DigitalInput) */
  readDigitalInput(18, (U08*)&TBRe_Mod_B.BMS_Multi1);

  /* S-Function (NsiIo_DigitalInput): '<S13>/DigitalInput1' */
  /* S-Function Block: <S13>/DigitalInput1 (NsiIo_DigitalInput) */
  readDigitalInput(16, (U08*)&TBRe_Mod_B.BMS_Multi2);

  /* S-Function (NsiIo_DigitalInput): '<S13>/DigitalInput2' */
  /* S-Function Block: <S13>/DigitalInput2 (NsiIo_DigitalInput) */
  readDigitalInput(17, (U08*)&TBRe_Mod_B.BMS_ChargeEnable);

  /* S-Function (NsiIo_DigitalInput): '<S14>/DigitalInput2' */
  /* S-Function Block: <S14>/DigitalInput2 (NsiIo_DigitalInput) */
  readDigitalInput(11, (U08*)&TBRe_Mod_B.btnRTD_Input);

  /* S-Function (NsiUsb_Tx): '<S14>/UsbTx1' */
  /* S-Function Block: '<S14>/UsbTx1' */
  USB_TxVariable(41, &TBRe_Mod_B.btnRTD_Input, 1);

  /* S-Function (NsiUsb_Tx): '<S14>/UsbTx2' */
  /* S-Function Block: '<S14>/UsbTx2' */
  USB_TxVariable(42, &TBRe_Mod_B.btnPreCharge_Input, 1);

  /* S-Function (NsiIo_DigitalInput): '<S14>/DigitalInput4' */
  /* S-Function Block: <S14>/DigitalInput4 (NsiIo_DigitalInput) */
  readDigitalInput(13, (U08*)&TBRe_Mod_B.btnY_Input);

  /* S-Function (NsiUsb_Tx): '<S14>/UsbTx3' */
  /* S-Function Block: '<S14>/UsbTx3' */
  USB_TxVariable(43, &TBRe_Mod_B.btnY_Input, 1);

  /* S-Function (NsiIo_DigitalInput): '<S14>/DigitalInput1' */
  /* S-Function Block: <S14>/DigitalInput1 (NsiIo_DigitalInput) */
  readDigitalInput(14, (U08*)&TBRe_Mod_B.btnZ_Input);

  /* S-Function (NsiUsb_Tx): '<S14>/UsbTx4' */
  /* S-Function Block: '<S14>/UsbTx4' */
  USB_TxVariable(44, &TBRe_Mod_B.btnZ_Input, 1);

  /* S-Function (NsiIo_DigitalInput): '<S14>/DigitalInput5' */
  /* S-Function Block: <S14>/DigitalInput5 (NsiIo_DigitalInput) */
  readDigitalInput(9, (U08*)&TBRe_Mod_B.btnPumpFan_Input);

  /* S-Function (NsiUsb_Tx): '<S14>/UsbTx6' */
  /* S-Function Block: '<S14>/UsbTx6' */
  USB_TxVariable(45, &TBRe_Mod_B.btnPumpFan_Input, 1);

  /* S-Function (NsiIo_DigitalInput): '<S14>/DigitalInput6' */
  /* S-Function Block: <S14>/DigitalInput6 (NsiIo_DigitalInput) */
  readDigitalInput(10, (U08*)&TBRe_Mod_B.btnAccyFan_Input);

  /* S-Function (NsiUsb_Tx): '<S14>/UsbTx5' */
  /* S-Function Block: '<S14>/UsbTx5' */
  USB_TxVariable(46, &TBRe_Mod_B.btnAccyFan_Input, 1);

  /* S-Function (NsiIo_FrequencyInput): '<S9>/FrequentialInput1' */
  /* S-Function Block: <S9>/FrequentialInput1 (NsiIo_FrequencyInput) */
  /* Get Frequency */
  eTPU_GetInputFreq(3, FREQ_INPUT_10KHZ, &TBRe_Mod_B.Fan_Freq);

  /* S-Function (NsiUsb_Tx): '<S16>/UsbTx1' */
  /* S-Function Block: '<S16>/UsbTx1' */
  USB_TxVariable(47, &TBRe_Mod_B.Throttle1_Voltage, 2);

  /* S-Function (NsiUsb_Tx): '<S16>/UsbTx3' */
  /* S-Function Block: '<S16>/UsbTx3' */
  USB_TxVariable(48, &TBRe_Mod_B.Throttle2_Voltage, 2);

  /* S-Function (NsiUsb_Tx): '<S16>/UsbTx4' */
  /* S-Function Block: '<S16>/UsbTx4' */
  USB_TxVariable(49, &TBRe_Mod_B.Brake1_Pressure, 2);

  /* S-Function (NsiUsb_Tx): '<S16>/UsbTx2' */
  /* S-Function Block: '<S16>/UsbTx2' */
  USB_TxVariable(50, &TBRe_Mod_B.Brake2_Pressure, 2);

  /* S-Function (NsiIo_Vbat): '<S9>/VBat' */
  /* S-Function Block: <S9>/VBat (NsiIo_Vbat) */
  ANA_IN_ReadVBatt(&TBRe_Mod_B.LV_Battery_Voltage);

  /* S-Function (NsiUsb_Tx): '<S10>/UsbTx1' */
  /* S-Function Block: '<S10>/UsbTx1' */
  USB_TxVariable(51, &TBRe_Mod_B.MCU_Voltage, 4);

  /* S-Function (NsiUsb_Tx): '<S10>/UsbTx2' */
  /* S-Function Block: '<S10>/UsbTx2' */
  USB_TxVariable(52, &TBRe_Mod_B.Motor_Temp, 2);

  /* S-Function (NsiCan_Rx_J1939_Ext): '<S10>/CanRx2' */

  /* S-Function Block: '<S10>/CanRx2' */
  // receiving the message HD4_Debug_Temperatures_B in the channel 2
  TBRe_Mod_B.CanRx2_o2 = objCan2HD4_Debug_Temperatures_B.RXState;
  if (objCan2HD4_Debug_Temperatures_B.RXState == FRAME_RX_RECEIVED) {
    CAN_ReceiveMessage(sigCan2RxHD4_Debug_Temperatures_BSignals, 1,
                       &objCan2HD4_Debug_Temperatures_B);
    objCan2HD4_Debug_Temperatures_B.RXState = FRAME_RX_NOT_RECEIVED;
  }

  // extracting the data
  // extracting signal HD4_Debug_Temperatures_B_Debug_Temps_Heatsink
  TBRe_Mod_B.MCU_Temp = ( sigCan2RxHD4_Debug_Temperatures_BSignals[0].data);

  /* S-Function (NsiUsb_Tx): '<S10>/UsbTx3' */
  /* S-Function Block: '<S10>/UsbTx3' */
  USB_TxVariable(53, &TBRe_Mod_B.MCU_Temp, 1);

  /* S-Function (NsiUsb_Tx): '<S10>/UsbTx4' */
  /* S-Function Block: '<S10>/UsbTx4' */
  USB_TxVariable(54, &TBRe_Mod_B.Motor_Speed, 2);

  /* S-Function (NsiUsb_Tx): '<S10>/UsbTx5' */
  /* S-Function Block: '<S10>/UsbTx5' */
  USB_TxVariable(55, &TBRe_Mod_B.CanRx4_o1, 4);

  /* S-Function (NsiUsb_Tx): '<S10>/UsbTx6' */
  /* S-Function Block: '<S10>/UsbTx6' */
  USB_TxVariable(56, &TBRe_Mod_B.FaultCode, 2);

  /* S-Function (NsiCan_Rx_Ext): '<S11>/CanRx1' */

  /* S-Function Block: '<S11>/CanRx1' */
  // receiving the message Front_Wheel_Speeds in the channel 1
  TBRe_Mod_B.CanRx1_o4 = objCan1Front_Wheel_Speeds.RXState;
  if (objCan1Front_Wheel_Speeds.RXState == FRAME_RX_RECEIVED) {
    //       CAN_ReceiveMessage(sigCan1RxFront_Wheel_SpeedsSignals, 3, &objCan1Front_Wheel_Speeds);
    CAN_ReceiveMessage(sigCan1RxFront_Wheel_SpeedsSignals, sizeof
                       (sigCan1RxFront_Wheel_SpeedsSignals)/sizeof(t_SignalData),
                       &objCan1Front_Wheel_Speeds);
    objCan1Front_Wheel_Speeds.RXState = FRAME_RX_NOT_RECEIVED;
  }

  // extracting signal Front_Wheel_Speeds_Front_Right_Wheel_Speed
  TBRe_Mod_B.FR_Wheel_Speed = (0.100000F * sigCan1RxFront_Wheel_SpeedsSignals[0]
    .data);

  // extracting signal Front_Wheel_Speeds_Front_Left_Wheel_Speed
  TBRe_Mod_B.FL_Wheel_Speed = (0.100000F * sigCan1RxFront_Wheel_SpeedsSignals[1]
    .data);

  // extracting signal Front_Wheel_Speeds_Vehicle_Speed
  TBRe_Mod_B.Front_Vehicle_Speed = ( sigCan1RxFront_Wheel_SpeedsSignals[2].data);

  /* S-Function (NsiCan_Rx_Ext): '<S11>/CanRx2' */

  /* S-Function Block: '<S11>/CanRx2' */
  // receiving the message Rear_Wheel_Speeds in the channel 1
  TBRe_Mod_B.CanRx2_o4 = objCan1Rear_Wheel_Speeds.RXState;
  if (objCan1Rear_Wheel_Speeds.RXState == FRAME_RX_RECEIVED) {
    //       CAN_ReceiveMessage(sigCan1RxRear_Wheel_SpeedsSignals, 3, &objCan1Rear_Wheel_Speeds);
    CAN_ReceiveMessage(sigCan1RxRear_Wheel_SpeedsSignals, sizeof
                       (sigCan1RxRear_Wheel_SpeedsSignals)/sizeof(t_SignalData),
                       &objCan1Rear_Wheel_Speeds);
    objCan1Rear_Wheel_Speeds.RXState = FRAME_RX_NOT_RECEIVED;
  }

  // extracting signal Rear_Wheel_Speeds_Rear_Right_Wheel_Speed
  TBRe_Mod_B.RR_Wheel_Speed = (0.100000F * sigCan1RxRear_Wheel_SpeedsSignals[0].
    data);

  // extracting signal Rear_Wheel_Speeds_Rear_Left_Wheel_Speed
  TBRe_Mod_B.RL_Wheel_Speed = (0.100000F * sigCan1RxRear_Wheel_SpeedsSignals[1].
    data);

  // extracting signal Rear_Wheel_Speeds_Rear_Wheel_Speed
  TBRe_Mod_B.Rear_Vehicle_Speed = ( sigCan1RxRear_Wheel_SpeedsSignals[2].data);

  /* S-Function (NsiCan_Rx_Ext): '<S11>/CanRx5' */

  /* S-Function Block: '<S11>/CanRx5' */
  // receiving the message SteeringWheelSensor in the channel 1
  TBRe_Mod_B.CanRx5_o2 = objCan1SteeringWheelSensor.RXState;
  if (objCan1SteeringWheelSensor.RXState == FRAME_RX_RECEIVED) {
    //       CAN_ReceiveMessage(sigCan1RxSteeringWheelSensorSignals, 1, &objCan1SteeringWheelSensor);
    CAN_ReceiveMessage(sigCan1RxSteeringWheelSensorSignals, sizeof
                       (sigCan1RxSteeringWheelSensorSignals)/sizeof(t_SignalData),
                       &objCan1SteeringWheelSensor);
    objCan1SteeringWheelSensor.RXState = FRAME_RX_NOT_RECEIVED;
  }

  // extracting signal SteeringWheelSensor_Acc_Angle
  TBRe_Mod_B.Steering_Angle = (0.100000F * sigCan1RxSteeringWheelSensorSignals[0]
    .data);

  /* S-Function (NsiCan_Rx_Ext): '<S11>/CanRx8' */

  /* S-Function Block: '<S11>/CanRx8' */
  // receiving the message AccelerometerY in the channel 1
  TBRe_Mod_B.CanRx8_o2 = objCan1AccelerometerY.RXState;
  if (objCan1AccelerometerY.RXState == FRAME_RX_RECEIVED) {
    //       CAN_ReceiveMessage(sigCan1RxAccelerometerYSignals, 1, &objCan1AccelerometerY);
    CAN_ReceiveMessage(sigCan1RxAccelerometerYSignals, sizeof
                       (sigCan1RxAccelerometerYSignals)/sizeof(t_SignalData),
                       &objCan1AccelerometerY);
    objCan1AccelerometerY.RXState = FRAME_RX_NOT_RECEIVED;
  }

  // extracting signal AccelerometerY_Acc_Yaw
  TBRe_Mod_B.Yaw = (0.005000F * sigCan1RxAccelerometerYSignals[0].data);

  /* S-Function (NsiCan_Rx_Ext): '<S11>/CanRx9' */

  /* S-Function Block: '<S11>/CanRx9' */
  // receiving the message Shutdown_Data in the channel 1
  TBRe_Mod_B.CanRx9_o21 = objCan1Shutdown_Data.RXState;
  if (objCan1Shutdown_Data.RXState == FRAME_RX_RECEIVED) {
    //       CAN_ReceiveMessage(sigCan1RxShutdown_DataSignals, 20, &objCan1Shutdown_Data);
    CAN_ReceiveMessage(sigCan1RxShutdown_DataSignals, sizeof
                       (sigCan1RxShutdown_DataSignals)/sizeof(t_SignalData),
                       &objCan1Shutdown_Data);
    objCan1Shutdown_Data.RXState = FRAME_RX_NOT_RECEIVED;
  }

  // extracting signal Shutdown_Data_Fault_CarShutdown
  TBRe_Mod_B.Shutdown_Error = ( sigCan1RxShutdown_DataSignals[0].data);

  /* S-Function (NsiMem_Read): '<S35>/Memory read' */
  /* S-Function Block: <S35>/Memory read (NsiMem_Read) */
  TBRe_Mod_B.Memoryread_l = (U16)LV_Low_Voltage_Warning;

  /* Lookup_n-D: '<S35>/Voltage_Act' */
  TBRe_Mod_B.LV_Battery_Voltage_n = look1_iu16tdIu16_binlca
    (TBRe_Mod_B.LV_Battery_Voltage, Voltage_Act_Breakpoint, Voltage_Act_Data, 1U);

  /* RelationalOperator: '<S35>/Relational Operator' */
  TBRe_Mod_B.LV_Warning = (TBRe_Mod_B.LV_Battery_Voltage_n <=
    TBRe_Mod_B.Memoryread_l);

  /* Lookup_n-D: '<S35>/SOC_Calc' */
  TBRe_Mod_B.LV_SOC = look1_iu16tdIu16_binlca(TBRe_Mod_B.LV_Battery_Voltage_n,
    SOC_Calc_Breakpoint, SOC_Calc_Data, 7U);

  /* S-Function (NsiMem_Read): '<S36>/Memory read' */
  /* S-Function Block: <S36>/Memory read (NsiMem_Read) */
  TBRe_Mod_B.Memoryread_b = (U16)MCUMotor_Temp_Warning;

  /* Logic: '<S39>/Logical Operator' incorporates:
   *  Constant: '<S39>/Constant'
   *  RelationalOperator: '<S39>/Relational Operator'
   *  RelationalOperator: '<S39>/Relational Operator1'
   *  Sum: '<S39>/LowerLinit'
   *  Sum: '<S39>/UpperLinit'
   */
  TBRe_Mod_B.APPS_Implausibility = ((TBRe_Mod_B.MinMax_b >= TBRe_Mod_B.MinMax_dv
    + 15) || (TBRe_Mod_B.MinMax_b <= TBRe_Mod_B.MinMax_dv - 15));

  /* Logic: '<S40>/Logical Operator' incorporates:
   *  Constant: '<S40>/Constant'
   *  RelationalOperator: '<S40>/Relational Operator'
   *  RelationalOperator: '<S40>/Relational Operator1'
   *  Sum: '<S40>/LowerLinit'
   *  Sum: '<S40>/UpperLinit'
   */
  TBRe_Mod_B.APPS_Implausibility_m = ((TBRe_Mod_B.MinMax_d >= TBRe_Mod_B.MinMax
    + 15) || (TBRe_Mod_B.MinMax_d <= TBRe_Mod_B.MinMax - 15));

  /* Product: '<S40>/Product of Elements' incorporates:
   *  S-Function (sfix_udelay): '<S40>/Tapped Delay'
   */
  localProduct = (uint16_T)(TBRe_Mod_DW.TappedDelay_X_m[0] ? (int32_T)
    TBRe_Mod_DW.TappedDelay_X_m[1] : 0);
  for (rtb_Gain6 = 0; rtb_Gain6 < 8; rtb_Gain6++) {
    localProduct = (uint16_T)(TBRe_Mod_DW.TappedDelay_X_m[rtb_Gain6 + 2] ?
      (int32_T)localProduct : 0);
  }

  TBRe_Mod_B.ProductofElements_n = localProduct;

  /* End of Product: '<S40>/Product of Elements' */

  /* S-Function (NsiUsb_Tx): '<S43>/UsbTx1' */
  /* S-Function Block: '<S43>/UsbTx1' */
  USB_TxVariable(59, &TBRe_Mod_B.MinMax_dv, 2);

  /* S-Function (NsiUsb_Tx): '<S43>/UsbTx2' */
  /* S-Function Block: '<S43>/UsbTx2' */
  USB_TxVariable(60, &TBRe_Mod_B.TV1_Out, 2);

  /* S-Function (NsiUsb_Tx): '<S43>/UsbTx3' */
  /* S-Function Block: '<S43>/UsbTx3' */
  USB_TxVariable(61, &TBRe_Mod_B.MinMax_b, 2);

  /* S-Function (NsiUsb_Tx): '<S43>/UsbTx4' */
  /* S-Function Block: '<S43>/UsbTx4' */
  USB_TxVariable(62, &TBRe_Mod_B.TV2_Out, 2);

  /* S-Function (NsiUsb_Tx): '<S43>/UsbTx7' */
  /* S-Function Block: '<S43>/UsbTx7' */
  USB_TxVariable(63, &TBRe_Mod_B.MinMax, 2);

  /* S-Function (NsiUsb_Tx): '<S43>/UsbTx8' */
  /* S-Function Block: '<S43>/UsbTx8' */
  USB_TxVariable(64, &TBRe_Mod_B.BV1_Out, 2);

  /* S-Function (NsiMem_Read): '<S51>/Memory read9' */
  /* S-Function Block: <S51>/Memory read9 (NsiMem_Read) */
  TBRe_Mod_B.Memoryread9 = (S08)Brake1_Pressure_Scaling;

  /* Product: '<S51>/Divide1' incorporates:
   *  Sum: '<S51>/Add2'
   */
  TBRe_Mod_B.Divide1 = (uint16_T)(TBRe_Mod_B.BV1_Out - TBRe_Mod_B.Memoryread5_e)
    * TBRe_Mod_B.Memoryread9;

  /* Gain: '<S51>/Gain' */
  TBRe_Mod_B.Gain = 0.0145038 * TBRe_Mod_B.Divide1;

  /* S-Function (NsiUsb_Tx): '<S51>/UsbTx1' */
  /* S-Function Block: '<S51>/UsbTx1' */
  USB_TxVariable(66, &TBRe_Mod_B.Gain, 8);

  /* S-Function (NsiUsb_Tx): '<S51>/UsbTx5' */
  /* S-Function Block: '<S51>/UsbTx5' */
  USB_TxVariable(67, &TBRe_Mod_B.Divide1, 8);

  /* S-Function (NsiUsb_Tx): '<S43>/UsbTx10' */
  /* S-Function Block: '<S43>/UsbTx10' */
  USB_TxVariable(68, &TBRe_Mod_B.BV2_Out, 2);

  /* S-Function (NsiUsb_Tx): '<S43>/UsbTx9' */
  /* S-Function Block: '<S43>/UsbTx9' */
  USB_TxVariable(69, &TBRe_Mod_B.MinMax_d, 2);

  /* S-Function (NsiMem_Read): '<S52>/Memory read8' */
  /* S-Function Block: <S52>/Memory read8 (NsiMem_Read) */
  TBRe_Mod_B.Memoryread8_e = (S08)Brake2_Pressure_Scaling;

  /* Product: '<S52>/Divide1' incorporates:
   *  Sum: '<S52>/Add2'
   */
  TBRe_Mod_B.Divide1_l = (uint16_T)(TBRe_Mod_B.BV2_Out -
    TBRe_Mod_B.Memoryread7_d) * TBRe_Mod_B.Memoryread8_e;

  /* Gain: '<S52>/Gain' */
  TBRe_Mod_B.Gain_f = 0.0145038 * TBRe_Mod_B.Divide1_l;

  /* S-Function (NsiUsb_Tx): '<S52>/UsbTx1' */
  /* S-Function Block: '<S52>/UsbTx1' */
  USB_TxVariable(71, &TBRe_Mod_B.Gain_f, 8);

  /* S-Function (NsiUsb_Tx): '<S52>/UsbTx6' */
  /* S-Function Block: '<S52>/UsbTx6' */
  USB_TxVariable(72, &TBRe_Mod_B.Divide1_l, 8);

  /* Product: '<S53>/OnlyDriveWhenPWMOn' incorporates:
   *  Constant: '<S57>/Constant'
   *  RelationalOperator: '<S57>/Compare'
   */
  TBRe_Mod_B.Torque_MCU_Req = (int16_T)((TBRe_Mod_B.State == 3) *
    TBRe_Mod_B.Switch2);
}

/* Update for atomic system: '<Root>/MainTask' */
void MainTask_Update(void)
{
  int_T i;
  for (i = 0; i < 9; i++) {
    /* Update for S-Function (sfix_udelay): '<S39>/Tapped Delay' */
    TBRe_Mod_DW.TappedDelay_X[i] = TBRe_Mod_DW.TappedDelay_X[i + 1];

    /* Update for S-Function (sfix_udelay): '<S40>/Tapped Delay' */
    TBRe_Mod_DW.TappedDelay_X_m[i] = TBRe_Mod_DW.TappedDelay_X_m[i + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S39>/Tapped Delay' */
  TBRe_Mod_DW.TappedDelay_X[9] = TBRe_Mod_B.APPS_Implausibility;

  /* Update for Delay: '<S38>/prv_APPS_BP1' */
  TBRe_Mod_DW.prv_APPS_BP1_DSTATE = TBRe_Mod_B.LogicalOperator2;

  /* Update for S-Function (sfix_udelay): '<S33>/Debouncing2' */
  TBRe_Mod_DW.Debouncing2_X[0] = TBRe_Mod_DW.Debouncing2_X[1];
  TBRe_Mod_DW.Debouncing2_X[1] = TBRe_Mod_DW.Debouncing2_X[2];
  TBRe_Mod_DW.Debouncing2_X[2] = TBRe_Mod_DW.Debouncing2_X[3];
  TBRe_Mod_DW.Debouncing2_X[3] = TBRe_Mod_DW.Debouncing2_X[4];
  TBRe_Mod_DW.Debouncing2_X[4] = TBRe_Mod_B.btnRTD_Input;

  /* Update for S-Function (sfix_udelay): '<S40>/Tapped Delay' */
  TBRe_Mod_DW.TappedDelay_X_m[9] = TBRe_Mod_B.APPS_Implausibility_m;
}

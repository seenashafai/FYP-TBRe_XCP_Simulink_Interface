#ifndef RTW_HEADER_CanDataExt_h_
#define RTW_HEADER_CanDataExt_h_
#include "canDef.h"

// Msg : VCU_Torque(Tx) - Ident : 0x654 - Dlc : 5 - Channel : CAN 1 - 3 signals
extern t_CANObj objCan1VCU_Torque;
extern t_SignalData sigCan1TxVCU_TorqueSignals[3];

// Msg : VCU_Diagnostics(Tx) - Ident : 0x650 - Dlc : 8 - Channel : CAN 1 - 18 signals
extern t_CANObj objCan1VCU_Diagnostics;
extern t_SignalData sigCan1TxVCU_DiagnosticsSignals[18];

// Msg : VCU_IMD_Status(Tx) - Ident : 0x656 - Dlc : 6 - Channel : CAN 1 - 3 signals
extern t_CANObj objCan1VCU_IMD_Status;
extern t_SignalData sigCan1TxVCU_IMD_StatusSignals[3];

// Msg : VCU_Pedal_Percentages(Tx) - Ident : 0x652 - Dlc : 7 - Channel : CAN 1 - 7 signals
extern t_CANObj objCan1VCU_Pedal_Percentages;
extern t_SignalData sigCan1TxVCU_Pedal_PercentagesSignals[7];

// Msg : VCU_HW_IO(Tx) - Ident : 0x651 - Dlc : 5 - Channel : CAN 1 - 10 signals
extern t_CANObj objCan1VCU_HW_IO;
extern t_SignalData sigCan1TxVCU_HW_IOSignals[10];

// Msg : VCU_Vehicle_Functionality(Tx) - Ident : 0x655 - Dlc : 4 - Channel : CAN 1 - 6 signals
extern t_CANObj objCan1VCU_Vehicle_Functionality;
extern t_SignalData sigCan1TxVCU_Vehicle_FunctionalitySignals[6];

// Msg : VCU_Pedal_Voltages(Tx) - Ident : 0x653 - Dlc : 8 - Channel : CAN 1 - 4 signals
extern t_CANObj objCan1VCU_Pedal_Voltages;
extern t_SignalData sigCan1TxVCU_Pedal_VoltagesSignals[4];

// Msg : BMS_Feedback_1(Rx) - Ident : 0x100 - Dlc : 7 - Channel : CAN 1 - 4 signals
extern t_CANObj objCan1BMS_Feedback_1;
extern t_SignalData sigCan1RxBMS_Feedback_1Signals[4];

// Msg : HS3_Temperature_Feedback(Rx) - Ident : 0x191AFF71 - Dlc : 8 - Channel : CAN 2 - 2 signals
extern t_CANObj objCan2HS3_Temperature_Feedback;
extern t_SignalData sigCan2RxHS3_Temperature_FeedbackSignals[2];

// Msg : HS1_Torque_Feedback(Rx) - Ident : 0x1918FF71 - Dlc : 8 - Channel : CAN 2 - 2 signals
extern t_CANObj objCan2HS1_Torque_Feedback;
extern t_SignalData sigCan2RxHS1_Torque_FeedbackSignals[2];

// Msg : HS4_Fault_Info(Rx) - Ident : 0x191BFF71 - Dlc : 8 - Channel : CAN 2 - 2 signals
extern t_CANObj objCan2HS4_Fault_Info;
extern t_SignalData sigCan2RxHS4_Fault_InfoSignals[2];

// Msg : HC1_Demands(Tx) - Ident : 0x19107171 - Dlc : 8 - Channel : CAN 2 - 3 signals
extern t_CANObj objCan2HC1_Demands;
extern t_SignalData sigCan2TxHC1_DemandsSignals[3];

// Msg : HC3_Battery_Demands(Tx) - Ident : 0x19127171 - Dlc : 8 - Channel : CAN 2 - 3 signals
extern t_CANObj objCan2HC3_Battery_Demands;
extern t_SignalData sigCan2TxHC3_Battery_DemandsSignals[3];

// Msg : HC2_Demands(Tx) - Ident : 0x19117171 - Dlc : 8 - Channel : CAN 2 - 3 signals
extern t_CANObj objCan2HC2_Demands;
extern t_SignalData sigCan2TxHC2_DemandsSignals[3];

// Msg : HC4_Debug_Demands(Tx) - Ident : 0x19137171 - Dlc : 8 - Channel : CAN 2 - 2 signals
extern t_CANObj objCan2HC4_Debug_Demands;
extern t_SignalData sigCan2TxHC4_Debug_DemandsSignals[2];

// Msg : BMS_Feedback_3(Rx) - Ident : 0x102 - Dlc : 6 - Channel : CAN 1 - 6 signals
extern t_CANObj objCan1BMS_Feedback_3;
extern t_SignalData sigCan1RxBMS_Feedback_3Signals[6];

// Msg : BMS_Feedback_2(Rx) - Ident : 0x101 - Dlc : 8 - Channel : CAN 1 - 5 signals
extern t_CANObj objCan1BMS_Feedback_2;
extern t_SignalData sigCan1RxBMS_Feedback_2Signals[5];

// Msg : HD4_Debug_Temperatures_B(Rx) - Ident : 0x192BFF71 - Dlc : 8 - Channel : CAN 2 - 1 signals
extern t_CANObj objCan2HD4_Debug_Temperatures_B;
extern t_SignalData sigCan2RxHD4_Debug_Temperatures_BSignals[1];

// Msg : Front_Wheel_Speeds(Rx) - Ident : 0x502 - Dlc : 6 - Channel : CAN 1 - 3 signals
extern t_CANObj objCan1Front_Wheel_Speeds;
extern t_SignalData sigCan1RxFront_Wheel_SpeedsSignals[3];

// Msg : Rear_Wheel_Speeds(Rx) - Ident : 0x501 - Dlc : 6 - Channel : CAN 1 - 3 signals
extern t_CANObj objCan1Rear_Wheel_Speeds;
extern t_SignalData sigCan1RxRear_Wheel_SpeedsSignals[3];

// Msg : SteeringWheelSensor(Rx) - Ident : 0x234 - Dlc : 5 - Channel : CAN 1 - 1 signals
extern t_CANObj objCan1SteeringWheelSensor;
extern t_SignalData sigCan1RxSteeringWheelSensorSignals[1];

// Msg : AccelerometerY(Rx) - Ident : 0x174 - Dlc : 8 - Channel : CAN 1 - 1 signals
extern t_CANObj objCan1AccelerometerY;
extern t_SignalData sigCan1RxAccelerometerYSignals[1];

// Msg : Shutdown_Data(Rx) - Ident : 0x705 - Dlc : 3 - Channel : CAN 1 - 20 signals
extern t_CANObj objCan1Shutdown_Data;
extern t_SignalData sigCan1RxShutdown_DataSignals[20];

#endif                                 /* RTW_HEADER_CanDataExt_h_ */

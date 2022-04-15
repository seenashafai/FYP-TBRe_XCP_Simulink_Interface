#ifndef RTW_HEADER_Configurator_h_
#define RTW_HEADER_Configurator_h_

// Configuring the CAN 1 driver : HIGH_SPEED
#define _CONFIGURATOR_CAN1
#define BUSTYPE_CAN1                   CAN_HIGH_SPEED
#define BAUDRATE_CAN1                  CAN_500Kbps
#define RESISTOR_CAN1                  CAN_RESISTOR_120_OHM
#define J1939_SA1                      0x13

// Configuring the CAN 2 driver : HIGH_SPEED
#define _CONFIGURATOR_CAN2
#define BUSTYPE_CAN2                   CAN_HIGH_SPEED
#define BAUDRATE_CAN2                  CAN_500Kbps
#define RESISTOR_CAN2                  CAN_RESISTOR_120_OHM
#define J1939_SA2                      0x13

// No need to configure the CAN 3 driver

// No need to configure the CAN 4 driver

// No need to configure the CAN 5 driver

// Configuring the Digital Inputs
#define DIGITAL_INPUT_1_2_SWITCHTO     SWITCH_TO_GROUND
#define DIGITAL_INPUT_3_4_SWITCHTO     SWITCH_TO_GROUND
#define DIGITAL_INPUT_5_6_SWITCHTO     SWITCH_TO_GROUND
#define DIGITAL_INPUT_7_8_SWITCHTO     SWITCH_TO_GROUND
#define DIGITAL_INPUT_9_10_SWITCHTO    SWITCH_TO_GROUND
#define DIGITAL_INPUT_11_12_SWITCHTO   SWITCH_TO_BATTERY
#define DIGITAL_INPUT_13_14_SWITCHTO   SWITCH_TO_BATTERY
#define DIGITAL_INPUT_15_16_SWITCHTO   SWITCH_TO_BATTERY
#define DIGITAL_INPUT_17_18_SWITCHTO   SWITCH_TO_BATTERY
#define DIGITAL_INPUT_19_20_SWITCHTO   SWITCH_TO_GROUND
#define DIGITAL_INPUT_21_22_SWITCHTO   SWITCH_TO_BATTERY
#define DIGITAL_INPUT_23_24_SWITCHTO   SWITCH_TO_BATTERY
#endif                                 /* RTW_HEADER_Configurator_h_ */

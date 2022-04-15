#ifndef _WAKEUP_H_
#define _WAKEUP_H_
#include "DRV/wakeup_Hal.h"
#define DI_MASK_WAKEUP_22              MASK_WUDIO
#define DI_LEVEL_WAKEUP_22             LOW_WUDIO
#define DI_MASK_WAKEUP_21              MASK_WUDIO
#define DI_LEVEL_WAKEUP_21             LOW_WUDIO
#define DI_MASK_WAKEUP_12              MASK_WUDIO
#define DI_LEVEL_WAKEUP_12             LOW_WUDIO
#define DI_MASK_WAKEUP_19              MASK_WUDIO
#define DI_LEVEL_WAKEUP_19             LOW_WUDIO
#define DI_MASK_WAKEUP_18              MASK_WUDIO
#define DI_LEVEL_WAKEUP_18             LOW_WUDIO
#define DI_MASK_WAKEUP_16              MASK_WUDIO
#define DI_LEVEL_WAKEUP_16             LOW_WUDIO
#define DI_MASK_WAKEUP_17              MASK_WUDIO
#define DI_LEVEL_WAKEUP_17             LOW_WUDIO
#define DI_MASK_WAKEUP_11              MASK_WUDIO
#define DI_LEVEL_WAKEUP_11             LOW_WUDIO
#define DI_MASK_WAKEUP_13              MASK_WUDIO
#define DI_LEVEL_WAKEUP_13             LOW_WUDIO
#define DI_MASK_WAKEUP_14              MASK_WUDIO
#define DI_LEVEL_WAKEUP_14             LOW_WUDIO
#define DI_MASK_WAKEUP_9               MASK_WUDIO
#define DI_LEVEL_WAKEUP_9              LOW_WUDIO
#define DI_MASK_WAKEUP_10              MASK_WUDIO
#define DI_LEVEL_WAKEUP_10             LOW_WUDIO

//ATTENTION: MODIFIE ENTRE MUXLAB4 ET AUTRES MUXLAB
#define CAN_WAKEUP_1                   MASK_WUCAN
#define CAN_WAKEUP_2                   MASK_WUCAN
#define CAN_WAKEUP_3                   MASK_WUCAN
#define CAN_WAKEUP_4                   MASK_WUCAN
#define CAN_WAKEUP_5                   MASK_WUCAN
#define LIN_WAKEUP_1                   MASK_WULIN_1
#define LIN_WAKEUP_2                   MASK_WULIN_2
#define DI_MASKS                       ( 0 | DI_MASK_WAKEUP_22 | DI_MASK_WAKEUP_21 | DI_MASK_WAKEUP_12 | DI_MASK_WAKEUP_19 | DI_MASK_WAKEUP_18 | DI_MASK_WAKEUP_16 | DI_MASK_WAKEUP_17 | DI_MASK_WAKEUP_11 | DI_MASK_WAKEUP_13 | DI_MASK_WAKEUP_14 | DI_MASK_WAKEUP_9 | DI_MASK_WAKEUP_10 )
#define DI_LEVELS                      ( 0 | DI_LEVEL_WAKEUP_22 | DI_LEVEL_WAKEUP_21 | DI_LEVEL_WAKEUP_12 | DI_LEVEL_WAKEUP_19 | DI_LEVEL_WAKEUP_18 | DI_LEVEL_WAKEUP_16 | DI_LEVEL_WAKEUP_17 | DI_LEVEL_WAKEUP_11 | DI_LEVEL_WAKEUP_13 | DI_LEVEL_WAKEUP_14 | DI_LEVEL_WAKEUP_9 | DI_LEVEL_WAKEUP_10 )
#define CAN_MASKS                      ( CAN_WAKEUP_1 | CAN_WAKEUP_2 | CAN_WAKEUP_3 | CAN_WAKEUP_4 | CAN_WAKEUP_5 )
#define LIN_MASKS                      ( LIN_WAKEUP_1 | LIN_WAKEUP_2 )
#endif

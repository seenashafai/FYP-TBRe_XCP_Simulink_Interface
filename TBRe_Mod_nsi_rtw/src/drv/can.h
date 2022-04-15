/******************************************************************************/
/*                                                                            */
/*  Copyright (c) 2011 NSI, Annecy, France                                    */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  APPLICATION    :  Librairie bas niveau MPC5567 MUXlab4                     */
/*  ENVIRONNEMENT  :  CodeWarrior                                             */
/*  COMPILER       :  CodeWarrior                                             */
/*  FILE           :  CAN.h                                                   */
/*  DESCRIPTION    :  Fichier header gestion CAN                              */
/*                                                                            */
/******************************************************************************/

/*!
 * \file CAN.h
 *
 * \author OPA
 * \date 26/04/2011
 *
 */

#ifndef CAN_H
#define CAN_H

#include "mpc5567.h"
#include "canDef.h"

/*****************************
 *	MACROS - Constants
 ****************************/

#define LOOPBACK_ENABLE                 1
#define LOOPBACK_DISABLE                0
#define LISTEN_ONLY_ENABLED             1
#define LISTEN_ONLY_DISABLED            0

/* J1939 Transport Protocol ***/

#define EMIOS_J1939_TP_RX	(12)
#define EMIOS_J1939_TP_TX	(13)
/* TX Message Buffer Codes */
#define  TX_INACTIVE                    0x8
#define  TX_TRANSMIT                    0xC
#define  TX_REMOTE1                     0xA
#define  TX_REMOTE2                     0xE

/* RX Message Buffer Codes */
#define RX_NOT_ACTIVE                   0x0
#define RX_ACTIVE_EMPTY                 0x4
#define RX_ACTIVE_FULL                  0x2
#define RX_ACTIVE_OVERRUN               0x6
#define RX_BUSY                         0x1

//#define BUS_OFF_IRQ

/*
 * Buffer 0 -> 30   : Functional Rx CAN (1 msg/Buffer)
 * Buffer 31        : Rx CAN with acceptance mask (used for smart gateway)
 * Buffer 32 -> 62  : Functional Tx CAN (1 msg/Buffer)
 * Buffer 63        : CAN Tx Fifo
 */
#define NB_RX_BUFFERS                   (62)
#define NB_TX_BUFFERS                   (0)
#define RX_BASE_BUFFER                  (0)
#define RX_BUFFER_WITH_MASK             (NB_RX_BUFFERS)
#define TX_BASE_BUFFER                  (RX_BASE_BUFFER + NB_RX_BUFFERS + 1)
#define NB_MESSAGE_BUFFER               (64)

#define CAN_IRQ_PRIORITY                (5)

#define DISABLE_CAN_IRQ(f,b)            \
{                                       \
    if((b) < 32)                        \
        (f)->IMRL.R &= ~(1 << (b));     \
    else                                \
        (f)->IMRH.R &= ~(1 << ((b)-32));\
}

#define ENABLE_CAN_IRQ(f,b)            \
{                                       \
    if((b) < 32)                        \
        (f)->IMRL.R |= (1 << (b));     \
    else                                \
        (f)->IMRH.R |= (1 << ((b)-32));\
}

#ifdef MUXLAB4
#define NB_FLEX_CAN			5
#elif defined MUXLAB2
#define NB_FLEX_CAN         4
#endif

#define	MAX_GATEWAYS		64
#define INVALID_GATEWAY		0xff

#define MAX_MSG_CAN_SIZE    8

#define EN_CAN          78
#define STB_CAN         77
#define STB_CAN2        79
#define SEL_CAN1        80
#define SEL_CAN2        81
#define STOP_RELAIS     191

#define SEL_RES_CAN1    210
#define SEL_RES_CAN2    134
#define SEL1_RES_CAN3   212
#define SEL2_RES_CAN3   213
#define SEL1_RES_CAN4   75
#define SEL2_RES_CAN4   76

#define INH_CAN1_UC		139
#define INH_CAN2_UC		140
#define INH_CAN3_UC		141
#define INH_CAN4_UC		142
#define INH_CAN5_UC		143

#define ERR_CAN1	190
#define ERR_CAN2	108
#define ERR_CAN3	111
#define ERR_CAN4	112
#define ERR_CAN5	110
#define FREEZE_CAN(f)   \
{                       \
    f->MCR.B.FRZ = 1;   \
    f->MCR.B.HALT = 1;  \
    while ((f->MCR.B.FRZACK != 1) || (f->MCR.B.NOTRDY != 1)); \
}

#define UNFREEZE_CAN(f)   \
{                       \
    f->MCR.B.HALT = 0;  \
    f->MCR.B.FRZ = 0;   \
    while ((f->MCR.B.FRZACK != 0) || (f->MCR.B.NOTRDY != 0)); \
}

/*****************************
 *	Type definition
 ****************************/

typedef enum
{
    CAN_NOT_INITIALIZED,
    CAN_INITIALIZED,
    CAN_BUS_OFF,
} t_CanState;

typedef struct
{
    U32 u32LastActivity;
    U32 u32CanRXCounters;
    U32 u32CanTXCounters;
    t_CanState state;
    t_CANTransceiverType transceiver;
} t_CanStatistics;
/*****************************
 *	Prototypes
 ****************************/
S08 CAN_InitFlexCANController(t_FlexCANModules flexCANModule, t_CANTimingParams *pCANParams, U08 u08LoopBackMode, U08 u08ListenOnlyMode);
void CAN_SetBauderate(t_FlexCANModules flexCANModule, t_CANTimingParams *pCANParams);
void CAN_EnableTransceivers(void);
void CAN_InitPin(void);
S08 CAN_GetFreeMessageBuffer(t_FlexCANModules flexCAN, t_FrameType frameType, U08 *pBufferNumber);
S08 CAN_ReleaseMessageBuffer(t_FlexCANModules flexCAN, t_FrameType frameType, U08 u08BufferNumber);
S08 CAN_InitBuffer(t_FlexCANModules flexCAN, t_CANObj *pCanObj);
S08 CAN_InitRxBufferWithMask(t_FlexCANModules flexCAN, U08 u08bufferNb, U32 u32Mask, t_CANIdentType rxIdentType);
S08 CAN_TransmitCanObj(t_FlexCANModules flexCAN, t_CANObj *pCanObj);
S08 CAN_ReadMessageBuffer(t_FlexCANModules flexCAN, U08 u08Buffer, U08 *pDlc, U08 *pData);
S08 CAN_ActivateRXBuffer(t_FlexCANModules flexCAN, U08 u08Buffer, BOOL u08Active);
S08 CAN_EnableInterrupt(t_FlexCANModules flexCAN, U08 u08Buffer);
S08 CAN_DisableInterrupt(t_FlexCANModules flexCAN, U08 u08Buffer);
void CAN_flexCAN_A_IRQ(void);
void CAN_flexCAN_B_IRQ(void);
void CAN_flexCAN_C_IRQ(void);
void CAN_flexCAN_D_IRQ(void);
#ifdef BUS_OFF_IRQ
void CAN_flexCAN_A_BOFF_IRQ(void);
void CAN_flexCAN_B_BOFF_IRQ(void);
void CAN_flexCAN_C_BOFF_IRQ(void);
void CAN_flexCAN_D_BOFF_IRQ(void);
#endif



#ifdef MUXLAB4
void CAN_flexCAN_E_IRQ(void);
# ifdef BUS_OFF_IRQ
void CAN_flexCAN_E_BOFF_IRQ(void);
# endif
#endif


extern const volatile struct FLEXCAN2_tag* flexCanAddress[5];
extern U08 bufferToEventID[NB_FLEX_CAN][NB_MESSAGE_BUFFER];
extern U08 bufferToGateway[NB_FLEX_CAN][NB_RX_BUFFERS];
extern t_CANObj* bufferToCanObj[NB_FLEX_CAN][NB_MESSAGE_BUFFER];
extern t_CANGateway gateways[MAX_GATEWAYS];
extern t_CanStatistics canStatistics[NB_FLEX_CAN];
extern U08 canErrSaveHS[NB_FLEX_CAN];
extern U08 canErrSaveLS[2];
extern t_CANSmartGateway smartGateways[NB_FLEX_CAN];
extern BOOL smartGwEnabled[NB_FLEX_CAN];
extern BOOL frameCheckSmartGw[NB_FLEX_CAN][NB_RX_BUFFERS];
extern U08 nbRxFramesUsedByModel[NB_FLEX_CAN];
extern U08 nbTxFramesUsedByModel[NB_FLEX_CAN];
/*******J1939*********/
extern S08 TP_status;
extern t_CANObj *J1939TP_DTRX;
extern t_CANObj *J1939TP_BAMRX;
extern t_FlexCANModules channelTP;
extern t_J1939_TPRX J1939TP_Table[10];
extern t_Table_J1939_pending Table_PGN;
extern U08 J1939_SA_FIELD[NB_FLEX_CAN][NB_RX_BUFFERS];
/*********************/

#ifdef MUXLAB_INDUS
#define SMART_GATEWAY_MAX_SIZE          64
extern BOOL sendFrameOnEthernet[NB_FLEX_CAN][NB_RX_BUFFERS];
extern t_CANObjEth canObjEth[NB_FLEX_CAN][NB_RX_BUFFERS];
extern t_CANSmartGatewayElement smartGatewayEth[NB_FLEX_CAN][SMART_GATEWAY_MAX_SIZE];
S08 CAN_InitBufferEth(t_FlexCANModules flexCAN, t_CANObjEth *pCanObj);
S08 CAN_TransmitEthCanObj(t_FlexCANModules flexCAN, U08 u08Buffer);
S08 CAN_UpdateEthCanFrame(t_FlexCANModules flexCAN, U08 u08Buffer, U08 *pData, U08 dlc, BOOL transmit);
#endif

#endif

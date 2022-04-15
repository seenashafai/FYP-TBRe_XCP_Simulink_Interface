/******************************************************************************/
/*                                                                            */
/*  Copyright (c) 2011 NSI, Annecy, France                                    */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  APPLICATION    :  Librairie bas niveau MPC5567 MUXlab4                    */
/*  ENVIRONNEMENT  :  CodeWarrior                                             */
/*  COMPILER       :  CodeWarrior                                             */
/*  FILE           :  LIN.h                                                   */
/*  DESCRIPTION    :  Fichier header gestion bas niveau LIN                   */
/*                                                                            */
/******************************************************************************/

/*!
 * \file LIN_If.h
 *
 * \author OPA
 * \date 26/04/2011
 *
 */


#ifndef LIN_IF_H
#define LIN_IF_H

#include "canDef.h"
#include "LINDef.h"

#define NB_LIN_FRAMES				(64)
#define MAX_LIN_SCH_TABLES			(16)

#define NO_TABLE_SELECTED			(0xFF)
#define STOP_LIN_SCHEDULE          (0xFE)

/* Return code types for function LinIf_RxHeaderIndication() */
/* 4 LSb are for the rx response size and the 4 MSb are for the frame type */
typedef enum
{
    LINIF_DONTCARE          = 0x00,		/* The frame is not used by the node */
    LINIF_RX_CS_ENHANCED    = 0x10,		/* Rx frame used with enhanced checksum */
    LINIF_RX_CS_CLASSIC     = 0x20,		/* Rx frame used with classic checksum */
    LINIF_TX_CS_ENHANCED    = 0x30,		/* Response is transmitted with enhanced checksum */
    LINIF_TX_CS_CLASSIC     = 0x40		/* Response is transmitted with classic checksum */
} LinIf_RxHeaderUsedEnu;

/* Life phases */
typedef enum
{
    LINNM_NORMAL                        = 0x00,

    LINNM_WAKE_UP                       = 0x10,
    LINNM_WAKE_UP_LOCAL                 = 0x11,
    LINNM_WAKE_UP_BUS                   = 0x12,
    LINNM_WAKE_UP_PROCESS               = 0x13,
    LINNM_WAKE_UP_END_PROCESS           = 0x14,
    LINNM_WAKE_UP_REQUEST_SLAVE         = 0x15,

    LINNM_GO_TO_SLEEP                   = 0x20,
    LINNM_GO_TO_SLEEP_PROCESS           = 0x21,
    LINNM_GO_TO_SLEEP_END_PROCESS       = 0x22,
    LINNM_GO_TO_SLEEP_WAIT_T_OFF_LIN    = 0x23,

    LINNM_SLEEP                         = 0x40,

    LINNM_DEGRADED                      = 0x80
} t_LinNm_LifeModes;

/**
 * \struct t_LINUncondFrame
 * \brief Structure defining an unconditionnal frame
 *
 */
typedef struct
{
	U08 u08Dlc;							/*!< Taille de la trame								*/
	U08 u08Id;							/*!< Identificateur de la trame						*/
	LinIf_RxHeaderUsedEnu headerType;	/*!< Comment utiliser la trame 						*/
	BOOL fDataUpdateTX;					/*!< Mise a jour des donnees depuis dernier	envoi	*/
	BOOL fDataUpdateRX;					/*!< Les données de la trame ont été MAJ en RX		*/
	U08 u08Data[8];                     /*!< Donnees reponse pour les esclaves				*/
}t_LINUncondFrame;

/**
 * \struct t_ScheduleTableSlot
 * \brief Structure defining a schedule frame slot
 */
typedef struct
{
	t_LINUncondFrame *frame;			/*!< The frame to send during this slot */
	U16 delay;							/*!< Duration of this slot in number of tick timers (100µs) */
}t_LinScheduleTableSlot;

/**
 * \struct t_ScheduleTableSlot
 * \brief Structure defining a schedule frame
 */
typedef struct
{
	U08 nbElements;
	const t_LinScheduleTableSlot *slotArray;
}t_LinScheduleTable;

typedef struct
{
	U08 u08IndexCurrentSchTab;			/*! Index of the current schedule table */
	U08 u08IndexCurrentSlot;			/*! Index of the current slot in the current schedule table */
	U08 u08IndexNewSchTabReq;			/*! Index of the schedule table to be selected at the next slot */
	U08 u08IndexNewSlotReq;
	U08 u08TimeBasePeriod;
	U32	u32NextSlotTime;
	t_LinNm_LifeModes currentLifePhase;
}t_LinMasterManagement;



/* External vaiables */
extern t_LINUncondFrame* pUncondFrames[NB_LIN_CHANNELS][NB_LIN_FRAMES];
extern U08 frameIDToEventID[NB_LIN_CHANNELS][NB_LIN_FRAMES];

/* Prototypes */
void LinIf_LibInit(void);
S08 LinIf_Init(t_LINChannels channel, U16 u16Bauderate, U08 u08TimeBasePeriod,BOOL masterEmulation);
void LinIf_MainFunction(void);
S08 LinIf_ScheduleRequest(t_LINChannels channel, U08 u08ScheduleTableIndex);
S08 LinIf_InitUncondFrame(t_LINChannels channel, t_LINUncondFrame *pLinFrame, U08 u08EventID);
S08 LinIf_InitScheduleTable(t_LINChannels channel, const t_LinScheduleTable *pTable);
S08 LinIf_ExtractFrameSignals(t_LINUncondFrame *pLinFrame, t_SignalData *pSignals, U08 u08NbSignals);
void LinIf_UpdateFrameSignals( t_LINUncondFrame *pLinFrame, t_SignalData *pSignals, U08 u08NbSignals);

#endif

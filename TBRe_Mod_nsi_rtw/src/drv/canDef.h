#ifndef CAN_DEF_H
#define CAN_DEF_H

/* Return values */
#define NO_BUFFER_AVAILABLE			(-11)


/*****************************
 *	Type definitions         *
 ****************************/
typedef enum
{
	ORDER_INTEL = 1,
	ORDER_MOTOROLA
}t_ByteOrder;

typedef enum
{
	CAN_LOW_SPEED = 0,
	CAN_HIGH_SPEED
}t_CANTransceiverType;

typedef enum
{
	FLEX_CAN_A = 0,
	FLEX_CAN_B,
	FLEX_CAN_C,
	FLEX_CAN_D,
	FLEX_CAN_E
}t_FlexCANModules;

/* J1939 Transport Protocol */
typedef enum
{
	IDLE = 0,
	BAM,
	TP_DT,
	NEXT_BAM
}t_J1939_TP_status;



typedef struct
{
	U32 data;
	t_ByteOrder layout;
	S08 length;
	U16 startbit;
}t_SignalData;

typedef enum
{
	CAN_ID_STD,
	CAN_ID_XTD
}t_CANIdentType;

typedef enum
{
	FRAME_TX_DATA,
	FRAME_RX_DATA
}t_FrameType;

typedef enum
{
	FRAME_RX_NOT_RECEIVED,
	FRAME_RX_RECEIVED
}t_RXState;

typedef struct
{
	U32 ident;
	t_FrameType frameType;
	t_CANIdentType	identType;
	U08	dlc;
	t_RXState RXState;
	union
	{
		U08	dataBytes[8];
		U32	dataWords[2];
	}data;
	U08 messageBuffer;
}t_CANObj;

typedef struct
{
	U32 ident;
	t_FrameType frameType;
	t_CANIdentType	identType;
	U08	dlc;
	U08 SA_identField;
	t_RXState RXState;
	U08 TaskID;
	union
	{
		U08*	dataBytes;
		U32*	dataWords;
	}dataBuffer;
}t_CANJ1939Obj;

typedef struct
{
	union
	{
		U08	dataBytes[8];
		U32	dataWords[2];
	} dataBuffer;
}t_dataBuffer;


typedef struct
{
	t_FlexCANModules rxCan;
	t_CANJ1939Obj *J1939_RXobj;
	U32 PGN;
	U08 Timeout;
}t_J1939_TPRX;

typedef struct
{
	t_FlexCANModules TXCan;
	t_CANObj *BAMobj;
	t_CANObj *DTobj;
	t_CANObj *CANobj;
	t_SignalData *messageSignals;
	U08 NbSignals;
	U08 *DonneeCAN;
	U08 BufferSize;
}t_J1939_pending;

typedef struct
{
	t_J1939_pending Table_J1939_TPTX[4];
	U08 read_J1939pend;
	U08 write_J1939pend;
	U08 TablePGN_nbPending;
}
t_Table_J1939_pending;

typedef struct
{
    U32 ident;
    U08 frameType;
    U08 identType;
    U08 dlc;
    U08 rxState;
    union
    {
        U08 dataBytes[8];
        U32 dataWords[2];
    }data;
}t_CANObjEth;

typedef struct
{
	t_FlexCANModules txCan;
	t_CANObj *canObjTx;	
}t_CANGateway;

/* Smart Gateway types */
#define CAN_GW1     (1 << 0)
#define CAN_GW2     (1 << 1)
#define CAN_GW3     (1 << 2)
#define CAN_GW4     (1 << 3)
#define CAN_GW5     (1 << 4)


typedef struct
{
    S32 s32Ident;
    U08 u08MaskGw;
}t_CANSmartGatewayElement;

typedef struct
{
    t_CANSmartGatewayElement *gatewayArray;
    U16 u16ArraySize;
    U08 u08MaskPassAll;
}t_CANSmartGateway;

typedef struct
{
    U08 u08Prescaler;
    U08 u08SJW;
    U08 u08Tseg1;
    U08 u08Tseg2;
    U08 u08PropSeg;
} t_CANTimingParams;

#endif

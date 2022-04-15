#ifndef CAN_HAL_H
#define CAN_HAL_H

//#include "can.h"


/*****************************
 *	Type definition          *
 ****************************/

typedef enum
{
	CAN_100Kbps,
	CAN_125Kbps,
	CAN_250Kbps,
	CAN_500Kbps,
	CAN_1000Kbps
}t_CAN_Bauderate;


typedef enum
{
	CAN_NO_RESISTOR,		// Only applicable to CAN 1/2 with HS transceiver
	CAN_RESISTOR_60_OHM,	// Only applicable to CAN 3/4
	CAN_RESISTOR_120_OHM,	// Only applicable to CAN 1/2 with HS transceiver and 3/4
	CAN_RESISTOR_560_OHM,	// Only applicable to CAN 1/2 with LS transceiver
	CAN_RESISTOR_5_6_KOHM	// Only applicable to CAN 1/2 with LS transceiver
}t_CAN_Resistor;


/*****************************
 *	Prototypes               *
 ****************************/

void CAN_Pack(t_SignalData *signals, U08 u08NbSignals, U08 *pMessage);
void CAN_Unpack(t_SignalData *signals, U08 u08NbSignals, U08 * pDonneeCAN);

S08 CAN_TransmitMessage(t_FlexCANModules flexCAN, t_SignalData *messageSignals, U08 u08NbSignals, t_CANObj *pCanObj);
S08 CAN_TransmitMessageWithCrc(t_FlexCANModules flexCAN, t_SignalData *messageSignals, U08 u08NbSignals, t_CANObj *pCanObj);
S08 CAN_ReceiveMessage(t_SignalData *messageSignals, U08 u08NbSignals, t_CANObj *pCanObj);
S08 CAN_ReceiveMessageWithCrc(t_SignalData *messageSignals, U08 u08NbSignals, t_CANObj *pCanObj);
S08 CAN_InitFrame(t_FlexCANModules flexCAN, t_CANObj *canObject, U08 u08EventID);
S08 CAN_InitFrameEx(t_FlexCANModules flexCAN, t_CANObj *pCanObj, BOOL checkSmartGw, U08 u08EventID);
S08 CAN_EnableRxFrame(t_FlexCANModules flexCAN, t_CANObj *pCanObj, BOOL enable);
U08 CalcCrc(U08 *data, U08 len);
/******Function related to J1939 protocol*********/
/******Transmission of segmented PGNs*************/
S08 CAN_InitRxFrameWithMask(t_FlexCANModules flexCAN, t_CANObj *pCanObj, U32 u32Mask, U08 u08EventID);
S08 INIT_J1939_TP(void);
S08 J1939_TransmitBAM(t_FlexCANModules flexCAN, t_SignalData *messageSignals, U08 u08NbSignals, t_CANObj *pTP_BAMObj, t_CANObj *pTP_DTObj, U08 *pDonneeCAN, U08 BufferSize, t_CANObj *pCanObj);
S08 Start_transmitTP_PGN(BOOL fromIrq);
void J1939_TransmitTP_DT(void);
/******Reception of segmented PGNs*************/
S08 J1939_InitRxTP(t_FlexCANModules flexCAN, t_CANObj *pTP_BAMRXObj, t_CANObj *pTP_DTRXObj, t_CANJ1939Obj *pPGNObj);
S08 J1939TP_AddRxObj(t_FlexCANModules flexCAN, t_CANJ1939Obj *pPGNObj);
void J1939_TP_RXBAM(void);
void J1939_TP_RXDT(void);
void J1939_TP_RXBAM2(void);
void J1939_TP_RXDT2(void);
void J1939_ReceiveTP_DT_Timeout(void);
S08 CAN_ReceiveLongJ1939Message(t_SignalData *messageSignals, U08 u08NbSignals, t_CANJ1939Obj *pPGNObj);
/*************************************************/
S08 CAN_InitGateway(t_FlexCANModules flexCANIn, t_CANObj *pCanObjectIn, t_FlexCANModules flexCANOut, t_CANObj *pCanObjectOut);
S08 CAN_EnableGateway(t_FlexCANModules flexCANIn, t_CANObj *pCanObjectIn, U08 enable);
S08 CAN_EnableSmartGateway(t_FlexCANModules flexCan, U08 enable);
S08 CAN_InitSmartGateway(t_FlexCANModules flexCANModule, t_CANSmartGatewayElement *gatewayArray, U16 u16Size, t_CANIdentType rxIdentType);
S08 CAN_Init(t_FlexCANModules flexCANModule, t_CAN_Bauderate bauderate, t_CANTransceiverType type);
S08 CAN_InitEx(t_FlexCANModules flexCANModule, t_CANTimingParams timings, t_CANTransceiverType transceiverType);
S08 CAN_ChangeBauderate(t_FlexCANModules flexCANModule, t_CANTimingParams timings);
void CAN_LibInit(void);
S08 getCanStatus(t_FlexCANModules flexCAN);
void CAN_GetStatusAndErrorCounters(t_FlexCANModules flexCAN, U08 *rxErrorCnt, U08 *txErrorCnt, U16 *errorStatus);
U32 CAN_GetRXCounters(t_FlexCANModules flexCAN);
#ifdef MUXLAB4
S08 CAN_SelectResistor(t_FlexCANModules flexCANModule, t_CAN_Resistor resistor);
#endif

/*****************************
 *	Exported variables
 ****************************/
#ifdef MUXLAB_INDUS
extern U08 maskCanUsedByModel;
#endif

/*****************************
 *	MACROS - Constants       *
 ****************************/
#ifdef MUXLAB_INDUS
#define SET_CAN_USED_BY_MODEL(n) (maskCanUsedByModel |= (1 << (n)))
#else
#define SET_CAN_USED_BY_MODEL(n)
#endif


#endif

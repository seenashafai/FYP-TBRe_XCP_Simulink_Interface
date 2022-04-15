#ifndef LIBINIT_H
#define LIBINIT_H


#define ENABLE_IRQ()	{INTC.CPR.B.PRI = 0; asm(" wrteei 1");}
#define	DISABLE_IRQ()	asm(" wrteei 0")
#define RESET_MCU()		(SIU.SRCR.B.SSR = 1)

#define LIB_VERS_STR_LENGTH					8
#define MODEL_NAME_STR_LENGTH				50
#define MODEL_DATE_STR_LENGTH				21
#define MODEL_DESCRIPTION_STR_LENGTH		256

#define SERIAL_NUMBER_ADDRESS               (0x020000)



/*****************************
 *	Type definition
 ****************************/
typedef enum
{
    HardV0 = 0,
    HardV1,
    HardVUnknown
}t_HardwareVersion;

typedef enum
{
    BOARD_MUXLAB2,
    BOARD_MUXLAB4,
    BOARD_MUXLAB5
}t_BoardType;

/*****************************
 *  variables
 ****************************/
extern U32 timeStart, timeDiff;
extern const U08 sLibraryVers[LIB_VERS_STR_LENGTH];
extern const U08 sModelVersion[LIB_VERS_STR_LENGTH];
extern const U08 sModelName[MODEL_NAME_STR_LENGTH];
extern const U08 sModelDate[MODEL_DATE_STR_LENGTH];
extern const U08 sModelDescription[MODEL_DESCRIPTION_STR_LENGTH];
extern t_HardwareVersion hardVersion;

/*
__attribute__ ((section (".testFlash")))
extern const U16 u16StandaloneFlag;
*/
/*****************************
 *	Prototypes
 ****************************/
void LIB_Init(void);
BOOL LIB_GetBoardSerialNumber(U08 *serNbr);

void enableTimeBase(void);
void enableWatchDog(void);
void refreshWatchdog(void);
void startTimeBase(void);
void timeBaseDiff(void);
#endif

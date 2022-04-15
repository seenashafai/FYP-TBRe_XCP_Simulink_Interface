        
/******************************************************************************/
/**                           MODULES USED                                   **/
/******************************************************************************/
#include "OS/OS_Core.h"
#include "APP/APP_Tasks.h"
#include "DRV/GPIO_HAL.h"
#include "FlashData.h"
#include "Wakeup.h"

extern void MdlStart(void);
extern void INIT_CAN(void);

extern void INIT_LIN(void);

void APP_InitApp()
{

setAnaOutputVoltage(2, 12000);


    // APP_APP_DiagnosticsCAN : N°= 0  ;  
     
		OS_CreatePeriodicTaskPrio(&APP_DiagnosticsCAN, Name_task_DiagnosticsCAN, 100000U, 10U,OS_DEFAULT_PRIORITY_LEVEL , &DiagnosticsCANId);
    OS_CreateEventTask(&APP_DiagnosticsCAN, Name_task_DiagnosticsCAN, &DiagnosticsCANId);   
    


    // APP_APP_MainTask : N°= 1  ;  
     
		OS_CreatePeriodicTaskPrio(&APP_MainTask, Name_task_MainTask, 10000U, 0U,OS_DEFAULT_PRIORITY_LEVEL , &MainTaskId);
    OS_CreateEventTask(&APP_MainTask, Name_task_MainTask, &MainTaskId);   
    

	FlashData_Init();
	
	INIT_CAN();

	INIT_LIN();

    MdlStart();

	applyDigitalInputsCfg();
		WKUP_Verify(DI_MASKS, DI_LEVELS, CAN_MASKS, LIN_MASKS);
}


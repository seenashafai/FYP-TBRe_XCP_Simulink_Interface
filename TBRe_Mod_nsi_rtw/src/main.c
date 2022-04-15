#include "typedefs.h"
#include "OS/OS_Core.h"
#include "DRV/IRQ_HAL.h"
//#include "APP/APP_Tasks.h"
#include "CanData.h"
#include "LinData.h"

extern void APP_InitApp(void);

int main(void)
{
	U08 u08NextTaskId;

    IRQ_InitVectors(); // initialize interrupt vectors

    IRQ_InitINTC(); // initialize interrupts

	LIB_Init();

	APP_InitApp();

	OS_StartAll(); // Main infinite loop

}




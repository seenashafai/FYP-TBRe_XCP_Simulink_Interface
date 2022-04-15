
#include "APP_DiagnosticsCAN.h"
#include "OS/OS_Core.h"

    // APP_DiagnosticsCAN
    extern void DiagnosticsCAN();
		uint8_T DiagnosticsCANId = OS_TASK_UNKNOWNID;

    void APP_DiagnosticsCAN()
    {
		
		//OutputUpdate
        DiagnosticsCAN();
    }

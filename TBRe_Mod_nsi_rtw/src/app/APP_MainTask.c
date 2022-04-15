
#include "APP_MainTask.h"
#include "OS/OS_Core.h"

    // APP_MainTask
    extern void MainTask();
    extern void MainTask_Update();
		uint8_T MainTaskId = OS_TASK_UNKNOWNID;

    void APP_MainTask()
    {
		
		//Output
        MainTask();
		
		//Update
        MainTask_Update();
    }

#ifndef _OS_CORE_H
#define _OS_CORE_H

#include "typedefs.h"

/******************************************************************************/
/**                     DEFINITIONS AND MACROS                               **/
/******************************************************************************/
#define OS_TASK_FIFO_SIZE      		    (255u)
#define OS_MAX_NBOF_TASKS			    (255u)
#define OS_TASK_UNKNOWNID      		    OS_MAX_NBOF_TASKS
#define PERIODICTASK(taskid) 		    (OS_Scheduler.ListofPeriodicTasks[taskid].pTaskPointer())
#define NEXTPERIODICTASK(vartaskid)     (OS_DequeuePeriodicTask(&vartaskid))
#define EVENTTASK(taskid) 			    (OS_Scheduler.ListofEventTasks[taskid]())
#define NEXTEVENTTASK(vartaskid) 	    (OS_DequeueEventTask(&vartaskid))
#define OS_RUNNING 					    (OS_Scheduler.State != OS_STATE_SHUTDOWN)
#define OS_TIMER_1MS                    (9u)
#define OS_MAX_CONSECUTIVE_EVENT_TASKS  (5u)

typedef enum
	{
		OS_ERR_NOERRORS = 0,
		OS_ERR_NOTASKTOEXECUTE,
		OS_ERR_FIFOISFULL,
		OS_ERR_MAXOFTASKSISREACHED,
		OS_ERR_UNKNOWNTASKID
	} t_OsError;

typedef enum
	{
		OS_STATE_STARTUP,
		OS_STATE_RUN,
		OS_STATE_SHUTDOWN
	} t_OsState;



#define	GET_100US_TIMER()	(u32TickTimer)

#define	GET_1MS_TIMER()		(u32Timer1ms)
#define	RESET_1MS_TIMER()	(u32Timer1ms = 0)
#define	SET_1MS_TIMER(t)	(u32Timer1ms = t)

/******************************************************************************/
/**                     TYPEDEFS AND STRUCTURES                              **/
/******************************************************************************/
typedef struct {
    U08 ListofTaskIndex[OS_TASK_FIFO_SIZE+1];
    U08 u08FirstTaskPointer;
    U08 u08FirstFreePointer;
    U08 u08NbOfTasksToExecute;
} t_TaskFifo;

typedef void (*t_TaskPointer) ( void );

typedef struct
{
	t_TaskPointer	pTaskPointer;
	U16		u16TickTimer;
	U16		u16Sample;

} t_Task;

// PROFILER
#ifdef TASK_PROFILER
typedef struct
{
    U64     u64TaskStartClockCounts;
	U64		u64TotalClockCounts;
	U32     u32MinClockCounts;
	U32     u32MaxClockCounts;
	U32     u32NbCalls;
} t_Profiler;
#endif

typedef struct
{
	t_TaskFifo		FifoPeriodicTasks;
    U08			u08NbofPeriodicTasks;
	t_Task			ListofPeriodicTasks[OS_MAX_NBOF_TASKS];

	t_TaskFifo		FifoEventTasks;
    U08			u08NbofEventTasks;
	t_TaskPointer	ListofEventTasks[OS_MAX_NBOF_TASKS];

	t_OsState		State;
	// PROFILER
	#ifdef TASK_PROFILER
	U64             totalTicks;
	t_Profiler		periodicTasksProfileInf[OS_MAX_NBOF_TASKS];
	t_Profiler      eventTasksProfileInf[OS_MAX_NBOF_TASKS];
	const char *          periodicTasksName[OS_MAX_NBOF_TASKS];
	U08                   periodicTasksNameLength[OS_MAX_NBOF_TASKS];
	const char *          eventTasksName[OS_MAX_NBOF_TASKS];
	U08                   eventTasksNameLength[OS_MAX_NBOF_TASKS];
	#endif

} t_Scheduler;


/******************************************************************************/
/**               EXPORTED FUNCTIONS AND VARIABLES                           **/
/******************************************************************************/

extern t_Scheduler			OS_Scheduler;
extern volatile U32 		u32TickTimer;
extern volatile U32 		u32Timer1ms;

extern U08              OS_CreatePeriodicTask(t_TaskPointer pTask, const char *pTaskName, U16 u16Sample, U16 u16Offset, U08 *pTaskID);
extern U08 				OS_EnqueuePeriodicTask(U08 u08TaskId);
extern U08 				OS_DequeuePeriodicTask(U08 *pTaskId);
extern U08              OS_ActivatePeriodicTask(U08 u08TaskId, BOOL activate);
extern BOOL             OS_IsPeriodicTaskActive(U08 u08TaskId);
extern U08              OS_ChangePeriodicTaskPeriod(U08 u08TaskId, U16 u16Period);

extern U08				OS_CreateEventTask(t_TaskPointer pTask, const char *pTaskName, U08	*pTaskId);
extern U08				OS_ActivateEventTask(U08 nTaskId);
extern U08 				OS_EnqueueEventTask(U08 u08TaskId);
extern U08 				OS_DequeueEventTask(U08 *pTaskId);

extern void 				OS_InitDrivers();
extern void 				OS_InitOs();
extern void 				OS_Finalyse();
extern void 				OS_StartAll();
extern void 				OS_ShutdownOs();

extern void 				OS_startProfiling(U32 u32Id);
extern void 				OS_endProfiling(void);

extern void				OS_TickTimer(void);
extern void 				Timer1us(void);

#endif /* _OS_CORE_H */

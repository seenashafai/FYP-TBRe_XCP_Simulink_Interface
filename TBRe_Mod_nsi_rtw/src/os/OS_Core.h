#ifndef _OS_CORE_H
#define _OS_CORE_H

#include "../typedefs.h"

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
#define OS_NB_PRIORITY_LEVELS           (5u)
#define OS_DEFAULT_PRIORITY_LEVEL       (2u)

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

//#define DEBUG_OS

#ifdef DEBUG_OS
#define OS_GET_TIME()       (u32TickTimer)
#define NB_TICK_PER_MS      (100)
#else
#define OS_GET_TIME()       (readTimeBase32())
#define NB_TICK_PER_MS      (132)
#endif

#define	GET_100US_TIMER()	(u32TickTimer)

#define IS_PERIODIC_TASK_ACTIVE(taskId)    ((OS_Scheduler.ListofTasks[u08TaskId].u32Period & 0x80000000) != 0)



/******************************************************************************/
/**                     TYPEDEFS AND STRUCTURES                              **/
/******************************************************************************/
typedef struct
{
	U64		u64TotalClockCounts;
	U32     u32TaskStartClockCounts;
	U32     u32MinClockCounts;
	U32     u32MaxClockCounts;
	U32     u32NbCalls;
} t_Profiler;

typedef struct {
    U08 ListofTaskIndex[OS_TASK_FIFO_SIZE+1];
    U08 u08FirstTaskPointer;
    U08 u08FirstFreePointer;
    U08 u08NbOfTasksToExecute;
} t_TaskFifo;

typedef void (*t_TaskPointer) ( void );

typedef struct t_TaskElem
{
	t_TaskPointer	pTaskPointer;
	U32		u32NextExecutionTime;
	U32		u32Period;
	struct t_TaskElem *pNextTask;
	struct t_TaskElem *pPreviousTask;
#ifdef TASK_PROFILER
	t_Profiler taskProfileInf;
#endif
	U08 u08TaskPriority;
} t_Task;

// PROFILER


typedef struct
{
	t_Task			ListofTasks[OS_MAX_NBOF_TASKS];
	U32				u32NbofTasks;
	U32             u32NbofPeriodicTasks;
	U32             u32NbofEventTasks;
	//t_TaskPointer	ListofEventTasks[OS_MAX_NBOF_TASKS];
	//U32				u32NbofEventTasks;

	t_TaskFifo      FifoEventTasks;

	t_Task*         taskLinkedList[OS_NB_PRIORITY_LEVELS];

	t_OsState		State;
	// PROFILER
#ifdef TASK_PROFILER
	U64                   totalTicks;
	const char *          tasksName[OS_MAX_NBOF_TASKS];
	U08                   tasksNameLength[OS_MAX_NBOF_TASKS];
#endif
	U32 u32NbPeriodicTasksActivated;
} t_Scheduler;


/******************************************************************************/
/**               EXPORTED FUNCTIONS AND VARIABLES                           **/
/******************************************************************************/

extern t_Scheduler			OS_Scheduler;
extern volatile U32 		u32TickTimer;

extern U08              OS_CreatePeriodicTask(t_TaskPointer pTask, const char *pTaskName, U16 u16PeriodMilliS, U16 u16OffsetMilliS, U08 *pTaskID);
extern U08              OS_CreatePeriodicTaskPrio(t_TaskPointer pTask, const char *pTaskName, U32 u32PeriodMicroSec, U32 u32OffsetMicroSec, U08 u08TaskPriority , U08 *pTaskID);
extern U08 				OS_EnqueuePeriodicTask(U08 u08TaskId);
extern U08 				OS_DequeuePeriodicTask(U08 *pTaskId);
extern U08              OS_ActivatePeriodicTask(U08 u08TaskId, BOOL activate);
extern BOOL             OS_IsPeriodicTaskActive(U08 u08TaskId);
extern U08              OS_ChangePeriodicTaskPeriod(U08 u08TaskId, U16 u16Period);

extern U08				OS_CreateEventTask(t_TaskPointer pTask, const char *pTaskName, U08	*pTaskId);
extern U08				OS_ActivateEventTask(U08 nTaskId);
extern U08 				OS_EnqueueEventTask(U08 u08TaskId);
extern U08 				OS_DequeueEventTask(U08 *pTaskId);

extern void 				OS_InitOs();
extern void 				OS_Finalyse();
extern void 				OS_StartAll();
extern void 				OS_ShutdownOs();

extern void 				OS_startProfiling(U32 u32Id);
extern void 				OS_endProfiling(void);

extern void				OS_TickTimer(void);
extern void 				Timer1us(void);

#endif /* _OS_CORE_H */

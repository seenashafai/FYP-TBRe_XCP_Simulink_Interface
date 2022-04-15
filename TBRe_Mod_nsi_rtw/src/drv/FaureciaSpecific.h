/*
 * FaureciaSpecific.h
 *
 *  Created on: 21 oct. 2013
 *      Author: opasutto
 */

#ifndef FAURECIASPECIFIC_H_
#define FAURECIASPECIFIC_H_

#define DIG_IN_ID1					(7)
#define DIG_IN_ID2					(8)

#define MAX_NB_STEP					(80)
#define CYCLE_STEP_RESOLUTION		(125)

typedef struct
{
	U08 time;			// multiple of 125ms
	U08 valvePos;		// Percent
}t_CycleStep;

typedef enum
{
	CYCLE_A,
	CYCLE_B
}t_CycleType;

__attribute__ ((section(".dataSavedRam")))
extern t_CycleStep cycleA[MAX_NB_STEP];
__attribute__ ((section(".dataSavedRam")))
extern t_CycleStep cycleB[MAX_NB_STEP];
__attribute__ ((section(".dataSavedRam")))
extern U08 u08NbStepsCycleA;
__attribute__ ((section(".dataSavedRam")))
extern U08 u08NbStepsCycleB;


U08 FAUR_GetNbCycleSteps(t_CycleType cycleType);
t_CycleStep FAUR_GetCycleStep(t_CycleType cycleType, U08 u08Index);

#endif /* FAURECIASPECIFIC_H_ */

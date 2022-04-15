/******************************************************************************/
/*                                                                            */
/*  Copyright (c) 2012 NSI, Annecy, France                                    */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  APPLICATION    :  Safran Interface CAN/IAC                                */
/*  ENVIRONNEMENT  :  MPC5567                                                 */
/*  COMPILER       :  GCC                                                     */
/*  FILE           :  IRQ.c                                                   */
/*                                                                            */
/******************************************************************************/
/*!
 * \file IRQ.c
 *
 * \author PASUTTO Olivier
 * \date 07-03-2012
 *
 *
 */
#ifndef _IRQ_H_
#define _IRQ_H_

/*- SYSTEM INCLUDES- - - - - - - - - - - - - - - - - - - - - - - - - -*/

/*- MODULE INCLUDES- - - - - - - - - - - - - - - - - - - - - - - - - -*/

/*- DEFINES- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
#define ENABLE_IRQ()    {  INTC.CPR.B.PRI = 0;   asm(" wrteei 1"); }
#define DISABLE_IRQ()   { asm(" wrteei 0"); }
/*- TYPEDEFS- - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

/*- GLOBAL VARIABLES- - - - - - - - - - - - - - - - - - - - - - - - - */

/*- GLOBAL FUNCTIONS- - - - - - - - - - - - - - - - - - - - - - - - - */

void IRQ_InitVectors(void);
void IRQ_InitINTC(void);

#endif /* _IRQ_H_ */

/******************************************************************************/
/*                                                                            */
/*  Copyright (c) 2011 NSI, Annecy, France                                    */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/*  APPLICATION    :  Librairie bas niveau MPC5567 MUXlab4                    */
/*  ENVIRONNEMENT  :  CodeWarrior                                             */
/*  COMPILER       :  CodeWarrior                                             */
/*  FILE           :  LIN.c                                                   */
/*  DESCRIPTION    :  generic LIN definitions                                 */
/*                                                                            */
/******************************************************************************/

/*!
 * \file LINDef.h
 *
 * \author OPA
 * \date 30/08/2011
 *
 */
#ifndef LIN_DEF_H
#define LIN_DEF_H

#ifdef MUXLAB4
#define NB_LIN_CHANNELS		2
#else
#define NB_LIN_CHANNELS     1
#endif
/* LIN channels */
typedef enum
{
	LIN_ESCI_A = 0,
	LIN_ESCI_B
}t_LINChannels;

/* Checksum type of a frame */
typedef enum
{
	LIN_ENHANCED_CS = 0,
	LIN_CLASSIC_CS
}t_LINIfFrameCsModel;

/* Frame defintion */
typedef struct
{
	U08						u08Id;
	U08						u08Dlc;
	U08                     u08Sdu[8];
}t_LINPduType;

#endif

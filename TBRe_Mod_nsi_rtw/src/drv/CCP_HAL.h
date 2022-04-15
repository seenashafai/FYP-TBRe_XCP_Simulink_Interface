/*
 * CCP_HAL.h
 *
 *  Created on: 31 mai 2012
 *      Author: opasutto
 */

#ifndef CCP_HAL_H_
#define CCP_HAL_H_

S08 CCP_Init(t_FlexCANModules canModule, U32 identRx, t_CANIdentType identTypeRx, U32 identTx, t_CANIdentType identTypeTx);

#endif /* CCP_HAL_H_ */

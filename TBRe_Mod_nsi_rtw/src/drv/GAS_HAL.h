/*
 * GAS_HAL.h
 *
 *  Created on: 12 juin 2013
 *      Author: opasutto
 */

#ifndef GAS_HAL_H_
#define GAS_HAL_H_

void GAS_Init(void);
void GAS_EnablePeriodicMeasurement(BOOL enable, U16 u16MeasurementPeriod);
void GAS_WriteRegisters(U16 u16ResolutionReg, U16 u16RhSetupReg, U16 u16GasSetupReg, U16 u16HwConfigReg, U16 u16UserReg);
void GAS_ReadRegisters(U16 *pResolutionReg, U16 *pRhSetupReg, U16 *pGasSetupReg, U16 *pHwConfigReg, U16 *pUserReg);
void GAS_SetOnChipHeater(BOOL enable, U08 heatValue);
U16 GAS_GetLastGas1Measurement(void);
U16 GAS_GetLastGas2Measurement(void);
U16 GAS_GetLastHumidMeasurement(void);
U16 GAS_GetLastTempMeasurement(void);

/**
 * \return b0..15: Diagnosis register, b16: New measurements available, b17: CRC error, b18: Read registers ongoing, b19: Write registers ongoing
 */
U32 GAS_GetLastMeasurementDiagnosis(void);


extern BOOL newGasMeasurementAvailable;

#endif /* GAS_HAL_H_ */

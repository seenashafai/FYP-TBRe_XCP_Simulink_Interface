#ifndef ADC_HAL_H
#define ADC_HAL_H

#define RESULT_NOT_READY			(-10)

#ifdef MUXLAB4
    #define NB_ANA_INPUTS           (8)
#elif defined MUXLAB2
    #define NB_ANA_INPUTS           (4)
#endif

#define VBAT_ADC_CHANNEL            (16)

#ifdef MUXLAB_INDUS
extern U08 maskAnaInUsedByModel;
extern U08 u08BypassAnaInMask;
extern U16 u16BypassAnaInValue[NB_ANA_INPUTS];

#define SET_ANA_IN_USED_BY_MODEL(s)	(maskAnaInUsedByModel |= (1 << (s - 1)))
#else
#define SET_ANA_IN_USED_BY_MODEL(s)
#endif

void ANA_IN_Init();
S08 ANA_IN_ReadValue(U08 u08Input, U16 *pVoltage_mV);
void ANA_IN_ReadVBatt(U16 *pVBatt_mV);
S08 ANA_IN_ReadAnaOutFeedback(U08 u08Output, U16 *pVoltage_mV);

#endif

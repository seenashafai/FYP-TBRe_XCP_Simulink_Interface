#ifndef DAC_HAL_H
#define DAC_HAL_H

#ifdef MUXLAB4
#define NB_ANA_OUTPUTS          8
#elif defined MUXLAB2
#define NB_ANA_OUTPUTS          2
#endif

void initAnaOutputs();
U08 setAnaOutputVoltage(U08 u08Output, U16 u16Voltage);

#ifdef MUXLAB_INDUS
extern U16 u16BypassAnaOutMask;
extern U08 maskAnaOutUsedByModel;

#define SET_ANA_OUT_USED_BY_MODEL(s)	(maskAnaOutUsedByModel |= (1 << (s - 1)))
#else
#define SET_ANA_OUT_USED_BY_MODEL(s)
#endif


#endif

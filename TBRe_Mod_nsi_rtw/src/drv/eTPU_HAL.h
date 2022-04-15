#ifndef ETPU_HAL_H
#define ETPU_HAL_H

/* If the result from the frequential input is above this value, the result is considered incorrect */
#define FREQ_IN_MAX_VALUE       (500000)

#ifdef MUXLAB4
#define NB_FREQ_IN_10K          8
#define NB_PWM_OUT              8
#else
#define NB_FREQ_IN_10K          2
#define NB_PWM_OUT              3
#endif
#define NB_FREQ_IN_100K         4

/*****************************
 *  Type definition
 ****************************/
typedef enum
{
    FREQ_INPUT_10KHZ = 0,
    FREQ_INPUT_100KHZ
}t_FreqInputType;

typedef enum
{
    FREQ_INPUT,
    DIGITAL_INPUT,
    NOT_CONFIGURED
}t_FreqInput100KCfg;

typedef enum
{
    FREQ_INPUT_10K,
    PPA_INPUT
}t_FreqInput10KCfg;

extern t_FreqInput100KCfg cfgFreq100K[4];
#ifdef MUXLAB_INDUS
extern U08 u08MaskFreqIn100kUsedByModel;
extern U08 u08MaskFreqIn10kUsedByModel;
extern U08 u08BypassFreqIn100kMask;
extern U08 u08BypassFreqIn10kMask;
extern U32 u32BypassFreqIn100kValue[NB_FREQ_IN_100K];
extern U32 u32BypassFreqIn10kValue[NB_FREQ_IN_10K];
extern U08 u08BypassPWMMask;
extern U08 u08maskPWMUsedByModel;
#define SET_FREQ_IN_100K_USED_BY_MODEL(s)     (u08MaskFreqIn100kUsedByModel |= (1 << (s - 1)))
#define SET_FREQ_IN_10K_USED_BY_MODEL(s)      (u08MaskFreqIn10kUsedByModel |= (1 << (s - 1)))
#define SET_PWM_USED_BY_MODEL(s)              (u08maskPWMUsedByModel |= (1 << (s - 1)))
#else
#define SET_FREQ_IN_100K_USED_BY_MODEL(s)
#define SET_FREQ_IN_10K_USED_BY_MODEL(s)
#define SET_PWM_USED_BY_MODEL(s)
#endif

/*****************************
 *  Prototypes
 ****************************/
void eTPU_Init(void);
S08 eTPU_PWMUpdate(U08 u08Output, U32 u32Frequency, U08 u08DutyCycle);
S08 eTPU_GetInputFreq(U08 u08Input, t_FreqInputType type, U32 *pFreq);
S08 eTPU_Configure100KFreqInput(U08 u08Input, t_FreqInput100KCfg cfg);
S08 eTPU_Configure10KFreqInputPPA(U08 u08Input);
S08 eTPU_ConfigureFreqInputTreshold(U16 u16Treshold);
void eTPU_Irq(void);
U08 u08BypassPWMMask;
U08 maskPWMUsedByModel;
#endif

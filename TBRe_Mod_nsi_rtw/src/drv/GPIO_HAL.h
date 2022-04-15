#ifndef GPIO_HAL_H
#define GPIO_HAL_H

#ifdef MUXLAB4
#define DIGITAL_INPUTS_NB	24
#define DIGITAL_OUTPUTS_NB  8
#else
#define DIGITAL_INPUTS_NB   11      /* There is only 5 inputs (inputs 3 to 8 are not used) */
#define DIGITAL_OUTPUTS_NB  2
#endif




#define GPIO_INPUT_PERIOD		(10000)		// GPIO input read period (in µs)

#define SWITCH_TO_GROUND		(0)
#define SWITCH_TO_BATTERY		(1)



typedef enum
{
	DIGITAL_INPUT_1 = 146,
	DIGITAL_INPUT_2,
	DIGITAL_INPUT_3,
	DIGITAL_INPUT_4,
	DIGITAL_INPUT_5,
	DIGITAL_INPUT_6,
	DIGITAL_INPUT_7,
	DIGITAL_INPUT_8,
	DIGITAL_INPUT_9,
	DIGITAL_INPUT_10,
	DIGITAL_INPUT_11,
	DIGITAL_INPUT_12,
	DIGITAL_INPUT_13,
	DIGITAL_INPUT_14,
	DIGITAL_INPUT_15,
	DIGITAL_INPUT_16,
	DIGITAL_INPUT_17,
	DIGITAL_INPUT_18,
	DIGITAL_INPUT_19,
	DIGITAL_INPUT_20,
	DIGITAL_INPUT_21,
	DIGITAL_INPUT_22,
	DIGITAL_INPUT_23,
	DIGITAL_INPUT_24
}t_DigitalInputs;


typedef enum
{
	DIGITAL_OUTPUT_HS_1 = 179,
	DIGITAL_OUTPUT_HS_2 = 180,
	DIGITAL_OUTPUT_HS_3 = 181,
	DIGITAL_OUTPUT_HS_4 = 182,
	DIGITAL_OUTPUT_HS_5 = 183,
	DIGITAL_OUTPUT_HS_6 = 184,
	DIGITAL_OUTPUT_HS_7 = 185,
	DIGITAL_OUTPUT_HS_8 = 186,
	DIGITAL_OUTPUT_LS_1 = 197,
	DIGITAL_OUTPUT_LS_2 = 198,
	DIGITAL_OUTPUT_LS_3 = 199,
	DIGITAL_OUTPUT_LS_4 = 200,
	DIGITAL_OUTPUT_LS_5 = 203,
	DIGITAL_OUTPUT_LS_6 = 204,
	DIGITAL_OUTPUT_LS_7 = 205,
	DIGITAL_OUTPUT_LS_8 = 96
}t_DigitalOutputs;

typedef enum
{
    EMIOS_HS_1 = 0,
    EMIOS_HS_2 = 1,
    EMIOS_HS_3 = 2,
    EMIOS_HS_4 = 3,
    EMIOS_HS_5 = 4,
    EMIOS_HS_6 = 5,
    EMIOS_HS_7 = 6,
    EMIOS_HS_8 = 7,
    EMIOS_LS_1 = 18,
    EMIOS_LS_2 = 19,
    EMIOS_LS_3 = 20,
    EMIOS_LS_4 = 21,
    EMIOS_LS_5 = 14,
    EMIOS_LS_6 = 15
}t_DigitalOutputsEmios;

typedef enum
{
	HS_DIGITAL_OUTPUT,
	LS_DIGITAL_OUTPUT
}t_DigitalOutputType;

typedef enum
{
    DIGITAL_OUTPUT_MODE,
    PWM_OUTPUT_MODE
}t_DigitalOutputMode;

typedef enum
{
	DIGITAL_INPUT_NO_IRQ,
	DIGITAL_INPUT_RISING_EDGE_IRQ,
	DIGITAL_INPUT_FALLING_EDGE_IRQ,
	DIGITAL_INPUT_EITHER_EDGE_IRQ
}t_DigitalInputIrqType;

typedef struct
{
	t_DigitalInputIrqType irqType;
	U08 u08eventID;
	U08 u08Value;
}t_DigitalInputInfo;


extern t_DigitalInputInfo digInputs[DIGITAL_INPUTS_NB];

#ifdef MUXLAB_INDUS

extern U32 digInputsUsedByModel;
extern U32 u32BypassDigInMask;
extern U32 u32BypassDigInValue;
#define SET_DIG_INPUT_USED_BY_MODEL(n)		    (digInputsUsedByModel |= ( 1 << (n - 1) ))

extern U16 u16BypassDigOutHSMask;
extern U16 u16BypassDigOutLSMask;
extern U16 digOutputsHSUsedByModel;
extern U16 digOutputsLSUsedByModel;
#define SET_DIG_OUT_HS_USED_BY_MODEL(n)	   (digOutputsHSUsedByModel |= ( 1 << (n - 1) ))
#define SET_DIG_OUT_LS_USED_BY_MODEL(n)	   (digOutputsLSUsedByModel |= ( 1 << (n - 1) ))

#else
#define SET_DIG_INPUT_USED_BY_MODEL(n)
#define SET_DIG_OUT_HS_USED_BY_MODEL(n)
#define SET_DIG_OUT_LS_USED_BY_MODEL(n)
#endif

void initDigitalInputs(void);
S08 initDigitalInput(U08 input, U08 u08SwitchCfg, t_DigitalInputIrqType irqType, U08 u08EventID);
void applyDigitalInputsCfg(void);
S08 readDigitalInput(U08 input, U08 *pValue);

void initDigitalOutputs(void);
#if 0
S08 initDigitalOutput(U08 output, t_DigitalOutputType type);
#else
S08 initDigitalOutput(U08 output, t_DigitalOutputType type, t_DigitalOutputMode mode);
#endif
S08 writeDigitalOutput(U08 output, t_DigitalOutputType type, U08 value);
S08 writeDigitalOutputPWM(U08 output, t_DigitalOutputType type, U16 u16Frequency, U08 u08DutyCycle);
S08 readDigitalOutputFeedback(t_DigitalOutputs output, t_DigitalOutputType type, U16 *pFeedback);

void initPowerHold(void);

void LED_Init(void);
void LED_Blink(void);



#endif

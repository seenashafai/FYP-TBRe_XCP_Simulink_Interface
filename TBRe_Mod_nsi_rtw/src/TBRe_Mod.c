/*
 * TBRe_Mod.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "TBRe_Mod".
 *
 * Model version              : 1.4
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C source code generated on : Fri Apr 15 14:02:53 2022
 *
 * Target selection: nsi_mpc.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TBRe_Mod.h"
#include "TBRe_Mod_private.h"

/* Exported block parameters */
real_T SOC_Calc_Data[8] = { 0.0, 0.0, 10.0, 20.0, 25.0, 50.0, 100.0, 100.0 } ;/* Variable: SOC_Calc_Data
                                                                      * Referenced by: '<S35>/SOC_Calc'
                                                                      */

real_T Voltage_Act_Data[2] = { 500.0, 33000.0 } ;/* Variable: Voltage_Act_Data
                                                  * Referenced by: '<S35>/Voltage_Act'
                                                  */

uint16_T SOC_Calc_Breakpoint[8] = { 0U, 16000U, 24000U, 24800U, 25800U, 26000U,
  26400U, 33000U } ;                   /* Variable: SOC_Calc_Breakpoint
                                        * Referenced by: '<S35>/SOC_Calc'
                                        */

uint16_T Voltage_Act_Breakpoint[2] = { 0U, 20000U } ;/* Variable: Voltage_Act_Breakpoint
                                                      * Referenced by: '<S35>/Voltage_Act'
                                                      */

/* Block signals (auto storage) */
B_TBRe_Mod_T TBRe_Mod_B;

/* Block states (auto storage) */
DW_TBRe_Mod_T TBRe_Mod_DW;

/* Real-time model */
RT_MODEL_TBRe_Mod_T TBRe_Mod_M_;
RT_MODEL_TBRe_Mod_T *const TBRe_Mod_M = &TBRe_Mod_M_;
static void rate_scheduler(void);
int16_T look1_iu8lu16n16ts16Ds_FbqVATJM(uint8_T u0, const uint8_T bp0[], const
  int16_T table[], uint32_T maxIndex)
{
  int16_T y;
  uint16_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Lookup 1-D
     Canonical function name: look1_iu8lu16n16ts16Ds32_binlcas
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
     Rounding mode: 'simplest'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
     Rounding mode: 'simplest'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0U;
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (uint16_T)(((uint32_T)(uint8_T)((uint32_T)u0 - bp0[iLeft]) << 16) /
                      (uint8_T)((uint32_T)bp0[iLeft + 1U] - bp0[iLeft]));
  } else {
    iLeft = maxIndex;
    frac = 0U;
  }

  /* Interpolation 1-D
     Interpolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'on'
     Rounding mode: 'simplest'
     Overflow mode: 'wrapping'
   */
  if (iLeft == maxIndex) {
    y = table[iLeft];
  } else {
    y = (int16_T)((int16_T)(((table[iLeft + 1U] - table[iLeft]) * frac) >> 16) +
                  table[iLeft]);
  }

  return y;
}

uint16_T look1_iu16tdIu16_binlca(uint16_T u0, const uint16_T bp0[], const real_T
  table[], uint32_T maxIndex)
{
  uint16_T y;
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0;
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (real_T)(uint16_T)((uint32_T)u0 - bp0[iLeft]) / (real_T)(uint16_T)
      ((uint32_T)bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex;
    frac = 0.0;
  }

  /* Interpolation 1-D
     Interpolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'on'
     Overflow mode: 'wrapping'
   */
  if (iLeft == maxIndex) {
    y = (uint16_T)table[iLeft];
  } else {
    y = (uint16_T)((uint32_T)(uint16_T)((table[iLeft + 1U] - table[iLeft]) *
      frac) + (uint16_T)table[iLeft]);
  }

  return y;
}

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (TBRe_Mod_M->Timing.TaskCounters.TID[1])++;
  if ((TBRe_Mod_M->Timing.TaskCounters.TID[1]) > 99) {/* Sample time: [0.01s, 0.0s] */
    TBRe_Mod_M->Timing.TaskCounters.TID[1] = 0;
  }

  TBRe_Mod_M->Timing.sampleHits[1] = (TBRe_Mod_M->Timing.TaskCounters.TID[1] ==
    0);
  (TBRe_Mod_M->Timing.TaskCounters.TID[2])++;
  if ((TBRe_Mod_M->Timing.TaskCounters.TID[2]) > 999) {/* Sample time: [0.1s, 0.0s] */
    TBRe_Mod_M->Timing.TaskCounters.TID[2] = 0;
  }

  TBRe_Mod_M->Timing.sampleHits[2] = (TBRe_Mod_M->Timing.TaskCounters.TID[2] ==
    0);
}

/* Model output function */
static void TBRe_Mod_output(void)
{
  if (TBRe_Mod_M->Timing.TaskCounters.TID[1] == 0) {
    /* Outputs for Atomic SubSystem: '<Root>/MainTask' */
    MainTask();

    /* End of Outputs for SubSystem: '<Root>/MainTask' */
  }

  if (TBRe_Mod_M->Timing.TaskCounters.TID[2] == 0) {
    /* Outputs for Atomic SubSystem: '<Root>/DiagnosticsCAN' */
    DiagnosticsCAN();

    /* End of Outputs for SubSystem: '<Root>/DiagnosticsCAN' */
  }

  if (TBRe_Mod_M->Timing.TaskCounters.TID[1] == 0) {
  }
}

/* Model update function */
static void TBRe_Mod_update(void)
{
  if (TBRe_Mod_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update for Atomic SubSystem: '<Root>/MainTask' */
    MainTask_Update();

    /* End of Update for SubSystem: '<Root>/MainTask' */
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++TBRe_Mod_M->Timing.clockTick0)) {
    ++TBRe_Mod_M->Timing.clockTickH0;
  }

  TBRe_Mod_M->Timing.t[0] = TBRe_Mod_M->Timing.clockTick0 *
    TBRe_Mod_M->Timing.stepSize0 + TBRe_Mod_M->Timing.clockTickH0 *
    TBRe_Mod_M->Timing.stepSize0 * 4294967296.0;
  if (TBRe_Mod_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++TBRe_Mod_M->Timing.clockTick1)) {
      ++TBRe_Mod_M->Timing.clockTickH1;
    }

    TBRe_Mod_M->Timing.t[1] = TBRe_Mod_M->Timing.clockTick1 *
      TBRe_Mod_M->Timing.stepSize1 + TBRe_Mod_M->Timing.clockTickH1 *
      TBRe_Mod_M->Timing.stepSize1 * 4294967296.0;
  }

  if (TBRe_Mod_M->Timing.TaskCounters.TID[2] == 0) {
    /* Update absolute timer for sample time: [0.1s, 0.0s] */
    /* The "clockTick2" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick2"
     * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick2 and the high bits
     * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++TBRe_Mod_M->Timing.clockTick2)) {
      ++TBRe_Mod_M->Timing.clockTickH2;
    }

    TBRe_Mod_M->Timing.t[2] = TBRe_Mod_M->Timing.clockTick2 *
      TBRe_Mod_M->Timing.stepSize2 + TBRe_Mod_M->Timing.clockTickH2 *
      TBRe_Mod_M->Timing.stepSize2 * 4294967296.0;
  }

  rate_scheduler();
}

/* Model initialize function */
static void TBRe_Mod_initialize(void)
{
  /* Start for Atomic SubSystem: '<Root>/MainTask' */
  MainTask_Start();

  /* End of Start for SubSystem: '<Root>/MainTask' */

  /* Start for Atomic SubSystem: '<Root>/DiagnosticsCAN' */
  DiagnosticsCAN_Start();

  /* End of Start for SubSystem: '<Root>/DiagnosticsCAN' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/MainTask' */
  MainTask_Init();

  /* End of SystemInitialize for SubSystem: '<Root>/MainTask' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/DiagnosticsCAN' */
  DiagnosticsCAN_Init();

  /* End of SystemInitialize for SubSystem: '<Root>/DiagnosticsCAN' */
}

/* Model terminate function */
static void TBRe_Mod_terminate(void)
{
  /* (no terminate code required) */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  TBRe_Mod_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  TBRe_Mod_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  TBRe_Mod_initialize();
}

void MdlTerminate(void)
{
  TBRe_Mod_terminate();
}

/* Registration function */
RT_MODEL_TBRe_Mod_T *TBRe_Mod(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)TBRe_Mod_M, 0,
                sizeof(RT_MODEL_TBRe_Mod_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = TBRe_Mod_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;
    TBRe_Mod_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    TBRe_Mod_M->Timing.sampleTimes = (&TBRe_Mod_M->Timing.sampleTimesArray[0]);
    TBRe_Mod_M->Timing.offsetTimes = (&TBRe_Mod_M->Timing.offsetTimesArray[0]);

    /* task periods */
    TBRe_Mod_M->Timing.sampleTimes[0] = (0.0001);
    TBRe_Mod_M->Timing.sampleTimes[1] = (0.01);
    TBRe_Mod_M->Timing.sampleTimes[2] = (0.1);

    /* task offsets */
    TBRe_Mod_M->Timing.offsetTimes[0] = (0.0);
    TBRe_Mod_M->Timing.offsetTimes[1] = (0.0);
    TBRe_Mod_M->Timing.offsetTimes[2] = (0.0);
  }

  rtmSetTPtr(TBRe_Mod_M, &TBRe_Mod_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = TBRe_Mod_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    mdlSampleHits[2] = 1;
    TBRe_Mod_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(TBRe_Mod_M, -1);
  TBRe_Mod_M->Timing.stepSize0 = 0.0001;
  TBRe_Mod_M->Timing.stepSize1 = 0.01;
  TBRe_Mod_M->Timing.stepSize2 = 0.1;
  TBRe_Mod_M->solverInfoPtr = (&TBRe_Mod_M->solverInfo);
  TBRe_Mod_M->Timing.stepSize = (0.0001);
  rtsiSetFixedStepSize(&TBRe_Mod_M->solverInfo, 0.0001);
  rtsiSetSolverMode(&TBRe_Mod_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  TBRe_Mod_M->blockIO = ((void *) &TBRe_Mod_B);
  (void) memset(((void *) &TBRe_Mod_B), 0,
                sizeof(B_TBRe_Mod_T));

  /* states (dwork) */
  TBRe_Mod_M->dwork = ((void *) &TBRe_Mod_DW);
  (void) memset((void *)&TBRe_Mod_DW, 0,
                sizeof(DW_TBRe_Mod_T));

  /* Initialize Sizes */
  TBRe_Mod_M->Sizes.numContStates = (0);/* Number of continuous states */
  TBRe_Mod_M->Sizes.numY = (0);        /* Number of model outputs */
  TBRe_Mod_M->Sizes.numU = (0);        /* Number of model inputs */
  TBRe_Mod_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  TBRe_Mod_M->Sizes.numSampTimes = (3);/* Number of sample times */
  TBRe_Mod_M->Sizes.numBlocks = (352); /* Number of blocks */
  TBRe_Mod_M->Sizes.numBlockIO = (213);/* Number of block outputs */
  return TBRe_Mod_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/

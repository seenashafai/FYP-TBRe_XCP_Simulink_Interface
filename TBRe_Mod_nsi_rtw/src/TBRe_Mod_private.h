/*
 * TBRe_Mod_private.h
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

#ifndef RTW_HEADER_TBRe_Mod_private_h_
#define RTW_HEADER_TBRe_Mod_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "DRV/COMMON.h"
#include "Configurator.h"
#include "OS/OS_Core.h"
#include "DRV/CanDef.h"
#include "DRV/CAN_HAL.h"
#include "CanDataExt.h"
#include "CanCRC.h"
#include "FlashData.h"
#include "DRV/ADC_HAL.h"
#include "DRV/GPIO_HAL.h"
#include "DRV/DAC_HAL.h"
#include "DRV/USB_HAL.h"
#include "DRV/eTPU_HAL.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* Imported (extern) block parameters */
extern _SAVEDRAM_ uint8_T Brake_Active_Threshold;/* Variable: Brake_Active_Threshold
                                                  * Referenced by: '<S37>/Brake Bool Hysteresis'
                                                  */
extern _SAVEDRAM_ uint8_T Throttle_Active_Threshold;/* Variable: Throttle_Active_Threshold
                                                     * Referenced by: '<S37>/Throttle Bool Hysteresis'
                                                     */
extern real_T rt_roundd_snf(real_T u);
extern int16_T look1_iu8lu16n16ts16Ds_FbqVATJM(uint8_T u0, const uint8_T bp0[],
  const int16_T table[], uint32_T maxIndex);
extern uint16_T look1_iu16tdIu16_binlca(uint16_T u0, const uint16_T bp0[], const
  real_T table[], uint32_T maxIndex);

#endif                                 /* RTW_HEADER_TBRe_Mod_private_h_ */

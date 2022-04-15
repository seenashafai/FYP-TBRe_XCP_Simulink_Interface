/*
 * TBRe_Mod_data.c
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

/* Invariant block signals (auto storage) */
const ConstB_TBRe_Mod_T TBRe_Mod_ConstB = {
  0U,                                  /* '<S1>/Data Type Conversion27' */
  0U                                   /* '<S1>/Data Type Conversion26' */
};

/* Constant parameters (auto storage) */
const ConstP_TBRe_Mod_T TBRe_Mod_ConstP = {
  /* Computed Parameter: Throttle_Torque_Map__240Nm_tabl
   * Referenced by: '<S53>/Throttle_Torque_Map_%_240Nm'
   */
  { 0, 20, 230 },

  /* Computed Parameter: Throttle_Torque_Map__240Nm_bp01
   * Referenced by: '<S53>/Throttle_Torque_Map_%_240Nm'
   */
  { 0U, 25U, 100U }
};

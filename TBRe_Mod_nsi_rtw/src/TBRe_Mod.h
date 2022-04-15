/*
 * TBRe_Mod.h
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

#ifndef RTW_HEADER_TBRe_Mod_h_
#define RTW_HEADER_TBRe_Mod_h_
#include <string.h>
#ifndef TBRe_Mod_COMMON_INCLUDES_
# define TBRe_Mod_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif                                 /* TBRe_Mod_COMMON_INCLUDES_ */

#include "TBRe_Mod_types.h"
#include "FlashData.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "DiagnosticsCAN.h"
#include "MainTask.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ()
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ()
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ()
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ()
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ()
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ()
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ()
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ()
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
# define rtmGetSelf(rtm)               ()
#endif

#ifndef rtmSetSelf
# define rtmSetSelf(rtm, val)          ()
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ((rtm)->Timing.TaskCounters)
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ((rtm)->Timing.TaskCounters = (val))
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVDRMdlRefTiming
# define rtmGetVDRMdlRefTiming(rtm)    ()
#endif

#ifndef rtmSetVDRMdlRefTiming
# define rtmSetVDRMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetVDRMdlRefTimingPtr
# define rtmGetVDRMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetVDRMdlRefTimingPtr
# define rtmSetVDRMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetVDRNumTicksToNextHit
# define rtmGetVDRNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetVDRNumTicksToNextHit
# define rtmSetVDRNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
# define rtmGettimingBridge(rtm)       ()
#endif

#ifndef rtmSettimingBridge
# define rtmSettimingBridge(rtm, val)  ()
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) 0
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define TBRe_Mod_rtModel               RT_MODEL_TBRe_Mod_T

/* Block signals (auto storage) */
typedef struct {
  real_T IMD_Duty;                     /* '<S15>/Add' */
  real_T IMD_Resistance;               /* '<S34>/Subtract1' */
  real_T Divide1;                      /* '<S51>/Divide1' */
  real_T Gain;                         /* '<S51>/Gain' */
  real_T Divide1_l;                    /* '<S52>/Divide1' */
  real_T Gain_f;                       /* '<S52>/Gain' */
  real32_T Instant_Pack_Voltage;       /* '<S8>/CanRx6' */
  real32_T MCU_Voltage;                /* '<S10>/CanRx1' */
  real32_T CanRx3_o2;                  /* '<S10>/CanRx3' */
  real32_T Abg_Cell_Voltage;           /* '<S8>/CanRx7' */
  real32_T High_Cell_Voltage;          /* '<S8>/CanRx7' */
  real32_T Low_Cell_Voltage;           /* '<S8>/CanRx7' */
  real32_T FR_Wheel_Speed;             /* '<S11>/CanRx1' */
  real32_T FL_Wheel_Speed;             /* '<S11>/CanRx1' */
  real32_T RR_Wheel_Speed;             /* '<S11>/CanRx2' */
  real32_T RL_Wheel_Speed;             /* '<S11>/CanRx2' */
  real32_T Steering_Angle;             /* '<S11>/CanRx5' */
  real32_T Yaw;                        /* '<S11>/CanRx8' */
  real32_T DataTypeConversion;         /* '<S1>/Data Type Conversion' */
  uint32_T CanRx4_o1;                  /* '<S10>/CanRx4' */
  uint32_T IMD_Freq;                   /* '<S15>/FrequentialInput2' */
  uint32_T IMD_Duty_j;                 /* '<S15>/FrequentialInput3' */
  uint32_T Fan_Freq;                   /* '<S9>/FrequentialInput1' */
  int16_T Motor_Speed;                 /* '<S10>/Data Type Conversion' */
  int16_T Switch2;                     /* '<S60>/Switch2' */
  int16_T Memoryread;                  /* '<S19>/Memory read' */
  int16_T Memoryread4;                 /* '<S19>/Memory read4' */
  int16_T Memoryread5;                 /* '<S19>/Memory read5' */
  int16_T Memoryread6;                 /* '<S19>/Memory read6' */
  int16_T Memoryread1;                 /* '<S19>/Memory read1' */
  int16_T Memoryread2;                 /* '<S19>/Memory read2' */
  int16_T Memoryread3;                 /* '<S19>/Memory read3' */
  int16_T Memoryread7;                 /* '<S19>/Memory read7' */
  int16_T Memoryread8;                 /* '<S19>/Memory read8' */
  int16_T Torque_MCU_Req;              /* '<S53>/OnlyDriveWhenPWMOn' */
  uint16_T Memoryread4_f;              /* '<S43>/Memory read4' */
  uint16_T Memoryread5_e;              /* '<S43>/Memory read5' */
  uint16_T Throttle1_Voltage;          /* '<S16>/AnalogInput1' */
  uint16_T Throttle2_Voltage;          /* '<S16>/AnalogInput6' */
  uint16_T Brake1_Pressure;            /* '<S16>/AnalogInput2' */
  uint16_T Brake2_Pressure;            /* '<S16>/AnalogInput3' */
  uint16_T MinMax;                     /* '<S51>/MinMax' */
  uint16_T Memoryread6_b;              /* '<S43>/Memory read6' */
  uint16_T Memoryread7_d;              /* '<S43>/Memory read7' */
  uint16_T MinMax_d;                   /* '<S52>/MinMax' */
  uint16_T MinMax_e;                   /* '<S40>/MinMax' */
  uint16_T Memoryread_i;               /* '<S43>/Memory read' */
  uint16_T Memoryread1_e;              /* '<S43>/Memory read1' */
  uint16_T MinMax_dv;                  /* '<S49>/MinMax' */
  uint16_T Memoryread2_h;              /* '<S43>/Memory read2' */
  uint16_T Memoryread3_f;              /* '<S43>/Memory read3' */
  uint16_T MinMax_b;                   /* '<S50>/MinMax' */
  uint16_T ProductofElements;          /* '<S39>/Product of Elements' */
  uint16_T Pack_SOC;                   /* '<S8>/CanRx6' */
  uint16_T Pack_Current;               /* '<S8>/CanRx6' */
  uint16_T Motor_Temp;                 /* '<S10>/CanRx1' */
  uint16_T ECU_Ok;                     /* '<S23>/Switch1' */
  uint16_T TSS;                        /* '<S23>/Switch4' */
  uint16_T Motor_Speed_l;              /* '<S10>/CanRx3' */
  uint16_T FaultCode;                  /* '<S10>/CanRx4' */
  uint16_T Memoryread_g;               /* '<S17>/Memory read' */
  uint16_T Memoryread1_n;              /* '<S17>/Memory read1' */
  uint16_T UsbRx;                      /* '<S22>/UsbRx' */
  uint16_T DataTypeConversion10;       /* '<S19>/Data Type Conversion10' */
  uint16_T DataTypeConversion3;        /* '<S19>/Data Type Conversion3' */
  uint16_T DataTypeConversion1;        /* '<S19>/Data Type Conversion1' */
  uint16_T DataTypeConversion8;        /* '<S19>/Data Type Conversion8' */
  uint16_T DataTypeConversion9;        /* '<S19>/Data Type Conversion9' */
  uint16_T DataTypeConversion20;       /* '<S19>/Data Type Conversion20' */
  uint16_T DataTypeConversion12;       /* '<S19>/Data Type Conversion12' */
  uint16_T DataTypeConversion6;        /* '<S19>/Data Type Conversion6' */
  uint16_T DataTypeConversion7;        /* '<S19>/Data Type Conversion7' */
  uint16_T DataTypeConversion21;       /* '<S19>/Data Type Conversion21' */
  uint16_T DataTypeConversion22;       /* '<S19>/Data Type Conversion22' */
  uint16_T LV_Battery_Voltage;         /* '<S9>/VBat' */
  uint16_T Front_Vehicle_Speed;        /* '<S11>/CanRx1' */
  uint16_T Rear_Vehicle_Speed;         /* '<S11>/CanRx2' */
  uint16_T Memoryread_l;               /* '<S35>/Memory read' */
  uint16_T LV_Battery_Voltage_n;       /* '<S35>/Voltage_Act' */
  uint16_T LV_SOC;                     /* '<S35>/SOC_Calc' */
  uint16_T Memoryread_b;               /* '<S36>/Memory read' */
  uint16_T ProductofElements_n;        /* '<S40>/Product of Elements' */
  uint16_T TV1_Out;                    /* '<S42>/Sensor_Diag' */
  uint16_T TV2_Out;                    /* '<S42>/Sensor_Diag' */
  uint16_T BV1_Out;                    /* '<S42>/Sensor_Diag' */
  uint16_T BV2_Out;                    /* '<S42>/Sensor_Diag' */
  uint16_T DataTypeConversion38;       /* '<S1>/Data Type Conversion38' */
  uint16_T DataTypeConversion39;       /* '<S1>/Data Type Conversion39' */
  uint16_T DataTypeConversion40;       /* '<S1>/Data Type Conversion40' */
  uint16_T DataTypeConversion20_j;     /* '<S1>/Data Type Conversion20' */
  uint16_T DataTypeConversion4;        /* '<S1>/Data Type Conversion4' */
  uint16_T DataTypeConversion2;        /* '<S1>/Data Type Conversion2' */
  uint16_T DataTypeConversion3_a;      /* '<S1>/Data Type Conversion3' */
  uint16_T DataTypeConversion6_k;      /* '<S1>/Data Type Conversion6' */
  int8_T Memoryread9;                  /* '<S51>/Memory read9' */
  int8_T Memoryread8_e;                /* '<S52>/Memory read8' */
  uint8_T Product;                     /* '<S38>/Product' */
  uint8_T Acc_Fan_Speed;               /* '<S8>/CanRx6' */
  uint8_T Avg_Cell_Temp;               /* '<S8>/CanRx1' */
  uint8_T Highest_Cell_Temp;           /* '<S8>/CanRx1' */
  uint8_T Lowest_Cell_Temp;            /* '<S8>/CanRx1' */
  uint8_T Highest_Temp_ID;             /* '<S8>/CanRx1' */
  uint8_T Lowest_Temp_ID;              /* '<S8>/CanRx1' */
  uint8_T BMS_Heatsink_Temp;           /* '<S8>/CanRx1' */
  uint8_T High_Cell_ID;                /* '<S8>/CanRx7' */
  uint8_T Low_Cell_ID;                 /* '<S8>/CanRx7' */
  uint8_T MCU_Temp;                    /* '<S10>/CanRx2' */
  uint8_T Control_Word;                /* '<S54>/Operaton_Mode' */
  uint8_T State;                       /* '<S54>/Operaton_Mode' */
  uint8_T Pedal_Sensor_Fail;           /* '<S42>/Sensor_Diag' */
  uint8_T DataTypeConversion1_e;       /* '<S1>/Data Type Conversion1' */
  uint8_T DataTypeConversion25;        /* '<S1>/Data Type Conversion25' */
  uint8_T DataTypeConversion28;        /* '<S1>/Data Type Conversion28' */
  uint8_T Memoryread1_a;               /* '<S1>/Memory read1' */
  uint8_T Memoryread_ij;               /* '<S1>/Memory read' */
  uint8_T DataTypeConversion7_b;       /* '<S1>/Data Type Conversion7' */
  uint8_T DataTypeConversion8_j;       /* '<S1>/Data Type Conversion8' */
  uint8_T DataTypeConversion10_k;      /* '<S1>/Data Type Conversion10' */
  uint8_T DataTypeConversion9_h;       /* '<S1>/Data Type Conversion9' */
  uint8_T DataTypeConversion5;         /* '<S1>/Data Type Conversion5' */
  uint8_T DataTypeConversion12_o;      /* '<S1>/Data Type Conversion12' */
  uint8_T DataTypeConversion19;        /* '<S1>/Data Type Conversion19' */
  uint8_T DataTypeConversion35;        /* '<S1>/Data Type Conversion35' */
  uint8_T DataTypeConversion36;        /* '<S1>/Data Type Conversion36' */
  boolean_T LogicalOperator2;          /* '<S38>/Logical Operator2' */
  boolean_T Throttle_Bool;             /* '<S37>/Throttle Bool Hysteresis' */
  boolean_T Brake_Bool;                /* '<S37>/Brake Bool Hysteresis' */
  boolean_T AIRHigh;                   /* '<S12>/DigitalInput5' */
  boolean_T CanRx6_o5;                 /* '<S8>/CanRx6' */
  boolean_T MCU_Temp_m;                /* '<S10>/CanRx1' */
  boolean_T AIRLow;                    /* '<S12>/DigitalInput' */
  boolean_T btnPreCharge_Input;        /* '<S14>/DigitalInput3' */
  boolean_T Latch_Status;              /* '<S9>/DigitalInput1' */
  boolean_T TSS_f;                     /* '<S69>/StartUp' */
  boolean_T LogicalOperator;           /* '<S17>/Logical Operator' */
  boolean_T Brake_Light;               /* '<S23>/Logical Operator1' */
  boolean_T Compare;                   /* '<S32>/Compare' */
  boolean_T CanRx3_o3;                 /* '<S10>/CanRx3' */
  boolean_T Compare_c;                 /* '<S20>/Compare' */
  boolean_T CanRx4_o3;                 /* '<S10>/CanRx4' */
  boolean_T UsbRx_n;                   /* '<S17>/UsbRx' */
  boolean_T X_LED;                     /* '<S22>/Logical Operator3' */
  boolean_T Z_LED;                     /* '<S22>/Logical Operator5' */
  boolean_T Y_LED;                     /* '<S22>/Logical Operator4' */
  boolean_T RTD_LED;                   /* '<S22>/Logical Operator2' */
  boolean_T APPS_LED;                  /* '<S22>/Logical Operator' */
  boolean_T CanRx1_o7;                 /* '<S8>/CanRx1' */
  boolean_T CanRx7_o6;                 /* '<S8>/CanRx7' */
  boolean_T BMS_Multi1;                /* '<S13>/DigitalInput6' */
  boolean_T BMS_Multi2;                /* '<S13>/DigitalInput1' */
  boolean_T BMS_ChargeEnable;          /* '<S13>/DigitalInput2' */
  boolean_T btnRTD_Input;              /* '<S14>/DigitalInput2' */
  boolean_T btnY_Input;                /* '<S14>/DigitalInput4' */
  boolean_T btnZ_Input;                /* '<S14>/DigitalInput1' */
  boolean_T btnPumpFan_Input;          /* '<S14>/DigitalInput5' */
  boolean_T btnAccyFan_Input;          /* '<S14>/DigitalInput6' */
  boolean_T CanRx2_o2;                 /* '<S10>/CanRx2' */
  boolean_T CanRx1_o4;                 /* '<S11>/CanRx1' */
  boolean_T CanRx2_o4;                 /* '<S11>/CanRx2' */
  boolean_T CanRx5_o2;                 /* '<S11>/CanRx5' */
  boolean_T CanRx8_o2;                 /* '<S11>/CanRx8' */
  boolean_T Shutdown_Error;            /* '<S11>/CanRx9' */
  boolean_T CanRx9_o2;                 /* '<S11>/CanRx9' */
  boolean_T CanRx9_o3;                 /* '<S11>/CanRx9' */
  boolean_T CanRx9_o4;                 /* '<S11>/CanRx9' */
  boolean_T CanRx9_o5;                 /* '<S11>/CanRx9' */
  boolean_T CanRx9_o6;                 /* '<S11>/CanRx9' */
  boolean_T CanRx9_o7;                 /* '<S11>/CanRx9' */
  boolean_T CanRx9_o8;                 /* '<S11>/CanRx9' */
  boolean_T CanRx9_o9;                 /* '<S11>/CanRx9' */
  boolean_T CanRx9_o10;                /* '<S11>/CanRx9' */
  boolean_T CanRx9_o11;                /* '<S11>/CanRx9' */
  boolean_T CanRx9_o12;                /* '<S11>/CanRx9' */
  boolean_T CanRx9_o13;                /* '<S11>/CanRx9' */
  boolean_T CanRx9_o14;                /* '<S11>/CanRx9' */
  boolean_T CanRx9_o15;                /* '<S11>/CanRx9' */
  boolean_T CanRx9_o16;                /* '<S11>/CanRx9' */
  boolean_T CanRx9_o17;                /* '<S11>/CanRx9' */
  boolean_T CanRx9_o18;                /* '<S11>/CanRx9' */
  boolean_T CanRx9_o19;                /* '<S11>/CanRx9' */
  boolean_T CanRx9_o20;                /* '<S11>/CanRx9' */
  boolean_T CanRx9_o21;                /* '<S11>/CanRx9' */
  boolean_T LV_Warning;                /* '<S35>/Relational Operator' */
  boolean_T APPS_Implausibility;       /* '<S39>/Logical Operator' */
  boolean_T APPS_Implausibility_m;     /* '<S40>/Logical Operator' */
  boolean_T TS_Enable;                 /* '<S54>/TS Enable' */
  boolean_T Ignition;                  /* '<S23>/Inverter_reset' */
  boolean_T Operating_State;           /* '<S17>/Operation_Mode' */
  boolean_T DataTypeConversion11;      /* '<S1>/Data Type Conversion11' */
  boolean_T DataTypeConversion29;      /* '<S1>/Data Type Conversion29' */
  boolean_T DataTypeConversion30;      /* '<S1>/Data Type Conversion30' */
  boolean_T DataTypeConversion31;      /* '<S1>/Data Type Conversion31' */
  boolean_T DataTypeConversion32;      /* '<S1>/Data Type Conversion32' */
  boolean_T DataTypeConversion24;      /* '<S1>/Data Type Conversion24' */
  boolean_T DataTypeConversion23;      /* '<S1>/Data Type Conversion23' */
  boolean_T DataTypeConversion13;      /* '<S1>/Data Type Conversion13' */
  boolean_T DataTypeConversion15;      /* '<S1>/Data Type Conversion15' */
  boolean_T DataTypeConversion16;      /* '<S1>/Data Type Conversion16' */
  boolean_T DataTypeConversion17;      /* '<S1>/Data Type Conversion17' */
  boolean_T DataTypeConversion18;      /* '<S1>/Data Type Conversion18' */
  boolean_T DataTypeConversion21_f;    /* '<S1>/Data Type Conversion21' */
  boolean_T DataTypeConversion22_p;    /* '<S1>/Data Type Conversion22' */
  boolean_T DataTypeConversion33;      /* '<S1>/Data Type Conversion33' */
  boolean_T DataTypeConversion34;      /* '<S1>/Data Type Conversion34' */
  boolean_T DataTypeConversion37;      /* '<S1>/Data Type Conversion37' */
} B_TBRe_Mod_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  uint16_T temporalCounter_i1;         /* '<S17>/Operation_Mode' */
  boolean_T TappedDelay_X[10];         /* '<S39>/Tapped Delay' */
  boolean_T prv_APPS_BP1_DSTATE;       /* '<S38>/prv_APPS_BP1' */
  boolean_T Debouncing2_X[5];          /* '<S33>/Debouncing2' */
  boolean_T TappedDelay_X_m[10];       /* '<S40>/Tapped Delay' */
  uint8_T is_active_c12_TBRe_Mod;      /* '<S54>/TS Enable' */
  uint8_T is_c12_TBRe_Mod;             /* '<S54>/TS Enable' */
  uint8_T temporalCounter_i1_o;        /* '<S54>/TS Enable' */
  uint8_T is_active_c2_TBRe_Mod;       /* '<S54>/Operaton_Mode' */
  uint8_T is_c2_TBRe_Mod;              /* '<S54>/Operaton_Mode' */
  uint8_T temporalCounter_i1_e;        /* '<S54>/Operaton_Mode' */
  uint8_T is_active_c8_TBRe_Mod;       /* '<S23>/Inverter_reset' */
  uint8_T is_c8_TBRe_Mod;              /* '<S23>/Inverter_reset' */
  uint8_T temporalCounter_i1_k;        /* '<S23>/Inverter_reset' */
  uint8_T is_active_c4_TBRe_Mod;       /* '<S22>/Wake_Up' */
  uint8_T is_c4_TBRe_Mod;              /* '<S22>/Wake_Up' */
  uint8_T temporalCounter_i1_n;        /* '<S22>/Wake_Up' */
  uint8_T is_active_c3_TBRe_Mod;       /* '<S22>/InitLight' */
  uint8_T is_c3_TBRe_Mod;              /* '<S22>/InitLight' */
  uint8_T temporalCounter_i1_f;        /* '<S22>/InitLight' */
  uint8_T is_active_c7_TBRe_Mod;       /* '<S22>/Flashy1' */
  uint8_T is_c7_TBRe_Mod;              /* '<S22>/Flashy1' */
  uint8_T temporalCounter_i1_fp;       /* '<S22>/Flashy1' */
  uint8_T is_active_c5_TBRe_Mod;       /* '<S22>/Flashy' */
  uint8_T is_c5_TBRe_Mod;              /* '<S22>/Flashy' */
  uint8_T temporalCounter_i1_k0;       /* '<S22>/Flashy' */
  uint8_T is_active_c6_TBRe_Mod;       /* '<S17>/Operation_Mode' */
  uint8_T is_c6_TBRe_Mod;              /* '<S17>/Operation_Mode' */
  boolean_T ThrottleBoolHysteresis_Mode;/* '<S37>/Throttle Bool Hysteresis' */
  boolean_T BrakeBoolHysteresis_Mode;  /* '<S37>/Brake Bool Hysteresis' */
  boolean_T btnPreCharge_prev;         /* '<S54>/TS Enable' */
  boolean_T btnPreCharge_start;        /* '<S54>/TS Enable' */
  boolean_T btnRTD_prev;               /* '<S54>/Operaton_Mode' */
  boolean_T btnRTD_start;              /* '<S54>/Operaton_Mode' */
  boolean_T Ignition_Switch_prev;      /* '<S23>/Inverter_reset' */
  boolean_T Ignition_Switch_start;     /* '<S23>/Inverter_reset' */
} DW_TBRe_Mod_T;

/* Invariant block signals (auto storage) */
typedef struct {
  const uint8_T DataTypeConversion27;  /* '<S1>/Data Type Conversion27' */
  const uint8_T DataTypeConversion26;  /* '<S1>/Data Type Conversion26' */
} ConstB_TBRe_Mod_T;

/* Constant parameters (auto storage) */
typedef struct {
  /* Computed Parameter: Throttle_Torque_Map__240Nm_tabl
   * Referenced by: '<S53>/Throttle_Torque_Map_%_240Nm'
   */
  int16_T Throttle_Torque_Map__240Nm_tabl[3];

  /* Computed Parameter: Throttle_Torque_Map__240Nm_bp01
   * Referenced by: '<S53>/Throttle_Torque_Map_%_240Nm'
   */
  uint8_T Throttle_Torque_Map__240Nm_bp01[3];
} ConstP_TBRe_Mod_T;

/* Backward compatible GRT Identifiers */
#define rtB                            TBRe_Mod_B
#define BlockIO                        B_TBRe_Mod_T
#define rtDWork                        TBRe_Mod_DW
#define D_Work                         DW_TBRe_Mod_T
#define tConstBlockIOType              ConstB_TBRe_Mod_T
#define rtC                            TBRe_Mod_ConstB
#define ConstParam                     ConstP_TBRe_Mod_T
#define rtcP                           TBRe_Mod_ConstP

/* Real-time Model Data Structure */
struct tag_RTM_TBRe_Mod_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;
  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  void *dwork;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    time_T stepSize2;
    struct {
      uint16_T TID[3];
    } TaskCounters;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[3];
    time_T offsetTimesArray[3];
    int_T sampleTimeTaskIDArray[3];
    int_T sampleHitArray[3];
    int_T perTaskSampleHitsArray[9];
    time_T tArray[3];
  } Timing;
};

/* Block signals (auto storage) */
extern B_TBRe_Mod_T TBRe_Mod_B;

/* Block states (auto storage) */
extern DW_TBRe_Mod_T TBRe_Mod_DW;
extern const ConstB_TBRe_Mod_T TBRe_Mod_ConstB;/* constant block i/o */

/* Constant parameters (auto storage) */
extern const ConstP_TBRe_Mod_T TBRe_Mod_ConstP;

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern _SAVEDRAM_ real_T SOC_Calc_Data[8];/* Variable: SOC_Calc_Data
                                           * Referenced by: '<S35>/SOC_Calc'
                                           */
extern _SAVEDRAM_ real_T Voltage_Act_Data[2];/* Variable: Voltage_Act_Data
                                              * Referenced by: '<S35>/Voltage_Act'
                                              */
extern _SAVEDRAM_ uint16_T SOC_Calc_Breakpoint[8];/* Variable: SOC_Calc_Breakpoint
                                                   * Referenced by: '<S35>/SOC_Calc'
                                                   */
extern _SAVEDRAM_ uint16_T Voltage_Act_Breakpoint[2];/* Variable: Voltage_Act_Breakpoint
                                                      * Referenced by: '<S35>/Voltage_Act'
                                                      */

/*====================*
 * External functions *
 *====================*/
extern TBRe_Mod_rtModel *TBRe_Mod(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_TBRe_Mod_T *const TBRe_Mod_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TBRe_Mod'
 * '<S1>'   : 'TBRe_Mod/DiagnosticsCAN'
 * '<S2>'   : 'TBRe_Mod/MainTask'
 * '<S3>'   : 'TBRe_Mod/MainTask/Comms_And_Data_Acquisition_Layer'
 * '<S4>'   : 'TBRe_Mod/MainTask/Comms_And_Data_Output_Layer'
 * '<S5>'   : 'TBRe_Mod/MainTask/Post_Processing_Layer'
 * '<S6>'   : 'TBRe_Mod/MainTask/Pre_Processing_Layer'
 * '<S7>'   : 'TBRe_Mod/MainTask/Vehicle_Functionality_Layer'
 * '<S8>'   : 'TBRe_Mod/MainTask/Comms_And_Data_Acquisition_Layer/BMS_CAN'
 * '<S9>'   : 'TBRe_Mod/MainTask/Comms_And_Data_Acquisition_Layer/Hardwired_Inputs_2019'
 * '<S10>'  : 'TBRe_Mod/MainTask/Comms_And_Data_Acquisition_Layer/MCU_CAN'
 * '<S11>'  : 'TBRe_Mod/MainTask/Comms_And_Data_Acquisition_Layer/SENSOR_CAN'
 * '<S12>'  : 'TBRe_Mod/MainTask/Comms_And_Data_Acquisition_Layer/Hardwired_Inputs_2019/AIRs'
 * '<S13>'  : 'TBRe_Mod/MainTask/Comms_And_Data_Acquisition_Layer/Hardwired_Inputs_2019/BMS'
 * '<S14>'  : 'TBRe_Mod/MainTask/Comms_And_Data_Acquisition_Layer/Hardwired_Inputs_2019/Buttons'
 * '<S15>'  : 'TBRe_Mod/MainTask/Comms_And_Data_Acquisition_Layer/Hardwired_Inputs_2019/IMD'
 * '<S16>'  : 'TBRe_Mod/MainTask/Comms_And_Data_Acquisition_Layer/Hardwired_Inputs_2019/Pedal_Box'
 * '<S17>'  : 'TBRe_Mod/MainTask/Comms_And_Data_Output_Layer/Hardwired_Ouputs'
 * '<S18>'  : 'TBRe_Mod/MainTask/Comms_And_Data_Output_Layer/LEDs'
 * '<S19>'  : 'TBRe_Mod/MainTask/Comms_And_Data_Output_Layer/MCU_CAN'
 * '<S20>'  : 'TBRe_Mod/MainTask/Comms_And_Data_Output_Layer/Hardwired_Ouputs/Compare To Constant'
 * '<S21>'  : 'TBRe_Mod/MainTask/Comms_And_Data_Output_Layer/Hardwired_Ouputs/Operation_Mode'
 * '<S22>'  : 'TBRe_Mod/MainTask/Post_Processing_Layer/Dash_LEDs'
 * '<S23>'  : 'TBRe_Mod/MainTask/Post_Processing_Layer/Hardwired_Peripherals'
 * '<S24>'  : 'TBRe_Mod/MainTask/Post_Processing_Layer/Dash_LEDs/Compare To Constant'
 * '<S25>'  : 'TBRe_Mod/MainTask/Post_Processing_Layer/Dash_LEDs/Compare To Constant1'
 * '<S26>'  : 'TBRe_Mod/MainTask/Post_Processing_Layer/Dash_LEDs/Flashy'
 * '<S27>'  : 'TBRe_Mod/MainTask/Post_Processing_Layer/Dash_LEDs/Flashy1'
 * '<S28>'  : 'TBRe_Mod/MainTask/Post_Processing_Layer/Dash_LEDs/InitLight'
 * '<S29>'  : 'TBRe_Mod/MainTask/Post_Processing_Layer/Dash_LEDs/Wake_Up'
 * '<S30>'  : 'TBRe_Mod/MainTask/Post_Processing_Layer/Hardwired_Peripherals/Compare To Constant'
 * '<S31>'  : 'TBRe_Mod/MainTask/Post_Processing_Layer/Hardwired_Peripherals/Inverter_reset'
 * '<S32>'  : 'TBRe_Mod/MainTask/Post_Processing_Layer/Hardwired_Peripherals/RTD_Mode1'
 * '<S33>'  : 'TBRe_Mod/MainTask/Pre_Processing_Layer/Button_Debouncing'
 * '<S34>'  : 'TBRe_Mod/MainTask/Pre_Processing_Layer/IMD Scaling '
 * '<S35>'  : 'TBRe_Mod/MainTask/Pre_Processing_Layer/LV_Battery'
 * '<S36>'  : 'TBRe_Mod/MainTask/Pre_Processing_Layer/MCU_Temps'
 * '<S37>'  : 'TBRe_Mod/MainTask/Pre_Processing_Layer/Pedal_Box'
 * '<S38>'  : 'TBRe_Mod/MainTask/Pre_Processing_Layer/Pedal_Box/APPS and BP Plausibility'
 * '<S39>'  : 'TBRe_Mod/MainTask/Pre_Processing_Layer/Pedal_Box/APPS_Implausibility_Check'
 * '<S40>'  : 'TBRe_Mod/MainTask/Pre_Processing_Layer/Pedal_Box/BPPS_Implausibility_Check'
 * '<S41>'  : 'TBRe_Mod/MainTask/Pre_Processing_Layer/Pedal_Box/Brake Out Of Range Check'
 * '<S42>'  : 'TBRe_Mod/MainTask/Pre_Processing_Layer/Pedal_Box/Sensor Plausibility'
 * '<S43>'  : 'TBRe_Mod/MainTask/Pre_Processing_Layer/Pedal_Box/Voltage_to_% Conversion'
 * '<S44>'  : 'TBRe_Mod/MainTask/Pre_Processing_Layer/Pedal_Box/Brake Out Of Range Check/Compare To Constant'
 * '<S45>'  : 'TBRe_Mod/MainTask/Pre_Processing_Layer/Pedal_Box/Brake Out Of Range Check/Compare To Constant1'
 * '<S46>'  : 'TBRe_Mod/MainTask/Pre_Processing_Layer/Pedal_Box/Brake Out Of Range Check/Compare To Constant2'
 * '<S47>'  : 'TBRe_Mod/MainTask/Pre_Processing_Layer/Pedal_Box/Brake Out Of Range Check/Compare To Constant3'
 * '<S48>'  : 'TBRe_Mod/MainTask/Pre_Processing_Layer/Pedal_Box/Sensor Plausibility/Sensor_Diag'
 * '<S49>'  : 'TBRe_Mod/MainTask/Pre_Processing_Layer/Pedal_Box/Voltage_to_% Conversion/Calibrate'
 * '<S50>'  : 'TBRe_Mod/MainTask/Pre_Processing_Layer/Pedal_Box/Voltage_to_% Conversion/Calibrate1'
 * '<S51>'  : 'TBRe_Mod/MainTask/Pre_Processing_Layer/Pedal_Box/Voltage_to_% Conversion/Calibrate2'
 * '<S52>'  : 'TBRe_Mod/MainTask/Pre_Processing_Layer/Pedal_Box/Voltage_to_% Conversion/Calibrate3'
 * '<S53>'  : 'TBRe_Mod/MainTask/Vehicle_Functionality_Layer/Drive_Function'
 * '<S54>'  : 'TBRe_Mod/MainTask/Vehicle_Functionality_Layer/Vehicle_Operation_Mode'
 * '<S55>'  : 'TBRe_Mod/MainTask/Vehicle_Functionality_Layer/Drive_Function/Coast Regen'
 * '<S56>'  : 'TBRe_Mod/MainTask/Vehicle_Functionality_Layer/Drive_Function/OverPowerProtection'
 * '<S57>'  : 'TBRe_Mod/MainTask/Vehicle_Functionality_Layer/Drive_Function/R2D'
 * '<S58>'  : 'TBRe_Mod/MainTask/Vehicle_Functionality_Layer/Drive_Function/Regen_Braking1'
 * '<S59>'  : 'TBRe_Mod/MainTask/Vehicle_Functionality_Layer/Drive_Function/Regen_Braking_Old'
 * '<S60>'  : 'TBRe_Mod/MainTask/Vehicle_Functionality_Layer/Drive_Function/Saturation Dynamic'
 * '<S61>'  : 'TBRe_Mod/MainTask/Vehicle_Functionality_Layer/Drive_Function/ThrottleAddSubTorque'
 * '<S62>'  : 'TBRe_Mod/MainTask/Vehicle_Functionality_Layer/Drive_Function/Throttle_withBoost'
 * '<S63>'  : 'TBRe_Mod/MainTask/Vehicle_Functionality_Layer/Drive_Function/Traction Control'
 * '<S64>'  : 'TBRe_Mod/MainTask/Vehicle_Functionality_Layer/Drive_Function/Regen_Braking1/Torque_Mode'
 * '<S65>'  : 'TBRe_Mod/MainTask/Vehicle_Functionality_Layer/Drive_Function/Regen_Braking_Old/Torque_Mode'
 * '<S66>'  : 'TBRe_Mod/MainTask/Vehicle_Functionality_Layer/Vehicle_Operation_Mode/Compare To Constant2'
 * '<S67>'  : 'TBRe_Mod/MainTask/Vehicle_Functionality_Layer/Vehicle_Operation_Mode/Operaton_Mode'
 * '<S68>'  : 'TBRe_Mod/MainTask/Vehicle_Functionality_Layer/Vehicle_Operation_Mode/TS Enable'
 * '<S69>'  : 'TBRe_Mod/MainTask/Vehicle_Functionality_Layer/Vehicle_Operation_Mode/TSS (Precharge Finisher)'
 * '<S70>'  : 'TBRe_Mod/MainTask/Vehicle_Functionality_Layer/Vehicle_Operation_Mode/TSS (Precharge Finisher)/Accy_Has_Voltage'
 * '<S71>'  : 'TBRe_Mod/MainTask/Vehicle_Functionality_Layer/Vehicle_Operation_Mode/TSS (Precharge Finisher)/In_threshold'
 * '<S72>'  : 'TBRe_Mod/MainTask/Vehicle_Functionality_Layer/Vehicle_Operation_Mode/TSS (Precharge Finisher)/MCU_Has_Voltage'
 */
#endif                                 /* RTW_HEADER_TBRe_Mod_h_ */

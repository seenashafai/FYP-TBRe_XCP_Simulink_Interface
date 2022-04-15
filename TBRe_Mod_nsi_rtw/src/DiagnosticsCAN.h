/*
 * Code generation for system system '<Root>/DiagnosticsCAN'
 * For more details, see corresponding source file DiagnosticsCAN.c
 *
 */

#ifndef RTW_HEADER_DiagnosticsCAN_h_
#define RTW_HEADER_DiagnosticsCAN_h_
#ifndef TBRe_Mod_COMMON_INCLUDES_
# define TBRe_Mod_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif                                 /* TBRe_Mod_COMMON_INCLUDES_ */

#include "TBRe_Mod_types.h"

/* Shared type includes */
#include "multiword_types.h"

extern void DiagnosticsCAN_Init(void);
extern void DiagnosticsCAN_Start(void);
extern void DiagnosticsCAN(void);

#endif                                 /* RTW_HEADER_DiagnosticsCAN_h_ */

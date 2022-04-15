/*
 * Code generation for system system '<Root>/MainTask'
 * For more details, see corresponding source file MainTask.c
 *
 */

#ifndef RTW_HEADER_MainTask_h_
#define RTW_HEADER_MainTask_h_
#include <math.h>
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
#include "rt_nonfinite.h"

extern void MainTask_Init(void);
extern void MainTask_Start(void);
extern void MainTask_Update(void);
extern void MainTask(void);

#endif                                 /* RTW_HEADER_MainTask_h_ */

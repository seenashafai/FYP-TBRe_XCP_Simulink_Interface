#ifndef COMMON_H
#define COMMON_H


#include "mpc5567.h"
#include "typedefs.h"

#define PARAMETER_ERROR	((S08)-1)
#define INVALID_IDENT   ((S08)-2)
#define NO_ERROR		((S08)0)


#ifdef DEBUG_LIB
#define ASSERT_LIB(condition)			if(!condition) while(1);
#else
#define ASSERT_LIB(error_condition)		{}
#endif


#endif

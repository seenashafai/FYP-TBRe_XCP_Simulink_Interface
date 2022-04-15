#D:\TOOLS\MUXLINK\R2011b\MUXLINK\work\DA_sans_REF_nsi_rtw>make --debug=aij -f DA_sans_ref.mk >log.txt

# Author: GBA
# Date:   01/09/2011
#
# File:   TBRe_Mod.mk
#
#
#
# Abstract:
#
#    Template makefile for building real-time code for the softune using MATLAB/Simulink
#    the Real-Time Workshop (RTW) and the softune compiler
#
#    The following defines can be used to modify the behaviour of the build process:
#
#         USER_OPTS      - User specific options
#         OPT_OPTS       - Optimization option. To enable debugging und create
#                          a symbol list specify as OPT_OPTS=DEBUG SYMBOLS.
#         USER_OBJS      - Additional user objects, such as files needed by
#                          S-functions.
#         USER_PATH      - The directory path to the source (.c) files which
#                          are used to create any .obj files specified in
#                          USER_OBJS. Multiple paths must be seperated
#                          with a semicolon. For example: USER_PATH="path1;path2"
#         USER_INCLUDES  - Additional include paths
#                          (i.e. USER_INCLUDES="-Iwherever1 -Iwherever1")
#
#         USER_DEFINES	 - Additional defines (macros).
#
#------------------------ Macros read by make_rtw -----------------------------

MAKE            = "%MUXLABMAKEPATH%"

HOST            = PC
BUILD           = yes
SYS_TARGET_FILE = nsi_mpc.tlc
BUILD_SUCCESS   = Created
#
# Edit this to change what make does when invoked without specifying a target.
#
#DEFAULT_TARGET = EXE

#---------------------- Tokens expanded by make_rtw ---------------------------
#
# The following tokens, when wrapped with "|>" and "|<" are expanded by the
# Real-Time Workshop build procedure.
#
#  MODEL_NAME        		- Name of the SIMULINK block diagram
#  MODEL_MODULES_OBJ        - Object file name for any additional generated source  modules
#  MAKEFILE_NAME     		- Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT      	 	- Path to were MATLAB is installed.
#  S_FUNCTIONS_OBJ          - List of S-functions .obj sources
#  SOLVER_OBJ        		- Solver object file name
#  NUMST             		- Number of sample times
#  NCSTATES          		- Number of continuous states
#  BUILDARGS         		- Options passed in at the command line.
#  MULTITASKING     		- yes (1) or no (0): Is solver mode multitasking
#  EXT_MODE		   	- yes (1) or no (0): Include communication modules for signal monitoring
#                      			and on-the-fly download of model parameters
#  BAUDRATE		  	- data transmission rate of the serial interface (external mode only)
#  PORT		   		- communication port (COMx, external mode only)
#  TIMING		  	 	- yes (1) or no (0)
#  MEM_MOD		   	- memory model (compact, large or huge)

MODEL        =  TBRe_Mod
BOARDTYPE    =  MUXlab4
MEM          =  FLASH
PROFILER     =  1
LIBVERSION   =  2.0.3
MATLAB_ROOT  =  C:\Program Files\MATLAB\R2017b
MODULES_OBJ  =  CAN_INIT.obj CRCJ1850.obj DiagnosticsCAN.obj FlashData.obj LIN_INIT.obj MainTask.obj TBRe_Mod_data.obj 
MAKEFILE     =  TBRe_Mod.mk
MULTITASKING =  0
S_FUNCTIONS  =  
S_FUNCTIONS_LIB = 
SOLVER       =  
SOLVER_OBJ   =  
BUILDARGS    =   ISPROTECTINGMODEL=NOTPROTECTING ASAP2_INTERFACE="NONE" ENABLEUSB=1

MODELREFS    =  
SHARED_SRC           = 
SHARED_SRC_DIR       = 
SHARED_BIN_DIR       = 
SHARED_LIB           = 
MODELLIB     =  TBRe_Modlib.lib
MODELREF_LINK_LIBS = 
MODELREF_LINK_RSPFILE = TBRe_Mod_ref.rsp
MODELREF_INC_PATH  = 
RELATIVE_PATH_TO_ANCHOR = ..
MODELREF_TARGET_TYPE = NONE

MUXLINK      =  $(MUXLABTOOLBOXPATH)
ifeq ($(BOARDTYPE),MUXlab6)
	COMP_DIR  =  $(MUXLAB6GCCPATH)/Cross_Tools/powerpc-eabivle-4_9/bin/powerpc-eabivle-
else 
	COMP_DIR  =  $(MUXLABGCCPATH)
endif
WORK_DIR     =  $(MUXLABWORKPATH)
SP           =
SP          +=

#
# Source tree roots
#
LNK_DIR		= ../../prjgcc/$(BOARDTYPE)/lcf
LIB_DIR		= ../../prjgcc/$(BOARDTYPE)/lib
INC_DIR		= ../../prjgcc/$(BOARDTYPE)/inc

PRJ_DIR		= .
INC_SHARED  = ../slprj/nsi_mpc/_sharedutils

BIN_DIR		= $(PRJ_DIR)/bin
OBJ_DIR		= $(PRJ_DIR)/obj
SRCDIR_ROOT	= src
SRCDIR_APP	= $(SRCDIR_ROOT)/app
SRCDIR_DRV	= $(SRCDIR_ROOT)/drv
SRCDIR_OS	= $(SRCDIR_ROOT)/os
#CUSTOM_CODE = ../../Custome_code
COMSPEC 	= C:/WINDOWS/system32/cmd.exe

CC			= "$(COMP_DIR)gcc"
CP			= "$(COMP_DIR)objcopy"
AS			= "$(COMP_DIR)gcc" -x assembler-with-cpp
AR			= "$(COMP_DIR)ar" rs
BIN			= $(CP) -O srec 

#
# Common make targets
#
#Default_Make_Target: $(DEFAULT_TARGET)

ifeq ($(MODELREF_TARGET_TYPE),NONE)
PRODUCT = EXE
else
PRODUCT = $(MODELLIB)
endif

all: $(PRODUCT)

clean: clean_ALL

#
# Source files
#
SRC_ROOT = $(wildcard $(SRCDIR_ROOT)/*.c) $(wildcard $(SRCDIR_ROOT)/*.s)
SRC_APP = $(wildcard $(SRCDIR_APP)/*.c)
SRC_SHARED = $(wildcard $(SHARED_SRC_DIR)/*.c)
SOURCES :=  $(SRC_ROOT) \
			$(SRC_APP) \
			$(SRC_SHARED)

vpath
vpath %.a  $(LIB_DIR)

vpath %.o  $(strip  "$(OBJ_DIR)":\
					"$(LIB_DIR)")

vpath %.c  $(strip  "$(SRCDIR_ROOT)":\
					"$(MATLAB_ROOT)/rtw/c/libsrc":\
					"$(MATLAB_ROOT)/toolbox/comm/commsfun":\
					"$(MATLAB_ROOT)/toolbox/dspblks/dspmex":\
					"$(MATLAB_ROOT)/toolbox/fixpoint":\
					"$(MATLAB_ROOT)/toolbox/fuzzy/fuzzy/src":\
					"$(SHARED_SRC_DIR)":\
					"$(SRCDIR_APP)":\
					"$(SRCDIR_OS)":\
					"$(SRCDIR_DRV)")
#\"$(CUSTOM_CODE)")

vpath %.s  $(strip  "$(SRCDIR_ROOT)")

vpath %.h  $(strip  "$(SRCDIR_ROOT)":\
					"$(MATLAB_ROOT)/extern/include":\
					"$(MATLAB_ROOT)/simulink/include":\
					"$(MATLAB_ROOT)/rtw/c/src":\
					"$(MATLAB_ROOT)/rtw/c/libsrc":\
                    "$(INC_DIR)":\
                    "$(SRCDIR_APP)":\
					"$(SRCDIR_OS)":\
					"$(SRCDIR_DRV)")
#					"$(MATLAB_ROOT)/toolbox/fuzzy/fuzzy/src"):\

# User supplied includes
ifdef USER_INCLUDES
	EXTRA_INCLUDES = $(USER_INCLUDES)
else
	EXTRA_INCLUDES = $(MATLAB_ROOT)/toolbox/dspblks/include
endif

ifeq ($(MEM),FLASH)
	DADEFS = -Wa,--defsym,FLASH=1 -Wa,--defsym,RAM=0
else 
	DADEFS = -Wa,--defsym,FLASH=0 -Wa,--defsym,RAM=1
endif
ADEFS = $(DADEFS)

ifeq ($(BOARDTYPE),MUXlab2)
	BOARD_DEF = -DMUXLAB2
else 
	BOARD_DEF = -DMUXLAB4
endif

ifeq ($(PROFILER),1)
	SUFFIX = p
else 
	SUFFIX =
endif

#
# Output directories and files
#

OUTFILE_EXE 	:= $(BIN_DIR)/$(MODEL)_$(MEM).elf
OUTFILE_S19 	:= $(BIN_DIR)/$(MODEL)_$(MEM).mot


#
# Clean
#
clean_ALL:
	$(COMSPEC) /c 'if EXIST "$(OUTFILE_EXE)" del "$(OUTFILE_EXE)"'
	$(COMSPEC) /c 'del "$(OBJ_DIR)/*"'

#
# Build
#
EXE: $(OUTFILE_S19)
	@echo ### $(BUILD_SUCCESS) : $(OUTFILE_EXE)


#
# Output directory
#
$(OBJ_DIR):
	@$(COMSPEC) /c 'if NOT EXIST "$@" mkdir "$@"'


#
# Object Code
#
OBJS := \
		$(addprefix $(OBJ_DIR)/,$(addsuffix .o,$(basename $(notdir $(SOURCES)))))

ADD_INCLUDES = \
	-I"C:\PROGRA~1\MUXlink\work" \
	-I"$(MATLAB_ROOT)\simulink\include\sf_runtime" \
	-I"C:\PROGRA~1\MUXlink\work\TBRe_Mod_nsi_rtw" \

INCLUDES = -I$(RELATIVE_PATH_TO_ANCHOR) $(ADD_INCLUDES) -I$(INC_SHARED) $(MODELREF_INC_PATH)
	
ADD_LIBS =
LNK_LIBS =



ifeq ($(BOARDTYPE),MUXlab10)
	CPULIB = $(LNK_LIBS) -l$(BOARDTYPE)$(SUFFIX) -lm -lgcc -lc -lnosys
else
	CPULIB = $(LNK_LIBS) -l$(BOARDTYPE)$(SUFFIX) -lm -lgcc -lc -lgcc
endif
LDSCRIPT = "$(LNK_DIR)/$(BOARDTYPE)_$(MEM).ld"

# Define optimisation level here
MCU  = 8540
OPT = -O2 -DUSE_RTMODEL -DRT -DMODEL=$(MODEL) $(BOARD_DEF) -DMT=$(MULTITASKING)

MCFLAGS = -mcpu=$(MCU) -misel=yes -mspe=yes -mfloat-gprs=yes
# -msoft-float

LIBDIR  = $(patsubst %,-L%,$(LIB_DIR))
INCDIR = -Isrc -Isrc/app -Isrc/drv -Isrc/os $(INCLUDES) -I"$(MATLAB_ROOT)/extern/include" -I"$(MATLAB_ROOT)/simulink/include" -I"$(MATLAB_ROOT)/rtw/c/src"

ifeq ($(BOARDTYPE),MUXlab6)
	EWL_DIR = $(MUXLAB6GCCPATH)/e200_ewl2
	LIB_C_NAME = ewl_c.specs
	OPT_TEST = -O0
	CPFLAGS = -Dregister_architecture=e200 -Dregister_vendor=Freescale -Dregister_chip=MPC5748G -DMPC574xG -DSTART_FROM_FLASH -DTURN_ON_CPU0 -I"$(EWL_DIR)/EWL_C/include" -I"$(EWL_DIR)/EWL_C/include/pa" $(OPT) -g3 -Wall -c -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -mcpu=e200z4 -specs=$(LIB_C_NAME) -mbig -mvle -mregnames -mhard-float --sysroot="$(EWL_DIR)"
	ASFLAGS = -I"$(EWL_DIR)/EWL_C/include" -I"$(EWL_DIR)/EWL_C/include/pa" -x assembler-with-cpp -Dregister_architecture=e200 -Dregister_vendor=Freescale -Dregister_chip=MPC5748G -DMPC574xG -DSTART_FROM_FLASH -DDISABLE_SWT0 -DI_CACHE -DD_CACHE -DHW_INIT -O0 -g3 -mcpu=e200z4 -specs=$(LIB_C_NAME) -mbig -mvle -mregnames --sysroot="$(EWL_DIR)"
	LDFLAGS =  -Wl,-T$(LDSCRIPT) -Wl,-Map,$(BIN_DIR)/$(MODEL)_$(MEM).map -Xlinker --gc-sections -mcpu=e200z4 -specs=$(LIB_C_NAME) -mhard-float -L$(LIB_DIR) --sysroot="$(EWL_DIR)"
else 
	CPFLAGS = $(MCFLAGS) $(OPT) -gdwarf-2 -mpowerpc -mno-eabi -mregnames -Wa,-mregnames -Wa,-mbooke32 -Wa,-me500 -mspe=yes -mno-string -msdata=none
	ASFLAGS = $(CPFLAGS) $(ADEFS) -Wa,-I$(INC_DIR)
	LDFLAGS = $(MCFLAGS) -Wl,-g -Wl,-T$(LDSCRIPT) -Wl,-Map=$(BIN_DIR)/$(MODEL)_$(MEM).map,--cref,--no-warn-mismatch $(LIBDIR) -lm $(MODELREF_LINK_LIBS)
endif

BUILD   = $(CC) -c $(CPFLAGS) $(INCDIR) "$<" -o $@
BUILDAS = $(CC) -c $(ASFLAGS) $(INCDIR) "$<" -o $@
LINK    = $(CC) $(LDFLAGS) $(OBJS) $(MODELREF_LINK_LIBS) $(CPULIB) -o $@

#
# Output file
#
$(OUTFILE_S19): $(OUTFILE_EXE)
	$(BIN) $< $@

$(OUTFILE_EXE): $(ADD_LIBS) $(OBJS)
	$(LINK)

ifeq ($(SHARED_SRC_DIR),)
else
$(OBJ_DIR)/%.o : $(SHARED_SRC_DIR)/%.c
	$(BUILD)

endif

$(OBJ_DIR)/%.o : $(SRCDIR_APP)/%.c
	$(BUILD)

$(OBJ_DIR)/%.o : $(SRCDIR_ROOT)/%.c
	$(BUILD)

$(OBJ_DIR)/%.o : $(SRCDIR_ROOT)/%.s
	$(BUILDAS)

#------------------------------- Model reference Rules -------------------------------------
ifeq ($(MODELREF_TARGET_TYPE),NONE)
else
$(MODELLIB) : $(OBJS)
	@if exist $(MODELLIB) @del $(MODELLIB)
	$(AR) $(MODELLIB) $(OBJS)
	@echo ### Created $(MODELLIB)

endif

#------------------------------- Expand Libraries Rules -------------------------------------

MYEXPAND_DIR_NAME := $(MATLAB_ROOT)\rtw\c\src
MYEXPAND_DIR_NAME := $(subst $(SP),\ ,$(MYEXPAND_DIR_NAME))
$(LIB_DIR)/%.o : $(MYEXPAND_DIR_NAME)/%.c
	$(BUILD)

$(LIB_DIR)/%.o : $(MYEXPAND_DIR_NAME)/%.cpp
	$(BUILD)

MYEXPAND_DIR_NAME := $(MATLAB_ROOT)\simulink\src
MYEXPAND_DIR_NAME := $(subst $(SP),\ ,$(MYEXPAND_DIR_NAME))
$(LIB_DIR)/%.o : $(MYEXPAND_DIR_NAME)/%.c
	$(BUILD)

$(LIB_DIR)/%.o : $(MYEXPAND_DIR_NAME)/%.cpp
	$(BUILD)



#
# PHONY target declarations
#    (Informs make that these targets do not produce output)
#
.PHONY: clean clean_EXE

COMPILE_ALL_LIB = 1
ifdef COMPILE_ALL_LIB

#------------------------------- Expand Libraries -------------------------------------


#------------------------------- Precomp Libraries -------------------------------------



endif

# Only use implicit rules created in this file.
.SUFFIXES:

#
# End Makefile
#

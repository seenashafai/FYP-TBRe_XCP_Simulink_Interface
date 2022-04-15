#***************************************************************************/
#* FILE NAME: __start.s                     COPYRIGHT (c) Freescale 2004   */
#*                                                All Rights Reserved      */
#* DESCRIPTION:                                                            */
#*                                                                         */
#* __start:  Main entry point for the MPC5500 configuration program.       */
#* This file allows for user-level initialization before main().           */
#*            It will call main().                                         */
#*=========================================================================*/
#*                                                                         */
#* REV      AUTHOR       DATE       DESCRIPTION OF CHANGE                  */
#* ---   -----------   ----------   ---------------------                  */
#* 0.1   G. Jackson    14/Apr/04     Initial version                       */
#* 0.2   G. Jackson    13/May/04    Moved runtime variables to             */
#*                                   mpc5500_usrdefs.inc. Added FLSH_RUN   */
#* 0.3   G. Jackson    22/Jul/04    bl cfg_CACHE moved before bl cfg_FMPLL */
#* 0.4   G. Jackson    23/Jul/04    Added write to BIUAPR for errata 105   */
#* 0.5   G. Jackson    05/Aug/04    Added cfg_PNTRS for R13 and R2         */
#* 0.6   G. Jackson    18/Aug/04    Added cfg_ROMCPY for .data and .sdata  */
#* 1.0   G. Jackson    12/Oct/04    Green Hills now does not require       */
#*                                    quotation marks around the section   */
#*                                  Added syntax to generate symbols for   */
#*                                    debug.                               */
#* Eberspaecher Electronics (Kp)    Added cfg_BSS for initialization of    */
#*                                  .sbss, .bss and .PPC.EMB.sbss0 section */
#***************************************************************************/

    .include "mpc5500_usrdefs.inc"

#******* Runtime Variables ************
# Runtime variables: (set in mpc5500_usrdefs.inc)
#    FAR_ADDRESS,      0  # Used for a FAR_ADDRESS call
#    FAR_ADDRESS_MAIN, 1  # Used for a FAR_ADDRESS call to main
#    SIM_VER,          0  # Used with the Code Warrior simulator
#    FLSH_RUN          1  # Used as (1) with code in Flash
#                         #      as (0) with code in SRAM

#**************************************************************************/
#                                                                         */
#    external declarations                                                */
#                                                                         */
#**************************************************************************/
    .globl __start

    .extern main             # Defined in main.c
    .extern cfg_mpc5500ccd   # Set up C function mpc5500 modules
                             #     from mpc5500_ccdcfg.c
    .extern cfg_CACHE        # Defined in mpc5500_asmcfg.s
    .extern cfg_FMPLL        # Defined in mpc5500_asmcfg.s
    .extern cfg_SRAM         # Defined in mpc5500_asmcfg.s
    .extern cfg_FLASH        # Defined in mpc5500_asmcfg.s
    .extern cfg_MMU          # Defined in mpc5500_asmcfg.s
    .extern cfg_STACK        # Defined in mpc5500_asmcfg.s
    .extern cfg_PNTRS        # Defined in mpc5500_asmcfg.s
    .extern cfg_BSS          # Defined in mpc5500_asmcfg.s
    .extern cfg_ROMCPY       # Defined in mpc5500_asmcfg.s


#**************************************************************************/
#                                                                         */
#    section declaration                                                  */
#                                                                         */
#**************************************************************************/

    .section ".init","ax" # The "ax" generates symbols for debug

#***************************************************************************/
#                                                                          */
# __start                                                                  */
#                                                                          */
# PowerPC EABI Runtime Initialization.  Initialize pointers,               */
# initialize data, and call main().                                        */
#                                                                          */
# This function is the very first location executed in a program, or       */
# the first location called by the board-level initialization.             */
# Memory access is not guaranteed to be safe until after the stack         */
#  pointer is set up below.                                                */
#                                                                          */
#***************************************************************************/

__start:

#  Activate the assembly code initialization calls which will now      **
#  take place in the file: mpc5500_asmcfg.c, supported by equates in   **
#  mpc5500_defs.inc. The assembly module calls are made individually   **
#  in this file to maintain a 1 layer link file call. This is so that  **
#  no stack will be needed/used until the stack pointer set up below.  **


#************************************
# Call the individual assembly modules:
	bl cfg_CACHE    # Invalidate and enable unified cache.
                    # The cache is invalidated and enabled before the
                    # FMPLL is sped up to reduce the peak power demand
                    # of the cache start up sequence.
                    
    bl cfg_FMPLL    # Set up the FMPLL functions in  mpc5500_asmcfg.s

    .if FLSH_RUN    # Run if code is in Flash. Do not run if code is in SRAM
    bl cfg_SRAM     # Write to all SRAM locations for ECC functionality.
	.endif

	bl cfg_FLASH    # Reduce Wait States for Internal and External Flash

    bl cfg_MMU      # Set up the TLB tables with the MMU registers.

    

    bl cfg_STACK    # Set up the Stack in the Cache

    bl cfg_PNTRS    # Set up small data pointers.
                    # .sbss --> R13; .sdata2 --> R2

    bl cfg_BSS      # Initialize .sbss and .bss section to 0x0

    .if FLSH_RUN    # Run if code is in Flash. Do not run if code is in SRAM
    bl cfg_ROMCPY   # Copy initialized data from FLASH ROM to SRAM
    .endif

# The stack pointer is set in cfg_STACK

#  Activate the C code initialization calls which will now take
#  place in the file: mpc5500_ccdcfg.c, supported by mpc5500_cfg.h

  .if FAR_ADDRESS  # FAR ADDRESSING IS REQUIRED FOR BAM TO INTERNAL RAM ACCESS
    lis  r6,cfg_mpc5500ccd@ha
    addi r6,r6,cfg_mpc5500ccd@l
    mtlr r6
    blrl
  .else
    bl   cfg_mpc5500ccd             # set up the mpc5500 functions in
  .endif                            #  the file mpc5500_ccdcfg.c

#**************************************
#    Prepare a terminating stack record.
#***

    li   r0, 0xFFFF@l
    stwu r1, -8(r1)   # Decrement stack by 8 bytes, (write word)
    stw  r0, 4(r1)    # Make an illegal return address of 0xFFFFFFFF
    stw  r0, 0(r1)    # Make an illegal back chain address of 0xFFFFFFFF


#**************************************
#    branch to main program
#***

  .if FAR_ADDRESS_MAIN
    lis  r6,main@ha
    addi r6,r6,main@l
    mtlr r6
    blrl
  .else
    bl   main
  .endif

# End of __start

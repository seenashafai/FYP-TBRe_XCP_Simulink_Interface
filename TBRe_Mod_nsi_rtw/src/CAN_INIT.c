#include "typedefs.h"
#include "DRV\canDef.h"
#include "DRV\CAN_HAL.h"
#include "DRV\CCP_HAL.h"
#include "Configurator.h"

/* CAN Bus initialization */
void INIT_CAN()
{
  INIT_J1939_TP();
  CAN_Init(FLEX_CAN_A, BAUDRATE_CAN1 , BUSTYPE_CAN1 );
  CAN_SelectResistor(FLEX_CAN_A, RESISTOR_CAN1 );
  CAN_Init(FLEX_CAN_B, BAUDRATE_CAN2 , BUSTYPE_CAN2 );
  CAN_SelectResistor(FLEX_CAN_B, RESISTOR_CAN2 );

  /* Initializes the CCP task */
  (void)CCP_Init(FLEX_CAN_B, 0x100, CAN_ID_STD, 0x200, CAN_ID_STD);
}

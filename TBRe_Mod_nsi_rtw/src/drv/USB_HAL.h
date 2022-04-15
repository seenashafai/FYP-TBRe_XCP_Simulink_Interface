#ifndef USB_HAL_H_INCLUDED
#define USB_HAL_H_INCLUDED

typedef struct
{
	U32 u32TimeStamp;
	U16 u16Index;
	U32 u32VarValue;
}t_USBTxDebug;

typedef struct
{
    U16   wRxID;
    void *pVar;
    U16   wSize;
    U08  *pTaskID;
}t_USBTabRx;

// table
extern const t_USBTabRx tab_rx_usb[];
// taille de la table
extern const U16 tab_rx_usb_size;

void USB_TxVariable(U16 u16Index, void *pData, U16 u16VarSize);
BOOL USB_ToolPresent(void);

#endif // USB_HAL_H_INCLUDED

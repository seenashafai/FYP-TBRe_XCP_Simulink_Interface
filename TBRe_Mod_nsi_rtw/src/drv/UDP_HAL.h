/*
 * UDP_HAL.h
 *
 *  Created on: 13 janv. 2016
 *      Author: opasutto
 */

#ifndef UDP_HAL_H_
#define UDP_HAL_H_

#define MAX_UDP_DATA_SIZE   1024

typedef struct
{
    void *pcb;
    U08 u08TaskID;
    void *p;
    U16 u16PbuffLen;
}t_UdpRxInfo;

S08 UDP_InitRxPort(U16 u16Port, U32 u32IpAddr, U08 u08TaskID, t_UdpRxInfo *pUdpInfo);
void UDP_ReadData(t_UdpRxInfo *pUdpInfoLib, void *pData, U32 *pDataSize, U32 u32BufferSize);
void UDP_SendData(U16 u16Port, U32 u32IpAddr, void *pData, U32 u32DataSize);


#endif /* UDP_HAL_H_ */

#ifndef FREERTOS_IP_CONFIG_H
#define FREERTOS_IP_CONFIG_H

#define ipconfigNUM_NETWORK_BUFFER_DESCRIPTORS    10
#define ipconfigEVENT_QUEUE_LENGTH                ( ipconfigNUM_NETWORK_BUFFER_DESCRIPTORS + 5 )
#define ipconfigNETWORK_MTU                       1500

#define ipconfigRAND32() 1

#define ipconfigUSE_DNS 1
#define ipconfigUSE_LLMNR 1
#define ipconfigUSE_TCP 0
#define ipconfigREPLY_TO_INCOMING_PINGS 1
#define ipconfigDRIVER_INCLUDED_RX_IP_CHECKSUM 1
#define ipconfigINCLUDE_FULL_INET_ADDR 0

#endif // FREERTOS_IP_CONFIG_H

#ifndef FREERTOS_IP_CONFIG_H
#define FREERTOS_IP_CONFIG_H

#define ipconfigNUM_NETWORK_BUFFER_DESCRIPTORS    10
#define ipconfigEVENT_QUEUE_LENGTH                ( ipconfigNUM_NETWORK_BUFFER_DESCRIPTORS + 5 )
#define ipconfigNETWORK_MTU                       1500

#define ipconfigRAND32() 1

#define ipconfigUSE_DNS 0
#define ipconfigUSE_TCP 0
#define ipconfigREPLY_TO_INCOMING_PINGS 1

#endif // FREERTOS_IP_CONFIG_H

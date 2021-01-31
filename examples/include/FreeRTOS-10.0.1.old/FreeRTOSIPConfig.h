#ifndef FREERTOS_IP_CONFIG_H
#define FREERTOS_IP_CONFIG_H

#define ipconfigNETWORK_MTU 1500

#define ipconfigNUM_NETWORK_BUFFER_DESCRIPTORS 1
#define ipconfigEVENT_QUEUE_LENGTH 6

#define ipconfigUSE_TCP 0
#define ipconfigUSE_TCP_WIN 0
#define ipconfigUSE_LINKED_RX_MESSAGES 0
#define ipconfigMAX_IP_TASK_SLEEP_TIME 0
#define ipconfigIP_TASK_PRIORITY 0
#define ipconfigIP_TASK_STACK_SIZE_WORDS 100
#define ipconfigUDP_MAX_SEND_BLOCK_TIME_TICKS 1000

#define ipconfigUSE_DHCP 1
#define ipconfigUSE_DNS 0

#define ipconfigRAND32() 42

#define portMAX_DELAY 0
#define configTICK_RATE_HZ 1000

#endif // !FREERTOS_IP_CONFIG_H

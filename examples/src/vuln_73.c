#include <stdio.h>

#include "FreeRTOS.h"
#include "list.h"
#include "task.h"
#include "FreeRTOS_IP.h"
#include "FreeRTOS_IP_Private.h"
#include "FreeRTOS_DHCP.h"

#include "freertos_10_0_1_helper.h"

#define dhcpMESSAGE_TYPE_OFFER (2)

void prvCreateDHCPSocket (void);
BaseType_t prvProcessDHCPReplies (BaseType_t xExpectedMessageType);

char data[] = "\0\0";

int main()
{
   set_recvfrom_data(data, sizeof(data));
   BaseType_t result = prvProcessDHCPReplies (dhcpMESSAGE_TYPE_OFFER);
   printf("Result: %ld\n", result);
}


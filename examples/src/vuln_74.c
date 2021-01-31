#include "FreeRTOS.h"
#include "list.h"
#include "task.h"
#include "FreeRTOS_IP.h"
#include "FreeRTOS_IP_Private.h"
#include "FreeRTOS_ARP.h"

char data[] =
   // Ethernet header
   "\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
   // IP header
   "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
   // ARP header
   "\0\0"    // hardware address space
   ;

int main()
{
   eFrameProcessingResult_t result = eARPProcessPacket ((ARPPacket_t *)data);
}


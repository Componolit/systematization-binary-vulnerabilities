#include <stdio.h>
#include <stdlib.h>
#include <err.h>

#include "FreeRTOS.h"
#include "list.h"
#include "task.h"
#include "FreeRTOS_IP.h"
#include "FreeRTOS_IP_Private.h"
#include "NetworkBufferManagement.h"

NetworkBufferDescriptor_t *network_buffer;
void prvProcessEthernetPacket( NetworkBufferDescriptor_t * const pxNetworkBuffer );

char data[] =
   // Ethernet header
   "\x00\x00\x00\x00\x00\x00" // destination
   "\x00\x00\x00\x00\x00\x00" // source
   "\x08\x00"                 // ether type: IPv4
   // IP header
   "\x45"                     // Version / IHL
   "\x00"                     // DCSP / ECN
   "\x00\x21"                 // Total Length (21)
   "\x00\x00"                 // Identification
   "\x00\x00"                 // R / DF / MF / Fragment Offset
   "\x00"                     // TTL
   "\x01"                     // protocol: icmp (1)
   "\x00\x00"                 // header checksum
   "\x00\x00\x00\x00"         // source
   "\x00\x00\x00\x00"         // destination
   // ICMP header
   "\x08"                     // Type of message -- echo request
   ;

int main()
{
   if (xNetworkBuffersInitialise() != pdPASS) {
      errx(1, "Error initializing network buffers");
   }
   network_buffer = pxNetworkBufferGetFromISR(1500);
   network_buffer->xDataLength = sizeof(data);
   network_buffer->pucEthernetBuffer = data;
   prvProcessEthernetPacket (network_buffer);
}

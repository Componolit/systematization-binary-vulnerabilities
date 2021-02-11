#include <freertos_10_0_1_helper.h>

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
   process_ethernet (data, sizeof(data));
}

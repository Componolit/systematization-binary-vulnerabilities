#include <freertos_10_0_1_helper.h>

char data[] =
   // Ethernet header
   "\x00\x00\x00\x00\x00\x00" // destination
   "\x00\x00\x00\x00\x00\x00" // source
   "\x08\x06"                 // ether type: ARP
   // ARP header
   "\x00\x00"                 // hardware address space
   ;

int main()
{
   process_ethernet (data, sizeof(data));
}

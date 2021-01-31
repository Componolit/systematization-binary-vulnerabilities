#include <err.h>
#include <stdint.h>
#include <stddef.h>

#include <FreeRTOS.h>
#include <list.h>

#include <FreeRTOS_IP.h>
#include <NetworkInterface.h>

BaseType_t xNetworkInterfaceInitialise( void )
{
   warnx("%s called", __func__);
   return 1;
};

BaseType_t xNetworkInterfaceOutput( NetworkBufferDescriptor_t * const pxNetworkBuffer, BaseType_t xReleaseAfterSend )
{
   return 0;
};

void vNetworkInterfaceAllocateRAMToBuffers( NetworkBufferDescriptor_t pxNetworkBuffers[ ipconfigNUM_NETWORK_BUFFER_DESCRIPTORS ] )
{
};

BaseType_t xGetPhyLinkStatus( void )
{
   return 1;
};

BaseType_t xTCPWindowLoggingLevel = 0;

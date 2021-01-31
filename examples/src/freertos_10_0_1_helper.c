#include <err.h>
#include <stdint.h>
#include <stddef.h>
#include <string.h>

#include <FreeRTOS.h>
#include <list.h>
#include <task.h>

#include <FreeRTOS_IP.h>
#include <FreeRTOS_IP_Private.h>
#include <FreeRTOS_Sockets.h>
#include <NetworkInterface.h>

void *recvfrom_data = NULL;
unsigned long recvfrom_data_length = 0;

void set_recvfrom_data (void *data, unsigned long length)
{
   recvfrom_data = data;
   recvfrom_data_length = length;
};

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

void *vSocketClose( FreeRTOS_Socket_t *pxSocket )
{
   errx(1, "%s called", __func__);
}

Socket_t FreeRTOS_socket( BaseType_t xDomain, BaseType_t xType, BaseType_t xProtocol )
{
   errx (1, "%s called", __func__);
}

BaseType_t FreeRTOS_setsockopt( Socket_t xSocket, int32_t lLevel, int32_t lOptionName, const void *pvOptionValue, size_t xOptionLength )
{
   errx(1, "%s called", __func__);
}

BaseType_t vSocketBind( FreeRTOS_Socket_t *pxSocket, struct freertos_sockaddr * pxAddress, size_t uxAddressLength, BaseType_t xInternal )
{
   errx(1, "%s called", __func__);
}

int32_t FreeRTOS_recvfrom( Socket_t xSocket, void *pvBuffer, size_t xBufferLength, BaseType_t xFlags, struct freertos_sockaddr *pxSourceAddress, socklen_t *pxSourceAddressLength )
{
   memcpy(pvBuffer, recvfrom_data, recvfrom_data_length);
   return recvfrom_data_length;
}

int32_t FreeRTOS_sendto( Socket_t xSocket, const void *pvBuffer, size_t xTotalDataLength, BaseType_t xFlags, const struct freertos_sockaddr *pxDestinationAddress, socklen_t xDestinationAddressLength )
{
   errx(1, "%s called", __func__);
}

void vSocketWakeUpUser( FreeRTOS_Socket_t *pxSocket )
{
   errx(1, "%s called", __func__);
}

void vNetworkSocketsInit( void )
{
   errx(1, "%s called", __func__);
}

FreeRTOS_Socket_t *pxUDPSocketLookup( UBaseType_t uxLocalPort )
{
   errx(1, "%s called", __func__);
}

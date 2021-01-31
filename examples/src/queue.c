#include <err.h>

#include <FreeRTOS.h>
#include "queue.h"

BaseType_t xQueueReceive( QueueHandle_t xQueue, void * const pvBuffer, TickType_t xTicksToWait )
{
   errx(1, "NOT IMPLEMENTED: %s", __func__);
}

BaseType_t xQueueGenericSend( QueueHandle_t xQueue, const void * const pvItemToQueue, TickType_t xTicksToWait, const BaseType_t xCopyPosition )                               
{
   errx(1, "NOT IMPLEMENTED: %s", __func__);
}

QueueHandle_t xQueueGenericCreate( const UBaseType_t uxQueueLength, const UBaseType_t uxItemSize, const uint8_t ucQueueType )                                              
{
   errx(1, "NOT IMPLEMENTED: %s", __func__);
}

BaseType_t xQueueGenericSendFromISR( QueueHandle_t xQueue, const void * const pvItemToQueue, BaseType_t * const pxHigherPriorityTaskWoken, const BaseType_t xCopyPosition )   
{
   errx(1, "NOT IMPLEMENTED: %s", __func__);
}

UBaseType_t uxQueueMessagesWaitingFromISR( const QueueHandle_t xQueue )                                                                                                       
{
   errx(1, "NOT IMPLEMENTED: %s", __func__);
}

void vQueueDelete( QueueHandle_t xQueue )                                                                                                                                     
{
   errx(1, "NOT IMPLEMENTED: %s", __func__);
}

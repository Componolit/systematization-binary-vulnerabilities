#ifndef INC_QUEUE_H
#define INC_QUEUE_H

#define pdFAIL pdFALSE
#define pdPASS pdTRUE

typedef uint64_t xQueueItem;
typedef uint64_t *QueueHandle_t;

#define xQueueReceive(a, b, c)
#define xQueueSendToBack(a, b, c) pdPASS
#define xQueueSendToBackFromISR(a, b, c) pdPASS
#define vQueueDelete(q)
#define xQueueCreate(a, b) NULL

#endif // INC_QUEUE_H

#ifndef SEMAPHORE_H
#define SEMAPHORE_H

#include "queue.h"

typedef QueueHandle_t SemaphoreHandle_t;

#define xSemaphoreCreateCounting(m, i) ((SemaphoreHandle_t *)1)
#define xSemaphoreTake(s, t) (pdPASS)
#define xSemaphoreTakeFromISR(s, h) (pdPASS)
#define xSemaphoreGiveFromISR(s, h) (pdPASS)
#define xSemaphoreGive(s) (pdPASS)

#endif // SEMAPHORE_H

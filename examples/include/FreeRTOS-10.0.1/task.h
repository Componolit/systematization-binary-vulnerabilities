#ifndef INC_TASK_H
#define INC_TASK_H

#include "list.h"

#define taskENTER_CRITICAL()
#define taskEXIT_CRITICAL()

typedef struct xTIME_OUT
{
   BaseType_t xOverflowCount;
   TickType_t xTimeOnEntering;
} TimeOut_t;

typedef void * TaskHandle_t;

#define xTaskGetTickCount() 0
#define xTaskGetCurrentTaskHandle() (NULL)
#define vTaskSetTimeOutState(t)
#define xTaskCheckForTimeOut(p, t) (0)
#define xTaskCreate(c, n, d, par, pri, t) (0)
#define vTaskDelay(d)
#define vTaskSuspendAll()
#define xTaskResumeAll() (pdFALSE)

#endif // !INC_TASK_H

#ifndef INC_TASK_H
#define INC_TASK_H

#include <FreeRTOS.h>

typedef uint64_t* TaskHandle_t;

#define xTaskGetCurrentTaskHandle() NULL
#define xTaskGetTickCount() 0
#define vTaskSetTimeOutState(t)
#define vTaskDelay(d)
#define xTaskCheckForTimeOut(t, x) pdFALSE
#define xTaskCreate(a, b, c, d, e, f) 0
#define xTaskResumeAll()
#define vTaskSuspendAll()
#define taskENTER_CRITICAL()
#define taskEXIT_CRITICAL()

#endif // INC_TASK_H

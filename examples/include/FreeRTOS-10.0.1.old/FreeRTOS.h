#ifndef INC_FREERTOS_H
#define INC_FREERTOS_H

#include <stddef.h>

#define pdMS_TO_TICKS( xTimeInMs ) 0

#include <list.h>
#include <queue.h>

#define pdFALSE 0
#define pdTRUE 1

#define configASSERT(x)

typedef int32_t BaseType_t;
typedef uint32_t UBaseType_t;
typedef uint32_t TickType_t;
typedef uint32_t TimeOut_t;

#endif // INC_FREERTOS_H

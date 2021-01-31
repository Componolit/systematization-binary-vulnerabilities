#include <FreeRTOS.h>
#include "task.h"
#include "portable.h"

#include <stdlib.h>

void *pvPortMalloc (size_t xSize)
{
   void *pvReturn;

   vTaskSuspendAll();
   {
      pvReturn = malloc (xSize);
   }
   xTaskResumeAll();

   return pvReturn;
}

void vPortFree( void *pv )
{
   free(pv);
};

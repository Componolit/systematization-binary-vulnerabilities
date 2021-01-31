#ifndef PORTABLE_H
#define PORTABLE_H

#include <stdint.h>
#include <stddef.h>

#include "portmacro.h"

void *pvPortMalloc( size_t xSize);
void vPortFree( void *pv );

#endif // !PORTABLE_H

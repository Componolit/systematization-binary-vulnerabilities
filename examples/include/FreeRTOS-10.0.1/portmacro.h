#ifndef PORTMACRO_H
#define PORTMACRO_H

#define portMAX_DELAY ( TickType_t )   0xffffffffUL
#define portTICK_PERIOD_MS             ( ( TickType_t ) 1000 / configTICK_RATE_HZ )

#endif // !PORTMACRO_H

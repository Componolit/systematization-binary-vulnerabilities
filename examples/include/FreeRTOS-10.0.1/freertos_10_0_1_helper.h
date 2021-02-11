#pragma once
#include <stddef.h>

void set_recvfrom_data (void *data, unsigned long length);
void process_ethernet(char *buffer, size_t len);

COMMON_CFLAGS = -g -Wno-pointer-to-int-cast -Dstatic= -fsanitize=address 
LDFLAGS = -lasan

FREERTOS_PLUS_TCP_PATH = contrib/FreeRTOS-Plus-TCP

VPATH += src $(FREERTOS_PLUS_TCP_PATH) $(FREERTOS_PLUS_TCP_PATH)/portable/BufferManagement

DUMMY := $(shell mkdir -p obj)
VERBOSE ?= @

VULNS = vuln_75

all: $(addprefix obj/,$(VULNS))
	$(VERBOSE)for t in $<; do echo "Running $$t"; ./$$t; done

obj/vuln_75: \
	obj/FreeRTOS_ARP.o \
	obj/FreeRTOS_DHCP.o \
	obj/FreeRTOS_IP.o \
	obj/FreeRTOS_UDP_IP.o \
	obj/FreeRTOS_Sockets.o \
	obj/BufferAllocation_1.o \
	obj/freertos_10_0_1_helper.o \
	obj/list.o \
	obj/port.o \
	obj/queue.o \
	obj/vuln_75.o
obj/vuln_75: \
	CFLAGS += \
		-Iinclude/FreeRTOS-10.0.1 \
		-I$(FREERTOS_PLUS_TCP_PATH) \
		-I$(FREERTOS_PLUS_TCP_PATH)/include \
		-I$(FREERTOS_PLUS_TCP_PATH)/portable/Compiler/GCC \
		$(COMMON_CFLAGS)
obj/vuln_75:
	$(VERBOSE)$(CC) $(LDFLAGS) -o $@ -Wl,--start-group $^ -Wl,--end-group

obj/%.o: %.c
	$(VERBOSE)$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(VERBOE)rm -rf obj

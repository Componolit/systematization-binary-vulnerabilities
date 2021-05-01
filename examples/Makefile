COMMON_CFLAGS = -g -Wno-pointer-to-int-cast -Dstatic= -fsanitize=address 
LDFLAGS = -lasan

FREERTOS_PLUS_TCP_PATH = contrib/FreeRTOS-Plus-TCP

VPATH += src $(FREERTOS_PLUS_TCP_PATH) $(FREERTOS_PLUS_TCP_PATH)/portable/BufferManagement

DUMMY := $(shell mkdir -p obj)
VERBOSE ?= @

VULNS = vuln_68a vuln_68b vuln_75 vuln_74 vuln_73

all: $(addprefix obj/,$(addsuffix .run,$(sort $(VULNS))))

FREERTOS_CFLAGS = \
		-Iinclude/FreeRTOS-10.0.1 \
		-I$(FREERTOS_PLUS_TCP_PATH) \
		-I$(FREERTOS_PLUS_TCP_PATH)/include \
		-I$(FREERTOS_PLUS_TCP_PATH)/portable/Compiler/GCC \

obj/freertos.a: \
	obj/FreeRTOS_ARP.o \
	obj/FreeRTOS_DHCP.o \
	obj/FreeRTOS_DNS.o \
	obj/FreeRTOS_IP.o \
	obj/FreeRTOS_UDP_IP.o \
	obj/BufferAllocation_1.o \
	obj/freertos_10_0_1_helper.o \
	obj/list.o \
	obj/port.o \
	obj/queue.o
	$(VERBOSE)$(AR) -crs $@ $^
	$(VERBOSE)rm $^

obj/%.run: obj/%
	$(VERBOSE)echo -n "Running $* … "
	$(VERBOSE)./$< 2> $@.tmp && { echo "ERROR"; exit 1; } || echo "SUCCESS"
	$(VERBOSE)mv $@.tmp $@

obj/%: CFLAGS += $(FREERTOS_CFLAGS) $(COMMON_CFLAGS)
obj/%: obj/freertos.a obj/%.o
	$(VERBOSE)$(CC) $(LDFLAGS) -o $@ -Wl,--start-group $^ -Wl,--end-group

obj/%.o: %.c
	$(VERBOSE)$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(VERBOE)rm -rf obj

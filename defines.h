#ifndef _DEFINES_H
#define _DEFINES_H

#define NULL ((void*)0)
#define SERIAL_DEFAULT_DEVICE 0

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

typedef uint32 kz_thread_id_t;
typedef int (*kz_func_t) (int argc, char *argv[]);
typedef void (*kz_handler_t) (void);

#endif /* _DEFINES_H */

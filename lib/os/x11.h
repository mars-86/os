#ifndef __OS_LIB_X11_INCLUDED_H__
#define __OS_LIB_X11_INCLUDED_H__

#ifdef __linux__

#include "../lib.h"
#include <unistd.h>

void* _init_instance(terminal_size_t* ts);

#endif /* __linux__ */

#endif /* __OS_LIB_X11_INCLUDED_H__ */

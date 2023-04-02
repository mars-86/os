#ifndef __OS_LIB_X11_INCLUDED_H__
#define __OS_LIB_X11_INCLUDED_H__

#ifdef __linux__

#include <unistd.h>
#include "../base/inout.h"
#include "../base/platform.h"
#include "../base/types.h"
#include "../error/system.h"
#include "../terminal/terminal.h"

void* _init_instance(ContainerSize* cs);

#endif /* __linux__ */

#endif /* __OS_LIB_X11_INCLUDED_H__ */

#ifndef __OS_LIB_WIN32_INCLUDED_H__
#define __OS_LIB_WIN32_INCLUDED_H__

#ifdef _WIN32

#include <windows.h>
#include "../base/inout.h"
#include "../base/platform.h"
#include "../base/types.h"
#include "../error/system.h"
#include "../terminal/terminal.h"

void* _init_instance(ContainerSize* cs);

#endif /* _WIN32 */

#endif /* __OS_LIB_WIN32_INCLUDED_H__ */

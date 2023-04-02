#ifndef __OS_LIB_INCLUDED_H__
#define __OS_LIB_INCLUDED_H__

#ifdef _WIN32
// #define WINVER 0x0500
#include "os/win32.h"
#elif __linux__
#include "os/x11.h"
#endif // __linux__

#undef NULL
#ifdef __cplusplus
#define NULL nullptr
#else
#define NULL ((void*)0)
#endif /* __cplusplus */

#endif /* __OS_LIB_INCLUDED_H__ */

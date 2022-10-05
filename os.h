#ifndef _OS_OS_INCLUDED_H_
#define _OS_OS_INCLUDED_H_

#ifdef _WIN32
// #define WINVER 0x0500
#include "win32.h"
#elif __linux__
#include "x11.h"
#endif // __linux__

#undef NULL
#ifdef __cplusplus
#define NULL nullptr
#else
#define NULL ((void*)0)
#endif /* __cplusplus */

#endif /* _OS_OS_INCLUDED_H_ */

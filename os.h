#ifndef _OS_INCLUDED_H_
#define _OS_INCLUDED_H_

#ifdef __linux__
#ifdef __x11__
#include "linux/x11.h"
#else
#include "linux/linux.h"
#endif // __x11__ 
#elif _WIN32
#define WINVER 0x0500
#include "win32/win32.h"
#endif // __linux__


#undef NULL
#ifdef __cplusplus
#define NULL nullptr
#else
#define NULL ((void*)0)
#endif // __cplusplus

#endif // _OS_INCLUDED_H_

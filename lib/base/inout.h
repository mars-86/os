#ifndef __OS_LIB_BASE_INOUT_INCLUDED_H__
#define __OS_LIB_BASE_INOUT_INCLUDED_H__

#ifdef _WIN32

extern int (__cdecl *os_write)(int fd, const void *buf, unsigned int count);
extern int (__cdecl *os_read)(int fd, void *buf, unsigned int count);

#else

#include <unistd.h>

extern ssize_t (*os_write)(int fd, const void *buf, size_t count) = write;
extern ssize_t (*os_read)(int fd, void *buf, size_t count) = read;

#endif /* _WIN32 */

#endif /* __OS_LIB_BASE_INOUT_INCLUDED_H__ */

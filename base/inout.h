#ifndef _OS_INOUT_INCLUDED_H_
#define _OS_INOUT_INCLUDED_H_

#ifdef _WIN32

#include <io.h>

int (__cdecl *os_write)(int fd, const void *buf, unsigned int count) = _write;
int (__cdecl *os_read)(int fd, void *buf, unsigned int count) = _read;

#else

#include <unistd.h>

ssize_t (*os_write)(int fd, const void *buf, size_t count) = write;
ssize_t (*os_read)(int fd, void *buf, size_t count) = read;

#endif /* _WIN32 */

#endif /* _OS_INOUT_INCLUDED_H_ */

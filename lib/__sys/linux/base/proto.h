#ifndef __OS_LIB_SYS_LINUX_MINGW_BASE_PROTO_INCLUDED_H__
#define __OS_LIB_SYS_LINUX_MINGW_BASE_PROTO_INCLUDED_H__

#include <unistd.h>

extern ssize_t (*os_write)(int fd, const void *buf, size_t count);

extern ssize_t (*os_read)(int fd, void *buf, size_t count);

#endif // __OS_LIB_SYS_LINUX_MINGW_BASE_PROTO_INCLUDED_H__

#include "../lib.h"
#include <stdio.h>

#ifdef _WIN32
long (*os_write)(int fd, const void* buf, size_t count) = _write;
long (*os_read)(int fd, void* buf, size_t count) = _read;

#else
long (*os_write)(int fd, const void* buf, size_t count) = write;
long (*os_read)(int fd, void* buf, size_t count) = read;

#endif

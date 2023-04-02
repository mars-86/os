#include "inout.h"
#include <io.h>

int (*os_write)(int fd, const void *buf, unsigned int count) = _write;

int (*os_read)(int fd, void *buf, unsigned int count) = _read;

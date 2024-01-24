// #include "x11.h"

#ifdef __linux__

#include "../lib.h"
#include <stdio.h>
#include <sys/ioctl.h> // ioctl() and TIOCGWINSZ
#include <unistd.h> // for STDOUT_FILENO

static struct winsize get_window_size(void);

void* _init_instance(terminal_size_t* ts)
{
    struct winsize size = get_window_size();
    ts->row = size.ws_row;
    ts->col = size.ws_col;
    printf("%s", "\x1B[1m");
    // TODO - return display ptr
    return NULL;
}

struct winsize get_window_size(void)
{
    struct winsize size;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
    return size;
}

#endif // __linux__

#ifndef _OS_LINUX_LINUX_INCLUDED_H_
#define _OS_LINUX_LINUX_INCLUDED_H_

#ifdef __linux__

#include <unistd.h>
#include <sys/ioctl.h>
#include "../base/platform.h"

namespace os {

void *get_std_handle(unsigned long handle);
void set_console_output_fm(unsigned int format);
int get_container_size(void *stdh, ContainerSize *cs);
void set_console_font(void *stdh, const wchar_t *name, int width, int height);
void set_console_mode(void *stdh, unsigned long mode, long *m);

void *_init_instance(ContainerSize* cs);
bool _change_window_message_filter_es(void *handle);

} // namespace os

#endif // __linux__

#endif // _OS_LINUX_LINUX_INCLUDED_H_


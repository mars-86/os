#ifndef _OS_WIN32_WIN32_INCLUDED_H
#define _OS_WIN32_WIN32_INCLUDED_H

#ifdef _WIN32

#include <windows.h>
#include "../base/platform.h"

namespace os {

HANDLE get_std_handle(unsigned long handle);
void set_console_output_fm(unsigned int format);
int get_container_size(HANDLE stdh, ContainerSize *cs);
void set_console_font(HANDLE stdh, const wchar_t *name, int width, int height);
void set_console_mode(HANDLE stdh, unsigned long mode, DWORD *m);

HWND _init_instance(ContainerSize* cs);
BOOL _change_window_message_filter_es(HWND handle);

} // namespace os

#endif // _WIN32

#endif // _OS_WIN32_WIN32_INCLUDED_H

#ifndef __OS_LIB_SYS_WIN32_MINGW_TERMINAL_PROTO_INCLUDED_H__
#define __OS_LIB_SYS_WIN32_MINGW_TERMINAL_PROTO_INCLUDED_H__

#include "../../../types.h"
#include "../../../../terminal/vterm/vterm.h"

extern void *__cdecl get_term_stdout_handle(void)
    __MINGW_NOTHROW;

extern int __cdecl get_term_buffer_info(void *handle, TerminalSize *ts)
    __MINGW_ATTRIB_NONNULL(1) __MINGW_ATTRIB_NONNULL(2) __MINGW_NOTHROW;

extern int __cdecl get_term_mode(void *handle, unsigned long *mode)
    __MINGW_ATTRIB_NONNULL(1) __MINGW_ATTRIB_NONNULL(2) __MINGW_NOTHROW;

extern int __cdecl set_term_out_cp(unsigned int code_page)
    __MINGW_NOTHROW;

extern int __cdecl set_term_mode(void *handle, unsigned long mode)
    __MINGW_ATTRIB_NONNULL(1) __MINGW_NOTHROW;

extern int __cdecl set_term_font(void *handle, const wchar_t *name, short size)
    __MINGW_ATTRIB_NONNULL(1) __MINGW_NOTHROW;

extern int __cdecl set_term_cursor_info(void *handle, int visible, unsigned long size)
    __MINGW_ATTRIB_NONNULL(1) __MINGW_NOTHROW;

#endif // __OS_LIB_SYS_WIN32_MINGW_TERMINAL_PROTO_INCLUDED_H__

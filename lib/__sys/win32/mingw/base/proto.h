#ifndef __OS_LIB_SYS_WIN32_MINGW_BASE_PROTO_INCLUDED_H__
#define __OS_LIB_SYS_WIN32_MINGW_BASE_PROTO_INCLUDED_H__

extern int (__cdecl *os_write)(int fd, const void *buf, unsigned int count)
    __MINGW_ATTRIB_NONNULL(2);

extern int (__cdecl *os_read)(int fd, void *buf, unsigned int count)
    __MINGW_ATTRIB_NONNULL(2);

#endif // __OS_LIB_SYS_WIN32_MINGW_BASE_PROTO_INCLUDED_H__

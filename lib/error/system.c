#include "../lib.h"
#include <stdio.h>

void system_error(const char *msg)
{
#ifdef _WIN32
    WCHAR* buff;
    FormatMessageW(
        FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
        NULL, WSAGetLastError(), MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPWSTR)&buff, 0, NULL);
    fprintf(stderr, "%s: %S\n", msg, buff);
    LocalFree(buff);
#else
    perror(msg);
#endif
}

#include "win32.h"

HANDLE _init_instance(ContainerSize* cs)
{
    // Get console window handle
    //HWND wh = GetConsoleWindow();
    // Move window to required position
    //MoveWindow(wh, 0, 0, 1900, 1600, TRUE);

    HANDLE stdh = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(stdh, &csbi);
    cs->cs_row = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    cs->cs_col = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    SetConsoleOutputCP(CP_UTF8);
    DWORD mode;
    SetConsoleMode(stdh, 0x0007);
    GetConsoleMode(stdh, &mode);

    CONSOLE_FONT_INFOEX info = { 0 };
    info.cbSize = sizeof(info);
    info.dwFontSize.Y = 14; // leave X as zero
    info.FontWeight = FW_NORMAL;
    // wcscpy_s(info.FaceName, L"Iosevka");
    SetCurrentConsoleFontEx(stdh, NULL, &info);

    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = 0;
    lpCursor.dwSize = 30;
    SetConsoleCursorInfo(stdh, &lpCursor);

    // TODO - return display instance
    return stdh;
}

void *get_term_stdout_handle(void)
{
    return GetStdHandle(STD_OUTPUT_HANDLE);
}

int get_term_buffer_info(void *handle, ContainerSize *cs)
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int status = 1;
    status = GetConsoleScreenBufferInfo(handle, &csbi);
    cs->cs_row = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    cs->cs_col = csbi.srWindow.Right - csbi.srWindow.Left + 1;

    return status;
}

int set_term_font(void *handle, wchar_t name, short size)
{
    CONSOLE_FONT_INFOEX info = { 0 };
    info.cbSize = sizeof(info);
    info.dwFontSize.Y = size; // leave X as zero
    info.FontWeight = FW_NORMAL;
    wcscpy(info.FaceName, name);
    
    return SetCurrentConsoleFontEx(handle, NULL, &info);
}

int set_term_cursor_info(void *handle, int visible, unsigned long size)
{
    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = size;
    
    return SetConsoleCursorInfo(handle, &lpCursor);
}

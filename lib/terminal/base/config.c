#include "../../lib.h"

void *get_term_stdout_handle(void)
{
    return GetStdHandle(STD_OUTPUT_HANDLE);
}

int get_term_buffer_info(void *handle, TerminalSize *ts)
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int status = 1;
    status = GetConsoleScreenBufferInfo(handle, &csbi);
    ts->row = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    ts->col = csbi.srWindow.Right - csbi.srWindow.Left + 1;

    return status;
}

unsigned int get_term_out_cp(void)
{
    return GetConsoleOutputCP();
}

int get_term_mode(void *handle, unsigned long *mode)
{
    return GetConsoleMode(handle, mode);
}

int get_term_font(void *handle, CONSOLE_FONT_INFOEX *info)
{
    return GetCurrentConsoleFontEx(handle, 0, info);
}

int set_term_out_cp(unsigned int code_page)
{
    return SetConsoleOutputCP(code_page);
}

int set_term_mode(void *handle, unsigned long mode)
{
    return SetConsoleMode(handle, mode);
}

int set_term_font(void *handle, const wchar_t *name, short size)
{
    CONSOLE_FONT_INFOEX info = { 0 };
    info.cbSize = sizeof(info);
    info.dwFontSize.Y = size; // leave X as zero
    info.FontWeight = FW_NORMAL;
    wcscpy(info.FaceName, name);
    
    return SetCurrentConsoleFontEx(handle, 0, &info);
}

int set_term_cursor_info(void *handle, int visible, unsigned long size)
{
    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = size;
    
    return SetConsoleCursorInfo(handle, &lpCursor);
}

#include "os.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *sym = u8"\u2831";
    size_t slen = strlen(sym);

    HANDLE stdout_h = get_term_stdout_handle();
    set_term_out_cp(CP_UTF8);
    set_term_mode(stdout_h, 0x007);
    set_term_font(stdout_h, L"Iosevka", 14);

    os_write(STDOUT_FILENO, sym, slen);

    return 0;
}

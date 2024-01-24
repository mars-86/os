#include "lib/os/x11.h"
#include "os.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    void* sym = u8"\u2803"
                u8"\u2804"
                u8"\u2805";
    size_t slen = strlen((const char*)sym);

    // HANDLE stdout_h = get_term_stdout_handle();
    // set_term_out_cp(CP_UTF8);
    // set_term_mode(stdout_h, ENABLE_PROCESSED_OUTPUT | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
    // set_term_font(stdout_h, L"Iosevka", 14);

    terminal_size_t ts;
    _init_instance(&ts);
    printf("%d\n%d\n%ld\n", ts.row, ts.col, slen);
    os_write(STDOUT_FILENO, sym, slen);

    return 0;
}

#ifndef __OS_LIB_TERMINAL_CMD_INCLUDED_H__
#define __OS_LIB_TERMINAL_CMD_INCLUDED_H__

#include <stdio.h>
#include "../base/inout.h"

#include <string.h>

// #define __terminal_put_cmd(fmt, ...) (wprintf(L"%c"fmt, '\x1B', __VA_ARGS__))
#define __terminal_put_cmd(...) \
    do { \
        const char *cmd = "\x1B"__VA_ARGS__; \
        os_write(STDOUT_FILENO, cmd, strlen(cmd)); \
    } while (0);

/* CURSOR SIMPLE POSITIONING */

#define __terminal_cmd_cursor_pos(pos) __terminal_put_cmd(#pos)
#define __terminal_cmd_cursor_reverse_idx __terminal_put_cmd("M")
#define __terminal_cmd_cursor_save_mem __terminal_put_cmd("7")
#define __terminal_cmd_cursor_restore_mem __terminal_put_cmd("8")

/* CURSOR POSITIONING */

#define __terminal_cmd_cursor_position_up(n) __terminal_put_cmd("["#n"A")
#define __terminal_cmd_cursor_position_down(n) __terminal_put_cmd("["#n"B")
#define __terminal_cmd_cursor_position_forward(n) __terminal_put_cmd("["#n"C")
#define __terminal_cmd_cursor_position_backward(n) __terminal_put_cmd("["#n"D")
#define __terminal_cmd_cursor_position_n(pos, n) __terminal_put_cmd("["#n#pos)
#define __terminal_cmd_cursor_line(line, n) __terminal_put_cmd("["#n#line)
#define __terminal_cmd_cursor_absolute(abs, n) __terminal_put_cmd("["#n,#abs)
#define __terminal_cmd_cursor_xy(x, y) __terminal_put_cmd("["#y";"#x"H")
#define __terminal_cmd_cursor_horizontal_vertical_pos(x, y) __terminal_put_cmd("["#y";"#x"f")
#define __terminal_cmd_cursor_save __terminal_put_cmd("[s")
#define __terminal_cmd_cursor_restore __terminal_put_cmd("[u")

/* CURSOR VISIBILITY */

#define __terminal_cmd_cursor_blinking(blink) __terminal_put_cmd("[?12"#blink)
#define __terminal_cmd_cursor_visibility(visible) __terminal_put_cmd("[?25"#visible))

/* VIEWPORT POSITIONING */

#define __terminal_cmd_viewport_scroll_up(n) __terminal_put_cmd("["#n"S")
#define __terminal_cmd_viewport_scroll_down(n) __terminal_put_cmd("["#n"T")

/* TEXT MODIFICATION */

#define __terminal_cmd_insert_char(n) __terminal_put_cmd("["#n"@")
#define __terminal_cmd_delete_char(n) __terminal_put_cmd("["#n"P")
#define __terminal_cmd_erase_char(n) __terminal_put_cmd("["#n"X")
#define __terminal_cmd_insert_line(n) __terminal_put_cmd("["#n"L")
#define __terminal_cmd_delete_line(n) __terminal_put_cmd("["#n"M")
#define __terminal_cmd_erase_in_display(n) __terminal_put_cmd("["#n"J")
#define __terminal_cmd_erase_in_line(n) __terminal_put_cmd("["#n"K")

/* TEXT FORMATTING */

#define __terminal_cmd_set_graphics_rendition(n) __terminal_put_cmd("["#n"m")
#define __terminal_cmd_sgr_foreground_ext(r, g, b) __terminal_put_cmd("[38;2;"#r";"#g";"#b"m")
#define __terminal_cmd_sgr_background_ext(r, g, b) __terminal_put_cmd("[48;2;"#r";"#g";"#b"m")

/* MODE CHANGES */

#define __terminal_cmd_keypad_application_enable __terminal_put_cmd("=")
#define __terminal_cmd_keypad_numeric_enable __terminal_put_cmd(">")
#define __terminal_cmd_cursor_keys_application_enable __terminal_put_cmd("[?1h")
#define __terminal_cmd_cursor_keys_application_disable __terminal_put_cmd("[?1l")

/* DESIGNATE CHARACTER SET */

#define __terminal_cmd_dec_enable __terminal_put_cmd("(0")
#define __terminal_cmd_ascii_enable __terminal_put_cmd("(B")

/* SCROLLING MARGINS */

#define __terminal_cmd_set_scrolling_region(t, b) __terminal_put_cmd("["#t";"#b"r")

/* ALTERNATE SCREEN BUFFER */

#define __terminal_cmd_set_screen_buffer(buffer) __terminal_put_cmd("[?1049"#buffer)

/* TERMINAL SIZE */

#define __terminal_cmd_size(rows, cols) __terminal_put_cmd("[8;"#rows";"#cols"t")

/* NUMPAD & FUNCTION KEYS */

#define __terminal_cmd_backspace __terminal_put_cmd("0x7f")
#define __terminal_cmd_pause __terminal_put_cmd("0x1a")
#define __terminal_cmd_escape __terminal_put_cmd("0x1b")
#define __terminal_cmd_insert __terminal_put_cmd("[2~")
#define __terminal_cmd_delete __terminal_put_cmd("[3~")
#define __terminal_cmd_page_up __terminal_put_cmd("[5~")
#define __terminal_cmd_page_down __terminal_put_cmd("[6~")
#define __terminal_cmd_f1 __terminal_put_cmd("OP")
#define __terminal_cmd_f2 __terminal_put_cmd("OQ")
#define __terminal_cmd_f3 __terminal_put_cmd("OR")
#define __terminal_cmd_f4 __terminal_put_cmd("OS")
#define __terminal_cmd_f5 __terminal_put_cmd("[15")
#define __terminal_cmd_f6 __terminal_put_cmd("[17")
#define __terminal_cmd_f7 __terminal_put_cmd("[18")
#define __terminal_cmd_f8 __terminal_put_cmd("[19")
#define __terminal_cmd_f9 __terminal_put_cmd("[20")
#define __terminal_cmd_f10 __terminal_put_cmd("[21")
#define __terminal_cmd_f11 __terminal_put_cmd("[23")
#define __terminal_cmd_f12 __terminal_put_cmd("[24")

#endif /* __OS_LIB_TERMINAL_CMD_INCLUDED_H__ */

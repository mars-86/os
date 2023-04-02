#ifndef __OS_LIB_TERMINAL_INCLUDED_H__
#define __OS_LIB_TERMINAL_INCLUDED_H__

#include "terminal_constants.h"
#include "terminal_cmd.h"

/* CURSOR SIMPLE POSITIONING */

#define TERM_CURSOR_POSITION(pos) __terminal_cmd_cursor_pos(pos)
#define TERM_CURSOR_REVERSE_IDX() __terminal_cmd_cursor_reverse_idx
#define TERM_CURSOR_SAVE_MEM() __terminal_cmd_cursor_save_mem
#define TERM_CURSOR_RESTORE_MEM() __terminal_cmd_cursor_restore_mem

/* CURSOR POSITIONING */

#define TERM_CURSOR_POSITION_N(pos, n) __terminal_cmd_cursor_position_n(pos, n)
#define TERM_CURSOR_LINE(line, n) __terminal_cmd_cursor_line(line, n)
#define TERM_CURSOR_ABSOLUTE(abs, n) __terminal_cmd_cursor_absolute(abs, n)
#define TERM_CURSOR_XY(x, y) __terminal_cmd_cursor_xy(x, y)
#define TERM_CURSOR_HORIZ_VERT_POS(x, y) __terminal_cmd_cursor_horizontal_vertical_pos(x, y)
#define TERM_CURSOR_SAVE() __terminal_cmd_cursor_save
#define TERM_CURSOR_RESTORE() __terminal_cmd_cursor_restore

/* CURSOR VISIBILITY */

#define TERM_CURSOR_BLINKING(blink) __terminal_cmd_cursor_blinking(blink)
#define TERM_CURSOR_VISIBILITY(visible) __terminal_cmd_cursor_visibility(visible)

/* VIEWPORT POSITIONING */

#define TERM_VIEWPORT_SCROLL_UP(n) __terminal_cmd_viewport_scroll_up(n)
#define TERM_VIEWPORT_SCROLL_DOWN(n) __terminal_cmd_viewport_scroll_down(n)

/* TEXT MODIFICATION */

#define TERM_INSERT_CHAR(n) __terminal_cmd_insert_char(n)
#define TERM_DELETE_CHAR(n) __terminal_cmd_delete_char(n)
#define TERM_ERASE_CHAR(n) __terminal_cmd_erase_char(n)
#define TERM_INSERT_LINE(n) __terminal_cmd_insert_line(n)
#define TERM_DELETE_LINE(n) __terminal_cmd_delete_line(n)
#define TERM_ERASE_IN_DISPLAY(n) __terminal_cmd_erase_in_display(n)
#define TERM_ERASE_IN_LINE(n) __terminal_cmd_erase_in_line(n)

/* TEXT FORMATTING */

#define TERM_SET_GRAPHICS_RENDITION(n) __terminal_cmd_set_graphics_rendition(n)
#define TERM_SGR_FOREGROUND_EXT(r, g, b) __terminal_cmd_sgr_foreground_ext(r, g, b)
#define TERM_SGR_BACKGROUND_EXT(r, g, b) __terminal_cmd_sgr_background_ext(r, g, b)

/* MODE CHANGES */

#define TERM_KEYPAD_APPLICATION_ENABLE() __terminal_cmd_keypad_application_enable
#define TERM_KEYPAD_NUMERIC_ENABLE() __terminal_cmd_keypad_numeric_enable
#define TERM_CURSOR_KEYS_APPLICATION_ENABLE() __terminal_cmd_cursor_keys_application_enable
#define TERM_CURSOR_KEYS_APPLICATION_DISABLE() __terminal_cmd_cursor_keys_application_disable

/* DESIGNATE CHARACTER SET */

#define TERM_DEC_ENABLE() __terminal_cmd_dec_enable
#define TERM_ASCII_ENABLE() __terminal_cmd_ascii_enable

/* SCROLLING MARGINS */

#define TERM_SET_SCROLLING_REGION(t, b) __terminal_cmd_set_scrolling_region(t, b)

/* ALTERNATE SCREEN BUFFER */

#define TERM_SET_SCREEN_BUFFER(buffer) __terminal_cmd_set_screen_buffer(buffer)

/* TERMINAL SIZE */

#define TERM_SET_SIZE(rows, cols) __terminal_cmd_size(rows, cols)

#endif /* __OS_LIB_TERMINAL_INCLUDED_H__ */

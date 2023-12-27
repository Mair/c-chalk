#include <stdio.h>
#include "cchalk.h"

void app_main(void)
{
    chalk_printf(CHALK_YELLOW, "some yellow text\n");
    chalk_printf_ln(CHALK_RED, "some red text with a new line added");
    chalk_printf_ln(CHALK_GREEN, "this is green and is line number %d", 3);

    chalk_printf_background_ln(CHALK_BLACK, CHALK_WHITE, "this is black text on a white background");

    // chalk_printf_background(CHALK_BLACK, CHALK_WHITE, "this will bleed colour into the next line\n");

    chalk_printf_foreground_rgb(0, 0, 125, "this is text using rgb values\n");
    chalk_rgb_ln(255, 100, 100, 50, 255, 50, "this is text and background using rgb values");

    chalk_printf_ln(CHALK_RED, "some red text with a new line added");

    chalk_printf_ln(CHALK_BOLD, "text with CHALK_BOLD decoration");
    chalk_printf_ln(CHALK_UNDERLINE, "text with CHALK_UNDERLINE decoration");
    chalk_printf_ln(CHALK_DIM, "text with CHALK_DIM decoration");
    chalk_printf_ln(CHALK_REVERSE, "text with CHALK_REVERSE decoration");
    chalk_printf_ln(CHALK_STRIKETHROUGH, "text with CHALK_STRIKETHROUGH decoration");
}

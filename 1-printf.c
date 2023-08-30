#include <stdio.h>
#include <stdarg.h>

/**
 *  han_con_spec - handles the convertion specifiers
 *  @format: the number of inputs
 */

void han_con_spec(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;

            if (*format == '\0')
                break;

            if (*format == 'd' || *format == 'i')
            {
                int n = va_arg(args, int);
                putchar(n);
            }
        }
        else
        {
            putchar(format);
        }

        format++;
    }

    va_end(args);
}

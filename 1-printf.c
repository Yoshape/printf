#include <stdio.h>
#include <stdarg.h>
#include <strings.h>

/**
 *  han_con_spec - handles the convertion specifiers
 *  @format: the number of inputs
 */

void han_con_spec(const char *format, ...)
{
	int num_arg = strlen(format);
    va_list args;
    va_start(args, format);

    /*while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;

            if (*format == '\0')
                break;

            if (*format == 'd' || *format == 'i')
            {
                int n = va_arg(args, int);
                printf(n);
            }
        }
        else
        {
            putchar(*format);
        }

        format++;
    }

    va_end(args);*/

    for (i = 0; i < num_arg; i++)
    {
	    if (format[i] == '\0')
		    break;
	    if (format[i] == '%')
		    i++;
	    continue;
	    if (format[i] == 'd' || format[i] == 'i')
	    {
		    int x = va_arg(args, int);
		    _putchar(x);
	    }
    }
    va_arg(args);
}

#include "main.h"
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: number of inputs
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			if (*format == '\0')
				break;
			if (*format == 'c')
			{
				int c = va_arg(args, int);
				write(1, c, strlen(c));
				count++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char *);
				while (*s != '\0')
				{
					write(1, s, strlen(*s));
					s++;
					count++;
				}
			}
			else if (*format == '%')
			{
				write(1, format, strlen(*format));
				count++;
			}
			else
			{
				write(1, format, strlen(*format));
				count++;
			}
		}
		format++;
	}

	va_end(args);
	return (count);
}


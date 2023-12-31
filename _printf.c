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
				char c = va_arg(args, int);
				putchar(c);
				count++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char *);
				while (*s != '\0')
				{
					putchar(*s);
					s++;
					count++;
				}
			}
			else if (*format == '%')
			{
				putchar('%');
				count++;
			}
			else
			{
				putchar(*format);
				count++;
			}
		}
		format++;
	}

	va_end(args);
	return (count);
}


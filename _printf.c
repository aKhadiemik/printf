#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - produces output based on specified format
 *
 * @format: string to format and print
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	for (const char *p = format; *p != '\0'; ++p)
	{
		if (*p == '%')
		{
			switch (*(++p))
			{
				case 'c':
					int c = va_arg(args, int);

					_putchar(c);
					++count;
					break;
				case 's':
					char *str = va_arg(args, char *);

					for (; *str != '\0'; ++str)
					{
						_putchar(*str);
						++count;
					}
					break;
				case '%':
					_putchar('%');
					++count;
			}
		}
		else
		{
			_putchar(*p);
			++count;
		}
	}

	va_end(args);
	return (count);
}

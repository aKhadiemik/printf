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
	int count = 0, c, d;
	const char *p;
	char *str;
	
	if (!format)
		return (-1);

	va_start(args, format);
	for (p = format; *p != '\0'; ++p)
	{
		if (*p == '%')
		{
			switch (*(++p))
			{
				case 'c':
					c = va_arg(args, int);

					_putchar(c);
					++count;
					break;
				case 's':
					str = va_arg(args, char *);

					for (; *str != '\0'; ++str)
					{
						_putchar(*str);
						++count;
					}
					break;
				case 'd':
					d = va_arg(args, int);
					count = digit(d, count);
					break;
				case 'i':
					d = va_arg(args, int);
					count = digit(d, count);
					break;
				case '%':
					_putchar('%');
					++count;
					break;
				default:
					_putchar('%');
					_putchar(*p);
					count += 2;
					break;
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

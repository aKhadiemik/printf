#include "main.h"

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
	const char *p;

	if (!format)
		return (-1);

	va_start(args, format);

	for (p = format; *p != '\0'; ++p)
	{
		if (*p == '%')
			print_format(args, &p, &count);
		else
		{
			_putchar(*p);
			++count;
		}
	}

	va_end(args);

	return (count);
}

#include "main.h"
/**
 * _printf - mimics printf function
 * @format: xter string of 0 or more directives
 * Return: lenght of string;
 */
int _printf(const char *format, ...)
{
	va_list args;
	int d, len = 0;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
		format++;
		switch (*format)
		{
			case 'd':
				d = va_arg(args, int);
				digit(d);
				break;
			case 'i':
				d = va_arg(args, int);
				digit(d);
				break;
		}
		}
		else
		{
			_putchar(*format);
			len++;
		}
		format++;
	}
	va_end(args);
	return (len);
}

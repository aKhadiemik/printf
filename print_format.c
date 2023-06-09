#include "main.h"

/**
 * print_format - print formatted output to stdout
 *
 * @args: va_list of arguments to be formatted and printed
 * @p: pointer to the format string specifying how to format the output
 * @count: keeps track of the number of characters printed
 *
 * Return: void
 */
void print_format(va_list args, const char **p, int *count)
{
	long int c, d;
	unsigned int u;
	char *str;

	switch (*(++(*p)))
	{
	case 'c':
		c = va_arg(args, int);
		_putchar(c);
		++(*count);
		break;
	case 's':
		str = va_arg(args, char *);
		for (; *str != '\0'; ++str)
		{
			_putchar(*str);
			++(*count);
		}
		break;
	case 'i':
	case 'd':
		d = va_arg(args, int);
		*count = print_digit(d, *count);
		break;
	case 'u':
		u = va_arg(args, unsigned int);
		*count = print_udigit(u, *count);
		break;
	case '%':
		_putchar('%');
		++(*count);
		break;
	default:
		_putchar('%');
		_putchar(*(*p));
		*count += 2;
		break;
	}
}

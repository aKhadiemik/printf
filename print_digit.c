#include "main.h"
/**
 * rev - reverses number
 * @d: digit to be reversed
 * Return: reversed number
 */
int rev(int d)
{
	int rev = 0;

	while (d > 0)
	{
		rev = rev * 10 + (d % 10);
		d = d / 10;
	}
	return (rev);
}
/**
 * print_digit - function top print digit
 *
 * @d: digit to be printed
 * @count: lenght count of current string
 *
 * Return: len of digit
 */

int print_digit(int d, int count)
{
	int rev_d;

	if (d < 0)
	{
		_putchar('-');
		count++;
		d = -d;
	}
	if (d == INT_MIN)
	{
		count = print_digit(INT_MAX / 10, count);
		_putchar((INT_MAX % 10 + 1) + '0');
		count++;
	}
	if (d == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	if (d == INT_MAX)
	{
		count = print_digit(INT_MAX / 10, count);
		_putchar((INT_MAX % 10) + '0');
		count++;
	}
	if (d > 0)
	{
		rev_d = rev(d);
		while (rev_d > 0)
		{
			_putchar(rev_d % 10 + '0');
			count++;
			rev_d = rev_d / 10;
		}
	}
	return (count);
}

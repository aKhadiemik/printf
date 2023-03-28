#include "main.h"
/**
 * digit - function top print digit
 * @d: digit to be printed
 * @count: lenght count of current string
 * Return: len of digit
 */
int digit(int d, int count)
{
	int rev_d;

	if (d < 0)
	{
		_putchar('-');
		count++;
		d = -d;
	}
	if (d == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	if (d > 0)
	{
		rev_d = 0;
		while (d > 0)
		{
			rev_d = rev_d * 10 + (d % 10);
			d = d / 10;
		}
		while (rev_d > 0)
		{
			_putchar(rev_d % 10 + '0');
			count++;
			rev_d = rev_d / 10;
		}
	}
	return (count);
}

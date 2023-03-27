#include "main.h"
/**
 * digit - function top print digit
 * @d: digit to be printed
 * Return - len of digit
 */
void digit(int d)
{
	int len = 0, rev_d;

	if (d < 0)
	{
		putchar('-');
		len++;
		d = -d;
	}
	if (d == 0)
	{
		putchar('0');
		len++;
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
			putchar(rev_d % 10 + '0');
			len++;
			rev_d = rev_d / 10;
		}
	}
}

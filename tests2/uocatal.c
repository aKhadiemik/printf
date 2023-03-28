#include "main.h"
/**
 * uoctal - function top print octal
 * @u: digit to be printed
 * @count: lenght count of current string
 * Return: len of digit
 */
int uoctal(unsigned int u, int count)
{
	unsigned int rev_u;

	if (u == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	else
	{
		rev_u = 0;
		while (u > 0)
		{
			rev_u = rev_u * 8 + (u % 8);
			u = u / 8;
		}
		while (rev_u > 0)
		{
			_putchar(rev_u % 8 + '0');
			count++;
			rev_u = rev_u / 8;
		}
	}
	return (count);
}

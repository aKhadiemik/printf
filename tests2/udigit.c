#include "main.h"
/**
 * digit - function top print digit
 * @u: digit to be printed
 * @count: lenght count of current string
 * Return: len of digit
 */
int udigit(unsigned int u, int count)
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
			rev_u = rev_u * 10 + (u % 10);
			u = u / 10;
		}
		while (rev_u > 0)
		{
			_putchar(rev_u % 10 + '0');
			count++;
			rev_u = rev_u / 10;
		}
	}
	return (count);
}

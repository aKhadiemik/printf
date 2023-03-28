#include "main.h"
/**
 * uhex - function top print octal
 * @u: digit to be printed
 * @count: lenght count of current string
 * Return: len of digit
 */
int uhex(unsigned int u, int count)
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
			rev_u = rev_u * 16 + (u % 16);
			u = u / 16;
		}
		while (rev_u > 0)
		{
			_putchar(rev_u % 16 + '0');
			count++;
			rev_u = rev_u / 16;
		}
	}
	return (count);
}

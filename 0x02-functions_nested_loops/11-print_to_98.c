#include "main.h"

/**
 * print_to_98(int n)-prints all natural numbers from n to 98
 * followed bya new line
 * @n: interger parameter
 */

void print_to_98(int n)
{
	int i, j;

	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				_putchar(i);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(i);
				_putchar('\n');
			}
		}
	}
	else if (n <= 98)
	{
		for (j = n; i <= 98; i++)
		{
			if (j != 98)
			{
				_putchar(j);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(i);
				_putchar('\n');
			}
		}
	}
}

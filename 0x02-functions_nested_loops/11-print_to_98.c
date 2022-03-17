#include "main.h"
#include <stdio.h>

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
				printf("%d ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
	else if (n <= 98)
	{
		for (j = n; i <= 98; i++)
		{
			if (j != 98)
			{
				printf("%d ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
}

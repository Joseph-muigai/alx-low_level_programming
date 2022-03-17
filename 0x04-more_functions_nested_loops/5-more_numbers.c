#include "main.h"
/**
 * more_numbers(void)-prints 10 times the numbers from 0 to 14
 */

void more_numbers(void)
{
	char j;
	int i;


	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}


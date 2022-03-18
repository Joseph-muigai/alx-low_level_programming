#include "main.h"

/**
 *print_triangle(int size)- prints a triangle, followed by a new line
 *@size:interger parameter
 */

void print_triangle(int size)
{
	int i, j;


	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
	_putchar('\n');

}

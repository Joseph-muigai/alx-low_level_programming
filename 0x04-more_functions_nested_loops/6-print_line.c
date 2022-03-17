#include "main.h"

/**
 * print_line(int n)-draws a straight line in the terminal
 * @n:interger parameter
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

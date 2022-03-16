#include "main.h"

/**
 * print_sign(int n)-pints the sign of a number
 * Return:1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less that zero
 * @n:interger parameter to check
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}

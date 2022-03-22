#include "main.h"
/**
 * print_rev-prints a string, in reverse, followed by a new line.
 * @s:string to be printed in reverse
 */

void print_rev(char *s)
{
	int i, j, len;

	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	len = i;

	for (i = len; i >= 0; i++)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

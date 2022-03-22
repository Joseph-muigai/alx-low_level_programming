#include "main.h"

/**
 * puts_half- prints half of a string, followed by a new line.
 * @str:pointer to the string to be printed
 */

void puts_half(char *str)
{
	int i, k, str_len;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		str_len = i / 2;
	}
	else
	{
		str_len = (i - 1) / 2;
	}
	for (k = str_len; k <= i; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}

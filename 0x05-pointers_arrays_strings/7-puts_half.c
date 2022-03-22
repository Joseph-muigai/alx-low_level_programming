#include "main.h"

/**
 * puts_half- prints half of a string, followed by a new line.
 * @str:pointer to the string to be printed
 */

void puts_half(char *str)
{
	int i, j, k, str_len;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	j = i;

	if (j % 2 == 0)
	{
		str_len = j / 2;
	}
	else
	{
		str_len = (j - 1) / 2;
	}
	for (k = (str_len + 1); k <= j; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}

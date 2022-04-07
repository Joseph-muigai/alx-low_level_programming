#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size:size
 * @c:the string
 * Return: null if it fails else pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(char) * size);

	if (p == null)
	{
		return (0);
	}

	i = 0;

	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}

#include <stdio.h>
/**
 * _memset-a function that fills memory with a constant byte.
 * @s:pointer to a char
 * @b:variable of type char
 * @n:varible of type unsigned int
 * Return:n
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}

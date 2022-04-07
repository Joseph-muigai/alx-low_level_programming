#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  a function that concatenates two strings.
 * @s1:one of the strings
 * @s2:one of the atrings
 * Return: null on failure, pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len2++;
	}

	conc = malloc(sizeof(char) * (len1 + len2 + 1));

	if (conc == NULL)
	{
		return (NULL);
	}
	if (s1)
	{
		while (i < len1)
		{
			conc[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (j < len2)
		{
			conc[j] = s2[i];
			j++;
		}
	}
	return (conc);
}

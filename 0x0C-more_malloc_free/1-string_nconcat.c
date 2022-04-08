#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat-a function that concatenates two strings
 * @s1:one of the strings
 * @s2:one of the strings
 * @n:no of bytes of s2 to be copied
 * Return:null if it fails,
 * pointer to the concatensted string on success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = 0;
	while (s1[i] != '\0')
		i++;

	conc = malloc(sizeof(char) * (i + n + 1));
	if (conc == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		conc[i] = s1[i];
		i++;
	}

	while (j < n && s2[j] != '\0')
	{
		conc[i] = s2[j];
		i++;
		j++;
	}
	return (conc);
}

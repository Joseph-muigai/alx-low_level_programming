#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str:string
 * Return:null if str is null,pointer to copy of given string
 */

char *_strdup(char *str)
{
	char *strDuplicate;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	strDuplicate = malloc(sizeof(char) * i);

	if (strDuplicate == NULL)
	{
		return (NULL);
	}
	j = 0;

	while (str[j] != '\0')
	{
		strDuplicate[j] = str[j];
		j++;
	}
	return (strDuplicate);
}

#include "main.h"
/**
 * *_strcpy-hat copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest:pointer to the deistination
 * @src:pointer to the source
 * Return:dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

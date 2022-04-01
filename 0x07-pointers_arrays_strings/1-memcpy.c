#include "main.h"
/**
 * _memcpy- copies memory area
 * @dest:pointer to where the memory area will be copied to
 * @src:pointer to whre the memory area is beingcopied from
 * @n: number of bytes to be copied
 * Return:dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

#include "main.h"
#include <stdlib.h>
/**
 * _calloc-allocates memory for an array
 * @nmemb:number of array elemets
 * @size:the size in bytes of the elemts
 * Return:0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *m;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	m = malloc(nmemb * size);

	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		*(m + i) = 0;
	}
	return ((void *)memory);
}

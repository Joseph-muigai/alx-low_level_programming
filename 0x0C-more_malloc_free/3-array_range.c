#include "main.h"
#include <stdlib.h>

/**
 * array_range- a function that creates an array of integers.
 * @min:minimum term in the array
 * @max:maximun term in tne array
 * Return:if it fails null,elsepointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);

	size = size(max - min) + 1;

	p = malloc(size * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size && min <= max; i++, m++)
		*(p + i) = min;
	return (p);
}

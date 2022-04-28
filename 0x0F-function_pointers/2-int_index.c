#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index- funtion that searces for an interger
 * @array:the array
 * @size:the size of the array
 * @cmp:pointer to the function to ne used to compare values
 * Return:first element onsucess or -1 on failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0 ; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

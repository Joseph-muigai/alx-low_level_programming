#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - a function tht executes a function
 * given as a parameter on each element of an array
 * @array:the array
 * @size: size of the array
 * @action:the funtion passed as parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0 ; i < size; i++)
		{
			action(array[i]);
		}
	}
}

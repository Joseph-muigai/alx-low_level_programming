#include "main.h"

/**
 * swap_int-swaps the values of two intergers
 * @a:pointers to the intergers being swapped
 * @b:pointers to the intergers being swapped
 */

void swap_int(int *a, int *b)
{
	int i;


	i = *a;
	*a = *b;
	*b = i;
}

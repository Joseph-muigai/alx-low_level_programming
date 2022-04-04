#include "main.h"
/**
 * recursive_sqrt-computes the squareroot recursively
 * @start:inital number
 * @end: last number within the limit of number
 * @m:the given number
 * Return: 1 if squarerrot is not found else squareroot
 */

int recursive_sqrt(int start, int end, int m)
{
	long mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == m)
		{
			return (mid);
		}

		if (mid * mid > m)
		{
			return (recursive_sqrt(start, mid - 1, m));
		}

		if (mid * mid < m)
		{
			return (recursive_sqrt(mid + 1, end, m));
		}
	}
	return (-1);
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n:the number
 * Return:square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (recursive_sqrt(2, n, n));
}

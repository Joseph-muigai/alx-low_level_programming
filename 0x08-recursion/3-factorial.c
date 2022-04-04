#include "main.h"
/**
 * factorial-REturns the factorial of a number
 * @n:the provides number
 * Return:the factorial of anumber
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

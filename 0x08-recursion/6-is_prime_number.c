#include "main.h"
/**
 * prime_number -calculates if a number is prime recursively
 * @n:numer to be evaluated
 * @i:iterator
 * Return: 1 if n is prime else 0
 */

int prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime_number(n, i - 1));
}

/**
 * is_prime_number -returns 1 if the input integer is a prime number
 * otherwise return 0.
 * @n:number to evaluate
 * Return: 1 if n is prime else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_number(n, n - 1));
}

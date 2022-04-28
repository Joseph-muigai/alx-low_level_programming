#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add -returns the sum of a and b
 * @a: first parameter
 * @b:secona parameter
 * Return: sums of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the differene of a and b
 * @a: forst parameter
 * @b:second parameter
 * Return:the difference of a nad b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul-returns the product of and b
 * @a:the first parameter
 * @b: the second parameter
 * Return:the product of a nad b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result od the division of a nd b
 * @a : the first  parameter
 * @b:the second parameter
 * Return: the dresut of division between a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod-returns the remainder if the dividion of a and b
 * @a: the first parameter
 * @b: thsecond parameter
 * Return: the remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}


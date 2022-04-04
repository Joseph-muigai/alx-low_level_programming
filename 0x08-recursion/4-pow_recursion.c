#include "main.h"
/**
 * _pow_recursion-a function that returns the value of x
 * raised to the power of y
 * @x:value to be raised
 * @y:value thax x is raised by
 * Return:the value of x reaised by y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x *  _pow_recursion(x, (y - 1)));
}

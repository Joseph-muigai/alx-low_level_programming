#include "main.h"

/**
 * _abs(int)-computes the absolute value of an integer
 * @i :interger parameter to check
 * Return: i*-1 if less than 0 otherwise i
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}

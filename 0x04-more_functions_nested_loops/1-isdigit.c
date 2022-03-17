#include "main.h"

/**
 * _isdigit(int c)-checks if a nmber is a digit
 * Return:1 if c is a digit otherwise 0
 * @c:interger parameter
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

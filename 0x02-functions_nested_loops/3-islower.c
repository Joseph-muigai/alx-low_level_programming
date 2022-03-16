#include "main.h"
/**
 * _islower(int c)-checks if c is lowercase
 * Return:1 if c is lowercase 0 otherwise
 * @c: interger parameter to check
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

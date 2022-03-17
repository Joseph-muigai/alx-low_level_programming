#include "main.h"
/**
 * _isupper(int c)-checks for uppercase character
 * Return:1 if c is uppercase otherwise 0
 * @c: interger parameter
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

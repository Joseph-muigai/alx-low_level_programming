#include "main.h"

/**
 * _isalpha(int c)-checks for alphabetic character
 * Return: 1 if c is a letter lowecase or uppercase 0 otherwise
 * @c: int parameter to check
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

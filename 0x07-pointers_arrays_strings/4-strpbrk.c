#include "main.h"
/**
 * _strpbrk-a function that searches a string for any of a set of bytes.
 * @s:the string to be searched
 * @accept:set of bytes
 * Return:a pointer to the bytes in s that
 * matches the one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}

		}
		return ('\0');
	}
}

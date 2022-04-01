#include "main.h"

/**
 * _strchr-function that locates a character in a string
 * @s:string in which the character is located
 * @c:character to be located
 * Return:pointer to the first occurence of the charcter c
 * or Null ifcharacter not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s[i]);

		}
		else
		{
			return (NULL);

		}
		i++;
	}
}

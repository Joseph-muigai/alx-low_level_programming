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
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');


}

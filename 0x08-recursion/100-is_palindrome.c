#include "main.h"
/**
 * _strg_len - returns the length of the string
 * @s:the string
 * Return: length of the string
 */

int _strg_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strg_len(s + 1));
}

/**
 * check_pal -checks if the string is a palindrome
 * @s:the string
 * @i:iterator
 * @len:lenth of the string
 * Return:1 if its a palindrome else 0
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (check_pal(s, i + 1, len - 1));
}
/**
 * is_palindrome - checks if string is palindrome
 * @s:string to be checked
 * Return: 1 if its a palindrome else 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pal(s, 0, _strg_len(s)));
}

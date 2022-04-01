#include "main.h"

/**
 * _strspn-afunction that gets the kenth of a prefix substring
 * @s:string
 * @accept:string containig the substring to be matched aganist s
 * Return: number of bythe in the inital segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int length;


	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)

		if (s[i] == accept[j])
			length++;
		if (accept[j] == '\0')
			return (length);
	}
	return (length);
}

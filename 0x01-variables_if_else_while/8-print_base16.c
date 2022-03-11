#include <stdio.h>

/**
 *main - program that prints hexadecimals
 *Return: 0 exit code of the program if successful
 */

int main(void)
{
	char alphabet;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

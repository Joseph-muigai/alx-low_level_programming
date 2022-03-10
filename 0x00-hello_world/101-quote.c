#include <stdio.h>
#include <unistd.h>
/**
 * main - prints a string to standard error
 *Return: program returns 1
 */
int main(void)
{
	write(1, "and that piece of art is useful\" -Dora korpar, 2015-10-19,\n", 11);
	return (1);
}

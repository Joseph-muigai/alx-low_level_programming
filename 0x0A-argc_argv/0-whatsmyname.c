#include <stdio.h>
/**
 * main -function that prints the name of the program
 * @argc: number of arguments passed to the program
 * @argv: array containig the arguments
 * Return:0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	argc = argc;
	printf("%s\n", *argv);
	return (0);
}

#include <stdio.h>
/**
 * main -ultiplies two numbers
 * @argc:number of command line arguments
 * @argv:array of the command line arguments
 * Return:0
 */

int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc <= 2)
	{
		printf("Error");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}

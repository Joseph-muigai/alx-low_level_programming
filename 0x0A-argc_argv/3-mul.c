#include <stdio.h>
#include <stdlib.h>
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

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i * j;
	printf("%d\n", result);
	return (0);
}

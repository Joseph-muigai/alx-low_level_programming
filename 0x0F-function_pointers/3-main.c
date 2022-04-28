#include "3-calc.h"
/**
 * main - progarm that performs simple operations
 * @argc:number of arguments
 * @argv:arrayof arguments
 * Return:0
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_fun(argv[2]);

	if (!func)
	{
		printf("Errot\n");
		exit(98);
	}
	o = *argv[2];

	if ((o == '/' || o == "%") && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(arg1, arg2);

	printf("%d\n", result);

	return (0);
}

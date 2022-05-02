#include "variadic_functions.h"

/**
 * print_numbers - function that prints anumbers followed
 * by a new line
 * @separator:string to be printed between the numbers
 * @n:number of intergers to be passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (!str)
			str = "(nil)";

		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	va_end(list);

	printf("\n");
}

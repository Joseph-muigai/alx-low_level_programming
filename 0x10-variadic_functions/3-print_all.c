#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */


void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sprt = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sprt, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sprt, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sprt, va_arg(list, float));
					break;
				case 's':
					str = va_arg(list, char *);

					if (!str)
						str = '(nil)';
					printf("%s%s", sprt, str);
					break;
				default:
					i++;
					continue;
			}
			sprt = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}

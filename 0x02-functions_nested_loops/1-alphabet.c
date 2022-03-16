#include "main.h"
/**
 *print_alphabet-prints the alphabet in lowercase followed y a new line
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

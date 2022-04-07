#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac:one of the arguments
 * @av:one of the arguments
 * Return: 0,pointer to a string
 */

char *argstostr(int ac, char **av)
{
	char *conc;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}

	conc = malloc(sizeof(char) * (size + 1));
	if (conc == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			conc[k++] = av[i][j];
		}
		conc[k++] = '\n';
	}
	conc[k] = '\0';
	return (conc);
}


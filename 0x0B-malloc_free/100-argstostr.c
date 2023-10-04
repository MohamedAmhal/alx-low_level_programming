#include "main.h"
#include <stdlib.h>

/**
 * argstostr - this is a function concatenate the chars
 * @ac: the first variable
 * @av: the second variable
 * Return: 0 or 1
 */

char *argstostr(int ac, char **av)
{
	char *fo;
	int i = 0;
	int j = 0;
	int c = 0;
	int u = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++)
	{
		for (; av[i][j]; j++)
			c++;
	}
	c += ac;
	fo = malloc(sizeof(char) * c + ac);
	if (fo == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			fo[u] = av[i][j];
			u++;
		}
		if (fo[u] == '\0')
			fo[u++] = '\n';
	}
	return (fo);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - this function allocate memory
 * @b: this is the variable contient the legnth
 * Return: apointer
 */

void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}

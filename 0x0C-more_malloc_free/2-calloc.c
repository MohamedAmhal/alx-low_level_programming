#include "main.h"
#include <stdlib.h>

/**
 * _calloc - this a function lovate a space in the memory
 * @nmemb: this a variable contient a number of element in array
 * @size: this a varaible contient the size of array
 * Return: a pointer that contient the array located
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
	{
		a[i] = 0;
	}
	return (a);
}

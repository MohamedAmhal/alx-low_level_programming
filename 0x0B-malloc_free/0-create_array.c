#include "main.h"
#include <stdlib.h>

/**
 * create_array - this is the function mallloc
 * @size: the first variable
 * @c: the second variable
 * Return: the 1 or 0
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(char));
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

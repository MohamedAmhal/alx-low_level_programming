#include "main.h"
#include <stdlib.h>

/**
 * array_range - this is a function return the array
 * @min: the min of the array
 * @max: the max of the array
 * Return: the pointer that contient the array allocated
 */

int *array_range(int min, int max)
{
	int *a;
	int size;
	int i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	a = malloc(sizeof(int) * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}

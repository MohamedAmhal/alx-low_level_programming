#include "function_pointers.h"
#include <stdio.h>

/**
 *  array_iterator - this the function arrray
 *  @array: the name of parametres
 *  @size: the function pointer
 *  @action: nothing
 *  Return: a pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;
	for (j = 0; j < size; j++)
		action(array[j]);
}

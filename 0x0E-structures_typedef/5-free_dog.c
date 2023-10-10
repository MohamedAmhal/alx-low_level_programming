#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - this is the function
 * dog_t - this the structure
 * @d: the parameter
 * Return: nothing void func
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

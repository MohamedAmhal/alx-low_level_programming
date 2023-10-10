#include "dog.h"
#include <stdlib.h>

/**
 * dog_t - this the structure
 * @d: the parameter
 * free_dog - the parameters
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

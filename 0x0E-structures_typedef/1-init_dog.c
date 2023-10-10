#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - this the function init
 * struct dog - this the structure
 * @d: variable 1
 * @name: variable 2
 * @age: variable 3
 * @owner: the variable 4
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

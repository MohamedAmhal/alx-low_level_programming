#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - this is the function print the element of the structure
 * struct dog - this is the structure
 * @d: the parameter
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}

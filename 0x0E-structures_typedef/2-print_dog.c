#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - this is the function print the element of the structure
 * struct dog - this is the structure
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("name : (nil)\n");
	else
		printf("name : %s\n",d->name);
	if (d->age == 0)
		printf("age : (nil)\n");
	else
		printf("age : %f\n",d->age);
	if (d->owner == NULL)
		printf("owner : (nil)\n");
	else
		printf("owner : %s\n",d->owner);
}

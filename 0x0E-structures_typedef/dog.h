#ifndef DOG_H
#define DOG_H

/**
 *  struct dog - structure
 *  @name:the first vr
 *  @age: the second vr
 *  @owner: te third vr
 *  Description: long
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

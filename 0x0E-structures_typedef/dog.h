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
 /**
  * dog_t - typedef for struct dog
  **/
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void free_dog(dog_t *d);
#endif

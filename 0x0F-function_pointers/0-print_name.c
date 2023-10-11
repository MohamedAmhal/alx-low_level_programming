#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - this is a function pointer that print the name
 * @name: thia is the first variable
 * @f: this is a pointer function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

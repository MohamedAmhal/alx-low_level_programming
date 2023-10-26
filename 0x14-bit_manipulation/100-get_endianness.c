#include "main.h"

/**
 * get_endianness - this is a function
 */

int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}

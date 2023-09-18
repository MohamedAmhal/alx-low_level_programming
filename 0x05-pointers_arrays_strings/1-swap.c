#include "main.h"

/**
 * swap_int - this function swaps between the two values a and b
 *
 * @a:the variable one pointer
 *
 * @b:the variable two pointer
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

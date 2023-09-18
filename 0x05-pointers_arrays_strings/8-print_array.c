#include "main.h"

/**
 * print_array - thsi function print your arrays
 *
 * @a:the arrays pointer
 *
 * @n:the lenght of table
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
		printf(", ");
		}
	}
	printf("\n");
}

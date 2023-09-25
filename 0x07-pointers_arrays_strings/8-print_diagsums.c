#include "main.h"

/**
 * print_diagsums - thsi function print the addition two the matrix
 * @a:the parameter one
 * @size:the size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}
	for (j = 0; j < size; j++)
	{
		sum2 = sum2 + a[j * size + (size - 1 - j)];
	}
	printf("%d, %d\n", sum1, sum2);
}

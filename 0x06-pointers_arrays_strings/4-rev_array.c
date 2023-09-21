#include "main.h"

/**
 * reverse_array - this function reverse the array
 * @a:the varible 1
 * @n:the lenght of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;
	int l;

	l = n - 1;
	i = 0;
	while (i <= (n - 1) / 2 && l >= (n - 1) / 2)
	{
		tmp = a[i];
		a[i] = a[l];
		a[l] = tmp;
		l--;
		i++;
	}
}

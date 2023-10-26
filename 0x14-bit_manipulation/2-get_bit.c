#include "main.h"

/**
 * get_bit - this is a function that return an index
 * @n: gg
 * @index: ghgv
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}

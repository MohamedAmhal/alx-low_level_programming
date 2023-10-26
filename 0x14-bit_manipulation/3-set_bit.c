#include "main.h"

/**
 * set_bit - this is a function
 * @n: this is a variable
 * @index: ds
 * Return: 1 oe -1;
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}

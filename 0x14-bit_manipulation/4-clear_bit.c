#include "main.h"

/**
 * clear_bit - this a function that clear a bit
 * @n: fffg
 * @index: djdnd
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

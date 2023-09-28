#include "main.h"

/**
 * is_prime_number - this is the function primer
 * @n: the varaible
 * Return: integer
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (division(n, n - 1));
}


/**
 * division - this is the function div
 * @n:dsjdd
 * *@i:dhdkdbd
 * Return: the integer
 */

int division(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (division(n, i - 1));
}

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - this is a variadic function
 * @n: this is the variable count
 * Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
	int res = 0;
	int tmp = 0;
	unsigned int i;

	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(list, int);
		res += tmp;
	}
	return (res);
}

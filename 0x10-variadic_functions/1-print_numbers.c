#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - this is a variadic functionss
 * @separator: the seperator
 * @n: the length
 * Return:O
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}

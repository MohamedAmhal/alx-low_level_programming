#include "main.h"

/**
 * print_line - this function print a line in terminal
 *
 * @n:this number should be pointed in - if less than 0 they print a new line
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}

#include "main.h"

/**
 * print_rev - this function print the reverse of a string
 *
 * @s:the varible stocker
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

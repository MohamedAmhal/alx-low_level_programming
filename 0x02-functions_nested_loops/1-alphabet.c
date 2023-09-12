#include "main.h"

/**
 * the fuction -alphabet print the alphabet in lowercase !!
 *
 * retun 0 in success program and 1 in errer program
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

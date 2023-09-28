#include "main.h"

/**
*	_print_rev_recursion - this function print the string reverse!
*	@s:the varble content the string
*	Return: void anything
*/

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}

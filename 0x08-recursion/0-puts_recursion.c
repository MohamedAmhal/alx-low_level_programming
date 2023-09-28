#include "main.h"

/**
 * _puts_recursion - this function print the string it seems the puts
 *
 * @s:the varible contente the string
 * Return: void function
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}

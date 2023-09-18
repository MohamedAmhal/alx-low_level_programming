#include "main.h"

/**
 * _puts - this function print the content strig in french chaine de caractere
 *
 * @str:thsi variable stock the contente
 *
 * Return:0 successs
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}

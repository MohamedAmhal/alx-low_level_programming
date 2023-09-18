#include "main.h"

/**
 * puts_half - thsi function help you to print the half of your string
 *
 * @str: this is the varible
 *
 */

void puts_half(char *str)
{
	int i = 0, j, l = 0;

	while (str[i] != '\0')
	{
		l++;
		i++;
	}
	if (l % 2 == 0)
	{
		for (j = l / 2; j < l; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = (l + 1) / 2; j < l; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}

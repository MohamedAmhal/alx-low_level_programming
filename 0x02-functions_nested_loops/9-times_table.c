#include "main.h"
/**
 * times_table - prints the 9 times table
 * Description: prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int r, c, pro, div, divint;


	for (r = 0; r <= 9; r++)
	{
	for (c = 0; c <= 9; c++)
	{
	pro = r * c;
	divint = pro / 10;
	div = pro % 10;
	if (c == 0)
	{
	_putchar('0');
	}
	else if (pro < 10)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(div + '0');
	}
	else
	{


		_putchar(',');
		_putchar(' ');
		_putchar(divint + '0');
		_putchar(div + '0');
	}
	}
	_putchar('\n');
	}
}

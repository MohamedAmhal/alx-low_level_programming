#include "main.h"

/**
* print_alphabet_x10 - print the alphabest 10 times
*
* Return: the function return 0 if that succuss
*/

void print_alphabet_x10(void)
{

char u;
int i;

for (i = 0; i < 10; i++)
{
for (u = 'a'; u <= 'z'; u++)
{
_putchar(u);
}
_putchar('\n');
}

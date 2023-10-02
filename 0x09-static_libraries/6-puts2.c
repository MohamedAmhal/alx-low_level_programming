#include "main.h"

/**
* puts2 - this function print the first line in a string
*
* @str:this is a varible
*/

void puts2(char *str)
{
int i;
int j = 0;
int l = 0;

while (str[j] != '\0')
{
l++;
j++;
}
for (i = 0; i < l; i++)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

#include "main.h"

/**
* leet - this function converte the alphabet in numbers
* @n:thid varible is storted
* Return:void
*/
char *leet(char *n)
{
int i = 0;
int j;

while (n[i] != '\0')
{
i++;
}
for (j = 0; j < i; j++)
{
if (n[j] == 'a' || n[j] == 'A')
n[j] = '4';
else if (n[j] == 'e' || n[j] == 'E')
n[j] = '3';
else if (n[j] == 'o' || n[j] == 'O')
n[j] = '0';
else if (n[j] == 't' || n[j] == 'T')
n[j] = '7';
else if (n[j] == 'l' || n[j] == 'L')
n[j] = '1';
else
continue;
}
return (n);
}

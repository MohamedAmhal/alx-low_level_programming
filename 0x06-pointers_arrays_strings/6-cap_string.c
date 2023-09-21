#include "main.h"

/**
* cap_string - this function transform every words in the begginning to upper
* case
* @a:the varible 1
* Return: char
*/

char *cap_string(char *a)
{
int i = 0;
int j;

while (a[i] != '\0')
{
i++;
}
if(a[0] >= 'a'&& a[0] <= 'z')
    a[0] = a[0] -32;
for (j = 1; j < i; j++)
{
if (a[j] == ' ' || a[j] == '\t' || a[j] == '\n' || a[j] == ',' ||
a[j] == ';' || a[j] == '.' || a[j] == '!' ||
a[j] == '?' || a[j] == '\"' || a[j] == '(' || a[j] == ')' ||
a[j] == '{' || a[j] == '}')
{
if (a[j + 1] >= 'a' && a[j + 1] <= 'z')
a[j + 1] = a[j + 1] - 32;
}
}
return (a);
}

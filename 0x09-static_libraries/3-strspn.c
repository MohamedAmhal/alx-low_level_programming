#include "main.h"

/**
* _strspn - this function print the lenght of a string in onther string
* @s:the first parameter
* @accept:the seconde parameter
* Return: void
*/

unsigned int _strspn(char *s, char *accept)
{
int i, j;
int t = 0;
int n = 0;
unsigned int l = 0;

while (accept[t])
t++;
while (s[n])
n++;
for (i = 0; i < n; i++)
{
for (j = 0; j < t; j++)
{
if (s[i] == accept[j])
{
l++;
break;
}
else if (accept[j + 1] == '\0')
return (l);
}
}
return (l);
}

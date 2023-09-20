#include "main.h"

/**
* _strcmp - this function compare two string
* @s1:varible 1
* @s2:varible 2
* Return:void
*/

int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;
while (s1[i])
i++;
while (s2[j])
j++;
if (i > j)
return (15);
else if (i == j)
return (0);
else
return (-15);
}

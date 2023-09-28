#include "main.h"

/**
* wildcmp - this is a function
* @s1:difnfkf
* @s2:foejfofn
* Return: the integer
*/

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 == '*' && *s2 != '\0')
return (wildcmp(s1, s2 + 1));
return (*s2 == '\0');
}
if (*s2 == '*')
{
return (wildcmp(s1 + 1, s2) || (wildcmp(s1, s2 + 1)));
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);

}

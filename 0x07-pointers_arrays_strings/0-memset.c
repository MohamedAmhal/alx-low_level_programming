#include "main.h"

/**
* _memset - this function replace the caracher specified in the string
* @s:this varible contient the string
* @b:this varible contient the carachter
* @n:the number of bytes
* Return: the char return
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

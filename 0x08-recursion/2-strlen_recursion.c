#include "main.h"
/**
*	_strlen_recursion - this is the function calculate the lenght
*	@s:the varible string
*	Return: int
*/

int _strlen_recursion(char *s)
{
int i = 0;

if (*s != '\0')
{
i = i + 1;
i = i + _strlen_recursion(s + 1);
}
return (i);
}

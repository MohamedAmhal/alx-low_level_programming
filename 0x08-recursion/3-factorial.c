#include "main.h"

/**
* factorial - this is the function
* @n:the variable
* Return: integer
*/

int factorial(int n)
{
if (n == 0)
return (1);
else if (n < 0)
return (-1);
else
{
return (n * factorial(n - 1));
}
}

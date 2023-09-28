#include "main.h"

/**
*	_sqrt_recursion - this is a function sqrt
*	@n:the variable
*	Return: int
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (fastsqrt(n, 0));
}

/**
 * fastsqrt - the function fast
 * @n:xjdbsdj
 * @i:dndkdndlsns
 * Return: int
 */


int fastsqrt(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (fastsqrt(n, i + 1));
}

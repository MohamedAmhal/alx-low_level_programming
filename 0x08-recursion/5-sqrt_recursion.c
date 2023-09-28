#include "main.h"

/**
*	_sqrt_recursion - this is a function sqrt
*	@n:the variable
*	@i:the fast variable
*	fastsqrt - the function fast
*	Return: int
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (fastsqrt(n, 0));
}


int fastsqrt(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (fastsqrt(n, i + 1));
}

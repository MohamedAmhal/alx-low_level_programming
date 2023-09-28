#include "main.h"

/**
 * is_palindrome - the palandrome string
 * @s:the variable
 * Return: integer
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (para(s, 0, strllen(s)));
}

/**
 * strllen - fkfnfkfn
 * @s:fjfjfkd
 * Return:fjffdd
 */

int strllen(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + 1;
		i = i + strllen(s + 1);
	}
	return (i);
}


/**
 * para - vkfbdkfn
 * @s:fifhfldk
 * @i:dfhdldj
 * @z:difhdkd
 * Return: interger
 */

int para(char *s, int i, int z)
{
	if (*(s + i) != *(s + z - 1))
		return (0);
	if (i > z)
		return (1);
	return (para(s, i + 1, z - 1));
}

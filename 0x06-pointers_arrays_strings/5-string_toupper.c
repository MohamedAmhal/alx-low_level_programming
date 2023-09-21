#include "main.h"

/**
 * string_toupper - this function convert the letters lowercase in uppercase
 *
 * @n:the varible 1
 * Return: nothing void
 */
char *string_toupper(char *n)
{
	int i = 0;
	int j;

	while (n[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (n[j] >= 'a' && n[j] <= 'z')
			n[j] = n[j] - 32;
	}
	return (n);
}

#include "main.h"

/**
 * _strpbrk - thsi function raturn the first occurence in the string
 * @s:the first parameter
 * @accept:the seconde parameter
 * Return: 0 always success
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int n = 0;
	int l = 0;
	int k = 0;

	while (s[n])
		n++;
	while (accept[l])
		l++;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < l; j++)
		{
			if (s[i] == accept[j])
			{
				k = 9;
				break;
			}
		}
		if (k == 9)
			break;
	}
	if (k == 9)
		return (&s[i]);
	else
		return (0);
}

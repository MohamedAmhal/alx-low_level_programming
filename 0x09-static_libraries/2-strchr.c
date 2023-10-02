#include "main.h"

/**
 * _strchr - this function search the first occurence of a unsigned char
 * @s:the first parameter
 * @c:the seconde parameter
 * Return: the value char
 */

char *_strchr(char *s, char c)
{
	int i;
	int y = 0;
	int j = 0;

	while (s[j] != '\0')
		j++;
	for (i = 0; i <= j; i++)
	{
		if (s[i] == c)
		{
			y = 1;
			break;
		}
	}
	if (y == 1)
		return (&s[i]);
	else
		return (0);
}

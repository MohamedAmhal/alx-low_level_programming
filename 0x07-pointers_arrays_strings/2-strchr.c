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
	int j = 0;

	while (s[j] != '\0')
		j++;
	for (i = 0; i < j; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	return (&s[i]);
}

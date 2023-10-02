#include "main.h"

/**
 * _strstr - this function return the address of the first occurente
 * @haystack:the first parameter
 * @needle:the seconde parameter
 * Return: always 0 success
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *n = haystack;
		char *m = needle;

		while (*n == *m && *m != '\0')
		{
			n++;
			m++;
		}
		if (*m == '\0')
			return (haystack);
	}
	return (0);
}

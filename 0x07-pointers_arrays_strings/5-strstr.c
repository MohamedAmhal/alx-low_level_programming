#include "main.h"

/**
 * _strstr - this function return the address of the first occurente
 * @haystack:the first parameter
 * @needle:the seconde parameter
 * Return: always 0 success
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int l = 0;
	int n = 0;
	int k = 0;

	while (haystack[l])
		l++;
	while (needle[n])
		n++;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < l; j++)
		{
			if (needle[i] == haystack[j])
			{
				k = 9;
				break;
			}
		}
		if (k == 9)
			break;
	}
	if (k == 9)
		return (&haystack[j]);
	else
		return (NULL);
}

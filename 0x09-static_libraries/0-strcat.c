#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return:void
 */
char *_strcat(char *dest, char *src)
{
	int l = 0;
	int j;
	int i = 0;

	while (dest[i] != '\0')
	{
		l++;
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[l] = src[j];
		j++;
		l++;
	}
	dest[l] = '\0';
	return (dest);
}

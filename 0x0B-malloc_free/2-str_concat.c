#include "main.h"
#include <stdlib.h>

/**
 * str_concat - this is a function str_concat
 * @s1: this is a first variable
 * @s2: second variable
 * Return: 0 success
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *v;
	int a = 0;
	int b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	v = malloc(sizeof(char) * (i + j + 1));
	if (v == NULL)
		return (NULL);
	while (s1[a])
	{
		v[a] = s1[a];
		a++;
	}
	while (s2[b])
	{
		v[a] = s2[b];
		a++;
		b++;
	}
	v[a] = '\0';
	return (v);
}

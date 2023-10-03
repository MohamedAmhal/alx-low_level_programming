#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this is the function strdup
 * @str: this is the first variable
 * Return: return 0 and 1
 */

char *_strdup(char *str)
{
	char *a;
	int l = 0;
	int i;

	if (str == NULL)
		return (NULL);
	while (str[l])
		l++;
	a = malloc(sizeof(char) * (l + 1));
	if (a == 0)
		return (NULL);
	for (i = 0; i < l; i++)
		a[i] = str[i];
	return (a);
}

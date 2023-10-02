#include "main.h"

/**
 * _strlen - this function count the number of caracter in a statements
 *
 * @s:this varibale content the char varibale
 * Return:the count value
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

#include "main.h"

/**
 * rev_string - thsi function reverse the string
 *
 * @s:the pointer pointe on fun main
 */

void rev_string(char *s)
{
	int i = 0;
	char pop;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i / 2; j++)
	{
		pop = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = pop;
	}
}

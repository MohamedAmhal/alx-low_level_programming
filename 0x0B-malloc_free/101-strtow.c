#include "main.h"
#include <stdlib.h>

/**
 * count_words - this is the function count words
 * @s: this is the first variable
 * Return: 0 success
 */
int count_words(char *s)
{
	int i = 0;
	int j = 0;
	int h = 0;
	for (; s[h] != '\0'; h++)
	{
		if (s[h] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			j++;
		}
	}
	return (j);
}
/**
 * strtow - this is a function split by spaces
 * @str:this is the first variable contente the string
 * Return: 0 success
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}

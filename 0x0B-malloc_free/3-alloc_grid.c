#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - this is a function return a array in two dimention
 * @width:this is the first variable
 * @height:this is thesecind variable
 * Return: 0 or 1
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(a[i]);
			}
			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}

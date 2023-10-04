#include "main.h"
#include <stdlib.h>

/**
 * free_grid - this is a function that return a free memory
 * @grid: the array in two dimention
 * @height:the length of the array
 * Return: a free memory
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

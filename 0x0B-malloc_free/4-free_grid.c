#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Entry point
 * @grid: input
 * @height: input
 * Return: ..
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

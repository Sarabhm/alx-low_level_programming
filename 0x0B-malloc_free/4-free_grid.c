#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function frees 2 dimensional grid.
 * @grid: 2D array of integers.
 * @height: toul of the grid.
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int a = 0;

	if (grid != NULL || height != 0)
	{
		while (a < height)
		{
			a++;
			free(grid[i]);
		}
		free(grid);
	}
}

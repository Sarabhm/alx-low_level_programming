#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
	int a;
	int b;

	b = 0;

	while (b < height)
	{
		a = 0;
		while (a < width)
		{
			printf("%d ", grid[b][a]);
			a++;
		}
		printf("\n");
		b++;
	}
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		arr[a] = malloc(width * sizeof(int));
		if (arr[a] == NULL)
		{
			while (a >= 0)
				free(arr[a--]);
			free(arr);
			return (NULL);
		}


		for (b = 0; b < width; b++)
			arr[a][b] = 0;
	}

	return (arr);
}

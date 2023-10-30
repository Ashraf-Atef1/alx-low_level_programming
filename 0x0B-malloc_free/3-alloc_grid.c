#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - create 2D array
 * @width: The width of the array
 * @height: The height of the array
 * Return: The 2D array location
 * Ashraf Atef
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int h;
	int i;
	int w;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		grid[h] = (int *)malloc(sizeof(int) * width);

		if (grid[h] == NULL)
		{
			for (i = 0; i < h; i++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}

		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}

	return (grid);
}

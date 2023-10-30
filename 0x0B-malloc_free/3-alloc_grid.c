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
	int **p;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **)malloc(sizeof(int) * height);
	if (!p)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(sizeof(int *) * width);
		if (!p[i])
		{
			free(p);
			return (NULL);
		}
		while (j < width)
		{
			p[i][j] = 0;
			j++;
		}
		j = 0;
	}
	return (p);
}

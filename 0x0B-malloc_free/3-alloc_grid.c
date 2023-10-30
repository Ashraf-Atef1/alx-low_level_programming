#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Concate the two strings in a new allocation space
 * @s1: The first string
 * @s2: The second string
 * Return: The new allocation space in memory
 * Ashraf Atef
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int) * width * height);
	if (!p)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		while (j < width)
		{
			p[i][j] = 0;
			j++;
		}
		j = 0;
	}
	return (p);
}

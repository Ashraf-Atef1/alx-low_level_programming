#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free 2D allocated array from memory
 * @grid: 2D array
 * @height: The height of the array
 * Ashraf Atef
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid)
		for (i = 0; i < height; i++)
			free(grid[i]);
}

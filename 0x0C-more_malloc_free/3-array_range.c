#include <stdlib.h>
#include "main.h"
/**
 * array_range - allocate array space contain numbers from min to max
 * @min: minumam number
 * @max: maxumam number
 * Return: array pointer
 * Ashraf Atef
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = (int *)malloc(sizeof(int) * (max - min + 1));
	if (!p)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}

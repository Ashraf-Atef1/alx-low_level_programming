#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of diagsums of the square array
 * @a: the array
 * @size: the size of the array
 * Ashraf Atef
 */

void print_diagsums(int *a, int size)
{
	int i;
	int d1 = 0;
	int d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += (&a[i])[i];
	}
	for (; i >= 0; i--)
	{
		d2 += (&a[i])[i];
	}
	printf("%d, %d\n", d1, d2);
}

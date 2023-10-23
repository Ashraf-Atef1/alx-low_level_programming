#include "main.h"
/**
 * print_diagsums - print the sum of diagsums of the square array
 * @a: the array
 * @size: the size of the array
 * Ashraf Atef
 */

void print_diagsums(int *a, int size)
{
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar((&a[i])[i]);
	}
	_putchar(',');
	_putchar(' ');
	for (; i >= 0; i++)
	{
		_putchar((&a[i])[i]);
	}
	_putchar('\n');
}

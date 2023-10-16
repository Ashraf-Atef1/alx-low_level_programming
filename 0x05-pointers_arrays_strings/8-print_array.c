#include "main.h"
#include <stdio.h>
/**
 * print_array - take an array of ints and print the n Number of carater
 * follwed by a new line
 * @a: pointer for an array of ints
 * @n: number of ints to print
 * Ashraf Atef
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (n - 1 > i)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[i]);
}

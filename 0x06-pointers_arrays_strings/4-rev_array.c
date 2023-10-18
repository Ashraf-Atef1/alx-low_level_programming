#include "main.h"
/**
 * reverse_array - reverse the content of array a
 * @a: the array
 * @n: the number of elements
 * Ashraf Atef
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = 0;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}

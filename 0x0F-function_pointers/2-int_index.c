#include "function_pointers.h"

/**
 * int_index - excute a function with each array elemnts and return
 * first index of right elemnt
 * @array: the array of elemnts
 * @size: the size of array
 * @cmp : the function to excute
 * Return: first indext of right element
 * Ashraf Atef
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	else if (array && cmp)
		for (i = 0; i < (int)size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}

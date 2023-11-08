#include "function_pointers.h"

/**
 * array_iterator - excute a function with each array elemnts
 * @array: the array of elemnts
 * @size: the size of array
 * @action : the function to excute
 * Ashraf Atef
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}

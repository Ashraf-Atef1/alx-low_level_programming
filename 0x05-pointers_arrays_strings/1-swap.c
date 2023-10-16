#include "main.h"
/**
 * swap_int - take two number pointer and swap the numbers
 * @a: pointer for the first number
 * @b: pointer for the second number
 * Ashraf Atef
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

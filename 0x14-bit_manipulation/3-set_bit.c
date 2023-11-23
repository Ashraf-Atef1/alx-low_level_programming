#include "main.h"
/**
 * set_bit - set the bit in a specific postion
 * @n: decimal number
 * @index: the index of the bit
 * Return: set value
 * Ashraf Atef
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j = 1;

	while (index)
	{
		j = j << 1;
		index--;
	}
	*n = *n | j;
	return (1);
}

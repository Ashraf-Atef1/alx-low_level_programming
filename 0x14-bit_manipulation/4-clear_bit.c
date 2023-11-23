#include "main.h"
/**
 * clear_bit - set the bit in a specific postion to 0
 * @n: decimal number
 * @index: the index of the bit
 * Return: 1
 * Ashraf Atef
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j = 1;

	if (index > sizeof(*n) * 8 - 1)
		return (-1);
	while (index)
	{
		j = j << 1;
		index--;
	}
	*n = *n & ~j;
	return (1);
}

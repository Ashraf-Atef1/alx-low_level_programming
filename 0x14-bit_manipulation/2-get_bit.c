#include "main.h"
/**
 * get_bit - git the bit in a specific postion
 * @n: decimal number
 * @index: the index of the bit
 * Return: bit value
 * Ashraf Atef
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int j = 1;

	if (index > sizeof(n) * 8 - 1)
		return (-1);
	while (index)
	{
		j = j << 1;
		index--;
	}
	while (j)
	{
		return ((n & j) ? 1 : 0);
	}
	return (-1);
}

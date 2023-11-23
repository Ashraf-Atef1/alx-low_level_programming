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
	unsigned int j = 1, sum = n;

	while (index)
	{
		j = j << index;
		index--;
	}
	while (j)
	{
		return ((sum & 1 << index) ? 1 : 0);
	}
	return (-1);
}

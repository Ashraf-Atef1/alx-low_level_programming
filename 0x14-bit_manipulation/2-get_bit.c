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
	return ((n & 1 << index) ? 1 : 0);
}

#include "main.h"
/**
 * flip_bits - get the number of bits to filps to get another number
 * @n: decimal number
 * @m: decimal number
 * Return: number of bits to flip
 * Ashraf Atef
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j = 0;

	while (n || m)
	{
		if ((n & 1) ^ (m & 1))
		{
			j++;
		}
		n = n >> 1;
		m = m >> 1;
	}
	return (j);
}

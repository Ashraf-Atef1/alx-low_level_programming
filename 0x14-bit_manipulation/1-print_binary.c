#include "main.h"
/**
 * print_binary - convert decimal to binary and print it out
 * @n: decimal number
 *
 * Ashraf Atef
 */

void print_binary(unsigned long int n)
{
	unsigned int j = 1, sum = n;

	while (j << 1 <= n)
		j = j << 1;
	while (j)
	{
		_putchar((sum & j) ? '1' : '0');
		j = j >> 1;
	}
}

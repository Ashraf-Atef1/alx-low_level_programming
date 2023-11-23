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

	while (j * 2 <= n)
		j = j << 1;
	while (j)
	{
		printf("%c", (sum & j) ? '1' : '0');
		j = j >> 1;
	}
}

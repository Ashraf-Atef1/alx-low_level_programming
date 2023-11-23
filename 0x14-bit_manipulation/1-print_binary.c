#include "main.h"
/**
 * print_binary - convert decimal to binary and print it out
 * @n: decimal number
 *
 * Ashraf Atef
 */

void print_binary(unsigned long int n)
{
	unsigned int j = 0, sum = 0;
	int i = 0;

	while (b[i])
		i++;
	for (j = 1, i--; i >= 0; j *= 2, i--)
		if (b[i] == '1')
			sum += j;
		else if (b[i] != '0')
			return (0);

	return (sum);
}

#include "main.h"
/**
 * print_binary - convert decimal to binary and print it out
 * @n: decimal number
 *
 * Ashraf Atef
 */

void print_binary(unsigned long int n)
{
	if (n)
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}

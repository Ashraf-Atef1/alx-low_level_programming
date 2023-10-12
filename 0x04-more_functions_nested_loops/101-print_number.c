#include "main.h"

/**
 * print_number - print the input number by _putcahr()
 * @n: the number
 * Ashraf Atef
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		k = n;
	}

	if (k / 10 != 0)
	{
		print_number(k / 10);
	}
	_putchar((k % 10) + '0');
}

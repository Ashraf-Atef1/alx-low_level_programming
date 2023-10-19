#include "main.h"
/**
 * print_number - prints number by _putchar
 * @n: number to be print
 * Ashraf Atef
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n / 10 == 0)
	{
		_putchar(n + '0');
	}
	else
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}

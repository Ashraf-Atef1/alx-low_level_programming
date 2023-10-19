#include "main.h"
/**
 * print_number - prints number by _putchar
 * @n: number to be print
 * Ashraf Atef
 */
void print_number(int n)
{
	unsigned int num = 0;

	if (n < 0)
	{
		num = n * -1;
		_putchar('-');
	}
	else
	{

		num = n;
	}
	if (num / 10 == 0)
	{
		_putchar(num + '0');
	}
	else
	{
		print_number(num / 10);
		_putchar(num % 10 + '0');
	}
}

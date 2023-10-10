#include "main.h"
/**
 * print_sign - check if the number is postive, 0 or negative
 * and print the sign of the number
 * @n: the number
 * and create a new line 10 times
 * Return: 1 if the number is postive, 0 if 0
 * and -1 if negative
 * Ashraf Atef
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

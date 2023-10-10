#include "main.h"
/**
 * print_last_digit - pritn and reaturn the last digit of the number
 * @n: the number
 * Return: the last digit of the number
 * Ashraf Atef
 */

int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
		n *= -1;
	_putchar(n + '0');
	return (n);
}

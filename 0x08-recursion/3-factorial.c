#include "main.h"
/**
 * factorial - gets fectorial number to n
 * @n: number to get factorial
 * Return: the factorial of n
 * Ashraf Atef
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

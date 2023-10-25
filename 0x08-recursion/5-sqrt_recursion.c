#include "main.h"

int _get_sqrt(int i, int n);

/**
 * _sqrt_recursion - return sqroot of n
 * @n: the number
 * Return: return the sqroot of n
 * Ashraf Atef
 */

int _sqrt_recursion(int n)
{
	return (_get_sqrt(0, n));
}

/**
 * _get_sqrt - return sqroot of n
 * @i: the result
 * @n: the number
 * Return: return the sqroot of n
 * Ashraf Atef
 */
int _get_sqrt(int i, int n)
{
	if (i * i < n)
		return (_get_sqrt(i + 1, n));
	if (i * i > n)
		return (-1);
	return (i);
}
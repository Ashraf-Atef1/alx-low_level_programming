#include "main.h"

int is_prime(int i, int n);

/**
 * is_prime_number - return 1 if number is prime and 0 if not
 * @n: the number
 * Return: return 1 if number is prime and 0 if not
 * Ashraf Atef
 */

int is_prime_number(int n)
{
	if (n < 0)
		n = -n;
	if (n == 1)
		return (0);
	return (is_prime(2, n));
}

/**
 * is_prime - return 1 if number is prime and 0 if not
 * @i: the result
 * @n: the number
 * Return: return 1 if number is prime and 0 if not
 * Ashraf Atef
 */
int is_prime(int i, int n)
{
	if (i < n && n % i != 0)
		return (is_prime(i + 1, n));
	else if (i < n && n % i == 0)
		return (0);
	else
		return (1);
}

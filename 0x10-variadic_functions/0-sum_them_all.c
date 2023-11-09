#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Print the sum of the arguments
 * @n: number of the arugments
 * Return: the sum of numbers
 * Ashraf Atef
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, x;
	int sum = 0;
	va_list array;

	va_start(array, n);
	for (i = 0; i < (int)n; i++)
	{
		x = va_arg(array, int);
		sum += x;
	}
	va_end(array);
	return (sum);
}

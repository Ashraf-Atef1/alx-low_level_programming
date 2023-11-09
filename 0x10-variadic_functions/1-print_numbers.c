#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print all numbers arguments follwed by a new line
 * @separator: the separator between the numbers
 * @n: number of the arguments
 * Ashraf Atef
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i, x;
	va_list array;

	va_start(array, n);
	for (i = 0; i < (int)n; i++)
	{
		x = va_arg(array, int);
		printf("%d", x);
		if (i < (int)n - 1 && separator)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(array);
}

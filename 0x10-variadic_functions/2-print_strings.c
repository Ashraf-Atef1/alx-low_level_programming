#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print all string arguments follwed by a new line
 * @separator: the separator between the strings
 * @n: number of the strings
 * Ashraf Atef
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i, x;
	va_list array;

	va_start(array, n);
	for (i = 0; i < (int)n; i++)
	{
		x = va_arg(array, char *);
		if (x)
			printf("%s", x);
		else
			printf("(nil)");
		if (i < (int)n - 1 && separator)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(array);
}

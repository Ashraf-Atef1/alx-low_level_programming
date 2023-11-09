#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

char *check(char *s);
/**
 * print_all - print all arguments follwed by a new line
 * @format: specifyers in a string
 * Ashraf Atef
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 's':
			printf("%s", check(va_arg(args, char *)));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		}

		while ((format[i + 1] != '\0') && (format[i] == 'c' || format[i] == 'i' ||
										   format[i] == 's' || format[i] == 'f'))
		{
			printf(", ");
			break;
		}

		i++;
	}

	va_end(args);
	if (*format)
	{
		printf("hello\n");
	}
}
/**
 * check - check the value null or not
 * @s: the string to check
 * Return: the string or (nil)
 * Ashraf Atef
 */
char *check(char *s)
{
	if (s)
		return (s);
	return ("(nil)");
}

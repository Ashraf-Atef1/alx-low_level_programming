#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse order
 * @s: pointer for the string
 * Ashraf Atef
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
		if (*s)
			_putchar(*s);
		if (*(s - 1) < 32)
			_putchar('\n');
	}
}

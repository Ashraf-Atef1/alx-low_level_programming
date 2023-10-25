#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: pointer for the string
 * Ashraf Atef
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar(*s);
		_putchar('\n');
	}
}

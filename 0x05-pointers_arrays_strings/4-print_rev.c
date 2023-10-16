#include "main.h"
/**
 * print_rev - take string pointer then print it in reverse order
 * follwed by a new line
 * @s: pointer for a string
 * Ashraf Atef
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{

		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

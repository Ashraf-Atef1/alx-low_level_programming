#include "main.h"
/**
 * print_alphabet - print out all litters a-z and create a new line
 * Return: 0
 * Ashraf Atef
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

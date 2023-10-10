#include "main.h"
/**
 * print_alphabet - print out all litters a-z and create a new line 10 times
 * Return: 0
 * Ashraf Atef
 */

void print_alphabet_x10(void)
{
	int i;
	int x;

	for (x = 0; x < 10; x++)
	{

		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

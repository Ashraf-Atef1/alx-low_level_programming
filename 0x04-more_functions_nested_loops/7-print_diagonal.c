#include "main.h"

/**
 * print_line - print '_' n times
 * @n: number of '_' to print
 * Ashraf Atef
 */
void print_line(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar(' ');
			_putchar('\\');
		}
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_square - print print a square and then add
 * a new line
 * @size: the hight and width of the square
 * Ashraf Atef
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

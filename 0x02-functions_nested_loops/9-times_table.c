#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Ashraf Atef
 */

void times_table(void)
{
	int i;
	int j;
	int n;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		for (j = 1; j <= 9; j++)
		{
			n = i * j;
			if (n < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			_putchar(',');
		}
		_putchar('\n');
	}
}

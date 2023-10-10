#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the input times table, starting with 0
 * @num: the number
 * Ashraf Atef
 */

void print_times_table(int num)
{
	int i;
	int j;
	int n;
	if (num > 15 || num < 0)
		return;
	for (i = 1; i <= num; i++)
	{
		for (j = 0; j <= num; j++)
		{
			n = i * j;
			if (j == 0)
			{
				printf("%d", n);
			}
			else
			{
				printf(", %d", n);
			}
		}
		_putchar('\n');
	}
}

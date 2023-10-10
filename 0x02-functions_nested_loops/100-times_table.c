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
	for (i = 0; i <= num; i++)
	{
		_putchar('0');
		for (j = 1; j <= num; j++)
		{
			n = i * j;
			printf(",%4d", n);
		}
		_putchar('\n');
	}
}

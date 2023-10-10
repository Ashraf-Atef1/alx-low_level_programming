#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the input times table, starting with 0
 * @n: the number
 * Ashraf Atef
 */

void print_times_table(int n)
{
	int i;
	int j;
	int p;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			p = i * j;
			if (j == 0)
			{
				printf("%3d", p);
			}
			else
			{
				printf(", %3d", p);
			}
		}
		printf("\n");
	}
}

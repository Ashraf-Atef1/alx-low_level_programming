#include "main.h"
#include <stdio.h>

/**
 * print_line - Prints a line of the buffer as specified
 * @c: The buffer to print
 * @s: Number of bytes to print
 * @l: Line number
 * Ashraf Atef
 */

void print_line(char *c, int s, int l)
{
	int j, k;

	printf("%08x: ", l * 10);

	for (j = 0; j <= 9; j++)
	{
		if (j <= s)
			printf("%02x", c[l * 10 + j]);
		else
			printf("  ");
		if (j % 2)
			putchar(' ');
	}

	putchar(' ');

	for (k = 0; k <= s; k++)
	{
		char ch = c[l * 10 + k];

		if (ch >= 32 && ch <= 126)
			putchar(ch);
		else
			putchar('.');
	}

	putchar('\n');
}

/**
 * print_buffer - Prints a buffer as specified
 * @b: The buffer to print
 * @size: The number of bytes to print
 */
void print_buffer(char *b, int size)
{
	int i, lines = (size - 1) / 10;

	for (i = 0; i <= lines && size > 0; i++)
	{
		int bytes = (i < lines) ? 9 : (size % 10) - 1;

		print_line(b, bytes, i);
	}

	if (size <= 0)
		putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer as specified
 * @b: The buffer to print
 * @size: The number of bytes to print
 * Ashraf Atef
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");

			if (j % 2)
				printf(" ");
		}

		printf(" ");

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				char c = b[i + j];
				putchar(c >= 32 && c <= 126 ? c : '.');
			}
			else
			{
				putchar(' ');
			}
		}

		printf("\n");
	}

	if (size <= 0)
	{
		printf("\n");
	}
}

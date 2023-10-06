#include <stdio.h>

/**
 * main - print all numbers from 0 to 9 then start a new line
 * Return: print out 0 if there is no error
 * Ashraf Atef
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
	putchar(num);
	}
	putchar('\n');
	return (0);
}

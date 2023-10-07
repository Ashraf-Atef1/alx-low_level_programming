#include <stdio.h>

/**
 * main - print all numbers from 0 to 9 sparated by "," then start a new line
 * Return: print out 0 if there is no error
 * Ashraf Atef
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(' ');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}

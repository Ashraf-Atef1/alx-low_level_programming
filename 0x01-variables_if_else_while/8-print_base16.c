#include <stdio.h>

/**
 * main - print all leters from a to z reversely and start a new line
 * Return: print out 0 if there is no error
 * Ashraf Atef
 */
int main(void)
{
	char letter;

	for (letter = '0'; letter >= '9'; letter--)
	{
	putchar(letter);
	}
	for (letter = 'a'; letter >= 'f'; letter--)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}

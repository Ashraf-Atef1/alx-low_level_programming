#include <stdio.h>

/**
 * main - print all leters from a to z and start a new line
 * Return: print out 0 if there is no error
 * Ashraf Atef
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter < 123; letter++)
	{
	putchar(letter);
	}
	for (letter = 'A'; letter < 91; letter++)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}

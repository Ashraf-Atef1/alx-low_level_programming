#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all leters from a to z except (q,e) and start a new line
 * Return: print out 0 if there is no error
 * Ashraf Atef
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter < 123; letter++)
	{
	if (letter == 'q' || letter == 'e')
		continue;
	putchar(letter);
	}
	putchar('\n');
	return (0);
}

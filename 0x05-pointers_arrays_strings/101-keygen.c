#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print a password to crack a file
 * Return: 0 if there is no error;
 * Ashraf Atef
 */
int main(void)
{
	int i = 0;
	int sum = 2772;

	srand(time(NULL));
	while (i < sum)
	{
		char c = (rand()) % 93 + 34;

		if (i + 126 > sum)
			c = sum - i;
		printf("%c", c);
		i += c;
	}

	return (0);
}

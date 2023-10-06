#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print out if the number greater than or less than or equal 0
 * Return: print out 0 if there is no error
 * Ashraf Atef
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}

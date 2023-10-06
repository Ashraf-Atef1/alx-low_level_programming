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
	int lastDigit = n % 10;
	if (n == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else if (n < 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}
	else
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	return (0);
}

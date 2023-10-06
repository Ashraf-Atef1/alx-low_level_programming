#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print out if the last number greater than or less than 6 or equal 0
 * Return: print out 0 if there is no error
 * Ashraf Atef
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else if (lastDigit < 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}
	else
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	return (0);
}

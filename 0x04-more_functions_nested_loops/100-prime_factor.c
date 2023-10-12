#include <stdio.h>

/**
 * main -  prints the largest prime factor of the number 612852475143
 * Return: 0 if ture exit
 * Ashraf Atef
 */
int main(void)
{
	long num;
	long largestP;

	num = 612852475143;
	largestP = 2;
	while (num > largestP)
	{
		if (num % largestP == 0)
		{
			num /= largestP;
		}
		else
		{
			largestP++;
		}
	}
	printf("%ld\n", num);
	return (0);
}

#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * starting with 1 and 2
 * Return: 0
 * Ashraf Atef
 */

int main(void)
{
	unsigned long first;
	unsigned long second;
	unsigned long next;
	unsigned long sum;

	first = 1;
	second = 2;
	sum = 2;
	while (1)
	{
		next = first + second;

		if (next > 4000000)
			break;

		if (next % 2 == 0)
			sum += next;

		first = second;
		second = next;
	}

	printf("%lu\n", sum);

	return (0);
}
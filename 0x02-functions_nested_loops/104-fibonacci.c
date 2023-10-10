#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 * Return: 0
 * Ashraf Atef
 */

int main(void)
{
	int n;
	int i;
	unsigned long first;
	unsigned long second;
	unsigned long next;
	unsigned long upper;
	unsigned long lower;

	n = 98;
	first = 1;
	second = 2;
	upper = 0;
	lower = 0;
	printf("%ld, %ld", first, second);
	for (i = 3; i <= n; i++)
	{
		next = first + second;
		if (next >= first)
		{
			printf(", %lu", next);
		}
		else
		{
			upper = (next >> 32);
			lower = (next & 0xFFFFFFFF);
			printf(", %lu%08lu", upper, lower);
		}
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
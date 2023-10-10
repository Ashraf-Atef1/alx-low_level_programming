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
	unsigned long first2;
	unsigned long second2;
	unsigned long next2;

	n = 98;
	first = 1;
	second = 2;
	first2 = 0;
	second2 = 0;
	printf("%ld, %ld", first, second);
	for (i = 3; i <= n; i++)
	{
		if (((first * 10000000000 + first2) + (second * 10000000000 + second2)) < 10000000000)
		{
			next = first + second;
			printf(", %lu", next);
			first = second;
			second = next;
		}
		else
		{
			next = ((first * 10000000000 + first2) + (second * 10000000000 + second2)) / 10000000000;
			next2 = ((first * 10000000000 + first2) + (second * 10000000000 + second2)) % 10000000000;
			printf(", %lu%lu", next, next2);
			first = second;
			first2 = second2;
			second = next;
			second2 = next2;
		}
	}
	printf("\n");
	return (0);
}
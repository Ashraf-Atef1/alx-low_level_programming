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

	n = 98;
	first = 1;
	second = 2;
	printf("%ld, %ld", first, second);
	for (i = 3; i < n; i++)
	{
		next = first + second;
		printf(", %lu", next);
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
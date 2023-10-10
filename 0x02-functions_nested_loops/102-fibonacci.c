#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * starting with 1 and 2
 * Return: 0
 * Ashraf Atef
 */

int main(void)
{
	int i;
	long n1;
	long n2;
	long sum;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (i = 2; i <= 50; i++)
	{
		sum = n1 + n2;
		printf(", %ld", sum);
		n1 = n2;
		n2 = sum;
	}
	putchar('\n');
	return (0);
}

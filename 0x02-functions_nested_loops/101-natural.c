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
	int n1;
	int n2;
	int sum;

	n1 = 1;
	n2 = 2;
	printf("%d, %d", n1, n2);
	for (i = 2; i <= 50; i++)
	{
		sum = n1 + n2;
		printf(", %d", sum);
		n1 = n2;
		n2 = sum;
	}
	putchar('\n');
	return (0);
}

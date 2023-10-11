#include <stdio.h>
/**
 * printMid - prints part of numbers
 * @a: first number
 * @b: second number
 * @i: the counter
 * @n: the counter stop
 * Ashraf Atef
 */
void printMid(unsigned long a, unsigned long b, unsigned int i, unsigned int n)
{
	unsigned long a1;
	unsigned long b1;
	unsigned long a2;
	unsigned long b2;
	unsigned long next1;
	unsigned long next2;

	a1 = a / 100000000000;
	b1 = b / 100000000000;
	a2 = a % 100000000000;
	b2 = b % 100000000000;
	for (; i <= n - 2; i++)
	{
		next1 = a1 + b1;
		next2 = a2 + b2;
		if (next1 % 10 == 0)
			next1 /= 10;
		printf(", %lu%lu", next1, next2);
		a1 = b1;
		a2 = b2;
		b1 = next1;
		b2 = next2;
	}
	for (; i <= n; i++)
	{
		next1 = a1 + b1;
		next2 = a2 + b2;
		if (next1 % 10 == 0)
			next1 /= 10;
		printf(", %lu%lu%lu", next1 / 10,
			   next1 % 10 + next2 / 100000000000, next2 % 100000000000);
		a1 = b1;
		a2 = b2;
		b1 = next1;
		b2 = next2;
	}
}
/**
 * main - prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 * Return: 0
 * Ashraf Atef
 */
int main(void)
{
	unsigned long a;
	unsigned long b;
	unsigned long next;
	unsigned int n;
	unsigned int i;

	n = 98;
	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);
	for (i = 3; i <= n - 6; i++)
	{
		next = a + b;
		printf(", %lu", next);
		a = b;
		b = next;
	}
	printMid(a, b, i, n);

	printf("\n");

	return (0);
}

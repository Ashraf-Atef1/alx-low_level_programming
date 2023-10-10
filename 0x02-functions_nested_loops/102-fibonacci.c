#include <stdio.h>
/**
 * main - prints all natural number below 1024 that accept
 * divided by 3 and 5
 * Return: 0
 * Ashraf Atef
 */

int main(void)
{
	int i;
	int max;
	int sum;

	max = 1024;
	sum = 0;
	for (i = 1; i <= max; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	printf("%d\n", sum);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - print prints the minimum number of coins
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: return 0 if programe exit in a right way
 * Ashraf Atef
 */

int main(int argc, char const *argv[])
{
	int num = 0;
	int sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	num = atoi(argv[1]);

	while (num)
	{
		if (num - 25 >= 0)
		{
			num -= 25;
			sum++;
		}
		else if (num - 10 >= 0)
		{
			num -= 10;
			sum++;
		}
		else if (num - 5 >= 0)
		{
			num -= 5;
			sum++;
		}
		else if (num - 2 >= 0)
		{
			num -= 2;
			sum++;
		}
		else if (num - 1 >= 0)
		{
			num -= 1;
			sum++;
		}
	}

	printf("%d\n", sum);
	return (0);
}

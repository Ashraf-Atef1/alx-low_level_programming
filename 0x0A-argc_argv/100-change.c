#include <stdio.h>

/**
 * main - print prints the minimum number of coins
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: return 0 if programe exit in a right way
 * Ashraf Atef
 */

int main(int argc, char const *argv[])
{
	int i;
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

	for (i = 0; i < argv[1][i]; i++)
	{
		num = num * 10 + argv[1][i] - '0';
	}
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

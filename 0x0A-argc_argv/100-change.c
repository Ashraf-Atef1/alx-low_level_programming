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
	int i, num = atoi(argv[1]), sum = 0, coins[] = {25, 10, 5, 2, 1};

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
	while (num)
	{
		for (i = 0; coins[i]; i++)
		{
			if (num - coins[i] >= 0)
			{
				num -= coins[i];
				break;
			}
		}
		sum++;
	}
	printf("%d\n", sum);
	return (0);
}

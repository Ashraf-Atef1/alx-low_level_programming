#include <stdio.h>

/**
 * main - print the multiplication result of two number
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: return 0 if programe exit in a right way
 * Ashraf Atef
 */

int main(int argc, char const *argv[])
{
	int i;
	int j;
	int num1 = 0;
	int num2 = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
			if (argv[i][j] == '-' && j == 0)
				continue;
			else if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
				num1 = num1 * 10 + argv[i][j] - '0';
		if (argv[i][0] == '-')
			num1 = -num1;
		num2 += num1;
		num1 = 0;
	}

	printf("%d\n", num2);
	return (0);
}

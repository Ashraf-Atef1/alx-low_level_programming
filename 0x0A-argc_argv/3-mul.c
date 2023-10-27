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
	int num1 = 0;
	int num2 = 0;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] == '-')
			continue;
		else
			num1 = num1 * 10 + argv[1][i] - '0';
	if (argv[1][0] == '-')
		num1 = -num1;

	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] == '-')
			continue;
		else
			num2 = num2 * 10 + argv[2][i] - '0';
	if (argv[2][0] == '-')
		num2 = -num2;

	if (argc != 3)
		printf("Error\n");
	else
		printf("%d\n", num1 * num2);
	return (0);
}

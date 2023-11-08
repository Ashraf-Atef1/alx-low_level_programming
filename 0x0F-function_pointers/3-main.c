#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - calculate 2 input numbers
 * @argc: the number of arguments
 * @argv: an array of arugments
 * Return: 0 if exit in a right way
 */
int main(int argc, char const *argv[])
{
	if (argc != 4 || !atoi(argv[1]) || !atoi(argv[3]))
	{
		printf("Error\n");
		exit(98);
	}
	if (!get_op_func((char *)argv[2]))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] != '/' || argv[2][0] != '%') && argv[3][0] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func((char *)argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

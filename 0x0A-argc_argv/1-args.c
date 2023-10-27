#include <stdio.h>

/**
 * main - print the number of arguments
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: return 0 if programe exit in a right way
 * Ashraf Atef
 */

int main(int argc, char const *argv[])
{
	argv[0] = argv[0];
	printf("%d\n", --argc);
	return (0);
}

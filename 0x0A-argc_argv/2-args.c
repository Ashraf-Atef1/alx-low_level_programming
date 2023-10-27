#include <stdio.h>

/**
 * main - print the arguments
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: return 0 if programe exit in a right way
 * Ashraf Atef
 */

int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

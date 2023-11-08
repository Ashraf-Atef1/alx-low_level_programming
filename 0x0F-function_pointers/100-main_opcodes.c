#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the first inserted number of bytes of the main function
 * in hexadecimal code
 * @argc: the number of arguments
 * @argv: an array of arugments
 * Return: 0 if exit in a right way
 */
int main(int argc, char const *argv[])
{
	int b_num = atoi(argv[1]);
	int i = 0;
	int (*f)(int, const char **) = main;
	char *p = (char *)f;

	/*
		*if (argc != 2)
		{
			printf("Error\n");
			exit(1);
		}
		if (b_num < 0)
		{
			printf("Error\n");
			exit(2);
		}
	*/
	for (i = 0; i < b_num; i++)
	{

		if (i < b_num - 1)
			printf("%x ", p[i] & 0XFF);
		else
			printf("%x\n", p[i] & 0XFF);
	}

	return (0);
}

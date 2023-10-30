#include <stdlib.h>
#include "main.h"
/**
 * argstostr - create a string from inputed arguments
 * @ac: Number of arguments
 * @av: An array of arguments
 * Return: The allocated string location
 * Ashraf Atef
 */

char *argstostr(int ac, char **av)
{
	int size = 0;
	int i = 0;
	int j = 0;
	char *str;

	if (!ac || !av)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			size++;

	str = (char *)malloc(size + ac + 1);
	if (!str)
		return (NULL);
	size = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[size++] = av[i][j];
		str[size++] = '\n';
	}
	str[size] = '\0';
	return (str);
}

#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copy the string str to an allocated space in memory
 * @str: string
 * Return: a pointer for the coped string
 * Ashraf Atef
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;

	while (str[i])
		i++;

	p = malloc(i);

	if (i == 0 || p == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		p[i] = str[i];
	}

	return (p);
}

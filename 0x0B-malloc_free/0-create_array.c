#include <stdlib.h>
#include "main.h"
/**
 * create_array - create an array of chars in a specific size
 * @size: of array
 * @c: chars of array
 * Return: a pointer for the array
 * Ashraf Atef
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(size);

	if (size == 0 || p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}

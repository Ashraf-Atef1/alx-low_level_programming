#include <stdlib.h>
#include "main.h"
/**
 * _realloc - allocated new size
 * @ptr: old allocated size
 * @old_size: old size
 * @new_size: new size
 * Return: array pointer
 * Ashraf Atef
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *p, *p2 = ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	for (i = 0; i < old_size; i++)
		p[i] = p2[i];

	if (ptr != NULL)
	{
		free(ptr);
	}
	return (p);
}

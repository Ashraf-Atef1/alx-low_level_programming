#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocate amount in memory as size and nmemb
 * @nmemb: first string
 * @size: second string
 * Return: a void pointer
 * Ashraf Atef
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	if (!nmemb || !size)
		return (NULL);

	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = 0;
	return ((void *)p);
}

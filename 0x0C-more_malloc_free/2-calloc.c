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
	void *ptr;
	unsigned int i;
	char *char_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	char_ptr = ptr;
	for (i = 0; i < nmemb * size; i++)
		char_ptr[i] = 0;

	return (ptr);
}

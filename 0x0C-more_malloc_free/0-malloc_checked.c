#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - check if there enough space in memory to allocate
 * @b: the size of bytes
 * Return: a void pointer
 * Ashraf Atef
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p)
		return (p);
	exit(98);
}

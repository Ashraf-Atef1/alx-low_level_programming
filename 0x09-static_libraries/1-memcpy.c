#include "main.h"
/**
 * _memcpy - take a pointer in memory and
 * modify firt n bytes of it by string value
 * @dest: pointer for the buffer
 * @src: pointer for the string
 * @n: the number of bytes to modify
 * Return: a pointer for dest
 * Ashraf Atef
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

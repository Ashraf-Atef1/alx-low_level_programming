#include "main.h"
/**
 * _memset - take a pointer in memory and
 * modify firt n bytes of it by buffer value
 * @s: pointer for the string
 * @b: pointer for the buffer
 * @n: the number of bytes to modify
 * Return: a pointer for dest
 * Ashraf Atef
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

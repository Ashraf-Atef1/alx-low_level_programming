#include "main.h"
/**
 * _strncpy - take two strings pointers and copy n charcters from
 * the second one to the first one
 * @dest: pointer for the frist string
 * @src: pointer for the second string
 * @n: the number of chracters to copy
 * Return: a pointer for dest
 * Ashraf Atef
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}

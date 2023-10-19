#include "main.h"
/**
 * _strncat - take two strings pointers and append n charcters from
 * the second one to the first one
 * @dest: pointer for the frist string
 * @src: pointer for the second string
 * @n: the number of chracters to concate
 * Return: a pointer for dest
 * Ashraf Atef
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	if (src[j] == '\0')
		dest[j] = '\0';
	return (dest);
}

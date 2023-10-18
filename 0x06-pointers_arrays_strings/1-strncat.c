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
	int i = 0;
	int j = 0;

	while (src[j] && j < n)
	{
		if (dest[i])
		{
			i++;
		}
		else
		{
			dest[i] = src[j];
			j++;
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

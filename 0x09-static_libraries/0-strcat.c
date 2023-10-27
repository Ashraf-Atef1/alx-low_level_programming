#include "main.h"
/**
 * _strcat - take two strings pointers and append the second
 * one to the first one
 * @dest: pointer for the frist string
 * @src: pointer for the second string
 * Return: a pointer for dest
 * Ashraf Atef
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[j])
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

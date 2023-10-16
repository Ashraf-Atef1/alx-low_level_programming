#include "main.h"
/**
 * _strcpy - copy a string from a pointer to another one
 * @dest: pointer for a string to change
 * @src: the text pointer to copy from
 * Return: the pointer for the text;
 * Ashraf Atef
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (src);
}

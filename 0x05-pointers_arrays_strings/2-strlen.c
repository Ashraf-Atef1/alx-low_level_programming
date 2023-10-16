#include "main.h"
/**
 * _strlen - take string pointer and clculate the length of this string
 * @s: pointer for a string
 * Return: the length of the string
 * Ashraf Atef
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

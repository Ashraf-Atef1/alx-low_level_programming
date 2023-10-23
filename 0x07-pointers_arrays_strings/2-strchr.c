#include "main.h"
/**
 * _strchr - point to first adress of the c int the string s
 * @s: pointer for the string
 * @c: pointer for the buffer
 * Return: a pointer for dest
 * Ashraf Atef
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
		if (s[i] == c)
			return (&s[i]);

	return ('\0');
}

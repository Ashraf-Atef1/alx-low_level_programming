#include "main.h"
/**
 * _strpbrk - return a pointer for the first acceptance character
 * @s: pointer for the string
 * @accept: strint of acceptance chars
 * Return: a number of acceptance chars
 * Ashraf Atef
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}

	return ('\0');
}

#include "main.h"
/**
 * _strstr - return a pointer for string needle into the haystack
 * @haystack: pointer for the string
 * @needle: pointer for string
 * Return: pointer of the addres of needle in haystack
 * Ashraf Atef
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j;

	for (i = 0, j = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[j])
			j++;
		if (j && !needle[j + 1])
			return (&haystack[i - j]);
	}

	return ('\0');
}

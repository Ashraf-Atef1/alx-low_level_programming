#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Concate the two strings in a new allocation space
 * @s1: The first string
 * @s2: The second string
 * Return: The new allocation space in memory
 * Ashraf Atef
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	char *p;

	if (s1)
		while (s1[len1])
			len1++;
	if (s2)
		while (s2[len2])
			len2++;

	p = malloc(len1 + len2 - 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1 + len2; i++)
		if (i < len1)
			p[i] = s1[i];
		else
			p[i] = s2[i - len1];
	return (p);
}

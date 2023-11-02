#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - check if there enough space in memory to allocate
 * @s1: first string
 * @s2: second string
 * @n: first number of chars of s2
 * Return: a void pointer
 * Ashraf Atef
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size = 0, i = 0, sl1 = 0;
	char *p;

	for (i = 0; s1[i];)
		i++;
	size = i + n;
	sl1 = i;
	p = (char *)malloc(size);
	if (!p)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		if (i < sl1)
			p[i] = s1[i];
		else
		{
			if (s2[i - sl1])
				p[i] = s2[i - sl1];
			else
				break;
		}
	}
	p[i] = '\0';
	return (p);
}

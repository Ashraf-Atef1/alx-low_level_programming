#include "main.h"
/**
 * _strspn - return the sum of first acceptance chars in the string
 * @s: pointer for the string
 * @accept: strint of acceptance chars
 * Return: a number of acceptance chars
 * Ashraf Atef
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	int i;

	while (*s)
	{
		found = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		s++;
	}

	return (count);
}

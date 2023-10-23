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
	unsigned int sum;
	unsigned int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				sum++;
				break;
			}
		}
		if (i >= sum)
			break;
	}

	return (sum);
}

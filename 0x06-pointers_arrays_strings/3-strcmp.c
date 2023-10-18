#include "main.h"
/**
 * _strcmp - compare two string and return 0 if they're equale each other
 * @s1: pointer for the frist string
 * @s2: pointer for the second string
 * Return: the diffrent betten 2 charcters
 * Ashraf Atef
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			break;
		i++;
	}
	return (s1[i] - s2[i]);
}

#include "main.h"

/**
 * wildcmp - return 1 if the two strings are identical else return 0
 * @s1: first string
 * @s2: second string
 * Return: return 1 if the two strings are identical else return 0
 * Ashraf Atef
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (!*s1)
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2 && *s1)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (!*s1 && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	else if (!*s1 && !*s2)
		return (1);
	return (0);
}

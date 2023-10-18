#include "main.h"
/**
 * string_toupper - uppercase the stirng
 * @s: pointer for the string
 * Return: the string
 * Ashraf Atef
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 'a' - 'A';
		i++;
	}
	return (s);
}

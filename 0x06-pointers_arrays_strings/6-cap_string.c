#include "main.h"

int check(char c);
/**
 * cap_string - uppercase the first letter of all words in the stirng
 * @s: pointer for the string
 * Return: the string
 * Ashraf Atef
 */
char *cap_string(char *s)
{
	int i = 0;

	if ((s[i] >= 'a' && s[i] <= 'z'))
		s[i] -= 'a' - 'A';
	i++;
	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'z') && check(s[i - 1]))
			s[i] -= 'a' - 'A';
		i++;
	}
	return (s);
}
/**
 * check - check if chracter is a seprator
 * @c: chracter to check
 * Return: 0 if false and 1 if ture
 * Ashraf Atef
 */
int check(char c)
{
	char a[] = {' ', '\t', '\n', ',', ';', '.',
				'!', '?', '"', '(', ')', '{', '}', '\0'};
	int i = 0;

	while (a[i] != '\0')
	{
		if (c == a[i])
			return (1);
		i++;
	}
	return (0);
}
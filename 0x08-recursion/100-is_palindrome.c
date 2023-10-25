#include "main.h"

int get_length(char *s, int i);

int is_palindrome_check(char *s, int i, int j);

/**
 * is_palindrome - return 1 if the string is palindrome and 0 if not
 * @s: the string to check
 * Return: 1 if the string is palindrome, 0 if not
 * Ashraf Atef
 */
int is_palindrome(char *s)
{
	int i = get_length(s, 0);

	if (i == 0)
		return (0);

	return (is_palindrome_check(s, i - 1, 0));
}

/**
 * get_length - return the length of a string
 * @s: the string
 * @i: the length
 * Return: the length of the string
 * Ashraf Atef
 */
int get_length(char *s, int i)
{
	if (s[i] != '\0')
		return (get_length(s, i + 1));
	else
		return (i);
}

/**
 * is_palindrome_check - return 1 if the string is palindrome and 0 if not
 * @s: the string
 * @i: the length
 * @j: a counter
 * Return: 1 if the string is palindrome, 0 if not
 * Ashraf Atef
 */
int is_palindrome_check(char *s, int i, int j)
{
	if (i >= j && s[i] == s[j])
	{
		return (is_palindrome_check(s, i - 1, j + 1));
	}
	else if (i >= j && s[i] != s[j])
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

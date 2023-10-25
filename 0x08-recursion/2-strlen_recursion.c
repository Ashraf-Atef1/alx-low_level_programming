#include "main.h"

/**
 * _count_recursion - prints a string
 * @s: pointer for the string
 * @i: counter
 * Ashraf Atef
 */

void _count_recursion(char *s, int *i)
{
	if (*s)
	{
		*i += 1;
		_count_recursion(++s, i);
	}
}

/**
 * _strlen_recursion - return the length of the string
 * @s: pointer for the string
 * Return: the length of the string s
 * Ashraf Atef
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	_count_recursion(s, &i);
	return (i);
}

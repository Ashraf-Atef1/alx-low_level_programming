#include "main.h"

/**
 * _isupper - return 1 if upper and 0 if not
 * @c: the letter to check
 * Return: return 1 if upper and 0 if not
 * Ashraf Atef
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

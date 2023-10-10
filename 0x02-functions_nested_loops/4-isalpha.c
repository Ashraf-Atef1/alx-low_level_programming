#include "main.h"
/**
 * _isalpha - check if the char is alphabit or not
 * @c: the character
 * and create a new line 10 times
 * Return: 1 if char is lower case and 0 if not
 * Ashraf Atef
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

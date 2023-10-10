#include "main.h"
/**
 * _islower - check if the char is lowercase or not
 * and create a new line 10 times
 * Return: 1 if char is lower case and 0 if not
 * Ashraf Atef
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

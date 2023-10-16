#include "main.h"
/**
 * _puts - take string pointer then print it follwed by a new line
 * @str: pointer for a string
 * Ashraf Atef
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

#include "main.h"
/**
 * puts2 - take string pointer then print every other characters
 * follwed by a new line
 * @str: pointer for a string
 * Ashraf Atef
 */
void puts2(char *str)
{
	int i = 0;

	while (!(str[i] == '\0' || str[i - 1] == '\0'))
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

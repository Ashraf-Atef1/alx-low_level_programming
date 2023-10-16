#include "main.h"
/**
 * puts_half - take string pointer then print first half characters
 * follwed by a new line
 * @str: pointer for a string
 * Ashraf Atef
 */
void puts_half(char *str)
{
	int i = 0;

	while (!(str[i] == '\0' || (str[i - 1] == '\0' && i > 0)))
	{
		_putchar(str[i]);
		i *= 2;
	}
	_putchar('\n');
}

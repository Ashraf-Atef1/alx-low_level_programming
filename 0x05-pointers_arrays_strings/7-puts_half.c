#include "main.h"
/**
 * puts_half - take string pointer then print the second half characters
 * follwed by a new line
 * @str: pointer for a string
 * Ashraf Atef
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	i = (i - i % 2) / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

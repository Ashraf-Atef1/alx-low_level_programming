#include "main.h"
/**
 * rev_string - take string pointer then retern it in a reverse order
 * follwed by a new line
 * @s: pointer for a string
 * Ashraf Atef
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	char str[100];

	while (i > 0)
	{
		i--;
		str[j] = s[i];
		j++;
	}
	_putchar('\n');
}

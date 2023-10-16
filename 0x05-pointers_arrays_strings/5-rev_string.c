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
	char str[500];

	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';

	while (i > 0)
	{
		i--;
		s[j] = str[i];
		j++;
	}
	s[j] = '\0';
}

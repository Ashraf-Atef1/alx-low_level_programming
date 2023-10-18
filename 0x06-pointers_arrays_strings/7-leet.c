#include "main.h"
/**
 * leet - replace letters A E O T L to numbers 4 3 0 7 1
 * @s: pointer for the string
 * Return: the string
 * Ashraf Atef
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char a1[5] = {'A', 'E', 'O', 'T', 'L'};
	char a2[5] = {'a', 'e', 'o', 't', 'l'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == a1[j] || s[i] == a2[j])
			{
				s[i] = n[j];
				break;
			}
		}
		i++;
	}
	return (s);
}

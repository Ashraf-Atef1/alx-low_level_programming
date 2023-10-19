#include "main.h"
/**
 * rot13 - replace letters ABCDEFGHIJKLM to NOPQRSTUVWXYZ and viseversa
 * @s: pointer for the string
 * Return: the string pinter
 * Ashraf Atef
 */
char *rot13(char *s)
{
	int i = 0;
	int j = 0;
	char *a1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *a2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		for (j = 0; a1[j] != '\0'; j++)
		{
			if (s[i] == a1[j])
			{
				s[i] = a2[j];
				break;
			}
		}
		i++;
	}
	return (s);
}

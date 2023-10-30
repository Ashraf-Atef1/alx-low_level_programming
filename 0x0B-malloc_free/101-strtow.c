#include <stdlib.h>
#include "main.h"

char **declelation(char *str);
/**
 * strtow - create array of words from a string
 * @str: the strings
 * Return: a pointer for allocated array of string's words
 * Ashraf Atef
 */

char **strtow(char *str)
{
	int i = 0, j = 0, H = 0;
	char **words = declelation(str);

	if (!words)
		return (NULL);
	for (i = 0, j = 0, H = 0; str[i]; i++)
	{
		if (str[i] == ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			continue;
		if (str[i] == ' ' && j)
		{
			words[H][j] = '\0';
			H++;
			j = 0;
		}
		if (str[i] != ' ')
		{
			words[H][j] = str[i];
			j++;
		}
	}
	words[H][j] = '\0';
	return (words);
}

/**
 * declelation - allocate spcese of words array
 * @str: the strings
 * Return: a pointer for allocated array of string's words
 * Ashraf Atef
 */
char **declelation(char *str)
{
	int i = 0, j = 0, H = 0, W = 0;
	char **words;

	if (!str)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
			continue;
		if (str[i] == ' ' && j)
		{
			H++;
			if (j > W)
				W = j;
			j = 0;
		}
		if (str[i] != ' ')
			j++;
	}
	if (j)
		H++;
	words = (char **)malloc(H + 1);
	if (!words)
		return (0);
	for (i = 0; i < H; i++)
	{
		words[i] = (char *)malloc(W + 1);
		if (!words[i])
		{
			for (i = 0; i < H; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}
	}
	words[H] = NULL;
	return (words);
}

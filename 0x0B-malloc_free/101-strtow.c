#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * split_string - Splits a string into words.
 * @str: The input string.
 * @word_count: The number of words.
 *
 * Return: A pointer to an array of strings.
 */
char **split_string(char *str, int word_count)
{
	int x = 0, word_length = 0, i, k = 0;

	char **words = (char **)malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	for (i = 0; i < word_count; i++)
	{
		while (str[k] == ' ')
			k++;
		word_length = 0;
		while (str[k] != ' ' && str[k] != '\0')
		{
			word_length++;
			k++;
		}
		words[i] = (char *)malloc((word_length + 1) * sizeof(char));
		if (words[i] == NULL)
		{

			for (x = 0; x < i; x++)
			{
				free(words[x]);
			}
			free(words);
			return (NULL);
		}
	}
	words[word_count] = NULL;

	return words;
}

/**
 * strtow - Create an array of words from a string.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings.
 */
char **strtow(char *str)
{
	int i = 0, word_count = 0, j = 0, word_index = 0;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			word_count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
		else
			i++;
	}

	if (word_count == 0)
		return (NULL);
	words = split_string(str, word_count);
	if (words == NULL)
		return (NULL);
	word_index = 0;
	for (i = 0; i < word_count; i++)
	{
		j = 0;
		while (str[word_index] == ' ')
			word_index++;
		while (str[word_index] != ' ' && str[word_index] != '\0')
		{
			words[i][j] = str[word_index];
			j++;
			word_index++;
		}
		words[i][j] = '\0';
	}
	return (words);
}

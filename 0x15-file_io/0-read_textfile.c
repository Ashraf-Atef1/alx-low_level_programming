#include "main.h"

/**
 * read_textfile - print first letters number in a file
 * @filename: filename
 * @letters: number of chars
 * Return: Number of printed chars
 * Ashraf Atef
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t p_chars = 0;
	int fd;
	char *str = malloc(letters);

	if (filename == NULL)
	{
		return (0);
		free(str);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
		free(str);
	}

	if (read(fd, str, letters) == -1)
	{
		return (0);
		free(str);
	}

	for (p_chars = 0; str[p_chars]; p_chars++)
		if (write(STDOUT_FILENO, &str[p_chars], 1) == -1)
		{
			return (0);
			free(str);
		}
	free(str);
	close(fd);
	return (p_chars);
}

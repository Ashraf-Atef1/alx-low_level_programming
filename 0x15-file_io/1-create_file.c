#include "main.h"

/**
 * create_file - creat a file with a text content
 * @filename: filename
 * @text_content: text_content
 * Return: 1 if successe and -1 if there an error
 * Ashraf Atef
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0;
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (filename == NULL)
		return (-1);
	if (fd == -1)
		return (-1);
	if (text_content[i])
	{
		while (text_content[i++])
			;
		if (write(fd, text_content, i) == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

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
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (filename == NULL)
		return (-1);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		ssize_t write_result = write(fd, text_content, strlen(text_content));

		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}

		close(fd);
		return (1);
	}
	else
	{
		close(fd);
		return (1);
	}
}

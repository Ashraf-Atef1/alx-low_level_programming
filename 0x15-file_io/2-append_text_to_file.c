#include "main.h"

/**
 * append_text_to_file - append a text to a file
 * @filename: filename
 * @text_content: text_content
 * Return: 1 if successe and -1 if there an error
 * Ashraf Atef
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int fd = open(filename, O_WRONLY | O_APPEND, 0664);

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

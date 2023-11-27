#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - creat a buffer
 * @file: name of the file
 * Return: buffer pointer
 * Ashraf Atef
 */
char *create_buffer(char *file)
{
	char *buffer = malloc(BUFFER_SIZE);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - close a file and check if closed correctly
 * @fd: file id
 * Ashraf Atef
 */
void close_file(int fd)
{
	int result = close(fd);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy a file content to another file
 * @argc: number of arguments
 * @argv: an array of arguments
 * Return: 0 if exit correctly
 * Ashraf Atef
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_file(from);
		exit(99);
	}
	do {
		r = read(from, buffer, BUFFER_SIZE);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close_file(from);
			close_file(to);
			exit(98);
		}

		w = write(to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_file(from);
			close_file(to);
			exit(99);
		}

	} while (r > 0);

	close_file(from);
	close_file(to);

	return (0);
}

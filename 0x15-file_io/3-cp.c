#include "main.h"

void error_exit(int exit_code, const char *message, const char *file_name)
{
	dprintf(2, "Error: %s%s\n", message, file_name);
	exit(exit_code);
}

void copy_file(const char *file_from, const char *file_to)
{
	int fd_from = open(file_from, O_RDONLY);
	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
					 S_IRUSR | S_IWUSR | S_IRGRP);
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (fd_from == -1)
		error_exit(98, "Can't read from file ", file_from);

	if (fd_to == -1)
		error_exit(99, "Can't write to ", file_to);

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			error_exit(99, "Write to file failed: ", file_to);
	}

	if (bytes_read == -1)
		error_exit(98, "Can't read from file ", file_from);

	close(fd_from);
	close(fd_to);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
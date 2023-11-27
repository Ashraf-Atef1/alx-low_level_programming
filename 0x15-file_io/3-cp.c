#include "main.h"

void close_check(int fd);
void new_file(char *fileName, char *file_txt, int fd2);
void _error(const char *fileName, const char *error_txt);

int main(int argc, char const *argv[])
{
	char buff[1024];
	ssize_t data_size;
	int fd1, fd2;
	const char *err;

	if (argc != 3)
	{
		err = "Usage: cp file_from file_to\n";
		write(STDERR_FILENO, err, strlen(err));
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		_error(argv[1], "Error: Can't read from file ");
		exit(98);
	}

	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd2 == -1)
	{
		_error(argv[2], "Error: Can't write to ");
		close_check(fd1);
		exit(99);
	}

	while ((data_size = read(fd1, buff, sizeof(buff))) > 0)
	{
		if (write(fd2, buff, data_size) != data_size)
		{
			_error(argv[2], "Error: Can't write to ");
			close_check(fd1);
			close_check(fd2);
			exit(99);
		}
	}

	if (data_size == -1)
	{
		_error(argv[1], "Error: Can't read from file ");
		close_check(fd1);
		close_check(fd2);
		exit(98);
	}

	close_check(fd1);
	close_check(fd2);

	return (0);
}

void close_check(int fd)
{
	if (close(fd) == -1)
	{
		char buf[1024];
		snprintf(buf, sizeof(buf), "Error: Can't close fd %d\n", fd);
		write(STDERR_FILENO, buf, strlen(buf));
		exit(100);
	}
}
void new_file(char *fileName, char *file_txt, int fd2)
{
	char *err;

	if (write(fd2, file_txt, strlen(file_txt)) == -1)
	{
		err = "Error: Can't write to ";
		write(2, err, strlen(err));
		write(2, fileName, strlen(fileName));
		write(2, "\n", 1);
		exit(99);
	}
}
void _error(const char *fileName, const char *error_txt)
{
	write(2, error_txt, strlen((char *)error_txt));
	if (fileName)
		write(2, fileName, strlen((char *)fileName));
	write(2, "\n", 1);
}

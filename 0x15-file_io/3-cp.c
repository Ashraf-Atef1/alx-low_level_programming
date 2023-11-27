#include "main.h"

void close_check(int fd);
void new_file(char *fileName, char *file_txt, int fd2);
void _error(const char *fileName, const char *error_txt);

int main(int argc, char const *argv[])
{
	int fd1 = open(argv[1], O_RDONLY);
	int fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
				   S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	char *buff = malloc(1024);
	char *err;

	if (argc != 3)
	{
		err = "Usage: cp file_from file_to\n";
		write(2, err, strlen(err));
		free(buff);
		exit(97);
	}
	if (fd2 == -1)
	{
		_error(argv[2], "Error: Can't write to ");
		free(buff);
		exit(99);
	}
	if (fd1 == -1)
	{
		_error(argv[1], "Error: Can't read from file ");
		exit(98);
	}

	if (!buff)
	{
		free(buff);
		exit(1);
	}
	buff[1023] = '\0';
	while (1)
	{
		ssize_t data_size = read(fd1, buff, 1024);

		if (data_size == -1)
		{
			free(buff);
			_error(argv[1], "Error: Can't read from file ");
			exit(98);
		}
		if (!data_size)
		{
			break;
		}
		else
		{
			buff[data_size] = '\0';
			new_file((char *)argv[2], buff, fd2);
		}
	}
	close_check(fd1);
	close_check(fd2);
	return (0);
}
void close_check(int fd)
{
	int i = 1;
	char c;

	while (fd / i)
		i *= 10;
	if (close(fd) == -1)
	{
		char *err = "Error: Can't close fd ";

		write(2, err, strlen(err));
		while (i == 1)
		{
			i /= 10;
			c = fd / i + '0';
			write(2, &c, 1);
		}
		write(2, "\n", 1);
		exit(100);
	}
}
void new_file(char *fileName, char *file_txt, int fd2)
{
	char *err;

	if (write(fd2, file_txt, strlen(file_txt)) == -1)
	{
		free(file_txt);
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

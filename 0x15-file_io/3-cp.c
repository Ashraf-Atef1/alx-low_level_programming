#include "main.h"

unsigned int length(char *str);
void close_check(int fd);
void new_file(char *fileName, char *file_txt);
void _error(const char *fileName, const char *error_txt);

int main(int argc, char const *argv[])
{
	int fd1 = open(argv[1], O_RDONLY);
	char *buff = malloc(1024);
	char *err;

	if (argc != 3)
	{
		err = "Usage: cp file_from file_to\n";
		write(2, err, length(err));
		exit(97);
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
		if (read(fd1, buff, 1024) == -1)
		{
			free(buff);
			_error(argv[1], "Error: Can't read from file ");
			exit(98);
		}
		if (!buff[1023])
		{
			break;
		}
		else
			new_file((char *)argv[2], buff);
	}
	new_file((char *)argv[2], buff);
	close_check(fd1);
	return (0);
}

unsigned int length(char *str)
{
	unsigned int i = 0;
	if (!str)
		return (i);
	else
	{
		while (str[i++])
			;
		return (i);
	}
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

		write(2, err, length(err));
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
void new_file(char *fileName, char *file_txt)
{
	char *err;
	int fd2 = open(fileName, O_WRONLY | O_TRUNC);

	if (fd2 == -1)
	{
		fd2 = open(fileName, O_WRONLY | O_CREAT | O_TRUNC, 0664);
		if (fd2 == -1)
		{
			free(file_txt);
			err = "Error: Can't write to ";
			write(2, err, length(err));
			write(2, fileName, length(fileName));
			write(2, "\n", 1);
			exit(99);
		}
	}
	if (write(fd2, file_txt, length(file_txt)) == -1)
	{
		free(file_txt);
		err = "Error: Can't write to ";
		write(2, err, length(err));
		write(2, fileName, length(fileName));
		write(2, "\n", 1);
		exit(99);
	}
	close_check(fd2);
}
void _error(const char *fileName, const char *error_txt)
{
	write(2, error_txt, length((char *)error_txt));
	if (fileName)
		write(2, fileName, length((char *)fileName));
	write(2, "\n", 1);
}
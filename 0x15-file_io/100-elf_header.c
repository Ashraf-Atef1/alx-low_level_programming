#include "main.h"

int check_line(char *line, char *target)
{
	int i = 0, j = 0;

	while (line[i] && target[j] && line[i] != target[j])
	{
		i++;
		if (line[i] == target[j])
			break;
	}
	while (line[i] && target[j] && line[i] == target[j])
		i++, j++;

	return (target[j] == '\0');
}
void get_line(char *full_text, char *target)
{
	char cur_line[255];
	int i = 0, j = 0;

	while (full_text[i])
	{
		for (j = 0; full_text[i] != '\n' && full_text[i]; i++, j++)
		{
			cur_line[j] = full_text[i];
		}
		cur_line[j] = '\0';
		if (full_text[i] == '\n')
			i++;
		if (check_line(cur_line, target))
		{
			printf("%s\n", cur_line);
			return;
		}
	}
}
/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	int fd[2];
	int id;

	if (argc != 2)
	{
		exit(98);
	}
	if (pipe(fd) == -1)
	{
		exit(1);
	}

	id = fork();
	if (id == 0)
	{
		dup2(fd[1], 1);
		dup2(fd[1], 2);
		execlp("readelf", "readelf", "-h", argv[1], NULL);
	}
	else
	{
		char str[BUFSIZ];

		read(fd[0], &str, BUFSIZ);
		if (str[0] == 'r')
		{
			write(2, str, strlen(str));
			exit(98);
		}
		get_line(str, "ELF Header");
		get_line(str, "Magic");
		get_line(str, "Class");
		get_line(str, "Data");
		get_line(str, "Version");
		get_line(str, "OS/ABI");
		get_line(str, "ABI Version");
		get_line(str, "Type");
		get_line(str, "Entry point address");
	}
	return (0);
}

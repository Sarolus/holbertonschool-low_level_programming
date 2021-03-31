#include "holberton.h"

/**
 * exit_code - Specific exit code depending of the given error case.
 * @error: Error code
 * @argv: arguments passed
 * @fd: file descriptor
 */
void exit_code(int error, char *argv[], int fd)
{
	switch (error)
	{
		case 97:
		{
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		}
		case 98:
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			break;
		}
		case 99:
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			break;
		}
		case 100:
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			break;
		}
	}

	exit(error);
}
/**
 * main - Copies the content of a file to another file.
 * @argc: number of arguments.
 * @argv: arguments passed.
 * Return: return 0 if success, otherwise the exit_code depending of the error.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, wr, rd;
	char buffer[1024];

	if (argc != 3)
	{
		exit_code(97, argv, 0);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		exit_code(98, argv, 0);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		exit_code(99, argv, 0);
	}

	while ((rd = read(fd_from, buffer, 1024)) != 0)
	{
		if (rd == -1)
		{
			exit_code(98, argv, 0);
		}
		wr = write(fd_to, buffer, rd);
		if (wr == -1 || wr != rd)
		{
			exit_code(99, argv, 0);
		}
	}

	if (close(fd_to) == -1)
	{
		exit_code(100, argv, fd_to);
	}
	if (close(fd_from) == -1)
	{
		exit_code(100, argv, fd_from);
	}
	return (0);
}

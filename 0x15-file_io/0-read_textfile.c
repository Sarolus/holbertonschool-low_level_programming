#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints it to
 * the POSIX standard output.
 *
 * @filename: the file pointer.
 * @letters: the number of letters it should read an print.
 *
 * Return: return the actual number of letters it could read
 * and print. If error occured, 0 is returned.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *M;

	M = malloc(sizeof(char) * letters);

	if (M == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	rd = read(fd, M, letters);
	if (rd == -1)
	{
		return (0);
	}

	close(fd);

	wr = write(STDOUT_FILENO, M, rd);

	if (wr == -1)
	{
		return (0);
	}

	free(M);

	return (wr);
}

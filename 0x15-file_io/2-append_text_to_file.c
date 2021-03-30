#include "holberton.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: the file pointer.
 * @text_content: the pointer of a null terminated string to write.
 *
 * Return: On success return 1, otherwise -1 if it's a failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;
	ssize_t len;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}

	while (text_content && text_content[len])
	{
		len++;
	}

	wr = write(fd, text_content, len);

	close(fd);

	if (wr == -1)
	{
		return (-1);
	}

	return (1);
}

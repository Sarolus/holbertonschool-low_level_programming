#include "holberton.h"

/**
 * create_file - Creates a file.
 *
 * @filename: the file pointer.
 * @text_content: the pointer of a null terminated string to write.
 *
 * Return: On success return 1, otherwise -1 if it's a failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	while (text_content && text_content[len])
	{
		len++;
	}

	wr = write(fd, text_content, len);

	if (wr == -1)
	{
		return (-1);
	}

	return (1);
}

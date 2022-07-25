#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to
 *		to the file.
 *
 * Return: 1 on success
 *	or - 1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t check;
	int fd;
	size_t len;

	for (len = 0 ; text_content[len] != 0; len++)
	{
	}
	len++;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_EXCL, 00600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	check = write(fd, text_content, len);

	if (check == -1)
	{
		return (-1);
	}
	close(fd);
	return (-1);
}

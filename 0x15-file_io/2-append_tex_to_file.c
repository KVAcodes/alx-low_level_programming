#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end
 * of a file.
 * @filename: the name of the file to be apppended.
 * @text_content: is NULL terminated string to add at the end of
 * the file.
 *
 * Return: 1 on success
 *	-1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t check;
	int fd;
	size_t len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (; text_content[len]; len++)
		{
		}
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	check = write(fd, text_content, len);
	if (check == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}

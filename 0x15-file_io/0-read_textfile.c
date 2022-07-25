#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 *		prints it to the POSIX standard output.
 * @filename: the name of the file to be read
 * @letters: the number of letters to be read
 *
 * Return: the actual number of letters it could be read
 *	and print
 *	0 if the file cannot be opened or read or if the
 *	filename is NULL or if write fails or does not
 *	write the expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t check1, check2;
	int fd;

	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}
	if (buf == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	check1 = read(fd, buf, letters);
	if (check1 == -1)
	{
		free(buf)
		return (0);
	}

	check2 = write(STDOUT_FILENO, buf, check1);

	if (check2 == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);
	return (check2);
}

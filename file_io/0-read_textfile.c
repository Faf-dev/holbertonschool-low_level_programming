#include "main.h"

/**
 * read_textfile - reads a text file and print it to the POSIX standard output
 * @filename: the name of the file
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print, 0 instead
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t bytes_write, bytes_read;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(1 * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_write = write(1, buffer, bytes_read);

	if (bytes_write == -1 || bytes_write != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_write);
}

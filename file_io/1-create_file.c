#include "main.h"

/**
 * create_file - create a file
 * @filename: the name of the file
 * @text_content: text who should be inside @filename
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	ssize_t bytes_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	else
	{
		while (text_content[i] != '\0')
			i++;
	}

	bytes_write = write(fd, text_content, i);

	if (bytes_write == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

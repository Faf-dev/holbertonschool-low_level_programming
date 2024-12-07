#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of @filename
 * Return: -1 if error, 1 if success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	ssize_t bytes_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);

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

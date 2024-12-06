#include "main.h"

/**
 * error_exit - print an error code if we encouter one
 * @code: the code of the exit
 * @message: the message to print
 * @filename: the file who get an error
 */
void error_exit(int code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(code);
}

/**
 * cpy_filefrom_fileto - copy content of filefrom into fileto
 * @argc: number of argument
 * @argv: array of argument
 * Return: 1 if success, -1 if failed
 */

int cpy_filefrom_fileto(int argc, char **argv)
{
	int fd_from, fd_to, i = 0;
	char buffer[1024];
	ssize_t bytes_write, bytes_read;

	if (argc != 3)
	/* Si le nombre d'argument n'est pas le bon */
		error_exit(97, "Usage: cp file_from file_to\n", NULL);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	/* On verifie si on a bien pu ouvrir le fichier */
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	/* Vrifie si on a bien pu ouvrir le fichier */
		error_exit(99, "Error: Can't write to %s\n", argv[2]);

	do {
		/* Lire jusqu'à 1024 octets du fichier from */
		bytes_read = read(fd_from, buffer, 1024);
		if (bytes_read == -1)
			error_exit(98, "Error: Can't read from file %s\n", argv[1]);
			/* Si des octets ont été lus, les ecrire dans le fichier "to" */
			if (bytes_read > 0)
			{
			bytes_write = write(fd_to, buffer, bytes_read);
			if (bytes_write == -1 || bytes_write != bytes_read)
				error_exit(99, "Error: Can't write to %s\n", argv[2]);
			}
		}	while (bytes_read > 0);

	if (bytes_write == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", argv[1]);
	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", argv[2]);
	free(buffer);
}

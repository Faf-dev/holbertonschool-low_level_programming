#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
#include <stdlib.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int cpy_filefrom_fileto(int argc, char **argv);
void error_exit(int code, const char *message, const char *filename);

#endif

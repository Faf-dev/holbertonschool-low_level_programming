#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print le nombre d'argument rentrer
 * @argc : le nombre d'arguments
 * @argv : la string contenant les arguments argc
 * Return: argc
 */
int main(int argc, char **argv)
{
	(void) **argv;

	printf("%d\n", argc - 1);
	return (0);
}

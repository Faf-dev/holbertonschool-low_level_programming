#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print argv
 * @argc : nombre de ligne de commandes
 * @argv : array qui contient les commandes
 * Return: Always 0.
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

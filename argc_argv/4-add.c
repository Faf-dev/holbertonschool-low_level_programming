#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - multiplie deux argc
 * @argc : argument count
 * @argv : string with argc value
 * Return: 1 if error, else 0
 *
 */

int main(int argc, char **argv)
{
	int i;
	int addition;

	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			addition += atoi(argv[i]);
			if (*argv[i] < 48 || *argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}
		}
		printf("%d\n", addition);
	}
	return (0);
}

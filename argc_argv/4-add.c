#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	int addition = 0;

	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			addition += atoi(argv[i]);
		}
	}
		printf("%d\n", addition);
		return (0);
}

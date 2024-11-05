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
	int result = 0;

	if (argc > 1)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

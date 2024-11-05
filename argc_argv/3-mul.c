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
	if (argc > 1)
	{
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

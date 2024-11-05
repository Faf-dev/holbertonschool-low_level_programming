#include <stdio.h>
#include "main.h"

/**
 * main - main code, should print argument
 * @argc : number of argument
 * @argv : value of argument
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	(void) argc;

	for (i = 0; argv[i]; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

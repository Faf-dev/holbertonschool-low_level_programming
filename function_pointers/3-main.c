#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: nombre d'arguments
 * @argv: tableau des arguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
int num1, num2, result;
int (*operator)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

if (argv[2][0] != '\0' && argv[2][1] == '\0')
{
operator = get_op_func(argv[2]);
}
else
{
	printf("Error\n");
	exit(99);
}
result = operator(num1, num2);
printf("%d\n", result);
return (0);
}

#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - addition deux entiers
 * @a: premier entier
 * @b: deuxieme entier
 * Return: l'opération
 */

int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - soustrait deux entiers
 * @a: premier entier
 * @b: deuxieme entier
 * Return: l'opération
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - multiplie deux entiers
 * @a: premier entier
 * @b: deuxieme entier
 * Return: l'opération
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - divise deux entiers
 * @a: premier entier
 * @b: deuxieme entier
 * Return: l'opération
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - donne le reste d'une division
 * @a: premier entier
 * @b: deuxieme entier
 * Return: l'opération
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
return (a % b);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_last_digit - check the code
 *
 * @couscoustajine: entry of number
 *
 * fifilebest -  modulo of couscoustajine
 *
 * Return: last number of couscoustajine.
 */
int print_last_digit(int couscoustajine)
{
	int fifilebest;

	if (couscoustajine < 0)
	{
		couscoustajine = -couscoustajine;
	}
	fifilebest = couscoustajine % 10;

	if (fifilebest < 0)
	{
		fifilebest = -fifilebest;
	}
	return (fifilebest);
}

#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - recursion power of x
 * @x : first number to power
 * @y : we have to multiply X y time by himself
 *
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}



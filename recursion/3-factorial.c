#include "main.h"
#include <stdio.h>

/**
 * factorial - main code
 * @n : number to factorial
 *
 * Return: factorial or -1.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}

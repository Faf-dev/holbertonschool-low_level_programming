#include "main.h"

/**
 * print_line - main code
 *
 * @n : variable
 *
 * @z - variable for print _
 *
 * Return: always 0
 */

void print_line(int n)
{
	int z = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		while (z != n)
		{
		_putchar('_');
		z++;
		}
		_putchar('\n');
	}
}

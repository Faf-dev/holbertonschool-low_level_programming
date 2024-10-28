#include "main.h"

/**
 * print_diagonal - main code
 *
 * @n: number
 */

void print_diagonal(int n)
{
	int lign = 0;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	while (lign < n)
	{
		for (space = 0; space < lign; space++)
			_putchar(' ');
		if (space == lign)
		{
			_putchar(92);
			_putchar('\n');
		}
		lign++;
}
}

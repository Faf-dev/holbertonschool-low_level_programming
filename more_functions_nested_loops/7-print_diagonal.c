#include "main.h"

/**
 * return: always 0
 */

void print_diagonal(int n)
{
	int lign = 0;
	int space;
	
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

#include "main.h"

/**
 * print_square - main code
 *
 * @size : taille du carré
 */

void print_square(int size)
{
	int lenght = 0;
	int grandeur = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (lenght < size)
	{
		_putchar(35);
		lenght++;
	}
	_putchar('\n');
}

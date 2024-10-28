#include "main.h"

/**
 * print_square - main code
 *
 * @size : taille du carré
 */

void print_square(int size)
{
	int lenght;
	int grandeur;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (lenght = 0; lenght < size; lenght++)
	{
		for (grandeur = 0; grandeur < size; grandeur++)
		{
			_putchar(35);
		}
	_putchar('\n');
	}
}

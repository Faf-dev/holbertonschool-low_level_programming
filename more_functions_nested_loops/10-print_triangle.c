#include "main.h"

/**
 * print_triangle - fnrihf
 *
 * @size : nique
 */

void print_triangle(int size)
{
	int hashtag;
	int espace;
	int ligne;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ligne = 1; ligne <= size; ligne++)
		{
			for (espace = 0; espace < size - ligne; espace++)
			{
				_putchar(' ');
			}
			for (hashtag = 0; hashtag < ligne; hashtag++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

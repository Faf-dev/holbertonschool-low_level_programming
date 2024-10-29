#include "main.h"

/**
 * print_triangle - fnrihf
 *
 */

void print_triangle(int size)
{
        int lign = 0;
        int space = 5;

        if (size <= 0)
        {
                _putchar('\n');
        }
        if (size > lign)
        {
		lign = size;
		_putchar(space);
		_putchar('\n');
	}
	_putchar(lign);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * times_table - main code
 *
 * @a - number to multiple
 *
 * @b - number of multiplication needed
 *
 *  - table of multiple
 *
 * _putchar - printer
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if ((a * b) < 10)
			{
				if (b > 0)
				{
					_putchar(' ');
					_putchar((a * b) + '0');
				}
				else
				{
					_putchar((a * b) + '0');
				}
			}
			else
			{
				_putchar((a * b) / 10 + '0');
				_putchar((a * b) % 10 + '0');
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

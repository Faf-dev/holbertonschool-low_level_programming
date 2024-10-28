#include "main.h"

/**
 * more_numbers - main function
 *
 * @lign - number of line
 *
 * @num - number
 */

void more_numbers(void)
{
	int lign;
	int num;

	for (lign = 0; lign < 10; lign++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}

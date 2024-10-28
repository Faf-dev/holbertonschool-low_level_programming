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
	int num = 0;

	for (num = 0; num <= 14; num++)
	{
		if (num > 9)
		{
			_putchar((num) / 10 + '0');
                _putchar((num) % 10 + '0');
		}
		else
		{
			continue;
		}
	while (lign < 10)
	{
		_putchar('\n');
		lign++;
	}
}
}

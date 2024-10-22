#include "main.h"

/**
 * jack_bauer - main code
 *
 * @hour hour count
 *
 * @minutes; minutes count
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hour, minutes;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((minutes / 10) + '0');
		_putchar((minutes % 10) + '0');
		_putchar('\n');
	}
	}
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * puts2 - main code
 *
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}

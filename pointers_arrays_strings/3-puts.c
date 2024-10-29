#include "main.h"
#include <stdio.h>

/**
 * _puts - main code
 *
 * @str : string of caracter
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	 _putchar('\n');
}

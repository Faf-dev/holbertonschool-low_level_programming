#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - Check if islower
 *
 * _putchar - Printer
 *
 * Return: Always 0
 *
 * Return '_islower': Always 0
 *
 * @c: caracter
 */

int _islower(int c)
{
	if (islower(c))
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
		return (0);
}

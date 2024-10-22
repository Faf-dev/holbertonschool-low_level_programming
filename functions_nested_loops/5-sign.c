#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_sign - check the code.
 *
 * _putchar - print text
 *
 * @n: take the caracter for analyse
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (n == 0);
}

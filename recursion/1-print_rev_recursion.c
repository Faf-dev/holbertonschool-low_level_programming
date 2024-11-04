#include "main.h"

/**
 * _print_rev_recursion - main code to reverse a string with recursion
 *
 * @s : pointeur vers la string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

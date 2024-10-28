#include "main.h"

/**
 * _isdigit - check if it's a digit
 *
 * @c: variable
 *
 * Return: return 1 if it's a digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

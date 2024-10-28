#include "main.h"

/**
 * _isupper - check if it's upper
 *
 * @c: variable
 *
 * Return: return 1 if it's upper
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

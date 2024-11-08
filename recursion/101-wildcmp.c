#include <stdio.h>
#include <stdlib.h>

/**
 * wildcmp - check is the string is the same
 * @s1 : the string to analyse
 * @s2 : the second string to analyse
 * Return: recursive
 */
int wildcmp(char *s1, char *s2)
{
	s2 = s1;

	if (*s1 != '\0')
	{
		wildcmp(s1 + 1, s2 + 1);
	}
	if (*s1 == '\0')
	{
		if (*s1 == *s2)
			return (1);
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * is_palindrome - check is the string is palindrome
 * @s : the string to analyse
 * Return: recursive
 */
int is_palindrome(char *s)
{
	char *reverse = s;

	while (*s == '\0')
		if (*s == *reverse)
			return (1);
		else
			return (0);

	if (*s != '\0')
	{
		return (is_palindrome(s + 1));
	}
	return (0);
}

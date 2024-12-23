#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - affiche une string
 * @separator: le virgule espace pour separer les strings
 * @n: le nombre de strings a print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(args, char *);
	if (str == NULL)
	printf("(nil)");
	if (str != NULL)
	printf("%s", str);
	if (i < n - 1 && separator != NULL)
	printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}

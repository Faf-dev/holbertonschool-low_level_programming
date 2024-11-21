#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - affiche des entiers
 * @separator: le ", " qui sépare les entiers
 * @n: le nombre d'entier a afficher
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	(void) separator;

	va_start(args, n);

	for (i = 0; i < n; i++)
	printf("%d, ", va_arg(args, int));

	va_end(args);
	printf("\n");
}

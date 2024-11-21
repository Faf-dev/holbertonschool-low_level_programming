#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - print tout type d'arguments
 * @format: arguments
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	const char *separator = "";

	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
		printf("%s%c", separator, va_arg(args, int));
		break;
		case 'i':
		printf("%s%d", separator, va_arg(args, int));
		break;
		case 'f':
		printf("%s%f", separator, va_arg(args, double));
		break;
		case 's':
		str = va_arg(args, char *);
		if (str == NULL)
		printf("%s(nil)", separator);
		printf("%s%s", separator, str);
		break;
		default:
		i++;
		continue;
		}
		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}

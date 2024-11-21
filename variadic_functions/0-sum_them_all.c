#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - retourne la somme de tout ses parametres
 * @n: nombre de parametres
 * Return: la somme des parametres, 0 si n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int somme;
	unsigned int i;
	va_list add;

	if (n == 0)
	return (0);
	va_start(add, n);
		for (i = 0; i < n ; i++)
		somme += va_arg(add, int);

	va_end(add);
		return (somme);
}

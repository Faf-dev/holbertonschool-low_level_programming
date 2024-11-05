#include "main.h"
#include <stdio.h>
#include "5-sqrt_recursion.c"

/**
 * is_prime_number_helper - fonction helper pour prime_number
 * @n : entier a analyser
 *
 * Return: 0 si pas premier, 1 si premier
 */
int is_prime_number_helper(int n)
{
	if (n < 2)
	{
		return (0); /* 1 et 0 ne sont pas des nombres premiers */
	}
	if (n == 2)
	{
		return (1); /* 2 est un chiffre premier */
	}
	if (n % 2 == 0)
	{
		return (0); /* si un nombre est divisible par 2 il n'est pas premier */
	}
	return (1); /* si il passe toutes ces Ãtapes, c'est un nombre premier */
}

/**
 * is_prime_number - cherche si c'est un nombre premier
 * @n : entier a analyser
 * i : incrÃ©menteur pour testerla divisibilie par un chiffre impair
 *
 * Return: appel la fonction helper
 */
int is_prime_number(int n)
{
	return  (is_prime_number_helper(n));
}

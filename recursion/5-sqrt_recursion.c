#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion_helper - function to help the main sqrt function
 * @n : correspond a n de sqrt main
 * @i : incrementeur pour tester le carre de n
 *
 * Return: rappel de la fonction avec i incremente
 * ou return i si i = carre de n, -1 si pas de carre trouve
 */
int _sqrt_recursion_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion_helper(n, i + 1)); /* incrementation de i */
	}
}

/**
 * _sqrt_recursion - calcul le carré de n
 * @n : entier ou on doit trouver le carré
 *
 * Return: appel la fonction helper
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 1));
}

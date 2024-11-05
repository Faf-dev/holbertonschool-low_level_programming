#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - calcul le carré de n
 * @n : entier ou on doit trouver le carré
 * i : incrémenteur pour tester le carré de
 * result : prend i comme valeur si i = le carréde n
 *
 * Return: -1 si pas de carré de n, result si i = carré de
 * sinon rappel de la fonction avec i incr�menter
 */
int _sqrt_recursion(int n)
{
	static int i = 1;

	if (i * i == n)
	{
		int result = i;

		i = 1; /* reinitialise i si le carr� est troué */
		return (result);
	}
	else if (i * i > n)
	{
		i = 1; /* reinitialie i si aucun carr� n'est trouv�*/
		return (-1);
	}
	else
	{
		i++;
		return (_sqrt_recursion(n));
	}
}


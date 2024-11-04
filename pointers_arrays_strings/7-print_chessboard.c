#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - check
 * @a : pointeur du tableau
 *
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int hauteur;
	int largeur;

	for (largeur = 0; largeur < 8; largeur++)
	{
	for (hauteur = 0; hauteur < 8; hauteur++)
	_putchar(a[largeur][hauteur]);
	_putchar('\n');
	}
}

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * main - blabla
 * Return: return 0
 **/

int main(void)
{
	int lettre;
	int majuscule;
	int lign = '\n';

	for (lettre = 'a'; lettre <= 'z'; lettre++)
		putchar(lettre);
	for (majuscule = 'A'; majuscule <= 'Z'; majuscule++)
	putchar(majuscule);
	putchar(lign);
	return (0);
}

#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * rev_string - main code
 *
 * @s : pointeur du string
 */

void rev_string(char *s)
{
	char temporaire;
	int longueur = 0;
	int first_half;
	int scd_half = 0;

	while (*s != '\0')
		longueur++;
	for (first_half = longueur - 1; first_half >= longueur; first_half--)
	{
		temporaire = s[first_half];
		s[first_half] = s[scd_half];
		s[scd_half] = temporaire;
		scd_half++;
	}
}

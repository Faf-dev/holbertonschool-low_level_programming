#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * swap_int - main code
 *
 * @a: first value
 * @b: second value
 */

void swap_int(int *a, int *b)
{
	int temporaire = *a;
	*a = *b;
	*b = temporaire;
}

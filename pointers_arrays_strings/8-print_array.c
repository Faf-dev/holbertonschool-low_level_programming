#include "main.h"
#include <stdio.h>

/**
 * print_array - main code
 *
 * @a : pointeur de a
 *
 * @n : variable n
 */

void print_array(int *a, int n)
{
	int parcours;

	for (parcours = 0; parcours < n; parcours++)
	{
		printf("%d", a[parcours]);
		if (parcours != n - 1)
			printf(", ");
	}
	putchar('\n');
}

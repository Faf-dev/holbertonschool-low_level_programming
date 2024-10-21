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
	int lign = '\n';

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		if (lettre == 'q' || lettre == 'e')
		{
			continue;
		}
	putchar(lettre);
}
		putchar(lign);
	return (0);
}

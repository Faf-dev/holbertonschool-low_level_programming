#include <stdio.h>
/**
 * main - blabla
 * Return: return 0
 **/
int main(void)
{
	int lettre;
	int lign = '\n';

	for (lettre = 'z'; lettre >= 'a'; lettre--)
		putchar(lettre);
	putchar(lign);
	return (0);
}

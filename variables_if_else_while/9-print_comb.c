#include <stdio.h>
/**
 * main - blabla
 * Return: return 0
 **/
int main(void)
{
	int chiffre;

	for (chiffre = '0'; chiffre <= '9'; chiffre++)
	{
		putchar(chiffre);
		if (chiffre <= '8')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

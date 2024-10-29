#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * main- main code
 * Return: always 0
 */

int main(void)
{
	int chiffre;

	for (chiffre = 1; chiffre <= 100; chiffre++)
	{
		if (((chiffre % 5) == 0) && ((chiffre % 3) == 0))
			printf("FizzBuzz");
		else if ((chiffre % 3) == 0)
			printf("Fizz");
		else if ((chiffre % 5) == 0)
			printf("Buzz");
		else
			printf("%d", chiffre);
		if (chiffre < 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}

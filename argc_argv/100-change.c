#include <stdio.h>
#include <stdlib.h>
/**
 * main - compte combien de pi√ces rendre
 * @argc : nombre d'argument d'exec
 * @argv : tableau de string des arguments
 * Return: 0 si succes, 1 si pas de monnaie ecrit en argument
 */
int main(int argc, char **argv)
{
	int 25_cents = 0;
	int 10_cents = 0;
	int 5_cents = 0;
	int 2_cents = 0;
	int 1_cents = 0;
	int total;
	int monnaie = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (monnaie < 0)
	{
		printf("0\n");
		return (0);
	}
	while (monnaie >= 25)
	{
		25_cents++;
		monnaie -= 25;
	}
	while (monnaie >= 10)
	{
		10_cents++;
		monnaie -= 10;
	}
	while (monnaie >= 5)
	{
		5_cents++;
		monnaie -= 5;
	}
	while (monnaie >= 2)
	{
		2_cents++;
		monnaie -= 2;
	}
	while (monnaie >= 1)
	{
		1_cent++;
		monnaie -= 1;
	}
	total = 25_cents + 10_cents + 5_cents + 2_cents + 1_cent;
	printf("%d\n", total);
	return (0);
}

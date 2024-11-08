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
	int _25_cents = 0;
	int _10_cents = 0;
	int _5_cents = 0;
	int _2_cents = 0;
	int _1_cents = 0;
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
		_25_cents++;
		monnaie -= 25;
	}
	while (monnaie >= 10)
	{
		_10_cents++;
		monnaie -= 10;
	}
	while (monnaie >= 5)
	{
		_5_cents++;
		monnaie -= 5;
	}
	while (monnaie >= 2)
	{
		_2_cents++;
		monnaie -= 2;
	}
	while (monnaie >= 1)
	{
		_1_cents++;
		monnaie -= 1;
	}
	total = _25_cents + _10_cents + _5_cents + _2_cents + _1_cents;
	printf("%d\n", total);
	return (0);
}

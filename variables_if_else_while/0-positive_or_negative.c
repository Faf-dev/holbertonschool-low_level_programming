#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - je dhouiq joo
 *Return: return 0
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
	printf("is negative\n");
	}
	else if (n == 0)
	{
	printf("it's zero");
	}
	else
	{
	printf("is positive\n");
	}
	return (0);
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main: jsp
 * Return: return 0
 **/
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last != 0 && last < 5)
	{
	printf("Last digit of %u is %u and is less than 6 and not 0\n", n, last);
	}
	else if (last != 0 && last > 5)
	{
	printf("Last digit of %u is %u and is greater than 5\n", n, last);
	}
	else
	{
	printf("Last digit of %u is %u and is 0\n", n, last);
}
	return (0);
}
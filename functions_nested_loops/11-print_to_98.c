#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - main code
 *
 * @n: take the number to increase or decrease
 *
 * printf - printer
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
}

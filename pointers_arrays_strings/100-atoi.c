#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _atoi - main code
 *
 * @str : pointeur vers nb
 *
 * Return: always 0
 */

int _atoi(char *str)
{
	int i;
	int number = 0;
	int sign = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '-')
			sign = -1;
		if (str[i] >= '0' && str[i] <= '9')
			number = number * 10 + (str[i] - '0');
	}
	return (number * sign);
}

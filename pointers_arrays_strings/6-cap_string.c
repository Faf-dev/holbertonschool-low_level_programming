#include "main.h"
#include <stdio.h>

/**
 * cap_string - main code
 *
 * @str : pointeur vers une string
 *
 * Return: Always 0.
 */

char *cap_string(char *str)
{
	int i;
	int i_degage;
	int capture;
	char degage[] = ",;.!?(){}\n\t\" ";

	for (i = 0, capture = 0; str[i] != '\0'; i++)
	{
		if (str[0] <= 'z' && str[0] >= 'a')
			capture = 1;
		for (i_degage = 0; degage[i_degage] != '\0'; i_degage++)
		{
			if (degage[i_degage] == str[i])
				capture = 1;
		}
		if (capture)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] = str[i] - 32;
				capture = 0;
			}
			else if (str[i] <= '9' && str[i] >= '0')
				capture = 0;
			else if (str[i] <= 'Z' && str[i] >= 'A')
				capture = 0;
		}
	}
	return (str);
}

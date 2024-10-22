#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

void print_alphabet_x10(void)

{
int a;
char c;

for (a = 0; a < 10; a++)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
}

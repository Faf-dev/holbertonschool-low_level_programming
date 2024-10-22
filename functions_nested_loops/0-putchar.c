#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 * Return: return 0
 */
int main(void)
{
	char *c="_putchar\n";
	while (*c) putchar(*c++);
	return(0);
}

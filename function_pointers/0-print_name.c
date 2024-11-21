#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_name - print un nom
 * @name: le nom a print
 * @f: pointeur de fonction
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}

#include "function_pointers.h"

/**
 * print_name - print un nom
 * @name: le nom a print
 * @f: pointeur de fonction
 */
void print_name(char *name, void (*f)(char *))
{
if(name != NULL)
f(name);
}

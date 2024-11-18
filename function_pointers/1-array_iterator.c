#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - tableau qui execute une fonction pour chaque case
 * @array: pointeur vers le tableau qu'on va donner a notre fonction
 * @size: la taille du tableau
 * @action: pointeur de fonction
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
action(array[i]);
}

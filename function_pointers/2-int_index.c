#include "function_pointers.h"
/**
 * int_index - cherche un entier
 * @array: pointeur de tableau contenant des entiers
 * @size: la taille du tableau
 * @cmp: pointeur de fonction
 * Return: i si trouvé, -1 si pas de match
 */
int int_index(int *array, int size, int (*cmp)(int))
{

int i;

if (size <= 0)
return (-1);
if (array == NULL)
return (-1);
if (cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}

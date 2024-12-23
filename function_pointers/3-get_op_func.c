#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * get_op_func - choisi la bonne fonction pour chaque operation
 * @s: argv[2] (l'operand)
 * Return: la fonction correspondante si on trouve la correspondance
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op != NULL)
{
if (*(ops[i].op) == *s)
return (ops[i].f);
i++;
}
return (NULL);
}

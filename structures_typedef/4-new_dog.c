#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - deuxieme chien
 * @name: nom du chien
 * @age: age du chien
 * @owner: maitre du chien
 * Return: NULL si echec, my_dog si reussite
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	int n_long = 0;
	int o_long = 0;
	dog_t *my_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	while (name[n_long])
		n_long++;
	my_dog->name = malloc(n_long + 1);
	if (my_dog->name == NULL)
		return (NULL);
	for (i = 0; i < n_long; i++)
	{
		my_dog->name[i] = name[i];
	}
	my_dog->name[i] = '\0';
	my_dog->age = age;
	while (owner[o_long])
		o_long++;
	my_dog->owner = malloc(o_long + 1);
	if (my_dog->owner == NULL)
		return (NULL);
	for (i = 0; i < o_long; i++)
	{
		my_dog->owner[i] = owner[i];
	}
	my_dog->owner[i] = '\0';
	return (my_dog);
}

#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialise la structure dog
 * @d: pointeur vers la fonction dog
 * @name: nom du chien
 * @age: age du chien
 * @owner: maitre du chien
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

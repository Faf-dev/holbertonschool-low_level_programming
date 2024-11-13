#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - free la structure dogs
 * @d: pointeur vers la structure dogs
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

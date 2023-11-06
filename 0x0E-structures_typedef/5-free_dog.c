#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - remove struct dog from the heap
 * @d: the struct pointer
 * Ashraf Atef
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->age)
			free(&(d->age));
		if (d->owner)
			free(d->owner);
		free(d);
	}
}

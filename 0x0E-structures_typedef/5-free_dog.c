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
		free(d->name);
		free(&(d->age));
		free(d->owner);
		free(d);
	}
}

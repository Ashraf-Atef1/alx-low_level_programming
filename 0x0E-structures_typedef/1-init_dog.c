#include "dog.h"

/**
 * init_dog - initalize struct dog values
 * @d: the struct pointer
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Ashraf Atef
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

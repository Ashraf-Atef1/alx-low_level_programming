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
	if (d)
	{
		if (*name)
			d->name = name;
		if (age)
			d->age = age;
		if (*owner)
			d->owner = owner;
	}
}

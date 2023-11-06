#include <stdio.h>
#include "dog.h"

/**
 * new_dog - initalize struct dog values
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer for struct
 * Ashraf Atef
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d1;
	dog_t *d = &d1;

	if (d && *name && age && *owner)
	{
		if (*name)
			d->name = name;
		if (age)
			d->age = age;
		if (*owner)
			d->owner = owner;
	}
	else
		return (NULL);
	return (d);
}

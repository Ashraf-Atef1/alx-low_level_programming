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
	dog_t d;

	if (&d)
	{
		if (*name)
			d.name = name;
		if (age)
			d.age = age;
		if (*owner)
			d.owner = owner;
	}
	else
		return (0);
	return (&d);
}

#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print struct dog values
 * @d: the struct pointer
 * Ashraf Atef
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: nil");
		if (d->name)
			printf("Age: %d\n", d->age);
		else
			printf("Age: nil");
		if (d->name)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: nil");
	}
}

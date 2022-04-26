#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize the variable of type struct dog
 * @d: variable of type struct dog
 * @name:member of struct dog
 * @age:member of struct dog
 * @owner:member of struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

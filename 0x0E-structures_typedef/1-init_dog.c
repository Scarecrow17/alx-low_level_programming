#include "dog.h"

/**
 * init_dog - initialize variable of type struct dog
 * @d: struct dog pointer
 * @name: dog name pointer
 * @age: dog age
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

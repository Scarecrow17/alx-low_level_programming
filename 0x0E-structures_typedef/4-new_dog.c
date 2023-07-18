#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: string length or null
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nd, od, p;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	for (nd = 0; name[nd]; nd++)
		;
	nd++;
	dog->name = malloc(nd * sizeof(char));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (p = 0; p < nd; p++)
		dog->name[p] = name[p];
	dog->age = age;
	for (od = 0; owner[od]; od++)
		;
	od++;
	dog->owner = malloc(od * sizeof(char));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (p = 0; p < od; p++)
		dog->owner[p] = owner[p];
	return (dog);
}

#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog object
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 *
 * Return: pointer to the new dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *this_dog;
	int i, iname, iowner;

	this_dog = malloc(sizeof(struct dog));
	if (!this_dog || !name || !owner)
		return (NULL);
	for (iname = 0; name[iname]; iname++)
		;
	for (iowner = 0; owner[iowner]; iowner++)
		;

	this_dog->name = malloc(iname + 1);
	this_dog->owner = malloc(iowner + 1);
	if (!(this_dog->name) || !(this_dog->owner))
		return (NULL);

	for (i = 0; i < iname; i++)
		this_dog->name[i] = name[i];
	this_dog->name[i] = '\0';

	this_dog->age = age;

	for (i = 0; i < iowner; i++)
		this_dog->owner[i] = owner[i];
	this_dog->owner[i] = '\0';

	return (this_dog);
}

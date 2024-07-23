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

	this_dog = malloc(sizeof(struct dog));
	if (this_dog == NULL)
	{
		return (NULL);
	}

	this_dog->name = name;
	this_dog->age = age;
	this_dog->owner = owner;

	return (this_dog);
}

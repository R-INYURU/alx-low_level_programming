#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize the dog structure using this func
 * @d: dog struct pointer
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
